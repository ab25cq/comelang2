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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2voidpbool
{
    void* v1;
    _Bool v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
    _Bool* is_type_name_flag_197;
    _Bool* multiple_declare_198;
    _Bool* multiple_declare2_205;
    struct sFun** fun_215;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_07varc(struct __current_stack1__* parent);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
_Bool _if_conditional5;
void* right_value45;
struct sType* __dec_obj29;
struct sType* __dec_obj30;
struct sNode* __dec_obj31;
_Bool _if_conditional92;
void* right_value46;
struct list$1charph* __dec_obj32;
struct list$1charph* __dec_obj33;
_Bool _if_conditional93;
void* right_value57;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj40;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj41;
char* __dec_obj42;
void* right_value58;
char* __dec_obj43;
struct sStoreNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    self->alloc=alloc;
    __freed_obj__ = 0;
    if(_if_conditional5=type,    __freed_obj__ = 0, 
    _if_conditional5) {
        __dec_obj29=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj30=self->type;
        self->type=((void*)0);
        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj31=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    if(_if_conditional92=multiple_assign,    __freed_obj__ = 0, 
    _if_conditional92) {
        __dec_obj32=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(multiple_assign))));
        if(__dec_obj32) { come_call_finalizer(list$1charph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj33=self->multiple_assign;
        self->multiple_assign=((void*)0);
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=multiple_declare,    __freed_obj__ = 0, 
    _if_conditional93) {
        __dec_obj40=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value57=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj40) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj41=self->multiple_declare;
        self->multiple_declare=((void*)0);
        if(__dec_obj41) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj42=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
struct sType* __result13__;
void* right_value11;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value16;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value31;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value32;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value39;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value41;
struct sNode* __dec_obj25;
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
void* right_value42;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value43;
char* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value44;
char* __dec_obj28;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
            if(_if_conditional6=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional6) {
                __result13__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result13__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
            if(_if_conditional23=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional23) {
                result_5->mClass=self->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional24) {
                __dec_obj8=result_5->mNoSolvedGenericsType;
                result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional28) {
                __dec_obj9=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional29) {
                __dec_obj10=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(self->mGenericsName))));
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj14=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional34) {
                __dec_obj18=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional47=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional47) {
                result_5->mOmitArrayNum=self->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional48) {
                __dec_obj19=result_5->mParamTypes;
                result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional49) {
                __dec_obj23=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                __dec_obj24=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional54=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional54) {
                result_5->mVarArgs=self->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                __dec_obj25=result_5->mAlignas;
                result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mAlignas))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value41;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional56=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional56) {
                result_5->mUnsigned=self->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                result_5->mShort=self->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional58=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional58) {
                result_5->mLong=self->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional59=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional59) {
                result_5->mLongLong=self->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional60=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                result_5->mConstant=self->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                result_5->mRegister=self->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                result_5->mVolatile=self->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                result_5->mStatic=self->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                result_5->mExtern=self->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                result_5->mRestrict=self->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                result_5->mImmutable=self->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                result_5->mHeap=self->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                result_5->mDummyHeap=self->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                result_5->mDelegate=self->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                result_5->mShare=self->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                result_5->mClone=self->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                result_5->mNoHeap=self->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                result_5->mNoCallingDestructor=self->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                result_5->mRefference=self->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                result_5->mException=self->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                result_5->mPointerNum=self->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                __dec_obj26=result_5->mSizeNum;
                result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(self->mSizeNum))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value42;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                result_5->mDynamicArrayNum=self->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                result_5->mTypeOfExpression=self->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                __dec_obj27=result_5->mOriginalTypeName;
                result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mOriginalTypeName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                result_5->mOriginalPointerNum=self->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                result_5->mFunctionParam=self->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                result_5->mAllocaValue=self->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                result_5->mGenericsStruct=self->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                result_5->mSolvedGenericsName=self->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                result_5->mComeMemCore=self->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                result_5->mInline=self->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                result_5->mNullValue=self->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                __dec_obj28=result_5->mAsmName;
                result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mAsmName))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
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
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional7) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional9) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional13) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional15) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional20) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
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
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional8) {
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
                        while(_while_condtional1=it_6!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional12) {
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
                        while(_while_condtional2=it_8!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional14) {
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
                        while(_while_condtional3=it_10!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional17) {
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
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result14__;
void* right_value12;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value13;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                    if(_if_conditional25=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        __result14__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result14__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                    if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional27) {
                        __dec_obj7=result_12->v1;
                        result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(self->v1))));
                        if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value13;
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
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional26) {
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
_Bool _if_conditional31;
struct list$1sTypeph* __result16__;
void* right_value17;
void* right_value18;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value22;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
                    if(_if_conditional31=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        __result16__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value17;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value18;
                    __freed_obj__ = 0;
                    it_14=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional4=it_14!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional4) {
                        list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(it_14->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
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
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value20;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value21;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                litem_15->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_15->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->tail=litem_15;
                                __freed_obj__ = 0;
                                self->head=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional33=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional33) {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value20;
                                    __freed_obj__ = 0;
                                    litem_16->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_16->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=litem_16->item;
                                    litem_16->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_16;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_16;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value21;
                                    __freed_obj__ = 0;
                                    litem_17->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_17->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj13=litem_17->item;
                                    litem_17->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional35;
struct list$1sNodeph* __result20__;
void* right_value24;
void* right_value25;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value30;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
                    if(_if_conditional35=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        __result20__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result20__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value25;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_19!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value30;
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
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value27;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value28;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                litem_20->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_20->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=litem_20->item;
                                litem_20->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_20;
                                __freed_obj__ = 0;
                                self->head=litem_20;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional37=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value27;
                                    __freed_obj__ = 0;
                                    litem_21->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_21->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=litem_21->item;
                                    litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_21;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_21;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value28;
                                    __freed_obj__ = 0;
                                    litem_22->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_22->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj17=litem_22->item;
                                    litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional38;
struct sNode* __result23__;
void* right_value29;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional38) {
                                __result23__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result23__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value29;
                            __freed_obj__ = 0;
                            if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional39) {
                                result_23->_protocol_obj=self->clone(self->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional40=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                result_23->finalize=self->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional41=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional41) {
                                result_23->clone=self->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional42=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional42) {
                                result_23->compile=self->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional43=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional43) {
                                result_23->sline=self->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional44=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                result_23->sname=self->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional45=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional45) {
                                result_23->terminated=self->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional46=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional46) {
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
_Bool _if_conditional50;
struct list$1charph* __result26__;
void* right_value33;
void* right_value34;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value38;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
                    if(_if_conditional50=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        __result26__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result26__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34;
                    __freed_obj__ = 0;
                    it_25=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_25!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value38=string_clone(it_25->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value38;
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
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value36;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value37;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                litem_26->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_26->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj20=litem_26->item;
                                litem_26->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_26;
                                __freed_obj__ = 0;
                                self->head=litem_26;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional52) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    litem_27->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_27->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj21=litem_27->item;
                                    litem_27->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_27;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_27;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value37;
                                    __freed_obj__ = 0;
                                    litem_28->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_28->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj22=litem_28->item;
                                    litem_28->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct list$1tuple3$3sTypephcharphsNodephph* __result31__;
void* right_value47;
void* right_value48;
struct list$1tuple3$3sTypephcharphsNodephph* result_31;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional8;
void* right_value56;
struct list$1tuple3$3sTypephcharphsNodephph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value56, 0, sizeof(void*));
            if(_if_conditional94=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                __result31__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result31__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value48=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 193))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value48;
            __freed_obj__ = 0;
            it_32=self->head;
            __freed_obj__ = 0;
            while(_while_condtional8=it_32!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
                it_32=it_32->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = result_31;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple3$3sTypephcharphsNodephph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                __freed_obj__ = 0;
                self->tail=((void*)0);
                __freed_obj__ = 0;
                self->len=0;
                __freed_obj__ = 0;
                __result32__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple3$3sTypephcharphsNodephph* it_29;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_29=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_29!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        prev_it_30=it_29;
                        __freed_obj__ = 0;
                        it_29=it_29->next;
                        __freed_obj__ = 0;
                        if(prev_it_30 && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional95=self!=((void*)0)&&self->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional95) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional96) {
                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional97=self!=((void*)0)&&self->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional97) {
                                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional98=self!=((void*)0)&&self->v3!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional98) {
                                        if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
void* right_value49;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_33;
struct tuple3$3sTypephcharphsNodeph* __dec_obj34;
_Bool _if_conditional103;
void* right_value50;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_34;
struct tuple3$3sTypephcharphsNodeph* __dec_obj35;
void* right_value51;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_35;
struct tuple3$3sTypephcharphsNodeph* __dec_obj36;
struct list$1tuple3$3sTypephcharphsNodephph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=self->len==0,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value49=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 207))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49;
                        __freed_obj__ = 0;
                        litem_33->prev=((void*)0);
                        __freed_obj__ = 0;
                        litem_33->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj34=litem_33->item;
                        litem_33->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail=litem_33;
                        __freed_obj__ = 0;
                        self->head=litem_33;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional103=self->len==1,                        __freed_obj__ = 0, 
                        _if_conditional103) {
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value50=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 217))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value50;
                            __freed_obj__ = 0;
                            litem_34->prev=self->head;
                            __freed_obj__ = 0;
                            litem_34->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj35=litem_34->item;
                            litem_34->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail=litem_34;
                            __freed_obj__ = 0;
                            self->head->next=litem_34;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 227))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value51;
                            __freed_obj__ = 0;
                            litem_35->prev=self->tail;
                            __freed_obj__ = 0;
                            litem_35->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj36=litem_35->item;
                            litem_35->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail->next=litem_35;
                            __freed_obj__ = 0;
                            self->tail=litem_35;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->len++;
                    __freed_obj__ = 0;
                    __result33__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional100) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional101=self!=((void*)0)&&self->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional101) {
                                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional102=self!=((void*)0)&&self->v3!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional102) {
                                if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
struct tuple3$3sTypephcharphsNodeph* __result34__;
void* right_value52;
struct tuple3$3sTypephcharphsNodeph* result_36;
_Bool _if_conditional105;
void* right_value53;
struct sType* __dec_obj37;
_Bool _if_conditional106;
void* right_value54;
char* __dec_obj38;
_Bool _if_conditional107;
void* right_value55;
struct sNode* __dec_obj39;
struct tuple3$3sTypephcharphsNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
                    if(_if_conditional104=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional104) {
                        __result34__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value52=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional105) {
                        __dec_obj37=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional106) {
                        __dec_obj38=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->v2))));
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional107=self!=((void*)0)&&self->v3!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        __dec_obj39=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->v3))));
                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result35__ = __result_obj__ = result_36;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStoreNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}

char* sStoreNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value59;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value59=__builtin_string("sStoreNode")));
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value60;
char* array_initializer_37;
_Bool _if_conditional115;
void* right_value70;
struct sVar* var__43;
_Bool _if_conditional122;
_Bool __result49__;
_Bool _if_conditional123;
_Bool __result50__;
void* right_value71;
struct sType* type_44;
void* right_value72;
void* right_value73;
struct sType* var_type_45;
void* right_value74;
_Bool _if_conditional126;
void* right_value75;
struct sVar* var__47;
_Bool _if_conditional127;
_Bool __result53__;
_Bool _if_conditional128;
_Bool __result54__;
void* right_value76;
struct sType* type_48;
_Bool _if_conditional129;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_49;
struct tuple3$3sTypephcharphsNodeph* it_52;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assgin_var1;
struct sType* type_55;
char* var_name_56;
struct sNode* right_value_57;
void* right_value77;
_Bool _if_conditional134;
_Bool __result62__;
void* right_value78;
struct sType* left_type_58;
void* right_value79;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool __result63__;
void* right_value80;
struct CVALUE* come_value_59;
void* right_value81;
struct sType* left_type2_60;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value82;
struct list$1sNodeph* o2_saved_61;
struct sNode* it_64;
_Bool _for_condtionalA2;
_Bool _if_conditional146;
void* right_value83;
struct CVALUE* come_value_67;
void* right_value84;
void* right_value85;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool __result73__;
void* right_value86;
struct sType* left_type_68;
_Bool _if_conditional149;
void* right_value87;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value88;
struct list$1sNodeph* o2_saved_69;
struct sNode* it_70;
_Bool _for_condtionalA3;
_Bool _if_conditional152;
void* right_value89;
struct CVALUE* come_value_71;
void* right_value90;
void* right_value91;
struct sType* left_type2_72;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value92;
struct list$1sNodeph* o2_saved_73;
struct sNode* it_74;
_Bool _for_condtionalA4;
_Bool _if_conditional155;
void* right_value93;
struct CVALUE* come_value_75;
void* right_value94;
void* right_value95;
struct CVALUE* come_value_76;
void* right_value96;
char* __dec_obj44;
void* right_value97;
struct sType* __dec_obj45;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool __result75__;
void* right_value101;
struct CVALUE* right_value_80;
struct sType* right_type_81;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value102;
struct sVar* var__82;
_Bool _if_conditional164;
_Bool __result76__;
_Bool _if_conditional165;
int i_83;
struct list$1charph* o2_saved_84;
char* it_87;
_Bool _for_condtionalA5;
_Bool _if_conditional170;
void* right_value107;
struct sType* right_type2_94;
void* right_value108;
void* right_value109;
struct sType* var_type_95;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value110;
struct list$1sNodeph* o2_saved_96;
struct sNode* it_97;
_Bool _for_condtionalA6;
_Bool _if_conditional177;
void* right_value111;
struct CVALUE* come_value_98;
void* right_value112;
_Bool _if_conditional178;
void* right_value113;
void* right_value114;
struct sType* type_99;
void* right_value115;
void* right_value116;
struct sType* var_type_100;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value117;
struct list$1sNodeph* o2_saved_101;
struct sNode* it_102;
_Bool _for_condtionalA7;
_Bool _if_conditional181;
void* right_value118;
struct CVALUE* come_value_103;
void* right_value119;
struct sClass* current_stack_frame_struct_104;
void* right_value120;
_Bool _if_conditional182;
struct sVar* parent_var_105;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value121;
struct CVALUE* come_value_106;
struct sType* left_type_107;
_Bool _if_conditional185;
void* right_value122;
char* c_value_108;
_Bool _if_conditional186;
_Bool _if_conditional187;
char* __dec_obj50;
_Bool _if_conditional188;
void* right_value123;
char* __dec_obj51;
_Bool _if_conditional189;
void* right_value124;
char* __dec_obj52;
void* right_value125;
char* __dec_obj53;
_Bool _if_conditional190;
void* right_value126;
char* __dec_obj54;
void* right_value127;
char* __dec_obj55;
int right_value_id_109;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value128;
char* c_value_110;
void* right_value129;
char* __dec_obj56;
void* right_value130;
char* __dec_obj57;
void* right_value131;
struct sType* __dec_obj58;
void* right_value132;
void* right_value133;
_Bool __result90__;
_Bool _if_conditional193;
static int num_multiple_var_111=0;
void* right_value134;
char* multiple_var_name_112;
void* right_value135;
void* right_value136;
char* __dec_obj59;
int i_113;
struct list$1charph* o2_saved_114;
char* it_115;
_Bool _for_condtionalA8;
_Bool _if_conditional194;
void* right_value137;
void* right_value138;
struct sType* right_type2_116;
struct sVar* var__117;
void* right_value139;
struct sType* var_type_118;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value140;
struct list$1sNodeph* o2_saved_119;
struct sNode* it_120;
_Bool _for_condtionalA9;
_Bool _if_conditional197;
void* right_value141;
struct CVALUE* come_value_121;
void* right_value142;
void* right_value143;
struct sType* left_type_122;
void* right_value144;
struct CVALUE* right_value2_123;
void* right_value145;
char* __dec_obj60;
void* right_value146;
struct sType* __dec_obj61;
void* right_value147;
struct CVALUE* come_value_124;
void* right_value148;
void* right_value149;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
char* __dec_obj62;
_Bool _if_conditional202;
void* right_value150;
char* __dec_obj63;
_Bool _if_conditional203;
void* right_value151;
char* __dec_obj64;
void* right_value152;
char* __dec_obj65;
_Bool _if_conditional204;
void* right_value153;
char* __dec_obj66;
void* right_value154;
char* __dec_obj67;
int right_value_id_125;
_Bool _if_conditional205;
void* right_value155;
char* __dec_obj68;
void* right_value156;
struct sType* __dec_obj69;
_Bool _if_conditional206;
void* right_value157;
struct sVar* var__126;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool __result91__;
_Bool _if_conditional209;
void* right_value158;
struct sType* __dec_obj70;
void* right_value159;
struct sType* left_type_127;
void* right_value160;
struct CVALUE* come_value_128;
_Bool _if_conditional210;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
char* __dec_obj71;
_Bool _if_conditional211;
void* right_value165;
void* right_value166;
_Bool _if_conditional212;
void* right_value167;
void* right_value168;
char* __dec_obj72;
_Bool _if_conditional213;
void* right_value169;
void* right_value170;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
char* __dec_obj73;
_Bool _if_conditional217;
void* right_value171;
char* __dec_obj74;
_Bool _if_conditional218;
void* right_value172;
char* __dec_obj75;
void* right_value173;
char* __dec_obj76;
_Bool _if_conditional219;
void* right_value174;
char* __dec_obj77;
void* right_value175;
char* __dec_obj78;
_Bool _if_conditional220;
_Bool _if_conditional221;
char* __dec_obj79;
_Bool _if_conditional222;
void* right_value176;
char* __dec_obj80;
_Bool _if_conditional223;
void* right_value177;
char* __dec_obj81;
void* right_value178;
char* __dec_obj82;
_Bool _if_conditional224;
void* right_value179;
char* __dec_obj83;
void* right_value180;
char* __dec_obj84;
int right_value_id_129;
_Bool _if_conditional225;
void* right_value181;
struct sType* __dec_obj85;
_Bool _if_conditional226;
void* right_value182;
void* right_value183;
_Bool _if_conditional227;
void* right_value184;
char* __dec_obj86;
void* right_value185;
char* __dec_obj87;
void* right_value186;
struct sType* __dec_obj88;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool __result92__;
void* right_value187;
void* right_value188;
void* right_value189;
char* __dec_obj89;
void* right_value190;
struct sType* __dec_obj90;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value191;
void* right_value192;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&array_initializer_37, 0, sizeof(char*));
memset(&right_value70, 0, sizeof(void*));
memset(&var__43, 0, sizeof(struct sVar*));
memset(&right_value71, 0, sizeof(void*));
memset(&type_44, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&var_type_45, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&var__47, 0, sizeof(struct sVar*));
memset(&right_value76, 0, sizeof(void*));
memset(&type_48, 0, sizeof(struct sType*));
memset(&o2_saved_49, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_52, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_55, 0, sizeof(struct sType*));
memset(&var_name_56, 0, sizeof(char*));
memset(&right_value_57, 0, sizeof(struct sNode*));
memset(&type_55, 0, sizeof(struct sType*));
memset(&var_name_56, 0, sizeof(char*));
memset(&right_value_57, 0, sizeof(struct sNode*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&left_type_58, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value81, 0, sizeof(void*));
memset(&left_type2_60, 0, sizeof(struct sType*));
memset(&right_value82, 0, sizeof(void*));
memset(&o2_saved_61, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&right_value83, 0, sizeof(void*));
memset(&come_value_67, 0, sizeof(struct CVALUE*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&left_type_68, 0, sizeof(struct sType*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&o2_saved_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
memset(&right_value89, 0, sizeof(void*));
memset(&come_value_71, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&left_type2_72, 0, sizeof(struct sType*));
memset(&right_value92, 0, sizeof(void*));
memset(&o2_saved_73, 0, sizeof(struct list$1sNodeph*));
memset(&it_74, 0, sizeof(struct sNode*));
memset(&right_value93, 0, sizeof(void*));
memset(&come_value_75, 0, sizeof(struct CVALUE*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&come_value_76, 0, sizeof(struct CVALUE*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&right_type_81, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&var__82, 0, sizeof(struct sVar*));
memset(&i_83, 0, sizeof(int));
memset(&o2_saved_84, 0, sizeof(struct list$1charph*));
memset(&it_87, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_type2_94, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&var_type_95, 0, sizeof(struct sType*));
memset(&right_value110, 0, sizeof(void*));
memset(&o2_saved_96, 0, sizeof(struct list$1sNodeph*));
memset(&it_97, 0, sizeof(struct sNode*));
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_98, 0, sizeof(struct CVALUE*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&type_99, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&var_type_100, 0, sizeof(struct sType*));
memset(&right_value117, 0, sizeof(void*));
memset(&o2_saved_101, 0, sizeof(struct list$1sNodeph*));
memset(&it_102, 0, sizeof(struct sNode*));
memset(&right_value118, 0, sizeof(void*));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
memset(&right_value119, 0, sizeof(void*));
memset(&current_stack_frame_struct_104, 0, sizeof(struct sClass*));
memset(&right_value120, 0, sizeof(void*));
memset(&parent_var_105, 0, sizeof(struct sVar*));
memset(&right_value121, 0, sizeof(void*));
memset(&come_value_106, 0, sizeof(struct CVALUE*));
memset(&left_type_107, 0, sizeof(struct sType*));
memset(&right_value122, 0, sizeof(void*));
memset(&c_value_108, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value_id_109, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&c_value_110, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&multiple_var_name_112, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&i_113, 0, sizeof(int));
memset(&o2_saved_114, 0, sizeof(struct list$1charph*));
memset(&it_115, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_type2_116, 0, sizeof(struct sType*));
memset(&var__117, 0, sizeof(struct sVar*));
memset(&right_value139, 0, sizeof(void*));
memset(&var_type_118, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&o2_saved_119, 0, sizeof(struct list$1sNodeph*));
memset(&it_120, 0, sizeof(struct sNode*));
memset(&right_value141, 0, sizeof(void*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&left_type_122, 0, sizeof(struct sType*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value2_123, 0, sizeof(struct CVALUE*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value_id_125, 0, sizeof(int));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&var__126, 0, sizeof(struct sVar*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&left_type_127, 0, sizeof(struct sType*));
memset(&right_value160, 0, sizeof(void*));
memset(&come_value_128, 0, sizeof(struct CVALUE*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value_id_129, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->array_initializer))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = 0;
    if(_if_conditional115=array_initializer_37,    __freed_obj__ = 0, 
    _if_conditional115) {
        var__43=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value70=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value70;
        __freed_obj__ = 0;
        if(_if_conditional122=var__43,        __freed_obj__ = 0, 
        _if_conditional122) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __freed_obj__ = 0;
            __result49__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result49__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self->type==((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            err_msg(info,"Require type name(%s)",self->name);
            __freed_obj__ = 0;
            __result50__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
        }
        else {
            type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71;
            __freed_obj__ = 0;
            type_44->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(type_44)))),info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value72;
            __freed_obj__ = 0;
            if(type_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_44, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        var__43=get_variable_from_table(info->lv_table,self->name);
        __freed_obj__ = 0;
        var_type_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(var__43->mType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value73;
        __freed_obj__ = 0;
        var_type_45->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        add_come_code(info,"%s=%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value74=make_define_var(var_type_45,var__43->mCValueName,(_Bool)0,info)))),array_initializer_37);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value74;
        __freed_obj__ = 0;
        if(var_type_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional126=self->right_value==((void*)0),        __freed_obj__ = 0, 
        _if_conditional126) {
            var__47=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value75=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
            if(_if_conditional127=var__47,            __freed_obj__ = 0, 
            _if_conditional127) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __freed_obj__ = 0;
                __result53__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional128=self->type==((void*)0),            __freed_obj__ = 0, 
            _if_conditional128) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __freed_obj__ = 0;
                __result54__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result54__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value76;
            __freed_obj__ = 0;
            type_48->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            if(_if_conditional129=self->multiple_declare,            __freed_obj__ = 0, 
            _if_conditional129) {
                for(
                o2_saved_49=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_52=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_49)) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_49)) ,                __freed_obj__ = 0, 
                _for_condtionalA1;                it_52=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_49)) ,                __freed_obj__ = 0, 
                0                ){
                    multiple_assgin_var1=it_52;
                    type_55=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                    var_name_56=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                    right_value_57=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v3);
                    __freed_obj__ = 0;
                    add_variable_to_table(var_name_56,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(type_55)))),info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value77;
                    __freed_obj__ = 0;
                    var__47=get_variable_from_table(info->lv_table,var_name_56);
                    __freed_obj__ = 0;
                    if(_if_conditional134=var__47==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_52);
                        __freed_obj__ = 0;
                        __result62__ = (_Bool)1;
                        if(type_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_56 && !__freed_obj__) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_57 && !__freed_obj__) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_49 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result62__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    left_type_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(var__47->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value78;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value(((struct optional$2charphbool*)(right_value79=make_define_var(left_type_58,var__47->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value79;
                    __freed_obj__ = 0;
                    if(_if_conditional135=right_value_57,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        if(_if_conditional136=!node_compile(right_value_57,info),                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            __result63__ = (_Bool)0;
                            if(type_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_56 && !__freed_obj__) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_57 && !__freed_obj__) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_49 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            return __result63__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value80;
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        __freed_obj__ = 0;
                        add_come_code(info,"%s=%s;\n",var__47->mCValueName,come_value_59->c_value);
                        __freed_obj__ = 0;
                        if(come_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    left_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_type_58))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value81;
                    __freed_obj__ = 0;
                    left_type2_60->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional139=!var__47->mType->mConstant&&!var__47->mType->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        if(_if_conditional140=list$1sNodeph_length(left_type2_60->mArrayNum)>0,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value82=make_type_name_string(left_type2_60,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value82;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_61=(struct list$1sNodeph*)come_increment_ref_count((left_type2_60->mArrayNum)),it_64=list$1sNodeph_begin((o2_saved_61)) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA2=                            !list$1sNodeph_end((o2_saved_61)) ,                            __freed_obj__ = 0, 
                            _for_condtionalA2;                            it_64=list$1sNodeph_next((o2_saved_61)) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional146=!node_compile(it_64,info),                                __freed_obj__ = 0, 
                                _if_conditional146) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value83;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",come_value_67->c_value);
                                __freed_obj__ = 0;
                                if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_61 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value84=make_type_name_string(left_type2_60,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_56 && !__freed_obj__) { var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_57 && !__freed_obj__) { right_value_57 = come_decrement_ref_count(right_value_57, ((struct sNode*)right_value_57)->finalize, ((struct sNode*)right_value_57)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_49 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type_48)))),info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value85;
                __freed_obj__ = 0;
                var__47=get_variable_from_table(info->lv_table,self->name);
                __freed_obj__ = 0;
                if(_if_conditional147=var__47==((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    var__47=get_variable_from_table(info->gv_table,self->name);
                    __freed_obj__ = 0;
                    if(_if_conditional148=var__47==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional148) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __freed_obj__ = 0;
                        __result73__ = (_Bool)1;
                        if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result73__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(var__47->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value86;
                __freed_obj__ = 0;
                if(_if_conditional149=list$1sNodeph_length(left_type_68->mArrayNum)>0,                __freed_obj__ = 0, 
                _if_conditional149) {
                    add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value87=make_define_var(left_type_68,var__47->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value87;
                    __freed_obj__ = 0;
                    if(_if_conditional150=!left_type_68->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional150) {
                        if(_if_conditional151=list$1sNodeph_length(left_type_68->mArrayNum)>0,                        __freed_obj__ = 0, 
                        _if_conditional151) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value88=make_type_name_string(left_type_68,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value88;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_69=(struct list$1sNodeph*)come_increment_ref_count((left_type_68->mArrayNum)),it_70=list$1sNodeph_begin((o2_saved_69)) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA3=                            !list$1sNodeph_end((o2_saved_69)) ,                            __freed_obj__ = 0, 
                            _for_condtionalA3;                            it_70=list$1sNodeph_next((o2_saved_69)) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional152=!node_compile(it_70,info),                                __freed_obj__ = 0, 
                                _if_conditional152) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value89;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",come_value_71->c_value);
                                __freed_obj__ = 0;
                                if(come_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_69 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__47->mCValueName,var__47->mCValueName);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value90=make_define_var(left_type_68,var__47->mCValueName,(_Bool)0,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90;
                    __freed_obj__ = 0;
                    left_type2_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_type_68))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value91;
                    __freed_obj__ = 0;
                    left_type2_72->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional153=!var__47->mType->mConstant&&!var__47->mType->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional153) {
                        if(_if_conditional154=list$1sNodeph_length(left_type2_72->mArrayNum)>0,                        __freed_obj__ = 0, 
                        _if_conditional154) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value92=make_type_name_string(left_type2_72,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value92;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_73=(struct list$1sNodeph*)come_increment_ref_count((left_type2_72->mArrayNum)),it_74=list$1sNodeph_begin((o2_saved_73)) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA4=                            !list$1sNodeph_end((o2_saved_73)) ,                            __freed_obj__ = 0, 
                            _for_condtionalA4;                            it_74=list$1sNodeph_next((o2_saved_73)) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional155=!node_compile(it_74,info),                                __freed_obj__ = 0, 
                                _if_conditional155) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value93;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",come_value_75->c_value);
                                __freed_obj__ = 0;
                                if(come_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_73 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__47->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value94=make_type_name_string(left_type2_72,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(left_type2_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value95;
                __freed_obj__ = 0;
                __dec_obj44=come_value_76->c_value;
                come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("%s",var__47->mCValueName))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value96;
                __freed_obj__ = 0;
                __dec_obj45=come_value_76->type;
                come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(left_type_68))));
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value97;
                __freed_obj__ = 0;
                come_value_76->var=var__47;
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
                __freed_obj__ = 0;
                if(_if_conditional159=self->alloc&&!left_type_68->mClass->mNumber&&left_type_68->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional159) {
                    var__47->mType->mAllocaValue=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional160=!node_compile(self->right_value,info),            __freed_obj__ = 0, 
            _if_conditional160) {
                __result75__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result75__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value101;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            right_type_81=right_value_80->type;
            __freed_obj__ = 0;
            if(_if_conditional161=self->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional161) {
                if(_if_conditional162=right_type_81->mNoSolvedGenericsType->v1,                __freed_obj__ = 0, 
                _if_conditional162) {
                    right_type_81=right_type_81->mNoSolvedGenericsType->v1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional163=self->alloc,            __freed_obj__ = 0, 
            _if_conditional163) {
                var__82=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value102=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value102;
                __freed_obj__ = 0;
                if(_if_conditional164=var__82,                __freed_obj__ = 0, 
                _if_conditional164) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __freed_obj__ = 0;
                    __result76__ = (_Bool)0;
                    if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional165=self->multiple_assign,                __freed_obj__ = 0, 
                _if_conditional165) {
                    i_83=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_84=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_87=list$1charph_begin((o2_saved_84)) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA5=                    !list$1charph_end((o2_saved_84)) ,                    __freed_obj__ = 0, 
                    _for_condtionalA5;                    it_87=list$1charph_next((o2_saved_84)) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional170=i_83<list$1sTypeph_length(right_type_81->mGenericsTypes),                        __freed_obj__ = 0, 
                        _if_conditional170) {
                            right_type2_94=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value107=list$1sTypephp_operator_load_element(right_type_81->mGenericsTypes,i_83))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            right_type2_94->mFunctionParam=(_Bool)0;
                            __freed_obj__ = 0;
                            add_variable_to_table(it_87,(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(right_type2_94)))),info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value108;
                            __freed_obj__ = 0;
                            var__82=get_variable_from_table(info->lv_table,it_87);
                            __freed_obj__ = 0;
                            var_type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(var__82->mType))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value109;
                            __freed_obj__ = 0;
                            var_type_95->mStatic=(_Bool)0;
                            __freed_obj__ = 0;
                            if(_if_conditional175=!var_type_95->mConstant&&!var_type_95->mStatic,                            __freed_obj__ = 0, 
                            _if_conditional175) {
                                if(_if_conditional176=list$1sNodeph_length(var_type_95->mArrayNum)>0,                                __freed_obj__ = 0, 
                                _if_conditional176) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value110=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value110;
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_96=(struct list$1sNodeph*)come_increment_ref_count((var_type_95->mArrayNum)),it_97=list$1sNodeph_begin((o2_saved_96)) ,                                    __freed_obj__ = 0, 
                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end((o2_saved_96)) ,                                    __freed_obj__ = 0, 
                                    _for_condtionalA6;                                    it_97=list$1sNodeph_next((o2_saved_96)) ,                                    __freed_obj__ = 0, 
                                    0                                    ){
                                        if(_if_conditional177=!node_compile(it_97,info),                                        __freed_obj__ = 0, 
                                        _if_conditional177) {
                                            err_msg(info,"invalid array num");
                                            __freed_obj__ = 0;
                                            exit(1);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value111;
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        __freed_obj__ = 0;
                                        add_come_code(info,"*(%s)",come_value_98->c_value);
                                        __freed_obj__ = 0;
                                        if(come_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_96 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    add_come_code(info,");\n");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value112=make_type_name_string(var_type_95,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value112;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(var_type_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        i_83++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional178=self->type==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional178) {
                        right_type_81->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(right_type_81)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value113;
                        __freed_obj__ = 0;
                    }
                    else {
                        type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=solve_generics(self->type,info->generics_type,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value114;
                        __freed_obj__ = 0;
                        type_99->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type_99)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value115;
                        __freed_obj__ = 0;
                        if(type_99 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    var__82=get_variable_from_table(info->lv_table,self->name);
                    __freed_obj__ = 0;
                    var_type_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(var__82->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                    var_type_100->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional179=!var__82->mType->mStatic&&!var_type_100->mConstant&&list$1sNodeph_length(var_type_100->mArrayNum)==0,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        if(_if_conditional180=list$1sNodeph_length(var_type_100->mArrayNum)>0,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value117=make_type_name_string(var_type_100,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_101=(struct list$1sNodeph*)come_increment_ref_count((var_type_100->mArrayNum)),it_102=list$1sNodeph_begin((o2_saved_101)) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA7=                            !list$1sNodeph_end((o2_saved_101)) ,                            __freed_obj__ = 0, 
                            _for_condtionalA7;                            it_102=list$1sNodeph_next((o2_saved_101)) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional181=!node_compile(it_102,info),                                __freed_obj__ = 0, 
                                _if_conditional181) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value118;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",come_value_103->c_value);
                                __freed_obj__ = 0;
                                if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_101 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__82->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value119=make_type_name_string(var_type_100,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value119;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(var_type_100 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_100, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            current_stack_frame_struct_104=info->current_stack_frame_struct;
            __freed_obj__ = 0;
            if(_if_conditional182=current_stack_frame_struct_104&&optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value120=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120),
            (right_value120 && right_value120 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value120, 
            __freed_obj__ = 0, 
            _if_conditional182) {
                parent_var_105=get_variable_from_table(info->lv_table->mParent,self->name);
                __freed_obj__ = 0;
                if(_if_conditional183=parent_var_105!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=string_operator_not_equals(parent_var_105->mFunName,info->come_fun->mName),                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value121;
                        __freed_obj__ = 0;
                        left_type_107=parent_var_105->mType;
                        __freed_obj__ = 0;
                        if(_if_conditional185=left_type_107->mPointerNum>0&&right_type_81->mPointerNum>0&&right_type_81->mHeap&&left_type_107->mHeap,                        __freed_obj__ = 0, 
                        _if_conditional185) {
                            c_value_108=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("*(parent->%s)",parent_var_105->mCValueName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value122;
                            __freed_obj__ = 0;
                            decrement_ref_count_object(parent_var_105->mType,c_value_108,info,(_Bool)0);
                            __freed_obj__ = 0;
                            if(_if_conditional186=right_value_80->var,                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                if(_if_conditional187=right_value_80->var->mType->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional187) {
                                    __dec_obj50=right_value_80->var->mCValueName;
                                    right_value_80->var->mCValueName=((void*)0);
                                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional188=right_value_80->var->mType->mShare,                                    __freed_obj__ = 0, 
                                    _if_conditional188) {
                                        __dec_obj51=right_value_80->c_value;
                                        right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value123=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value123;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional189=right_value_80->var->mType->mClone,                                        __freed_obj__ = 0, 
                                        _if_conditional189) {
                                            __dec_obj52=right_value_80->c_value;
                                            right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value124=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                                            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value124;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj53=right_value_80->c_value;
                                            right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value125=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                                            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value125;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional190=right_value_80->type->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional190) {
                                }
                                else {
                                    __dec_obj54=right_value_80->c_value;
                                    right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value126=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value126;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj55=come_value_106->c_value;
                            come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
                            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value127;
                            __freed_obj__ = 0;
                            right_value_id_109=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_80->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional191=right_value_id_109!=-1,                            __freed_obj__ = 0, 
                            _if_conditional191) {
                                remove_object_from_right_values(right_value_id_109,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(c_value_108 && !__freed_obj__) { c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional192=left_type_107->mPointerNum>0&&right_type_81->mPointerNum>0&&string_operator_equals(right_type_81->mClass->mName,"void")&&left_type_107->mHeap,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                c_value_110=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("*(parent->%s)",parent_var_105->mCValueName))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = 0;
                                decrement_ref_count_object(parent_var_105->mType,c_value_110,info,(_Bool)0);
                                __freed_obj__ = 0;
                                __dec_obj56=come_value_106->c_value;
                                come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value129;
                                __freed_obj__ = 0;
                                if(c_value_110 && !__freed_obj__) { c_value_110 = come_decrement_ref_count(c_value_110, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj57=come_value_106->c_value;
                                come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("(*(parent->%s))=%s",parent_var_105->mCValueName,right_value_80->c_value))));
                                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj58=come_value_106->type;
                        come_value_106->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(left_type_107))));
                        if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value131;
                        __freed_obj__ = 0;
                        come_value_106->var=((void*)0);
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigning to",((char*)(right_value132=string_to_string(self->name)))))),left_type_107,right_type_81,come_value_106,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value132;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value133;
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",come_value_106->c_value);
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_106));
                        __freed_obj__ = 0;
                        __result90__ = (_Bool)1;
                        if(come_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result90__;
                        __freed_obj__ = 0;
                        if(come_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional193=self->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional193) {
                __freed_obj__ = 0;
                multiple_var_name_112=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("multiple_assgin_var%d",++num_multiple_var_111))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value135=make_define_var(right_value_80->type,multiple_var_name_112,(_Bool)0,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value135;
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_112,right_value_80->c_value);
                __freed_obj__ = 0;
                __dec_obj59=right_value_80->c_value;
                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(multiple_var_name_112))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value136;
                __freed_obj__ = 0;
                i_113=0;
                __freed_obj__ = 0;
                for(
                o2_saved_114=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_115=list$1charph_begin((o2_saved_114)) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA8=                !list$1charph_end((o2_saved_114)) ,                __freed_obj__ = 0, 
                _for_condtionalA8;                it_115=list$1charph_next((o2_saved_114)) ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional194=i_113<list$1sTypeph_length(right_type_81->mGenericsTypes),                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        right_type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value137=list$1sTypephp_operator_load_element(right_type_81->mGenericsTypes,i_113))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value137;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value138;
                        __freed_obj__ = 0;
                        var__117=get_variable_from_table(info->lv_table,it_115);
                        __freed_obj__ = 0;
                        var_type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(var__117->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
                        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value139;
                        __freed_obj__ = 0;
                        var_type_118->mStatic=(_Bool)0;
                        __freed_obj__ = 0;
                        if(_if_conditional195=!var_type_118->mConstant,                        __freed_obj__ = 0, 
                        _if_conditional195) {
                            if(_if_conditional196=list$1sNodeph_length(var_type_118->mArrayNum)>0,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__117->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value140=make_type_name_string(var_type_118,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value140;
                                __freed_obj__ = 0;
                                for(
                                o2_saved_119=(struct list$1sNodeph*)come_increment_ref_count((var_type_118->mArrayNum)),it_120=list$1sNodeph_begin((o2_saved_119)) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA9=                                !list$1sNodeph_end((o2_saved_119)) ,                                __freed_obj__ = 0, 
                                _for_condtionalA9;                                it_120=list$1sNodeph_next((o2_saved_119)) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional197=!node_compile(it_120,info),                                    __freed_obj__ = 0, 
                                    _if_conditional197) {
                                        err_msg(info,"invalid array num");
                                        __freed_obj__ = 0;
                                        exit(1);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                                    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value141;
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    __freed_obj__ = 0;
                                    add_come_code(info,"*(%s)",come_value_121->c_value);
                                    __freed_obj__ = 0;
                                    if(come_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_119 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                add_come_code(info,");\n");
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__117->mCValueName,optional$2charphbool_expect(((struct optional$2charphbool*)(right_value142=make_type_name_string(var_type_118,(_Bool)0,(_Bool)0,(_Bool)0,info)))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value142;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        left_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(var__117->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value143);
                        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value143;
                        __freed_obj__ = 0;
                        right_value2_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 441))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value144;
                        __freed_obj__ = 0;
                        __dec_obj60=right_value2_123->c_value;
                        right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s->v%d",right_value_80->c_value,i_113+1))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value145);
                        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value145;
                        __freed_obj__ = 0;
                        __dec_obj61=right_value2_123->type;
                        right_value2_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(right_type2_116))));
                        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value146);
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value146;
                        __freed_obj__ = 0;
                        right_value2_123->var=((void*)0);
                        __freed_obj__ = 0;
                        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 447))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value147;
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value149=xsprintf("\%s is assining to}",((char*)(right_value148=string_to_string(self->name)))))),left_type_122,right_type2_116,come_value_124,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[8] = right_value148;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value149);
                        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[9] = right_value149;
                        __freed_obj__ = 0;
                        if(_if_conditional198=right_type2_116->mHeap&&left_type_122->mHeap&&left_type_122->mPointerNum>0&&right_type2_116->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional198) {
                            if(_if_conditional199=self->alloc,                            __freed_obj__ = 0, 
                            _if_conditional199) {
                                if(_if_conditional200=right_value2_123->var,                                __freed_obj__ = 0, 
                                _if_conditional200) {
                                    if(_if_conditional201=right_value2_123->var->mType->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional201) {
                                        __dec_obj62=right_value2_123->var->mCValueName;
                                        right_value2_123->var->mCValueName=((void*)0);
                                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional202=right_value2_123->var->mType->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional202) {
                                            __dec_obj63=right_value2_123->c_value;
                                            right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value150=increment_ref_count_object(right_value2_123->type,right_value2_123->c_value,info))));
                                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value150;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional203=right_value2_123->var->mType->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional203) {
                                                __dec_obj64=right_value2_123->c_value;
                                                right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value151=increment_ref_count_object(right_value2_123->type,right_value2_123->c_value,info))));
                                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value151;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj65=right_value2_123->c_value;
                                                right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value152=increment_ref_count_object(right_value2_123->type,right_value2_123->c_value,info))));
                                                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
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
                                    if(_if_conditional204=right_value2_123->type->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional204) {
                                    }
                                    else {
                                        __dec_obj66=right_value2_123->c_value;
                                        right_value2_123->c_value=(char*)come_increment_ref_count(((char*)(right_value153=increment_ref_count_object(right_value2_123->type,right_value2_123->c_value,info))));
                                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value153;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj67=come_value_124->c_value;
                                come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s=%s",var__117->mCValueName,right_value2_123->c_value))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value154;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_125=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_123->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional205=right_value_id_125!=-1,                            __freed_obj__ = 0, 
                            _if_conditional205) {
                                remove_object_from_right_values(right_value_id_125,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj68=come_value_124->c_value;
                            come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s=%s",var__117->mCValueName,right_value2_123->c_value))));
                            if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value155;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj69=come_value_124->type;
                        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type_122))));
                        if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value156);
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[10] = right_value156;
                        __freed_obj__ = 0;
                        come_value_124->var=var__117;
                        __freed_obj__ = 0;
                        if(_if_conditional206=self->alloc,                        __freed_obj__ = 0, 
                        _if_conditional206) {
                            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value157=make_define_var(left_type_122,var__117->mCValueName,(_Bool)0,info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value157;
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",come_value_124->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_124->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(right_type2_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_118 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_123, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    i_113++;
                    __freed_obj__ = 0;
                }
                if(o2_saved_114 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(multiple_var_name_112 && !__freed_obj__) { multiple_var_name_112 = come_decrement_ref_count(multiple_var_name_112, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__126=get_variable_from_table(info->lv_table,self->name);
                __freed_obj__ = 0;
                if(_if_conditional207=var__126==((void*)0),                __freed_obj__ = 0, 
                _if_conditional207) {
                    var__126=get_variable_from_table(info->gv_table,self->name);
                    __freed_obj__ = 0;
                    if(_if_conditional208=var__126==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional208) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __freed_obj__ = 0;
                        __result91__ = (_Bool)1;
                        if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result91__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional209=var__126->mType==((void*)0),                __freed_obj__ = 0, 
                _if_conditional209) {
                    __dec_obj70=var__126->mType;
                    var__126->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(right_type_81))));
                    if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value158;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(var__126->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value159;
                __freed_obj__ = 0;
                come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 522))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value160;
                __freed_obj__ = 0;
                if(_if_conditional210=var__126->mType->mStatic&&!var__126->mGlobal,                __freed_obj__ = 0, 
                _if_conditional210) {
                    check_assign_type(((char*)(right_value162=xsprintf("\%s is assining to",((char*)(right_value161=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value161;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value162;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value163=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))),right_value_80->c_value);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value163);
                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value163;
                    __freed_obj__ = 0;
                    __dec_obj71=come_value_128->c_value;
                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(""))));
                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value164;
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                    __freed_obj__ = 0;
                    transpiler_clear_last_code(info);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional211=var__126->mType->mConstant,                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        check_assign_type(((char*)(right_value166=xsprintf("\%s is assining to",((char*)(right_value165=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value165;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value166;
                        __freed_obj__ = 0;
                        if(_if_conditional212=self->alloc,                        __freed_obj__ = 0, 
                        _if_conditional212) {
                            add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value167=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))),right_value_80->c_value);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value167;
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__126->mCValueName,right_value_80->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj72=come_value_128->c_value;
                        come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(""))));
                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value168;
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                        __freed_obj__ = 0;
                        transpiler_clear_last_code(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional213=right_type_81->mHeap&&left_type_127->mHeap&&left_type_127->mPointerNum>0&&right_type_81->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional213) {
                            check_assign_type(((char*)(right_value170=xsprintf("\%s is assining to",((char*)(right_value169=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value169;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
                            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value170;
                            __freed_obj__ = 0;
                            if(_if_conditional214=self->alloc,                            __freed_obj__ = 0, 
                            _if_conditional214) {
                                if(_if_conditional215=right_value_80->var,                                __freed_obj__ = 0, 
                                _if_conditional215) {
                                    if(_if_conditional216=right_value_80->var->mType->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional216) {
                                        __dec_obj73=right_value_80->var->mCValueName;
                                        right_value_80->var->mCValueName=((void*)0);
                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional217=right_value_80->var->mType->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional217) {
                                            __dec_obj74=right_value_80->c_value;
                                            right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value171=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                            if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value171;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional218=right_value_80->var->mType->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional218) {
                                                __dec_obj75=right_value_80->c_value;
                                                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value172=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value172;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj76=right_value_80->c_value;
                                                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value173=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value173;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional219=right_value_80->type->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional219) {
                                    }
                                    else {
                                        __dec_obj77=right_value_80->c_value;
                                        right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value174=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value174;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj78=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value175;
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_127,var__126->mCValueName,info,(_Bool)0);
                                __freed_obj__ = 0;
                                if(_if_conditional220=right_value_80->var,                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    if(_if_conditional221=right_value_80->var->mType->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional221) {
                                        __dec_obj79=right_value_80->var->mCValueName;
                                        right_value_80->var->mCValueName=((void*)0);
                                        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional222=right_value_80->var->mType->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional222) {
                                            __dec_obj80=right_value_80->c_value;
                                            right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value176=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                            if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value176;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional223=right_value_80->var->mType->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional223) {
                                                __dec_obj81=right_value_80->c_value;
                                                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value177;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj82=right_value_80->c_value;
                                                right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value178=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value178;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional224=right_value_80->type->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional224) {
                                    }
                                    else {
                                        __dec_obj83=right_value_80->c_value;
                                        right_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value179=increment_ref_count_object(right_value_80->type,right_value_80->c_value,info))));
                                        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value179;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj84=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value180;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_129=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_80->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional225=right_value_id_129!=-1,                            __freed_obj__ = 0, 
                            _if_conditional225) {
                                remove_object_from_right_values(right_value_id_129,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj85=come_value_128->type;
                            come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(left_type_127))));
                            if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value181);
                            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value181;
                            __freed_obj__ = 0;
                            come_value_128->var=var__126;
                            __freed_obj__ = 0;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                            __freed_obj__ = 0;
                            add_come_last_code(info,"%s;\n",come_value_128->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional226=string_operator_equals(right_type_81->mClass->mName,"void")&&left_type_127->mHeap&&left_type_127->mPointerNum>0&&right_type_81->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional226) {
                                check_assign_type(((char*)(right_value183=xsprintf("\%s is assining to",((char*)(right_value182=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value182;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
                                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value183;
                                __freed_obj__ = 0;
                                if(_if_conditional227=self->alloc,                                __freed_obj__ = 0, 
                                _if_conditional227) {
                                    __dec_obj86=come_value_128->c_value;
                                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value184;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_127,var__126->mCValueName,info,(_Bool)0);
                                    __freed_obj__ = 0;
                                    __dec_obj87=come_value_128->c_value;
                                    come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value185;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj88=come_value_128->type;
                                come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(left_type_127))));
                                if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
                                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value186;
                                __freed_obj__ = 0;
                                come_value_128->var=var__126;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",come_value_128->c_value);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional228=left_type_127->mHeap&&!right_type_81->mHeap,                                __freed_obj__ = 0, 
                                _if_conditional228) {
                                    if(_if_conditional229=string_operator_equals(right_type_81->mClass->mName,"void")&&right_type_81->mPointerNum==1,                                    __freed_obj__ = 0, 
                                    _if_conditional229) {
                                    }
                                    else {
                                        if(_if_conditional230=!right_type_81->mDelegate&&!right_type_81->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional230) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __freed_obj__ = 0;
                                            __result92__ = (_Bool)0;
                                            if(left_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result92__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                check_assign_type(((char*)(right_value188=xsprintf("\%s is assining to",((char*)(right_value187=string_to_string(self->name)))))),left_type_127,right_type_81,right_value_80,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value187;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
                                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value188;
                                __freed_obj__ = 0;
                                __dec_obj89=come_value_128->c_value;
                                come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s=%s",var__126->mCValueName,right_value_80->c_value))));
                                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
                                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value189;
                                __freed_obj__ = 0;
                                __dec_obj90=come_value_128->type;
                                come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(left_type_127))));
                                if(__dec_obj90) { come_call_finalizer(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value190);
                                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value190;
                                __freed_obj__ = 0;
                                come_value_128->var=var__126;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",come_value_128->c_value);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional231=self->alloc&&!left_type_127->mConstant&&!left_type_127->mStatic,                __freed_obj__ = 0, 
                _if_conditional231) {
                    if(_if_conditional232=list$1sNodeph_length(left_type_127->mArrayNum)>0,                    __freed_obj__ = 0, 
                    _if_conditional232) {
                        add_come_code(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value191=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value191;
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value192=make_define_var(left_type_127,var__126->mCValueName,(_Bool)0,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value192;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result93__ = (_Bool)1;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_38;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional9;
_Bool _if_conditional116;
void* right_value61;
_Bool _if_conditional118;
void* right_value62;
void* right_value63;
struct optional$2sVarpbool* __result43__;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value64;
void* right_value65;
struct optional$2sVarpbool* __result44__;
void* right_value66;
void* right_value67;
struct optional$2sVarpbool* __result45__;
void* right_value68;
void* right_value69;
struct optional$2sVarpbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_38, 0, sizeof(struct sVar*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_38,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_39=string_get_hash_key(((char*)key))%self->size;
            __freed_obj__ = 0;
            it_40=hash_39;
            __freed_obj__ = 0;
            while(_while_condtional9=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional116=self->item_existance[it_40],                __freed_obj__ = 0, 
                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_40],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61),
                    (right_value61 && right_value61 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value61, 
                    __freed_obj__ = 0, 
                    _if_conditional118) {
                        __result43__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value63=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value62=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1600)))),self->items[it_40],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value62;
                        __freed_obj__ = 0;
                        return __result43__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_40++;
                    __freed_obj__ = 0;
                    if(_if_conditional119=it_40>=self->size,                    __freed_obj__ = 0, 
                    _if_conditional119) {
                        it_40=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional120=it_40==hash_39,                        __freed_obj__ = 0, 
                        _if_conditional120) {
                            __result44__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value65=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value64=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_38,(_Bool)0)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value64;
                            __freed_obj__ = 0;
                            return __result44__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result45__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value67=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value66=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1613))),default_value_38,(_Bool)0)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                    return __result45__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result46__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value69=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value68=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1617))),default_value_38,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
            return __result46__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
_Bool default_value_41;
_Bool __result40__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(_Bool));
                        if(_if_conditional117=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional117) {
                            __freed_obj__ = 0;
                            memset(&default_value_41,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result40__ = default_value_41;
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result41__ = self->v1;
                            __freed_obj__ = 0;
                            return __result41__;
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
struct optional$2sVarpbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            __freed_obj__ = 0;
                            self->v2=v2;
                            __freed_obj__ = 0;
                            __result42__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result42__;
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
_Bool _if_conditional121;
struct sVar* default_value_42;
struct sVar* __result47__;
struct sVar* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_42, 0, sizeof(struct sVar*));
            if(_if_conditional121=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __freed_obj__ = 0;
                memset(&default_value_42,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result47__ = __result_obj__ = default_value_42;
                __freed_obj__ = 0;
                return __result47__;
                __freed_obj__ = 0;
            }
            else {
                __result48__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result48__;
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
_Bool _if_conditional124;
char* default_value_46;
char* __result51__;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_46, 0, sizeof(char*));
            if(_if_conditional124=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional124) {
                __freed_obj__ = 0;
                memset(&default_value_46,0,sizeof(char*));
                __freed_obj__ = 0;
                __result51__ = __result_obj__ = default_value_46;
                __freed_obj__ = 0;
                return __result51__;
                __freed_obj__ = 0;
            }
            else {
                __result52__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result52__;
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
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional125=self!=((void*)0)&&self->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional125) {
                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct tuple3$3sTypephcharphsNodeph* result_50;
struct tuple3$3sTypephcharphsNodeph* __result55__;
_Bool _if_conditional131;
struct tuple3$3sTypephcharphsNodeph* __result56__;
struct tuple3$3sTypephcharphsNodeph* result_51;
struct tuple3$3sTypephcharphsNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional130=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __freed_obj__ = 0;
                        memset(&result_50,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result55__ = __result_obj__ = result_50;
                        __freed_obj__ = 0;
                        return __result55__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->it=self->head;
                    __freed_obj__ = 0;
                    if(_if_conditional131=self->it,                    __freed_obj__ = 0, 
                    _if_conditional131) {
                        __result56__ = __result_obj__ = self->it->item;
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_51,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result57__ = __result_obj__ = result_51;
                    __freed_obj__ = 0;
                    return __result57__;
                    __freed_obj__ = 0;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result58__ = self==((void*)0)||self->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* result_53;
struct tuple3$3sTypephcharphsNodeph* __result59__;
_Bool _if_conditional133;
struct tuple3$3sTypephcharphsNodeph* __result60__;
struct tuple3$3sTypephcharphsNodeph* result_54;
struct tuple3$3sTypephcharphsNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_53, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_54, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional132=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        __freed_obj__ = 0;
                        memset(&result_53,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result59__ = __result_obj__ = result_53;
                        __freed_obj__ = 0;
                        return __result59__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->it=self->it->next;
                    __freed_obj__ = 0;
                    if(_if_conditional133=self->it,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __result60__ = __result_obj__ = self->it->item;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_54,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result61__ = __result_obj__ = result_54;
                    __freed_obj__ = 0;
                    return __result61__;
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional137=self!=((void*)0)&&self->c_value!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional137) {
                                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional138=self!=((void*)0)&&self->type!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional138) {
                                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result64__ = self->len;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional141=!self->v2,                                __freed_obj__ = 0, 
                                _if_conditional141) {
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
                                __result65__ = __result_obj__ = self->v1;
                                __freed_obj__ = 0;
                                return __result65__;
                                __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
struct sNode* result_62;
struct sNode* __result66__;
_Bool _if_conditional143;
struct sNode* __result67__;
struct sNode* result_63;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_62, 0, sizeof(struct sNode*));
memset(&result_63, 0, sizeof(struct sNode*));
                                if(_if_conditional142=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional142) {
                                    __freed_obj__ = 0;
                                    memset(&result_62,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result66__ = __result_obj__ = result_62;
                                    __freed_obj__ = 0;
                                    return __result66__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                self->it=self->head;
                                __freed_obj__ = 0;
                                if(_if_conditional143=self->it,                                __freed_obj__ = 0, 
                                _if_conditional143) {
                                    __result67__ = __result_obj__ = self->it->item;
                                    __freed_obj__ = 0;
                                    return __result67__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_63,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result68__ = __result_obj__ = result_63;
                                __freed_obj__ = 0;
                                return __result68__;
                                __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
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

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
struct sNode* result_65;
struct sNode* __result70__;
_Bool _if_conditional145;
struct sNode* __result71__;
struct sNode* result_66;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
                                if(_if_conditional144=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional144) {
                                    __freed_obj__ = 0;
                                    memset(&result_65,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result70__ = __result_obj__ = result_65;
                                    __freed_obj__ = 0;
                                    return __result70__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                self->it=self->it->next;
                                __freed_obj__ = 0;
                                if(_if_conditional145=self->it,                                __freed_obj__ = 0, 
                                _if_conditional145) {
                                    __result71__ = __result_obj__ = self->it->item;
                                    __freed_obj__ = 0;
                                    return __result71__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_66,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result72__ = __result_obj__ = result_66;
                                __freed_obj__ = 0;
                                return __result72__;
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
void* right_value98;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj46;
_Bool _if_conditional158;
void* right_value99;
struct list_item$1CVALUEph* litem_78;
struct CVALUE* __dec_obj47;
void* right_value100;
struct list_item$1CVALUEph* litem_79;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional156=self->len==0,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value98;
                        __freed_obj__ = 0;
                        litem_77->prev=((void*)0);
                        __freed_obj__ = 0;
                        litem_77->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj46=litem_77->item;
                        litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail=litem_77;
                        __freed_obj__ = 0;
                        self->head=litem_77;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional158=self->len==1,                        __freed_obj__ = 0, 
                        _if_conditional158) {
                            litem_78=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            litem_78->prev=self->head;
                            __freed_obj__ = 0;
                            litem_78->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj47=litem_78->item;
                            litem_78->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail=litem_78;
                            __freed_obj__ = 0;
                            self->head->next=litem_78;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_79=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = 0;
                            litem_79->prev=self->tail;
                            __freed_obj__ = 0;
                            litem_79->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj48=litem_79->item;
                            litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail->next=litem_79;
                            __freed_obj__ = 0;
                            self->tail=litem_79;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->len++;
                    __freed_obj__ = 0;
                    __result74__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result74__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional157=self!=((void*)0)&&self->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional157) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional166;
char* result_85;
char* __result77__;
_Bool _if_conditional167;
char* __result78__;
char* result_86;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                        if(_if_conditional166=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            __freed_obj__ = 0;
                            memset(&result_85,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result77__ = __result_obj__ = result_85;
                            __freed_obj__ = 0;
                            return __result77__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->it=self->head;
                        __freed_obj__ = 0;
                        if(_if_conditional167=self->it,                        __freed_obj__ = 0, 
                        _if_conditional167) {
                            __result78__ = __result_obj__ = self->it->item;
                            __freed_obj__ = 0;
                            return __result78__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_86,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result79__ = __result_obj__ = result_86;
                        __freed_obj__ = 0;
                        return __result79__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
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

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
char* result_88;
char* __result81__;
_Bool _if_conditional169;
char* __result82__;
char* result_89;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_88, 0, sizeof(char*));
memset(&result_89, 0, sizeof(char*));
                        if(_if_conditional168=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional168) {
                            __freed_obj__ = 0;
                            memset(&result_88,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result81__ = __result_obj__ = result_88;
                            __freed_obj__ = 0;
                            return __result81__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->it=self->it->next;
                        __freed_obj__ = 0;
                        if(_if_conditional169=self->it,                        __freed_obj__ = 0, 
                        _if_conditional169) {
                            __result82__ = __result_obj__ = self->it->item;
                            __freed_obj__ = 0;
                            return __result82__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_89,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result83__ = __result_obj__ = result_89;
                        __freed_obj__ = 0;
                        return __result83__;
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result84__ = self->len;
                            __freed_obj__ = 0;
                            return __result84__;
                            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
struct list_item$1sTypeph* it_90;
int i_91;
_Bool _while_condtional10;
_Bool _if_conditional172;
void* right_value103;
void* right_value104;
struct optional$2sTypephbool* __result86__;
struct sType* default_value_92;
void* right_value105;
void* right_value106;
struct optional$2sTypephbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_91, 0, sizeof(int));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&default_value_92, 0, sizeof(struct sType*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
                                if(_if_conditional171=position<0,                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    position+=self->len;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_90=self->head;
                                __freed_obj__ = 0;
                                i_91=0;
                                __freed_obj__ = 0;
                                while(_while_condtional10=it_90!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional10) {
                                    if(_if_conditional172=position==i_91,                                    __freed_obj__ = 0, 
                                    _if_conditional172) {
                                        __result86__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value104=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value103=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_90->item),(_Bool)1)));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                                        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value103;
                                        __freed_obj__ = 0;
                                        return __result86__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_90=it_90->next;
                                    __freed_obj__ = 0;
                                    i_91++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&default_value_92,0,sizeof(struct sType*));
                                __freed_obj__ = 0;
                                __result87__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value106=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value105=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_92),(_Bool)0)));
                                if(default_value_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value105;
                                __freed_obj__ = 0;
                                return __result87__;
                                __freed_obj__ = 0;
                                if(default_value_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj49;
struct optional$2sTypephbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            __dec_obj49=self->v1;
                                            self->v1=(struct sType*)come_increment_ref_count(v1);
                                            if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            self->v2=v2;
                                            __freed_obj__ = 0;
                                            __result85__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result85__;
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
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional173=self!=((void*)0)&&self->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional173) {
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
_Bool _if_conditional174;
struct sType* default_value_93;
struct sType* __result88__;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_93, 0, sizeof(struct sType*));
                                if(_if_conditional174=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional174) {
                                    __freed_obj__ = 0;
                                    memset(&default_value_93,0,sizeof(struct sType*));
                                    __freed_obj__ = 0;
                                    __result88__ = __result_obj__ = default_value_93;
                                    __freed_obj__ = 0;
                                    return __result88__;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result89__ = __result_obj__ = self->v1;
                                    __freed_obj__ = 0;
                                    return __result89__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = self->sline;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value193;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value193, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value193=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
void* right_value195;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value204;
struct sNode* result_131;
struct sNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 685);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value195=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value194=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 685)))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value195;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value204;
    __freed_obj__ = 0;
    __result98__ = __result_obj__ = result_131;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, ((struct sNode*)result_131)->finalize, ((struct sNode*)result_131)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, ((struct sNode*)result_131)->finalize, ((struct sNode*)result_131)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
char* __dec_obj98;
void* right_value206;
char* __dec_obj99;
struct sLoadNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    __dec_obj98=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(name))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value206;
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result100__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

char* sLoadNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value207;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result101__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sLoadNode")));
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* current_stack_frame_struct_132;
void* right_value208;
_Bool _if_conditional252;
struct sVar* parent_var_133;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value209;
struct CVALUE* come_value_134;
struct sType* type_135;
void* right_value210;
char* __dec_obj100;
void* right_value211;
struct sType* __dec_obj101;
_Bool __result102__;
struct sVar* var__136;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value221;
struct sFun* fun_141;
_Bool _if_conditional262;
void* right_value222;
struct CVALUE* come_value_142;
void* right_value223;
char* __dec_obj102;
struct sType* __dec_obj103;
_Bool __result110__;
_Bool __result111__;
void* right_value224;
struct CVALUE* come_value_143;
void* right_value225;
char* __dec_obj104;
void* right_value226;
struct sType* __dec_obj105;
_Bool _if_conditional263;
void* right_value227;
struct sType* __dec_obj106;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_132, 0, sizeof(struct sClass*));
memset(&right_value208, 0, sizeof(void*));
memset(&parent_var_133, 0, sizeof(struct sVar*));
memset(&right_value209, 0, sizeof(void*));
memset(&come_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&var__136, 0, sizeof(struct sVar*));
memset(&right_value221, 0, sizeof(void*));
memset(&fun_141, 0, sizeof(struct sFun*));
memset(&right_value222, 0, sizeof(void*));
memset(&come_value_142, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&come_value_143, 0, sizeof(struct CVALUE*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    current_stack_frame_struct_132=info->current_stack_frame_struct;
    __freed_obj__ = 0;
    if(_if_conditional252=current_stack_frame_struct_132&&optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value208=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208),
    (right_value208 && right_value208 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value208, 
    __freed_obj__ = 0, 
    _if_conditional252) {
        parent_var_133=get_variable_from_table(info->lv_table->mParent,self->name);
        __freed_obj__ = 0;
        if(_if_conditional253=parent_var_133!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional253) {
            if(_if_conditional254=string_operator_not_equals(parent_var_133->mFunName,info->come_fun->mName),            __freed_obj__ = 0, 
            _if_conditional254) {
                come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 728))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value209;
                __freed_obj__ = 0;
                type_135=parent_var_133->mType;
                __freed_obj__ = 0;
                __dec_obj100=come_value_134->c_value;
                come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("(*(parent->%s))",parent_var_133->mCValueName))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value210;
                __freed_obj__ = 0;
                __dec_obj101=come_value_134->type;
                come_value_134->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(type_135))));
                if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value211);
                if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value211;
                __freed_obj__ = 0;
                come_value_134->var=((void*)0);
                __freed_obj__ = 0;
                add_come_last_code(info,"%s;\n",come_value_134->c_value);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
                __freed_obj__ = 0;
                __result102__ = (_Bool)1;
                if(come_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
                if(come_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var__136=get_variable_from_table(info->lv_table,self->name);
    __freed_obj__ = 0;
    if(_if_conditional255=var__136==((void*)0),    __freed_obj__ = 0, 
    _if_conditional255) {
        var__136=get_variable_from_table(info->gv_table,self->name);
        __freed_obj__ = 0;
        if(_if_conditional256=var__136==((void*)0),        __freed_obj__ = 0, 
        _if_conditional256) {
            fun_141=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value221=map$2charphsFunphp_operator_load_element(info->funcs,self->name))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value221;
            __freed_obj__ = 0;
            if(_if_conditional262=fun_141,            __freed_obj__ = 0, 
            _if_conditional262) {
                come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 755))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value222;
                __freed_obj__ = 0;
                __dec_obj102=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s",fun_141->mName))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value223;
                __freed_obj__ = 0;
                __dec_obj103=come_value_142->type;
                come_value_142->type=(struct sType*)come_increment_ref_count(fun_141->mLambdaType);
                if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_value_142->var=((void*)0);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
                __freed_obj__ = 0;
                __result110__ = (_Bool)1;
                if(come_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result110__;
                __freed_obj__ = 0;
                if(come_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __freed_obj__ = 0;
                __result111__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result111__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 772))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value224;
    __freed_obj__ = 0;
    __dec_obj104=come_value_143->c_value;
    come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s",var__136->mCValueName))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value225;
    __freed_obj__ = 0;
    __dec_obj105=come_value_143->type;
    come_value_143->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(var__136->mType))));
    if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = 0;
    come_value_143->var=var__136;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
    __freed_obj__ = 0;
    if(_if_conditional263=list$1sNodeph_length(come_value_143->type->mArrayNum)==1,    __freed_obj__ = 0, 
    _if_conditional263) {
        __dec_obj106=come_value_143->type->mOriginalLoadVarType->v1;
        come_value_143->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(come_value_143->type))));
        if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value227;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_143->type->mArrayNum);
        __freed_obj__ = 0;
        come_value_143->type->mPointerNum++;
        __freed_obj__ = 0;
        come_value_143->type->mOriginalTypeNamePointerNum=come_value_143->type->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result113__ = (_Bool)1;
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(come_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_137;
unsigned int hash_138;
unsigned int it_139;
_Bool _while_condtional11;
_Bool _if_conditional257;
void* right_value212;
_Bool _if_conditional258;
void* right_value213;
void* right_value214;
struct optional$2sFunpbool* __result104__;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value215;
void* right_value216;
struct optional$2sFunpbool* __result105__;
void* right_value217;
void* right_value218;
struct optional$2sFunpbool* __result106__;
void* right_value219;
void* right_value220;
struct optional$2sFunpbool* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_137, 0, sizeof(struct sFun*));
memset(&hash_138, 0, sizeof(unsigned int));
memset(&it_139, 0, sizeof(unsigned int));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_137,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_138=string_get_hash_key(((char*)key))%self->size;
                __freed_obj__ = 0;
                it_139=hash_138;
                __freed_obj__ = 0;
                while(_while_condtional11=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional11) {
                    if(_if_conditional257=self->item_existance[it_139],                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        if(_if_conditional258=optional$2boolbool_value(((struct optional$2boolbool*)(right_value212=string_equals(self->keys[it_139],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212),
                        (right_value212 && right_value212 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value212, 
                        __freed_obj__ = 0, 
                        _if_conditional258) {
                            __result104__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value214=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value213=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_139],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value213;
                            __freed_obj__ = 0;
                            return __result104__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_139++;
                        __freed_obj__ = 0;
                        if(_if_conditional259=it_139>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional259) {
                            it_139=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional260=it_139==hash_138,                            __freed_obj__ = 0, 
                            _if_conditional260) {
                                __result105__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value216=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value215=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_137,(_Bool)0)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value215;
                                __freed_obj__ = 0;
                                return __result105__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result106__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value218=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value217=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_137,(_Bool)0)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value217;
                        __freed_obj__ = 0;
                        return __result106__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result107__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value220=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value219=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_137,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value219;
                __freed_obj__ = 0;
                return __result107__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                __freed_obj__ = 0;
                                self->v2=v2;
                                __freed_obj__ = 0;
                                __result103__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result103__;
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
_Bool _if_conditional261;
struct sFun* default_value_140;
struct sFun* __result108__;
struct sFun* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_140, 0, sizeof(struct sFun*));
                if(_if_conditional261=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional261) {
                    __freed_obj__ = 0;
                    memset(&default_value_140,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result108__ = __result_obj__ = default_value_140;
                    __freed_obj__ = 0;
                    return __result108__;
                    __freed_obj__ = 0;
                }
                else {
                    __result109__ = __result_obj__ = self->v1;
                    __freed_obj__ = 0;
                    return __result109__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_144;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_145;
struct list$1sNodeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_144, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_145, 0, sizeof(struct list_item$1sNodeph*));
            it_144=self->head;
            __freed_obj__ = 0;
            while(_while_condtional12=it_144!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                prev_it_145=it_144;
                __freed_obj__ = 0;
                it_144=it_144->next;
                __freed_obj__ = 0;
                if(prev_it_145 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->head=((void*)0);
            __freed_obj__ = 0;
            self->tail=((void*)0);
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = self->sline;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value228;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value228=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

struct sNode* load_var(char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value229;
void* right_value230;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value234;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 802);
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value230=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value229=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 802)))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result118__ = __result_obj__ = ((struct sNode*)(right_value234=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value230;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value235;
char* __dec_obj109;
void* right_value236;
char* __dec_obj110;
struct sFunLoadNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
    __dec_obj109=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(name))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value236;
    __freed_obj__ = 0;
    __result119__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional270=self!=((void*)0)&&self->name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sFunLoadNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

char* sFunLoadNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value237;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value237, 0, sizeof(void*));
    __result121__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sFunLoadNode")));
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value238;
struct sFun* fun_147;
_Bool _if_conditional272;
_Bool __result122__;
void* right_value239;
struct CVALUE* come_value_148;
void* right_value240;
char* __dec_obj111;
struct sType* __dec_obj112;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
memset(&fun_147, 0, sizeof(struct sFun*));
memset(&right_value239, 0, sizeof(void*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&right_value240, 0, sizeof(void*));
    fun_147=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value238=map$2charphsFunphp_operator_load_element(info->funcs,self->name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value238;
    __freed_obj__ = 0;
    if(_if_conditional272=fun_147==((void*)0),    __freed_obj__ = 0, 
    _if_conditional272) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __freed_obj__ = 0;
        __result122__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
    }
    else {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 841))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value239;
        __freed_obj__ = 0;
        __dec_obj111=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s",fun_147->mName))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value240;
        __freed_obj__ = 0;
        __dec_obj112=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(fun_147->mLambdaType);
        if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_value_148->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        __freed_obj__ = 0;
        if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result123__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
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

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value241;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value241=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
struct sVar* self_149;
void* right_value243;
char* __dec_obj113;
void* right_value244;
struct sType* __dec_obj114;
_Bool _if_conditional277;
void* right_value245;
char* __dec_obj115;
static int n_150=0;
void* right_value246;
char* __dec_obj116;
_Bool _if_conditional278;
void* right_value247;
char* __dec_obj117;
char* __dec_obj118;
void* right_value260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&self_149, 0, sizeof(struct sVar*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    self_149=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value242=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 866))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = 0;
    __dec_obj113=self_149->mName;
    self_149->mName=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(name))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243;
    __freed_obj__ = 0;
    __dec_obj114=self_149->mType;
    self_149->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(type))));
    if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value244;
    __freed_obj__ = 0;
    if(_if_conditional277=type->mFunctionParam,    __freed_obj__ = 0, 
    _if_conditional277) {
        __dec_obj115=self_149->mCValueName;
        self_149->mCValueName=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(name))));
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value245;
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        __dec_obj116=self_149->mCValueName;
        self_149->mCValueName=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s_%d",name,n_150++))));
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    self_149->mBlockLevel=info->block_level;
    __freed_obj__ = 0;
    self_149->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    self_149->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    self_149->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional278=info->come_fun,    __freed_obj__ = 0, 
    _if_conditional278) {
        __dec_obj117=self_149->mFunName;
        self_149->mFunName=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(info->come_fun->mName))));
        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj118=self_149->mFunName;
        self_149->mFunName=((void*)0);
        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_149));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value260;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_149 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional273=self!=((void*)0)&&self->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional274=self!=((void*)0)&&self->mCValueName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&self->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional276=self!=((void*)0)&&self->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional276) {
            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
unsigned int hash_168;
unsigned int it_169;
_Bool _while_condtional15;
_Bool _if_conditional291;
void* right_value254;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool same_key_exist_186;
char* it2_189;
_Bool _for_condtionalA11;
void* right_value256;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct map$2charphsVarph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_168, 0, sizeof(unsigned int));
memset(&it_169, 0, sizeof(unsigned int));
memset(&right_value254, 0, sizeof(void*));
memset(&same_key_exist_186, 0, sizeof(_Bool));
memset(&it2_189, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
        if(_if_conditional279=self->len*10>=self->size,        __freed_obj__ = 0, 
        _if_conditional279) {
            map$2charphsVarph_rehash(self);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_168=string_get_hash_key(key)%self->size;
        __freed_obj__ = 0;
        it_169=hash_168;
        __freed_obj__ = 0;
        while(_while_condtional15=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional15) {
            if(_if_conditional291=self->item_existance[it_169],            __freed_obj__ = 0, 
            _if_conditional291) {
                if(_if_conditional292=optional$2boolbool_value(((struct optional$2boolbool*)(right_value254=string_equals(self->keys[it_169],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254),
                (right_value254 && right_value254 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value254, 
                __freed_obj__ = 0, 
                _if_conditional292) {
                    if(_if_conditional293=1,                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        list$1charp_remove(self->key_list,self->keys[it_169]);
                        __freed_obj__ = 0;
                        if(self->keys[it_169] && !__freed_obj__) { self->keys[it_169] = come_decrement_ref_count(self->keys[it_169], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->keys[it_169]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_169]);
                        __freed_obj__ = 0;
                        self->keys[it_169]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional313=1,                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        if(self->items[it_169] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_169], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->items[it_169]=(struct sVar*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        self->items[it_169]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_169++;
                __freed_obj__ = 0;
                if(_if_conditional314=it_169>=self->size,                __freed_obj__ = 0, 
                _if_conditional314) {
                    it_169=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=it_169==hash_168,                    __freed_obj__ = 0, 
                    _if_conditional315) {
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
                self->item_existance[it_169]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional316=1,                __freed_obj__ = 0, 
                _if_conditional316) {
                    self->keys[it_169]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    self->keys[it_169]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional317=1,                __freed_obj__ = 0, 
                _if_conditional317) {
                    self->items[it_169]=(struct sVar*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    self->items[it_169]=item;
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
        same_key_exist_186=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_189=list$1charp_begin(self->key_list) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1charp_end(self->key_list) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it2_189=list$1charp_next(self->key_list) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional322=optional$2boolbool_value(((struct optional$2boolbool*)(right_value256=string_equals(it2_189,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256),
            (right_value256 && right_value256 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value256, 
            __freed_obj__ = 0, 
            _if_conditional322) {
                same_key_exist_186=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional323=!same_key_exist_186,        __freed_obj__ = 0, 
        _if_conditional323) {
            list$1charp_push_back(self->key_list,key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result149__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result149__;
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
int size_151;
void* right_value248;
char** keys_152;
void* right_value249;
struct sVar** items_153;
void* right_value250;
_Bool* item_existance_154;
int len_155;
char* it_158;
_Bool _for_condtionalA10;
struct sVar* default_value_161;
void* right_value252;
struct sVar* it2_164;
unsigned int hash_165;
int n_166;
_Bool _while_condtional14;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct sVar* default_value_167;
void* right_value253;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_151, 0, sizeof(int));
memset(&right_value248, 0, sizeof(void*));
memset(&keys_152, 0, sizeof(char**));
memset(&right_value249, 0, sizeof(void*));
memset(&items_153, 0, sizeof(struct sVar**));
memset(&right_value250, 0, sizeof(void*));
memset(&item_existance_154, 0, sizeof(_Bool*));
memset(&len_155, 0, sizeof(int));
memset(&it_158, 0, sizeof(char*));
memset(&default_value_161, 0, sizeof(struct sVar*));
memset(&right_value252, 0, sizeof(void*));
memset(&it2_164, 0, sizeof(struct sVar*));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&n_166, 0, sizeof(int));
memset(&default_value_167, 0, sizeof(struct sVar*));
memset(&right_value253, 0, sizeof(void*));
                size_151=self->size*10;
                __freed_obj__ = 0;
                keys_152=(char**)come_increment_ref_count(((char**)(right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_151)), "./comelang2.h", 1375))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value248;
                __freed_obj__ = 0;
                items_153=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value249=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_151)), "./comelang2.h", 1376))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value249);
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value249;
                __freed_obj__ = 0;
                item_existance_154=(_Bool*)come_increment_ref_count(((_Bool*)(right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_151)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value250);
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value250;
                __freed_obj__ = 0;
                len_155=0;
                __freed_obj__ = 0;
                for(
                it_158=map$2charphsVarph_begin(self) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA10=                !map$2charphsVarph_end(self) ,                __freed_obj__ = 0, 
                _for_condtionalA10;                it_158=map$2charphsVarph_next(self) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_161,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    it2_164=((struct sVar*)(right_value252=map$2charphsVarph_at(self,it_158,default_value_161)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value252;
                    __freed_obj__ = 0;
                    hash_165=string_get_hash_key(it_158)%size_151;
                    __freed_obj__ = 0;
                    n_166=hash_165;
                    __freed_obj__ = 0;
                    while(_while_condtional14=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional288=item_existance_154[n_166],                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            n_166++;
                            __freed_obj__ = 0;
                            if(_if_conditional289=n_166>=size_151,                            __freed_obj__ = 0, 
                            _if_conditional289) {
                                n_166=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional290=n_166==hash_165,                                __freed_obj__ = 0, 
                                _if_conditional290) {
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
                            item_existance_154[n_166]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_152[n_166]=it_158;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_153[n_166]=((struct sVar*)(right_value253=map$2charphsVarph_at(self,it_158,default_value_167)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value253;
                            __freed_obj__ = 0;
                            len_155++;
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
                self->keys=keys_152;
                __freed_obj__ = 0;
                self->items=items_153;
                __freed_obj__ = 0;
                self->item_existance=item_existance_154;
                __freed_obj__ = 0;
                self->size=size_151;
                __freed_obj__ = 0;
                self->len=len_155;
                __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional280;
char* result_156;
char* __result126__;
_Bool _if_conditional281;
char* __result127__;
char* result_157;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(char*));
memset(&result_157, 0, sizeof(char*));
                    if(_if_conditional280=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional280) {
                        __freed_obj__ = 0;
                        memset(&result_156,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result126__ = __result_obj__ = result_156;
                        __freed_obj__ = 0;
                        return __result126__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->key_list->it=self->key_list->head;
                    __freed_obj__ = 0;
                    if(_if_conditional281=self->key_list->it,                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        __result127__ = __result_obj__ = self->key_list->it->item;
                        __freed_obj__ = 0;
                        return __result127__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_157,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result128__ = __result_obj__ = result_157;
                    __freed_obj__ = 0;
                    return __result128__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result129__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result129__;
                    __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
char* result_159;
char* __result130__;
_Bool _if_conditional283;
char* __result131__;
char* result_160;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional282=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        __freed_obj__ = 0;
                        memset(&result_159,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result130__ = __result_obj__ = result_159;
                        __freed_obj__ = 0;
                        return __result130__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->key_list->it=self->key_list->it->next;
                    __freed_obj__ = 0;
                    if(_if_conditional283=self->key_list->it,                    __freed_obj__ = 0, 
                    _if_conditional283) {
                        __result131__ = __result_obj__ = self->key_list->it->item;
                        __freed_obj__ = 0;
                        return __result131__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_160,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result132__ = __result_obj__ = result_160;
                    __freed_obj__ = 0;
                    return __result132__;
                    __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_162;
unsigned int it_163;
_Bool _while_condtional13;
_Bool _if_conditional284;
void* right_value251;
_Bool _if_conditional285;
struct sVar* __result133__;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct sVar* __result134__;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_162, 0, sizeof(unsigned int));
memset(&it_163, 0, sizeof(unsigned int));
memset(&right_value251, 0, sizeof(void*));
                        hash_162=string_get_hash_key(((char*)key))%self->size;
                        __freed_obj__ = 0;
                        it_163=hash_162;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional284=self->item_existance[it_163],                            __freed_obj__ = 0, 
                            _if_conditional284) {
                                if(_if_conditional285=optional$2boolbool_value(((struct optional$2boolbool*)(right_value251=string_equals(self->keys[it_163],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251),
                                (right_value251 && right_value251 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value251, 
                                __freed_obj__ = 0, 
                                _if_conditional285) {
                                    __result133__ = __result_obj__ = self->items[it_163];
                                    __freed_obj__ = 0;
                                    return __result133__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_163++;
                                __freed_obj__ = 0;
                                if(_if_conditional286=it_163>=self->size,                                __freed_obj__ = 0, 
                                _if_conditional286) {
                                    it_163=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional287=it_163==hash_162,                                    __freed_obj__ = 0, 
                                    _if_conditional287) {
                                        __result134__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result134__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result135__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result135__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result136__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result136__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_170;
struct list_item$1charp* it_171;
_Bool _while_condtional16;
void* right_value255;
_Bool _if_conditional294;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_170, 0, sizeof(int));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
memset(&right_value255, 0, sizeof(void*));
                            it2_170=0;
                            __freed_obj__ = 0;
                            it_171=self->head;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_171!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional294=optional$2boolbool_value(((struct optional$2boolbool*)(right_value255=string_equals(it_171->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255),
                                (right_value255 && right_value255 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value255, 
                                __freed_obj__ = 0, 
                                _if_conditional294) {
                                    list$1charp_delete(self,it2_170,it2_170+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_170++;
                                __freed_obj__ = 0;
                                it_171=it_171->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result140__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result140__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
int tmp_172;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list$1charp* __result137__;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list_item$1charp* it_175;
int i_176;
_Bool _while_condtional18;
_Bool _if_conditional303;
struct list_item$1charp* prev_it_177;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1charp* it_178;
int i_179;
_Bool _while_condtional19;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct list_item$1charp* prev_it_180;
struct list_item$1charp* it_181;
struct list_item$1charp* head_prev_it_182;
struct list_item$1charp* tail_it_183;
int i_184;
_Bool _while_condtional20;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1charp* prev_it_185;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_172, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1charp*));
memset(&i_176, 0, sizeof(int));
memset(&prev_it_177, 0, sizeof(struct list_item$1charp*));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
memset(&it_181, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_182, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_183, 0, sizeof(struct list_item$1charp*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional295=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional295) {
                                            head+=self->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional296=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional296) {
                                            tail+=self->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional297=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional297) {
                                            tmp_172=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_172;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional298=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional298) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional299=tail>self->len,                                        __freed_obj__ = 0, 
                                        _if_conditional299) {
                                            tail=self->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional300=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional300) {
                                            __result137__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result137__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional301=head==0&&tail==self->len,                                        __freed_obj__ = 0, 
                                        _if_conditional301) {
                                            list$1charp_reset(self);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional302=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional302) {
                                                it_175=self->head;
                                                __freed_obj__ = 0;
                                                i_176=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional18=it_175!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional18) {
                                                    if(_if_conditional303=i_176<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional303) {
                                                        prev_it_177=it_175;
                                                        __freed_obj__ = 0;
                                                        it_175=it_175->next;
                                                        __freed_obj__ = 0;
                                                        i_176++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_177 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        self->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional304=i_176==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional304) {
                                                            self->head=it_175;
                                                            __freed_obj__ = 0;
                                                            self->head->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_175=it_175->next;
                                                            __freed_obj__ = 0;
                                                            i_176++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional305=tail==self->len,                                                __freed_obj__ = 0, 
                                                _if_conditional305) {
                                                    it_178=self->head;
                                                    __freed_obj__ = 0;
                                                    i_179=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_178!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional306=i_179==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional306) {
                                                            self->tail=it_178->prev;
                                                            __freed_obj__ = 0;
                                                            self->tail->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional307=i_179>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional307) {
                                                            prev_it_180=it_178;
                                                            __freed_obj__ = 0;
                                                            it_178=it_178->next;
                                                            __freed_obj__ = 0;
                                                            i_179++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_180 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            self->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_178=it_178->next;
                                                            __freed_obj__ = 0;
                                                            i_179++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_181=self->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_182=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_183=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_184=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional20=it_181!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional20) {
                                                        if(_if_conditional308=i_184==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional308) {
                                                            head_prev_it_182=it_181->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional309=i_184==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional309) {
                                                            tail_it_183=it_181;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional310=i_184>=head&&i_184<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional310) {
                                                            prev_it_185=it_181;
                                                            __freed_obj__ = 0;
                                                            it_181=it_181->next;
                                                            __freed_obj__ = 0;
                                                            i_184++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_185 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            self->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_181=it_181->next;
                                                            __freed_obj__ = 0;
                                                            i_184++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional311=head_prev_it_182!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional311) {
                                                        head_prev_it_182->next=tail_it_183;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional312=tail_it_183!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional312) {
                                                        tail_it_183->prev=head_prev_it_182;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result139__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result139__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_173;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_174;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_173, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_174, 0, sizeof(struct list_item$1charp*));
                                                it_173=self->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_173!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    prev_it_174=it_173;
                                                    __freed_obj__ = 0;
                                                    it_173=it_173->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_174 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                self->head=((void*)0);
                                                __freed_obj__ = 0;
                                                self->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                self->len=0;
                                                __freed_obj__ = 0;
                                                __result138__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result138__;
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

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional318;
char* result_187;
char* __result141__;
_Bool _if_conditional319;
char* __result142__;
char* result_188;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_187, 0, sizeof(char*));
memset(&result_188, 0, sizeof(char*));
            if(_if_conditional318=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional318) {
                __freed_obj__ = 0;
                memset(&result_187,0,sizeof(char*));
                __freed_obj__ = 0;
                __result141__ = __result_obj__ = result_187;
                __freed_obj__ = 0;
                return __result141__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional319=self->it,            __freed_obj__ = 0, 
            _if_conditional319) {
                __result142__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_188,0,sizeof(char*));
            __freed_obj__ = 0;
            __result143__ = __result_obj__ = result_188;
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result144__ = self==((void*)0)||self->it==((void*)0);
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
char* result_190;
char* __result145__;
_Bool _if_conditional321;
char* __result146__;
char* result_191;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
            if(_if_conditional320=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional320) {
                __freed_obj__ = 0;
                memset(&result_190,0,sizeof(char*));
                __freed_obj__ = 0;
                __result145__ = __result_obj__ = result_190;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional321=self->it,            __freed_obj__ = 0, 
            _if_conditional321) {
                __result146__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result146__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_191,0,sizeof(char*));
            __freed_obj__ = 0;
            __result147__ = __result_obj__ = result_191;
            __freed_obj__ = 0;
            return __result147__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
void* right_value257;
struct list_item$1charp* litem_192;
_Bool _if_conditional325;
void* right_value258;
struct list_item$1charp* litem_193;
void* right_value259;
struct list_item$1charp* litem_194;
struct list$1charp* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&litem_192, 0, sizeof(struct list_item$1charp*));
memset(&right_value258, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1charp*));
memset(&right_value259, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional324=self->len==0,                __freed_obj__ = 0, 
                _if_conditional324) {
                    litem_192=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value257=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = 0;
                    litem_192->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_192->next=((void*)0);
                    __freed_obj__ = 0;
                    litem_192->item=item;
                    __freed_obj__ = 0;
                    self->tail=litem_192;
                    __freed_obj__ = 0;
                    self->head=litem_192;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional325=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        litem_193=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value258=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value258;
                        __freed_obj__ = 0;
                        litem_193->prev=self->head;
                        __freed_obj__ = 0;
                        litem_193->next=((void*)0);
                        __freed_obj__ = 0;
                        litem_193->item=item;
                        __freed_obj__ = 0;
                        self->tail=litem_193;
                        __freed_obj__ = 0;
                        self->head->next=litem_193;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_194=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value259=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value259;
                        __freed_obj__ = 0;
                        litem_194->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_194->next=((void*)0);
                        __freed_obj__ = 0;
                        litem_194->item=item;
                        __freed_obj__ = 0;
                        self->tail->next=litem_194;
                        __freed_obj__ = 0;
                        self->tail=litem_194;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result148__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result148__;
                __freed_obj__ = 0;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value261;
struct sVar* self_195;
void* right_value262;
char* __dec_obj119;
void* right_value263;
struct sType* __dec_obj120;
void* right_value264;
char* __dec_obj121;
void* right_value265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value261, 0, sizeof(void*));
memset(&self_195, 0, sizeof(struct sVar*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
    self_195=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value261=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 895))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value261;
    __freed_obj__ = 0;
    __dec_obj119=self_195->mName;
    self_195->mName=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(name))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value262;
    __freed_obj__ = 0;
    __dec_obj120=self_195->mType;
    self_195->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(type))));
    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value263;
    __freed_obj__ = 0;
    self_195->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj121=self_195->mCValueName;
    self_195->mCValueName=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(name))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value264;
    __freed_obj__ = 0;
    self_195->mBlockLevel=info->block_level;
    __freed_obj__ = 0;
    self_195->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    self_195->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    self_195->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_195));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value265;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_195 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_195, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value266;
struct sVar* self_196;
void* right_value267;
char* __dec_obj122;
void* right_value268;
struct sType* __dec_obj123;
void* right_value269;
char* __dec_obj124;
void* right_value270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
memset(&self_196, 0, sizeof(struct sVar*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
    self_196=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value266=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 914))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value266;
    __freed_obj__ = 0;
    __dec_obj122=self_196->mName;
    self_196->mName=(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(name))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value267;
    __freed_obj__ = 0;
    __dec_obj123=self_196->mType;
    self_196->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(type))));
    if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value268;
    __freed_obj__ = 0;
    self_196->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj124=self_196->mCValueName;
    self_196->mCValueName=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(c_value))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value269);
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value269;
    __freed_obj__ = 0;
    self_196->mBlockLevel=info->block_level;
    __freed_obj__ = 0;
    self_196->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    self_196->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    self_196->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_196));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value270;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_196 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_196, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool is_type_name_flag_197;
_Bool multiple_declare_198;
_Bool _if_conditional326;
char* p_199;
int sline_200;
void* right_value271;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_202;
char* name_203;
_Bool err_204;
_Bool _if_conditional331;
_Bool multiple_declare2_205;
_Bool _if_conditional332;
char* p_206;
int sline_207;
void* right_value272;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool no_output_err_211;
_Bool no_comma_212;
_Bool no_output_come_code_213;
void* right_value273;
struct sNode* exp_214;
_Bool _if_conditional335;
void* right_value274;
struct sFun* fun_215;
_Bool _if_conditional336;
void* right_value275;
char* buf2_216;
struct list$1charph* multiple_assign_217;
_Bool _if_conditional337;
void* right_value276;
void* right_value277;
struct list$1charph* __dec_obj125;
void* right_value281;
_Bool _while_condtional21;
void* right_value282;
char* buf3_221;
void* right_value283;
_Bool _if_conditional340;
_Bool no_comma_222;
void* right_value284;
struct sNode* right_value_223;
void* right_value285;
struct sNode* __dec_obj129;
void* right_value286;
void* right_value287;
void* right_value288;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value297;
struct sNode* result_225;
void* right_value298;
void* right_value299;
struct optional$2sNodephbool* __result156__;
void* right_value300;
void* right_value301;
struct optional$2sNodephbool* __result158__;
_Bool _if_conditional359;
void* right_value302;
void* right_value303;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_226;
void* right_value304;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* base_type_227;
char* name_228;
_Bool err_229;
void* right_value305;
struct tuple2$2sTypephcharph* variable_name_230;
void* right_value306;
void* right_value309;
struct tuple3$3sTypephcharphsNodeph* variable_name2_231;
_Bool _while_condtional22;
void* right_value313;
struct tuple2$2sTypephcharph* variable_name_235;
void* right_value314;
void* right_value315;
struct tuple3$3sTypephcharphsNodeph* variable_name2_236;
void* right_value316;
void* right_value317;
void* right_value318;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value327;
struct sNode* result_238;
void* right_value328;
void* right_value329;
struct optional$2sNodephbool* __result163__;
_Bool _if_conditional383;
void* right_value330;
void* right_value331;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_239;
void* right_value332;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_240;
char* name_241;
_Bool err_242;
void* right_value333;
struct tuple2$2sTypephcharph* variable_name_243;
_Bool _if_conditional384;
_Bool no_comma_244;
void* right_value334;
struct sNode* exp_245;
void* right_value335;
void* right_value339;
struct tuple3$3sTypephcharphsNodeph* variable_name2_246;
_Bool _while_condtional23;
void* right_value340;
struct tuple2$2sTypephcharph* variable_name_247;
_Bool _if_conditional385;
_Bool no_comma_248;
void* right_value341;
struct sNode* exp_249;
void* right_value342;
void* right_value343;
struct tuple3$3sTypephcharphsNodeph* variable_name2_250;
void* right_value344;
void* right_value345;
void* right_value346;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value355;
struct sNode* result_252;
void* right_value356;
void* right_value357;
struct optional$2sNodephbool* __result167__;
_Bool _if_conditional403;
void* right_value358;
struct sNode* right_value_253;
void* right_value359;
struct sNode* __dec_obj160;
void* right_value360;
void* right_value361;
void* right_value362;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value371;
struct sNode* result_255;
void* right_value372;
void* right_value373;
struct optional$2sNodephbool* __result170__;
void* right_value374;
_Bool _if_conditional421;
void* right_value375;
void* right_value376;
void* right_value377;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value381;
struct sNode* node_257;
void* right_value382;
struct sNode* __dec_obj170;
void* right_value383;
struct sNode* __dec_obj171;
void* right_value384;
void* right_value385;
struct optional$2sNodephbool* __result173__;
void* right_value386;
char* word_258;
_Bool _if_conditional428;
void* right_value387;
char* __dec_obj172;
_Bool is_type_name_flag_259;
_Bool _if_conditional429;
void* right_value388;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_260;
char* name_261;
_Bool err_262;
_Bool _if_conditional430;
void* right_value389;
void* right_value390;
struct optional$2sNodephbool* __result174__;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value391;
void* right_value392;
struct buffer* buf2_263;
_Bool squort_264;
_Bool dquort_265;
int nest_266;
_Bool _while_condtional24;
_Bool _if_conditional433;
void* right_value393;
void* right_value394;
struct optional$2sNodephbool* __result175__;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value395;
char* array_initializer_267;
void* right_value396;
void* right_value397;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value406;
struct sNode* result_269;
void* right_value407;
void* right_value408;
struct optional$2sNodephbool* __result178__;
void* right_value409;
struct sNode* right_value_270;
void* right_value410;
void* right_value411;
struct list$1sNodeph* right_values_271;
_Bool _while_condtional25;
char* anonymous_var_nameX1414_272;
void* right_value412;
struct sNode* __dec_obj180;
void* right_value413;
void* right_value414;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value423;
struct sNode* result_274;
void* right_value424;
void* right_value425;
struct optional$2sNodephbool* __result181__;
void* right_value426;
void* right_value427;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value436;
struct sNode* result_276;
void* right_value437;
void* right_value438;
struct optional$2sNodephbool* __result184__;
void* right_value439;
struct __current_stack1__ __current_stack1__;
void* right_value442;
struct sNode* result_277;
void* right_value443;
void* right_value444;
struct optional$2sNodephbool* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_197, 0, sizeof(_Bool));
memset(&multiple_declare_198, 0, sizeof(_Bool));
memset(&p_199, 0, sizeof(char*));
memset(&sline_200, 0, sizeof(int));
memset(&right_value271, 0, sizeof(void*));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&type_202, 0, sizeof(struct sType*));
memset(&name_203, 0, sizeof(char*));
memset(&err_204, 0, sizeof(_Bool));
memset(&multiple_declare2_205, 0, sizeof(_Bool));
memset(&p_206, 0, sizeof(char*));
memset(&sline_207, 0, sizeof(int));
memset(&right_value272, 0, sizeof(void*));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&no_output_err_211, 0, sizeof(_Bool));
memset(&no_comma_212, 0, sizeof(_Bool));
memset(&no_output_come_code_213, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&exp_214, 0, sizeof(struct sNode*));
memset(&right_value274, 0, sizeof(void*));
memset(&fun_215, 0, sizeof(struct sFun*));
memset(&right_value275, 0, sizeof(void*));
memset(&buf2_216, 0, sizeof(char*));
memset(&multiple_assign_217, 0, sizeof(struct list$1charph*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&buf3_221, 0, sizeof(char*));
memset(&right_value283, 0, sizeof(void*));
memset(&no_comma_222, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value_223, 0, sizeof(struct sNode*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&result_225, 0, sizeof(struct sNode*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&multiple_declare_226, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value304, 0, sizeof(void*));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&base_type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&right_value305, 0, sizeof(void*));
memset(&variable_name_230, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&variable_name2_231, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value313, 0, sizeof(void*));
memset(&variable_name_235, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&variable_name2_236, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&result_238, 0, sizeof(struct sNode*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&multiple_declare_239, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value332, 0, sizeof(void*));
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&base_type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&right_value333, 0, sizeof(void*));
memset(&variable_name_243, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_244, 0, sizeof(_Bool));
memset(&right_value334, 0, sizeof(void*));
memset(&exp_245, 0, sizeof(struct sNode*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&variable_name2_246, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value340, 0, sizeof(void*));
memset(&variable_name_247, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_248, 0, sizeof(_Bool));
memset(&right_value341, 0, sizeof(void*));
memset(&exp_249, 0, sizeof(struct sNode*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&variable_name2_250, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&result_252, 0, sizeof(struct sNode*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value_253, 0, sizeof(struct sNode*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&node_257, 0, sizeof(struct sNode*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&word_258, 0, sizeof(char*));
memset(&right_value387, 0, sizeof(void*));
memset(&is_type_name_flag_259, 0, sizeof(_Bool));
memset(&right_value388, 0, sizeof(void*));
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&type_260, 0, sizeof(struct sType*));
memset(&name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&buf2_263, 0, sizeof(struct buffer*));
memset(&squort_264, 0, sizeof(_Bool));
memset(&dquort_265, 0, sizeof(_Bool));
memset(&nest_266, 0, sizeof(int));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&array_initializer_267, 0, sizeof(char*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sNode*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value_270, 0, sizeof(struct sNode*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_values_271, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1414_272, 0, sizeof(char*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct sNode*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sNode*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value442, 0, sizeof(void*));
memset(&result_277, 0, sizeof(struct sNode*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
    is_type_name_flag_197=is_type_name(buf,info);
    __freed_obj__ = 0;
    multiple_declare_198=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional326=is_type_name_flag_197,    __freed_obj__ = 0, 
    _if_conditional326) {
        p_199=info->p;
        __freed_obj__ = 0;
        sline_200=info->sline;
        __freed_obj__ = 0;
        info->p=head;
        __freed_obj__ = 0;
        info->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value271=parse_type(info,(_Bool)1,(_Bool)1))));
        type_202=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_203=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_204=multiple_assgin_var2->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271;
        __freed_obj__ = 0;
        if(_if_conditional331=err_204&&*info->p==44,        __freed_obj__ = 0, 
        _if_conditional331) {
            multiple_declare_198=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        info->p=p_199;
        __freed_obj__ = 0;
        info->sline=sline_200;
        __freed_obj__ = 0;
        if(type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_203 && !__freed_obj__) { name_203 = come_decrement_ref_count(name_203, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    multiple_declare2_205=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional332=is_type_name_flag_197,    __freed_obj__ = 0, 
    _if_conditional332) {
        p_206=info->p;
        __freed_obj__ = 0;
        sline_207=info->sline;
        __freed_obj__ = 0;
        info->p=head;
        __freed_obj__ = 0;
        info->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var3=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value272=parse_type(info,(_Bool)1,(_Bool)1))));
        type_208=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_209=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_210=multiple_assgin_var3->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value272;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional333=err_210&&*info->p==61,        __freed_obj__ = 0, 
        _if_conditional333) {
            info->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional334=*info->p==123,            __freed_obj__ = 0, 
            _if_conditional334) {
            }
            else {
                no_output_err_211=info->no_output_err;
                __freed_obj__ = 0;
                no_comma_212=info->no_comma;
                __freed_obj__ = 0;
                no_output_come_code_213=info->no_output_come_code;
                __freed_obj__ = 0;
                info->no_output_err=(_Bool)1;
                __freed_obj__ = 0;
                info->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                info->no_output_come_code=(_Bool)1;
                __freed_obj__ = 0;
                exp_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value273;
                __freed_obj__ = 0;
                info->no_comma=no_comma_212;
                __freed_obj__ = 0;
                info->no_output_err=no_output_err_211;
                __freed_obj__ = 0;
                info->no_output_come_code=no_output_come_code_213;
                __freed_obj__ = 0;
                if(_if_conditional335=*info->p==44,                __freed_obj__ = 0, 
                _if_conditional335) {
                    multiple_declare2_205=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(exp_214 && !__freed_obj__) { exp_214 = come_decrement_ref_count(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        info->p=p_206;
        __freed_obj__ = 0;
        info->sline=sline_207;
        __freed_obj__ = 0;
        if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_209 && !__freed_obj__) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    fun_215=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value274=map$2charphsFunphp_operator_load_element(info->funcs,buf))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value274;
    __freed_obj__ = 0;
    if(_if_conditional336=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    __freed_obj__ = 0, 
    _if_conditional336) {
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        buf2_216=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value275=parse_word(info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value275;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        multiple_assign_217=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional337=*info->p==44,        __freed_obj__ = 0, 
        _if_conditional337) {
            __dec_obj125=multiple_assign_217;
            multiple_assign_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value277=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value276=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1012))))))));
            if(__dec_obj125) { come_call_finalizer(list$1charph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value276;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value277;
            __freed_obj__ = 0;
            list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value281=string_clone(buf2_216)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value281;
            __freed_obj__ = 0;
            while(_while_condtional21=*info->p==44,            __freed_obj__ = 0, 
            _while_condtional21) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                buf3_221=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value282=parse_word(info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value282;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                list$1charph_push_back(multiple_assign_217,(char*)come_increment_ref_count(((char*)(right_value283=string_clone(buf3_221)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value283;
                __freed_obj__ = 0;
                if(buf3_221 && !__freed_obj__) { buf3_221 = come_decrement_ref_count(buf3_221, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional340=*info->p==61&&*(info->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional340) {
            info->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            no_comma_222=info->no_comma;
            __freed_obj__ = 0;
            info->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value284;
            __freed_obj__ = 0;
            info->no_comma=no_comma_222;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj129=right_value_223;
            right_value_223=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_223),info))));
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value285;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1042);
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value288=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value286=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1042)))),(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(buf2_216)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_217),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_223),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=_inf_value3)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value286;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value287);
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value287;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value288);
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value288;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value297;
            __freed_obj__ = 0;
            __result156__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value299=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value298=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1046)))),(struct sNode*)come_increment_ref_count(result_225),(_Bool)1)));
            if(right_value_223 && !__freed_obj__) { right_value_223 = come_decrement_ref_count(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0); } 
            if(result_225 && !__freed_obj__) { result_225 = come_decrement_ref_count(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 0, 0); } 
            if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value298;
            __freed_obj__ = 0;
            return __result156__;
            __freed_obj__ = 0;
            if(right_value_223 && !__freed_obj__) { right_value_223 = come_decrement_ref_count(right_value_223, ((struct sNode*)right_value_223)->finalize, ((struct sNode*)right_value_223)->_protocol_obj, 0, 0, 0); } 
            if(result_225 && !__freed_obj__) { result_225 = come_decrement_ref_count(result_225, ((struct sNode*)result_225)->finalize, ((struct sNode*)result_225)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            __freed_obj__ = 0;
            __result158__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value301=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value300=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1050))),((void*)0),(_Bool)0)));
            if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value300;
            __freed_obj__ = 0;
            return __result158__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional359=multiple_declare_198,        __freed_obj__ = 0, 
        _if_conditional359) {
            info->p=head;
            __freed_obj__ = 0;
            info->sline=head_sline;
            __freed_obj__ = 0;
            multiple_declare_226=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value303=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value302=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1057))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value302;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value303;
            __freed_obj__ = 0;
            multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value304=parse_type(info,(_Bool)0,(_Bool)1))));
            base_type_227=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_228=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_229=multiple_assgin_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value304);
            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value304;
            __freed_obj__ = 0;
            variable_name_230=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value305=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value305);
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value305;
            __freed_obj__ = 0;
            variable_name2_231=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value309=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value306=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1063)))),(struct sType*)come_increment_ref_count(variable_name_230->v1),(char*)come_increment_ref_count(variable_name_230->v2),((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value306);
            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value306;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value309);
            if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value309;
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_231));
            __freed_obj__ = 0;
            while(_while_condtional22=*info->p==44,            __freed_obj__ = 0, 
            _while_condtional22) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                variable_name_235=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value313=parse_variable_name((struct sType*)come_increment_ref_count(base_type_227),(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value313;
                __freed_obj__ = 0;
                variable_name2_236=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value315=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value314=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1073)))),(struct sType*)come_increment_ref_count(variable_name_235->v1),(char*)come_increment_ref_count(variable_name_235->v2),((void*)0)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
                if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value314;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value315);
                if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value315;
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_226,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_236));
                __freed_obj__ = 0;
                if(variable_name_235 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_236 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_236, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1078);
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value318=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value316=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1078)))),(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_226),(struct sType*)come_increment_ref_count(base_type_227),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=_inf_value4)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value316);
            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value316;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value317;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value318);
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value318;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value327);
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[9] = right_value327;
            __freed_obj__ = 0;
            __result163__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value329=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value328=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1082)))),(struct sNode*)come_increment_ref_count(result_238),(_Bool)1)));
            if(multiple_declare_226 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_228 && !__freed_obj__) { name_228 = come_decrement_ref_count(name_228, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_230 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_231 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_238 && !__freed_obj__) { result_238 = come_decrement_ref_count(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value328);
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value328;
            __freed_obj__ = 0;
            return __result163__;
            __freed_obj__ = 0;
            if(multiple_declare_226 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_228 && !__freed_obj__) { name_228 = come_decrement_ref_count(name_228, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_230 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_231 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_238 && !__freed_obj__) { result_238 = come_decrement_ref_count(result_238, ((struct sNode*)result_238)->finalize, ((struct sNode*)result_238)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional383=multiple_declare2_205,            __freed_obj__ = 0, 
            _if_conditional383) {
                info->p=head;
                __freed_obj__ = 0;
                info->sline=head_sline;
                __freed_obj__ = 0;
                multiple_declare_239=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value331=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value330=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1088))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value330;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value331;
                __freed_obj__ = 0;
                multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value332=parse_type(info,(_Bool)0,(_Bool)1))));
                base_type_240=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_241=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_242=multiple_assgin_var5->v3;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value332);
                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value332;
                __freed_obj__ = 0;
                variable_name_243=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value333=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value333);
                if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value333;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional384=*info->p==61,                __freed_obj__ = 0, 
                _if_conditional384) {
                    info->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    no_comma_244=info->no_comma;
                    __freed_obj__ = 0;
                    info->no_comma=(_Bool)1;
                    __freed_obj__ = 0;
                    exp_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value334;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_244;
                    __freed_obj__ = 0;
                    variable_name2_246=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value339=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value335=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1107)))),(struct sType*)come_increment_ref_count(variable_name_243->v1),(char*)come_increment_ref_count(variable_name_243->v2),(struct sNode*)come_increment_ref_count(exp_245)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value335);
                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value335;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value339);
                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value339;
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_246));
                    __freed_obj__ = 0;
                    if(exp_245 && !__freed_obj__) { exp_245 = come_decrement_ref_count(exp_245, ((struct sNode*)exp_245)->finalize, ((struct sNode*)exp_245)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_246 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_246, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                while(_while_condtional23=*info->p==44,                __freed_obj__ = 0, 
                _while_condtional23) {
                    info->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    variable_name_247=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value340=parse_variable_name((struct sType*)come_increment_ref_count(base_type_240),(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value340;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional385=*info->p==61,                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        info->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        no_comma_248=info->no_comma;
                        __freed_obj__ = 0;
                        info->no_comma=(_Bool)1;
                        __freed_obj__ = 0;
                        exp_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value341;
                        __freed_obj__ = 0;
                        info->no_comma=no_comma_248;
                        __freed_obj__ = 0;
                        variable_name2_250=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value343=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value342=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1131)))),(struct sType*)come_increment_ref_count(variable_name_247->v1),(char*)come_increment_ref_count(variable_name_247->v2),(struct sNode*)come_increment_ref_count(exp_249)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value342);
                        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value342;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value343);
                        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value343;
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_239,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_250));
                        __freed_obj__ = 0;
                        if(exp_249 && !__freed_obj__) { exp_249 = come_decrement_ref_count(exp_249, ((struct sNode*)exp_249)->finalize, ((struct sNode*)exp_249)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_250 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_247 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(variable_name_247 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1140);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value346=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value344=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1140)))),(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_239),(struct sType*)come_increment_ref_count(base_type_240),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value344);
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value344;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value345);
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value345;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value346);
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value346;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value355);
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[7] = right_value355;
                __freed_obj__ = 0;
                __result167__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value357=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value356=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1144)))),(struct sNode*)come_increment_ref_count(result_252),(_Bool)1)));
                if(multiple_declare_239 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_241 && !__freed_obj__) { name_241 = come_decrement_ref_count(name_241, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_243 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_252 && !__freed_obj__) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value356);
                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[8] = right_value356;
                __freed_obj__ = 0;
                return __result167__;
                __freed_obj__ = 0;
                if(multiple_declare_239 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_241 && !__freed_obj__) { name_241 = come_decrement_ref_count(name_241, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_243 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_243, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_252 && !__freed_obj__) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional403=!is_type_name_flag_197&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                __freed_obj__ = 0, 
                _if_conditional403) {
                    info->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value358;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj160=right_value_253;
                    right_value_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_253),info))));
                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value359);
                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value359;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1158);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value362=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value360=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1158)))),(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_253),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value6)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value360);
                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value360;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value361);
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value361;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value362);
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value362;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value371);
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[5] = right_value371;
                    __freed_obj__ = 0;
                    __result170__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value373=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value372=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1162)))),(struct sNode*)come_increment_ref_count(result_255),(_Bool)1)));
                    if(right_value_253 && !__freed_obj__) { right_value_253 = come_decrement_ref_count(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0); } 
                    if(result_255 && !__freed_obj__) { result_255 = come_decrement_ref_count(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value372);
                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value372;
                    __freed_obj__ = 0;
                    return __result170__;
                    __freed_obj__ = 0;
                    if(right_value_253 && !__freed_obj__) { right_value_253 = come_decrement_ref_count(right_value_253, ((struct sNode*)right_value_253)->finalize, ((struct sNode*)right_value_253)->_protocol_obj, 0, 0, 0); } 
                    if(result_255 && !__freed_obj__) { result_255 = come_decrement_ref_count(result_255, ((struct sNode*)result_255)->finalize, ((struct sNode*)result_255)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional421=!is_type_name_flag_197||optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value374=map$2charphsFunphp_operator_load_element(info->funcs,buf)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374),
                    (right_value374 && right_value374 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sFunpboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value374, 
                    __freed_obj__ = 0, 
                    _if_conditional421) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1165);
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value377=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value375=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1165)))),(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value7)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value375;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value376);
                        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value376;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value377);
                        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value377;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value381);
                        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value381;
                        __freed_obj__ = 0;
                        __dec_obj170=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value382);
                        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[4] = right_value382;
                        __freed_obj__ = 0;
                        __dec_obj171=node_257;
                        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_257),info))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value383);
                        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[5] = right_value383;
                        __freed_obj__ = 0;
                        __result173__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value385=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value384=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1171)))),(struct sNode*)come_increment_ref_count(node_257),(_Bool)1)));
                        if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value384);
                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value384;
                        __freed_obj__ = 0;
                        return __result173__;
                        __freed_obj__ = 0;
                        if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        info->p=head;
                        __freed_obj__ = 0;
                        info->sline=head_sline;
                        __freed_obj__ = 0;
                        word_258=(char*)come_increment_ref_count(((char*)(right_value386=__builtin_string(""))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value386;
                        __freed_obj__ = 0;
                        if(_if_conditional428=xisalpha(*info->p)||*info->p==95,                        __freed_obj__ = 0, 
                        _if_conditional428) {
                            __dec_obj172=word_258;
                            word_258=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value387=parse_word(info)))));
                            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value387;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        is_type_name_flag_259=is_type_name(word_258,info);
                        __freed_obj__ = 0;
                        info->p=head;
                        __freed_obj__ = 0;
                        info->sline=head_sline;
                        __freed_obj__ = 0;
                        if(_if_conditional429=is_type_name_flag_259,                        __freed_obj__ = 0, 
                        _if_conditional429) {
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value388=parse_type(info,(_Bool)1,(_Bool)1))));
                            type_260=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                            name_261=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                            err_262=multiple_assgin_var6->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
                            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value388;
                            __freed_obj__ = 0;
                            if(_if_conditional430=!err_262,                            __freed_obj__ = 0, 
                            _if_conditional430) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                __freed_obj__ = 0;
                                __result174__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value390=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value389=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1193))),((void*)0),(_Bool)0)));
                                if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                                if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value389;
                                __freed_obj__ = 0;
                                return __result174__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            if(_if_conditional431=*info->p==61,                            __freed_obj__ = 0, 
                            _if_conditional431) {
                                info->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                parse_sharp_v5(info);
                                __freed_obj__ = 0;
                                if(_if_conditional432=*info->p==123,                                __freed_obj__ = 0, 
                                _if_conditional432) {
                                    buf2_263=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value392=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value391=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1204))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
                                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value391;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value392);
                                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value392;
                                    __freed_obj__ = 0;
                                    buffer_append_char(buf2_263,*info->p);
                                    __freed_obj__ = 0;
                                    info->p++;
                                    __freed_obj__ = 0;
                                    squort_264=(_Bool)0;
                                    __freed_obj__ = 0;
                                    dquort_265=(_Bool)0;
                                    __freed_obj__ = 0;
                                    nest_266=1;
                                    __freed_obj__ = 0;
                                    while(_while_condtional24=1,                                    __freed_obj__ = 0, 
                                    _while_condtional24) {
                                        if(_if_conditional433=*info->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional433) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            __freed_obj__ = 0;
                                            __result175__ = __result_obj__ = ((struct optional$2voidpbool*)(right_value394=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value393=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1215))),((void*)0),(_Bool)0)));
                                            if(buf2_263 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                            if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value393);
                                            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value393;
                                            __freed_obj__ = 0;
                                            return __result175__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional434=*info->p==92,                                            __freed_obj__ = 0, 
                                            _if_conditional434) {
                                                buffer_append_char(buf2_263,*info->p);
                                                __freed_obj__ = 0;
                                                info->p++;
                                                __freed_obj__ = 0;
                                                buffer_append_char(buf2_263,*info->p);
                                                __freed_obj__ = 0;
                                                info->p++;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional435=!squort_264&&*info->p==34,                                                __freed_obj__ = 0, 
                                                _if_conditional435) {
                                                    buffer_append_char(buf2_263,*info->p);
                                                    __freed_obj__ = 0;
                                                    info->p++;
                                                    __freed_obj__ = 0;
                                                    dquort_265=!dquort_265;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional436=!dquort_265&&*info->p==39,                                                    __freed_obj__ = 0, 
                                                    _if_conditional436) {
                                                        buffer_append_char(buf2_263,*info->p);
                                                        __freed_obj__ = 0;
                                                        info->p++;
                                                        __freed_obj__ = 0;
                                                        squort_264=!squort_264;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional437=squort_264||dquort_265,                                                        __freed_obj__ = 0, 
                                                        _if_conditional437) {
                                                            buffer_append_char(buf2_263,*info->p);
                                                            __freed_obj__ = 0;
                                                            info->p++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional438=*info->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional438) {
                                                                nest_266++;
                                                                __freed_obj__ = 0;
                                                                buffer_append_char(buf2_263,*info->p);
                                                                __freed_obj__ = 0;
                                                                info->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional439=*info->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional439) {
                                                                    nest_266--;
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    __freed_obj__ = 0;
                                                                    info->p++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional440=nest_266==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional440) {
                                                                        skip_spaces_and_lf(info);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_263,*info->p);
                                                                    __freed_obj__ = 0;
                                                                    info->p++;
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
                                    array_initializer_267=(char*)come_increment_ref_count(((char*)(right_value395=buffer_to_string(buf2_263))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value395);
                                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value395;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1259);
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value397=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value396=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1259)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_267),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=_inf_value8)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value396);
                                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value396;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value397);
                                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value397;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value406);
                                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[5] = right_value406;
                                    __freed_obj__ = 0;
                                    __result178__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value408=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value407=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1263)))),(struct sNode*)come_increment_ref_count(result_269),(_Bool)1)));
                                    if(buf2_263 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_267 && !__freed_obj__) { array_initializer_267 = come_decrement_ref_count(array_initializer_267, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                    if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value407);
                                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value407;
                                    __freed_obj__ = 0;
                                    return __result178__;
                                    __freed_obj__ = 0;
                                    if(buf2_263 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_267 && !__freed_obj__) { array_initializer_267 = come_decrement_ref_count(array_initializer_267, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value409;
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_values_271=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value411=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value410=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1270))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value410);
                                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value410;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value411);
                                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value411;
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*info->p==44,                                    __freed_obj__ = 0, 
                                    _while_condtional25) {
                                        __freed_obj__ = 0;
                                        if(anonymous_var_nameX1414_272 && !__freed_obj__) { anonymous_var_nameX1414_272 = come_decrement_ref_count(anonymous_var_nameX1414_272, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                    __dec_obj180=right_value_270;
                                    right_value_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_270),info))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value412);
                                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value412;
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1277);
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value414=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value413=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1277)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_270),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=_inf_value9)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value413);
                                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value413;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value414);
                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value414;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value423);
                                    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[6] = right_value423;
                                    __freed_obj__ = 0;
                                    __result181__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value425=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value424=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1281)))),(struct sNode*)come_increment_ref_count(result_274),(_Bool)1)));
                                    if(right_value_270 && !__freed_obj__) { right_value_270 = come_decrement_ref_count(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_271 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_274 && !__freed_obj__) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
                                    if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value424);
                                    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value424;
                                    __freed_obj__ = 0;
                                    return __result181__;
                                    __freed_obj__ = 0;
                                    if(right_value_270 && !__freed_obj__) { right_value_270 = come_decrement_ref_count(right_value_270, ((struct sNode*)right_value_270)->finalize, ((struct sNode*)right_value_270)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_271 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_274 && !__freed_obj__) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1285);
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value427=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value426=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1285)))),(char*)come_increment_ref_count(name_261),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_260),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=_inf_value10)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value426;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value427);
                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value427;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value436);
                                if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { right_value436 = come_decrement_ref_count(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value436;
                                __freed_obj__ = 0;
                                __result184__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value438=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value437=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1289)))),(struct sNode*)come_increment_ref_count(result_276),(_Bool)1)));
                                if(result_276 && !__freed_obj__) { result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 0, 0); } 
                                if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value437);
                                if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value437;
                                __freed_obj__ = 0;
                                return __result184__;
                                __freed_obj__ = 0;
                                if(result_276 && !__freed_obj__) { result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 0, 0); } 
                            }
                            __freed_obj__ = 0;
                            if(type_260 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_261 && !__freed_obj__) { name_261 = come_decrement_ref_count(name_261, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(word_258 && !__freed_obj__) { word_258 = come_decrement_ref_count(word_258, (void*)0, (void*)0, 0, 0, 0); }
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
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    __current_stack1__.is_type_name_flag_197 = &is_type_name_flag_197;
    __current_stack1__.multiple_declare_198 = &multiple_declare_198;
    __current_stack1__.multiple_declare2_205 = &multiple_declare2_205;
    __current_stack1__.fun_215 = &fun_215;
    result_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value439=string_node_v5(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_07varc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value439);
    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value439;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value442);
    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value442;
    __freed_obj__ = 0;
    __result187__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value444=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value443=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1298)))),(struct sNode*)come_increment_ref_count(result_277),(_Bool)1)));
    if(result_277 && !__freed_obj__) { result_277 = come_decrement_ref_count(result_277, ((struct sNode*)result_277)->finalize, ((struct sNode*)result_277)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value443);
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value443;
    __freed_obj__ = 0;
    return __result187__;
    __freed_obj__ = 0;
    if(result_277 && !__freed_obj__) { result_277 = come_decrement_ref_count(result_277, ((struct sNode*)result_277)->finalize, ((struct sNode*)result_277)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
struct tuple3$3sTypephcharphbool* default_value_201;
struct tuple3$3sTypephcharphbool* __result150__;
struct tuple3$3sTypephcharphbool* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_201, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional327=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional327) {
                __freed_obj__ = 0;
                memset(&default_value_201,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __freed_obj__ = 0;
                __result150__ = __result_obj__ = default_value_201;
                __freed_obj__ = 0;
                return __result150__;
                __freed_obj__ = 0;
            }
            else {
                __result151__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result151__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional328=self!=((void*)0)&&self->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional328) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional329=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional329) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional330=self!=((void*)0)&&self->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
void* right_value278;
struct list_item$1charph* litem_218;
char* __dec_obj126;
_Bool _if_conditional339;
void* right_value279;
struct list_item$1charph* litem_219;
char* __dec_obj127;
void* right_value280;
struct list_item$1charph* litem_220;
char* __dec_obj128;
struct list$1charph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value278, 0, sizeof(void*));
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
memset(&right_value279, 0, sizeof(void*));
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
memset(&right_value280, 0, sizeof(void*));
memset(&litem_220, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional338=self->len==0,                __freed_obj__ = 0, 
                _if_conditional338) {
                    litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value278;
                    __freed_obj__ = 0;
                    litem_218->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_218->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj126=litem_218->item;
                    litem_218->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    self->tail=litem_218;
                    __freed_obj__ = 0;
                    self->head=litem_218;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional339=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional339) {
                        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value279;
                        __freed_obj__ = 0;
                        litem_219->prev=self->head;
                        __freed_obj__ = 0;
                        litem_219->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj127=litem_219->item;
                        litem_219->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail=litem_219;
                        __freed_obj__ = 0;
                        self->head->next=litem_219;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value280;
                        __freed_obj__ = 0;
                        litem_220->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_220->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj128=litem_220->item;
                        litem_220->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail->next=litem_220;
                        __freed_obj__ = 0;
                        self->tail=litem_220;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj137;
struct optional$2sNodephbool* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj137=self->v1;
                self->v1=(struct sNode*)come_increment_ref_count(v1);
                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                self->v2=v2;
                __freed_obj__ = 0;
                __result155__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result155__;
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
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional358=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional358) {
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                __freed_obj__ = 0;
                self->v2=v2;
                __freed_obj__ = 0;
                __result157__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result157__;
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

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional360=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional360) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional361=self!=((void*)0)&&self->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional361) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value307;
struct sType* __dec_obj138;
void* right_value308;
char* __dec_obj139;
struct tuple3$3sTypephcharphvoidp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
                __dec_obj138=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_clone(v1))));
                if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value307;
                __freed_obj__ = 0;
                __dec_obj139=self->v2;
                self->v2=(char*)come_increment_ref_count(((char*)(right_value308=string_clone(v2))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value308);
                if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value308;
                __freed_obj__ = 0;
                self->v3=v3;
                __freed_obj__ = 0;
                __result159__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result159__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional362=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional362) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional363=self!=((void*)0)&&self->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional363) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional364;
void* right_value310;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_232;
struct tuple3$3sTypephcharphsNodeph* __dec_obj140;
_Bool _if_conditional365;
void* right_value311;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_233;
struct tuple3$3sTypephcharphsNodeph* __dec_obj141;
void* right_value312;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_234;
struct tuple3$3sTypephcharphsNodeph* __dec_obj142;
struct list$1tuple3$3sTypephcharphsNodephph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value310, 0, sizeof(void*));
memset(&litem_232, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value311, 0, sizeof(void*));
memset(&litem_233, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value312, 0, sizeof(void*));
memset(&litem_234, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional364=self->len==0,                __freed_obj__ = 0, 
                _if_conditional364) {
                    litem_232=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value310=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value310;
                    __freed_obj__ = 0;
                    litem_232->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_232->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj140=litem_232->item;
                    litem_232->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj140) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail=litem_232;
                    __freed_obj__ = 0;
                    self->head=litem_232;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional365=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional365) {
                        litem_233=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value311=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value311;
                        __freed_obj__ = 0;
                        litem_233->prev=self->head;
                        __freed_obj__ = 0;
                        litem_233->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj141=litem_233->item;
                        litem_233->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj141) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail=litem_233;
                        __freed_obj__ = 0;
                        self->head->next=litem_233;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_234=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value312=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value312;
                        __freed_obj__ = 0;
                        litem_234->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_234->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj142=litem_234->item;
                        litem_234->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj142) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail->next=litem_234;
                        __freed_obj__ = 0;
                        self->tail=litem_234;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result160__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result160__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value336;
struct sType* __dec_obj150;
void* right_value337;
char* __dec_obj151;
void* right_value338;
struct sNode* __dec_obj152;
struct tuple3$3sTypephcharphsNodeph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
                        __dec_obj150=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(v1))));
                        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value336;
                        __freed_obj__ = 0;
                        __dec_obj151=self->v2;
                        self->v2=(char*)come_increment_ref_count(((char*)(right_value337=string_clone(v2))));
                        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value337);
                        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value337;
                        __freed_obj__ = 0;
                        __dec_obj152=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(v3))));
                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value338);
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value338;
                        __freed_obj__ = 0;
                        __result164__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result164__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional422;
_Bool _if_conditional423;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional422=self!=((void*)0)&&self->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional422) {
                                if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional423=self!=((void*)0)&&self->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional423) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional424;
struct sLoadNode* __result171__;
void* right_value378;
struct sLoadNode* result_256;
_Bool _if_conditional425;
void* right_value379;
char* __dec_obj168;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value380;
char* __dec_obj169;
struct sLoadNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value378, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sLoadNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
                            if(_if_conditional424=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional424) {
                                __result171__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result171__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_256=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value378=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value378;
                            __freed_obj__ = 0;
                            if(_if_conditional425=self!=((void*)0)&&self->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional425) {
                                __dec_obj168=result_256->name;
                                result_256->name=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(self->name))));
                                if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value379;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional426=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional426) {
                                result_256->sline=self->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional427) {
                                __dec_obj169=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value380;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result172__ = __result_obj__ = result_256;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result172__;
                            __freed_obj__ = 0;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional475=self!=((void*)0)&&self->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional475) {
                                        if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional476=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional476) {
                                        if(self->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional477=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional477) {
                                        if(self->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional478=self!=((void*)0)&&self->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional478) {
                                        if(self->right_value && !__freed_obj__) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional479=self!=((void*)0)&&self->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional479) {
                                        if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional480=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional480) {
                                        if(self->array_initializer && !__freed_obj__) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional481=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional481) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional482;
struct sStoreNode* __result182__;
void* right_value428;
struct sStoreNode* result_275;
_Bool _if_conditional483;
void* right_value429;
char* __dec_obj188;
_Bool _if_conditional484;
void* right_value430;
struct list$1charph* __dec_obj189;
_Bool _if_conditional485;
void* right_value431;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj190;
_Bool _if_conditional486;
void* right_value432;
struct sNode* __dec_obj191;
_Bool _if_conditional487;
void* right_value433;
struct sType* __dec_obj192;
_Bool _if_conditional488;
void* right_value434;
char* __dec_obj193;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
void* right_value435;
char* __dec_obj194;
struct sStoreNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value428, 0, sizeof(void*));
memset(&result_275, 0, sizeof(struct sStoreNode*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
                                    if(_if_conditional482=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional482) {
                                        __result182__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result182__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_275=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value428=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                                    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value428;
                                    __freed_obj__ = 0;
                                    if(_if_conditional483=self!=((void*)0)&&self->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional483) {
                                        __dec_obj188=result_275->name;
                                        result_275->name=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->name))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value429);
                                        if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value429;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional484=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional484) {
                                        __dec_obj189=result_275->multiple_assign;
                                        result_275->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value430=list$1charphp_clone(self->multiple_assign))));
                                        if(__dec_obj189) { come_call_finalizer(list$1charph_finalize,__dec_obj189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                                        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value430;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional485=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional485) {
                                        __dec_obj190=result_275->multiple_declare;
                                        result_275->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value431=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        if(__dec_obj190) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value431;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional486=self!=((void*)0)&&self->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional486) {
                                        __dec_obj191=result_275->right_value;
                                        result_275->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=sNode_clone(self->right_value))));
                                        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
                                        if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value432;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional487=self!=((void*)0)&&self->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional487) {
                                        __dec_obj192=result_275->type;
                                        result_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value433=sType_clone(self->type))));
                                        if(__dec_obj192) { come_call_finalizer(sType_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                                        if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value433;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional488=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional488) {
                                        __dec_obj193=result_275->array_initializer;
                                        result_275->array_initializer=(char*)come_increment_ref_count(((char*)(right_value434=string_clone(self->array_initializer))));
                                        if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value434);
                                        if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { right_value434 = come_decrement_ref_count(right_value434, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value434;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional489=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional489) {
                                        result_275->alloc=self->alloc;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional490=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional490) {
                                        result_275->sline=self->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional491=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional491) {
                                        __dec_obj194=result_275->sname;
                                        result_275->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(self->sname))));
                                        if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value435);
                                        if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value435;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result183__ = __result_obj__ = result_275;
                                    if(result_275 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result183__;
                                    __freed_obj__ = 0;
                                    if(result_275 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional492;
_Bool _if_conditional493;
struct sNode* __result185__;
struct sNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional492=!self->v2,        __freed_obj__ = 0, 
        _if_conditional492) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional493=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional493) {
                __result185__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result185__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result186__ = __result_obj__ = self->v1;
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
}

void method_block1_07varc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value440;
void* right_value441;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
        if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value440;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count(((struct optional$2voidpbool*)(right_value441=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value440=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1296))),((void*)0),(_Bool)0))));
        return;        __freed_obj__ = 0;
}

