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
struct sReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentBreakNode
{
    int sline;
    char* sname;
};
struct sParentContinueNode
{
    int sline;
    char* sname;
};
struct sDerefferenceNode
{
    struct sNode* value;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRefferenceNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sReverseNode
{
    struct sNode* value;
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

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

void come_init_v5();

void come_final_v5();

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

static void sReturnNode_finalize(struct sReturnNode* self);
int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_kind();

_Bool sReturnNode_terminated();

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

static void sLineNode_finalize(struct sLineNode* self);
int sLineNode_sline(struct sLineNode* self, struct sInfo* info);

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info);

_Bool sLineNode_terminated();

char* sLineNode_kind();

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

static void sSNameNode_finalize(struct sSNameNode* self);
int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info);

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info);

_Bool sSNameNode_terminated();

char* sSNameNode_kind();

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

static void sFuncNode_finalize(struct sFuncNode* self);
int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info);

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info);

_Bool sFuncNode_terminated();

char* sFuncNode_kind();

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info);

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info);

_Bool sCallerFuncNode_terminated();

char* sCallerFuncNode_kind();

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

static void sCallerLineNode_finalize(struct sCallerLineNode* self);
int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_terminated();

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind();

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_terminated();

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind();

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

static void sParentReturnNode_finalize(struct sParentReturnNode* self);
int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info);

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info);

_Bool sParentReturnNode_terminated();

char* sParentReturnNode_kind();

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info);

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info);

static void sParentBreakNode_finalize(struct sParentBreakNode* self);
int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info);

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info);

_Bool sParentBreakNode_terminated();

char* sParentBreakNode_kind();

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info);

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info);

static void sParentContinueNode_finalize(struct sParentContinueNode* self);
int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info);

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info);

_Bool sParentContinueNode_terminated();

char* sParentContinueNode_kind();

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info);

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info);

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info);

_Bool sDerefferenceNode_terminated();

char* sDerefferenceNode_kind();

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

static void sRefferenceNode_finalize(struct sRefferenceNode* self);
int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info);

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info);

_Bool sRefferenceNode_terminated();

char* sRefferenceNode_kind();

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

static void sReverseNode_finalize(struct sReverseNode* self);
int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info);

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info);

_Bool sReverseNode_terminated();

char* sReverseNode_kind();

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

int main(int argc, char** argv);

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
    (come_push_stackframe("./comelang2.h", 106),perror(msg),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 107),stackframe(),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 108),exit(4),come_pop_stackframe());
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1995))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1995))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->memory, "./comelang2.h", 1996))->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2005))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2005))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->memory, "./comelang2.h", 2006))->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2015))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2015))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->memory, "./comelang2.h", 2016))->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2025))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2025))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->memory, "./comelang2.h", 2026))->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2035))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2035))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->memory, "./comelang2.h", 2036))->buf;
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

void come_init_v5(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v5(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
_Bool _if_conditional92;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
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
_Bool __exception_result_var_b23;
_Bool _if_conditional115;
void* right_value62;
struct tuple2$2sFunpcharph* __exception_result_var_b24;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_45;
char* fun_name_46;
void* right_value63;
struct tuple2$2sFunpcharph* __exception_result_var_b25;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun2_47;
char* fun_name2_48;
_Bool __exception_result_var_b26;
_Bool _if_conditional117;
void* right_value64;
struct tuple2$2sFunpcharph* __exception_result_var_b27;
struct tuple2$2sFunpcharph* multiple_assgin_var3;
struct sFun* fun_49;
char* fun_name_50;
void* right_value65;
struct tuple2$2sFunpcharph* __exception_result_var_b28;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun2_51;
char* fun_name2_52;
void* right_value66;
struct optional$2sFunpbool* __exception_result_var_b29;
void* right_value67;
char* __exception_result_var_b30;
char* __dec_obj30;
int i_53;
_Bool _for_condtionalA1;
void* right_value68;
char* __exception_result_var_b31;
char* new_fun_name_54;
void* right_value69;
struct optional$2sFunpbool* __exception_result_var_b32;
_Bool _if_conditional118;
void* right_value70;
char* __exception_result_var_b33;
char* __dec_obj31;
_Bool _if_conditional119;
void* right_value71;
struct optional$2sFunpbool* __exception_result_var_b34;
_Bool result_55;
_Bool _if_conditional120;
void* right_value72;
struct CVALUE* come_value_56;
char* left_value2_57;
void* right_value73;
void* right_value74;
void* right_value79;
struct optional$2sTypephbool* __exception_result_var_b36;
void* right_value80;
struct optional$2sTypephbool* __exception_result_var_b38;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __dec_obj33;
_Bool _if_conditional130;
void* right_value81;
char* __exception_result_var_b39;
char* __dec_obj34;
_Bool _if_conditional131;
void* right_value82;
char* __exception_result_var_b40;
char* __dec_obj35;
void* right_value83;
char* __exception_result_var_b41;
char* __dec_obj36;
_Bool _if_conditional132;
void* right_value84;
char* __exception_result_var_b42;
char* __dec_obj37;
void* right_value85;
char* __exception_result_var_b43;
char* __dec_obj38;
void* right_value86;
char* __dec_obj39;
void* right_value87;
char* __exception_result_var_b44;
char* __dec_obj40;
void* right_value88;
struct sType* type2_62;
void* right_value89;
struct sType* __exception_result_var_b45;
struct sType* type3_63;
void* right_value90;
struct sType* __dec_obj41;
_Bool _if_conditional133;
void* right_value91;
char* __exception_result_var_b46;
char* __dec_obj42;
_Bool _if_conditional134;
void* right_value92;
char* __exception_result_var_b47;
char* __dec_obj43;
struct list$1CVALUEph* __exception_result_var_b48;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
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
memset(&fun_45, 0, sizeof(struct sFun*));
memset(&fun_name_46, 0, sizeof(char*));
memset(&fun_45, 0, sizeof(struct sFun*));
memset(&fun_name_46, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&fun2_47, 0, sizeof(struct sFun*));
memset(&fun_name2_48, 0, sizeof(char*));
memset(&fun2_47, 0, sizeof(struct sFun*));
memset(&fun_name2_48, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
memset(&right_value65, 0, sizeof(void*));
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&i_53, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&new_fun_name_54, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&result_55, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&left_value2_57, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
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
memset(&type2_62, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&type3_63, 0, sizeof(struct sType*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_29, "b.c", 14))->mNoSolvedGenericsType, "b.c", 14))->v1,    __freed_obj__ = 0, 
    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_29, "b.c", 15))->mNoSolvedGenericsType, "b.c", 15))->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional92=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "b.c", 18))->mNoSolvedGenericsType, "b.c", 18))->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "b.c", 19))->mNoSolvedGenericsType, "b.c", 19))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_30=((struct sType*)come_null_check(type, "b.c", 21))->mClass;
    __freed_obj__ = 0;
    class_name_31=((struct sClass*)come_null_check(klass_30, "b.c", 22))->mName;
    __freed_obj__ = 0;
    operator_fun_32=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional93=(come_push_stackframe("b.c", 27),__exception_result_var_b7=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "b.c", 27))->mGenericsTypes, "b.c", 27))), come_pop_stackframe(), __exception_result_var_b7)>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count((come_push_stackframe("b.c", 28),__exception_result_var_b8=((char*)(right_value45=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "b.c", 28))->mClass, "b.c", 28))->mName))), come_pop_stackframe(), __exception_result_var_b8));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 30),__exception_result_var_b9=((struct sType*)(right_value46=solve_generics(type,((struct sInfo*)come_null_check(info, "b.c", 30))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b9));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count((come_push_stackframe("b.c", 32),__exception_result_var_b10=((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))), come_pop_stackframe(), __exception_result_var_b10));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count((come_push_stackframe("b.c", 33),__exception_result_var_b11=((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))), come_pop_stackframe(), __exception_result_var_b11));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=(come_push_stackframe("b.c", 35),__exception_result_var_b15=((struct sGenericsFun*)(right_value50=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 35))->generics_funcs, "b.c", 35)),fun_name3_36,((void*)0)))), come_pop_stackframe(), __exception_result_var_b15);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_40,        __freed_obj__ = 0, 
        _if_conditional108) {
            if(_if_conditional109=!(come_push_stackframe("b.c", 39),__exception_result_var_b17=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("b.c", 39),__exception_result_var_b16=((char*)(right_value51=__builtin_string(fun_name2_33))), come_pop_stackframe(), __exception_result_var_b16)),generics_fun_40,obj_type_35,info), come_pop_stackframe(), __exception_result_var_b17),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
            (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value51, 
            __freed_obj__ = 0, 
            _if_conditional109) {
                __result38__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            operator_fun_32=optional$2sFunpbool_value((come_push_stackframe("b.c", 43),__exception_result_var_b21=((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "b.c", 43))->funcs,fun_name2_33))), come_pop_stackframe(), __exception_result_var_b21));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value61;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional115=(come_push_stackframe("b.c", 46),__exception_result_var_b23=charp_operator_equals(fun_name,"operator_equals"), come_pop_stackframe(), __exception_result_var_b23),            __freed_obj__ = 0, 
            _if_conditional115) {
                multiple_assgin_var1=(come_push_stackframe("b.c", 47),__exception_result_var_b24=((struct tuple2$2sFunpcharph*)(right_value62=create_equals_automatically(obj_type_35,"equals",info))), come_pop_stackframe(), __exception_result_var_b24);
                fun_45=multiple_assgin_var1->v1;
                fun_name_46=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                multiple_assgin_var2=(come_push_stackframe("b.c", 48),__exception_result_var_b25=((struct tuple2$2sFunpcharph*)(right_value63=create_operator_equals_automatically(obj_type_35,"operator_equals",info))), come_pop_stackframe(), __exception_result_var_b25);
                fun2_47=multiple_assgin_var2->v1;
                fun_name2_48=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value63;
                __freed_obj__ = 0;
                operator_fun_32=fun2_47;
                __freed_obj__ = 0;
                if(fun_name_46 && !__freed_obj__) { fun_name_46 = come_decrement_ref_count(fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_48 && !__freed_obj__) { fun_name2_48 = come_decrement_ref_count(fun_name2_48, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional117=(come_push_stackframe("b.c", 52),__exception_result_var_b26=charp_operator_equals(fun_name,"operator_not_equals"), come_pop_stackframe(), __exception_result_var_b26),                __freed_obj__ = 0, 
                _if_conditional117) {
                    multiple_assgin_var3=(come_push_stackframe("b.c", 53),__exception_result_var_b27=((struct tuple2$2sFunpcharph*)(right_value64=create_equals_automatically(obj_type_35,"not_equals",info))), come_pop_stackframe(), __exception_result_var_b27);
                    fun_49=multiple_assgin_var3->v1;
                    fun_name_50=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                    multiple_assgin_var4=(come_push_stackframe("b.c", 54),__exception_result_var_b28=((struct tuple2$2sFunpcharph*)(right_value65=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info))), come_pop_stackframe(), __exception_result_var_b28);
                    fun2_51=multiple_assgin_var4->v1;
                    fun_name2_52=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value65);
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value65;
                    __freed_obj__ = 0;
                    operator_fun_32=fun2_51;
                    __freed_obj__ = 0;
                    if(fun_name_50 && !__freed_obj__) { fun_name_50 = come_decrement_ref_count(fun_name_50, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_52 && !__freed_obj__) { fun_name2_52 = come_decrement_ref_count(fun_name2_52, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    operator_fun_32=optional$2sFunpbool_value((come_push_stackframe("b.c", 59),__exception_result_var_b29=((struct optional$2sFunpbool*)(right_value66=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "b.c", 59))->funcs,fun_name2_33))), come_pop_stackframe(), __exception_result_var_b29));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count((come_push_stackframe("b.c", 64),__exception_result_var_b30=((char*)(right_value67=create_method_name(type,(_Bool)0,fun_name,info))), come_pop_stackframe(), __exception_result_var_b30));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_53=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_53>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_53-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_54=(char*)come_increment_ref_count((come_push_stackframe("b.c", 68),__exception_result_var_b31=((char*)(right_value68=xsprintf("%s_v%d",fun_name2_33,i_53))), come_pop_stackframe(), __exception_result_var_b31));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
            operator_fun_32=optional$2sFunpbool_value((come_push_stackframe("b.c", 69),__exception_result_var_b32=((struct optional$2sFunpbool*)(right_value69=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "b.c", 69))->funcs,new_fun_name_54))), come_pop_stackframe(), __exception_result_var_b32));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value69;
            __freed_obj__ = 0;
            if(_if_conditional118=operator_fun_32,            __freed_obj__ = 0, 
            _if_conditional118) {
                __dec_obj31=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count((come_push_stackframe("b.c", 72),__exception_result_var_b33=((char*)(right_value70=__builtin_string(new_fun_name_54))), come_pop_stackframe(), __exception_result_var_b33));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value70;
                __freed_obj__ = 0;
                if(new_fun_name_54 && !__freed_obj__) { new_fun_name_54 = come_decrement_ref_count(new_fun_name_54, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_54 && !__freed_obj__) { new_fun_name_54 = come_decrement_ref_count(new_fun_name_54, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional119=operator_fun_32==((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            operator_fun_32=optional$2sFunpbool_value((come_push_stackframe("b.c", 78),__exception_result_var_b34=((struct optional$2sFunpbool*)(right_value71=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "b.c", 78))->funcs,fun_name2_33))), come_pop_stackframe(), __exception_result_var_b34));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_55=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional120=operator_fun_32,    __freed_obj__ = 0, 
    _if_conditional120) {
        come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 85))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value72;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 87),check_assign_type(((char*)(right_value74=xsprintf("\%s is assigned to",((char*)(right_value73=string_to_string(fun_name2_33)))))),optional$2sTypephbool_value((come_push_stackframe("b.c", 87),__exception_result_var_b36=((struct optional$2sTypephbool*)(right_value79=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_32, "b.c", 87))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_b36)),((struct CVALUE*)come_null_check(left_value, "b.c", 87))->type,left_value,(_Bool)0,info),come_pop_stackframe());
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value73;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value74;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value79;
        __freed_obj__ = 0;
        if(_if_conditional127=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("b.c", 88),__exception_result_var_b38=((struct optional$2sTypephbool*)(right_value80=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_32, "b.c", 88))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_b38)), "b.c", 88))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 88))->type, "b.c", 88))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value80),
        (right_value80 && right_value80 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[4] = right_value80, 
        __freed_obj__ = 0, 
        _if_conditional127) {
            if(_if_conditional128=((struct CVALUE*)come_null_check(left_value, "b.c", 89))->var,            __freed_obj__ = 0, 
            _if_conditional128) {
                if(_if_conditional129=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 90))->var, "b.c", 90))->mType, "b.c", 90))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                    __dec_obj33=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 91))->var, "b.c", 91))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 91))->var, "b.c", 91))->mCValueName=((void*)0);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional130=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 93))->var, "b.c", 93))->mType, "b.c", 93))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __dec_obj34=((struct CVALUE*)come_null_check(left_value, "b.c", 94))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "b.c", 94))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 94),__exception_result_var_b39=((char*)(right_value81=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "b.c", 94))->type,((struct CVALUE*)come_null_check(left_value, "b.c", 94))->c_value,info))), come_pop_stackframe(), __exception_result_var_b39));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value81;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional131=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 96))->var, "b.c", 96))->mType, "b.c", 96))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional131) {
                            __dec_obj35=((struct CVALUE*)come_null_check(left_value, "b.c", 97))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "b.c", 97))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 97),__exception_result_var_b40=((char*)(right_value82=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "b.c", 97))->type,((struct CVALUE*)come_null_check(left_value, "b.c", 97))->c_value,info))), come_pop_stackframe(), __exception_result_var_b40));
                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value82;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj36=((struct CVALUE*)come_null_check(left_value, "b.c", 100))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "b.c", 100))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 100),__exception_result_var_b41=((char*)(right_value83=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "b.c", 100))->type,((struct CVALUE*)come_null_check(left_value, "b.c", 100))->c_value,info))), come_pop_stackframe(), __exception_result_var_b41));
                            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value83;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional132=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "b.c", 104))->type, "b.c", 104))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
                }
                else {
                    __dec_obj37=((struct CVALUE*)come_null_check(left_value, "b.c", 107))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "b.c", 107))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 107),__exception_result_var_b42=((char*)(right_value84=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "b.c", 107))->type,((struct CVALUE*)come_null_check(left_value, "b.c", 107))->c_value,info))), come_pop_stackframe(), __exception_result_var_b42));
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value84;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj38=left_value2_57;
            left_value2_57=(char*)come_increment_ref_count((come_push_stackframe("b.c", 110),__exception_result_var_b43=((char*)(right_value85=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "b.c", 110))->c_value))), come_pop_stackframe(), __exception_result_var_b43));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value85;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj39=left_value2_57;
            left_value2_57=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(((struct CVALUE*)come_null_check(left_value, "b.c", 113))->c_value))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value86;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj40=((struct CVALUE*)come_null_check(come_value_56, "b.c", 116))->c_value;
        ((struct CVALUE*)come_null_check(come_value_56, "b.c", 116))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 116),__exception_result_var_b44=((char*)(right_value87=xsprintf("%s(%s)",fun_name2_33,left_value2_57))), come_pop_stackframe(), __exception_result_var_b44));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value87;
        __freed_obj__ = 0;
        type2_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(((struct sFun*)come_null_check(operator_fun_32, "b.c", 118))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value88;
        __freed_obj__ = 0;
        type3_63=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 120),__exception_result_var_b45=((struct sType*)(right_value89=solve_generics(type2_62,generics_type_29,info))), come_pop_stackframe(), __exception_result_var_b45));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value89;
        __freed_obj__ = 0;
        __dec_obj41=((struct CVALUE*)come_null_check(come_value_56, "b.c", 122))->type;
        ((struct CVALUE*)come_null_check(come_value_56, "b.c", 122))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type3_63))));
        if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value90;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_56, "b.c", 123))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional133=((struct sType*)come_null_check(type3_63, "b.c", 125))->mHeap,        __freed_obj__ = 0, 
        _if_conditional133) {
            __dec_obj42=((struct CVALUE*)come_null_check(come_value_56, "b.c", 126))->c_value;
            ((struct CVALUE*)come_null_check(come_value_56, "b.c", 126))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 126),__exception_result_var_b46=((char*)(right_value91=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_56, "b.c", 126))->c_value,(struct sType*)come_increment_ref_count(type3_63),info))), come_pop_stackframe(), __exception_result_var_b46));
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional134=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_32, "b.c", 129))->mResultType, "b.c", 129))->mException||gComeDebug,        __freed_obj__ = 0, 
        _if_conditional134) {
            __dec_obj43=((struct CVALUE*)come_null_check(come_value_56, "b.c", 130))->c_value;
            ((struct CVALUE*)come_null_check(come_value_56, "b.c", 130))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 130),__exception_result_var_b47=((char*)(right_value92=append_exception_value(((struct CVALUE*)come_null_check(come_value_56, "b.c", 130))->c_value,((struct CVALUE*)come_null_check(come_value_56, "b.c", 130))->type,info))), come_pop_stackframe(), __exception_result_var_b47));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value92;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 133),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_56, "b.c", 133))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 135),__exception_result_var_b48=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 135))->stack, "b.c", 135)),(struct CVALUE*)come_increment_ref_count(come_value_56)), come_pop_stackframe(), __exception_result_var_b48);
        __freed_obj__ = 0;
        result_55=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_57 && !__freed_obj__) { left_value2_57 = come_decrement_ref_count(left_value2_57, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result52__ = result_55;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
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
                    it_6=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 172))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_6!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_7=it_6;
                        __freed_obj__ = 0;
                        it_6=((struct list_item$1sTypeph*)come_null_check(it_6, "./comelang2.h", 175))->next;
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
                    it_8=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 172))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_8!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_9=it_8;
                        __freed_obj__ = 0;
                        it_8=((struct list_item$1sNodeph*)come_null_check(it_8, "./comelang2.h", 175))->next;
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
                    it_10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 172))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_10!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_11=it_10;
                        __freed_obj__ = 0;
                        it_10=((struct list_item$1charph*)come_null_check(it_10, "./comelang2.h", 175))->next;
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
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 191),__exception_result_var_b1=((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 191))), "./comelang2.h", 191)))))), come_pop_stackframe(), __exception_result_var_b1));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 193))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    (come_push_stackframe("./comelang2.h", 195),__exception_result_var_b2=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 195)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 195))->item))))), come_pop_stackframe(), __exception_result_var_b2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 197))->next;
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
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 153))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 154))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->len=0;
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
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 204))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 205))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 207))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 208))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 209))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 209))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 211))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 212))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 215))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 217))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 217))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 218))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 219))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 219))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 222))->head, "./comelang2.h", 222))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 227))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 227))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 228))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 229))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 229))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail, "./comelang2.h", 231))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->len++;
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
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 191),__exception_result_var_b3=((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 191))), "./comelang2.h", 191)))))), come_pop_stackframe(), __exception_result_var_b3));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 193))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    (come_push_stackframe("./comelang2.h", 195),__exception_result_var_b4=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 195)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 195))->item))))), come_pop_stackframe(), __exception_result_var_b4);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 197))->next;
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
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 153))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 154))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->len=0;
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
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 204))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 205))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 207))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 208))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 209))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 209))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 211))->tail=litem_20;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 212))->head=litem_20;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 215))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 217))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 217))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 218))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 219))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 219))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->tail=litem_21;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 222))->head, "./comelang2.h", 222))->next=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 225))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 227))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 227))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 228))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 229))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 229))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail, "./comelang2.h", 231))->next=litem_22;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->tail=litem_22;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->len++;
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
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 191),__exception_result_var_b5=((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 191))), "./comelang2.h", 191)))))), come_pop_stackframe(), __exception_result_var_b5));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 193))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_25!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    (come_push_stackframe("./comelang2.h", 195),__exception_result_var_b6=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 195)),(char*)come_increment_ref_count(((char*)(right_value37=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 195))->item))))), come_pop_stackframe(), __exception_result_var_b6);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 197))->next;
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
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 153))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 154))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->len=0;
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
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 204))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 205))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 207))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 208))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj19=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 209))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 209))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 211))->tail=litem_26;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 212))->head=litem_26;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 215))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 217))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 217))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 218))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj20=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 219))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 219))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->tail=litem_27;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 222))->head, "./comelang2.h", 222))->next=litem_27;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 227))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 227))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 228))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj21=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 229))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 229))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail, "./comelang2.h", 231))->next=litem_28;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->tail=litem_28;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->len++;
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
        __result31__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 413))->len;
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
            hash_37=(come_push_stackframe("./comelang2.h", 1261),__exception_result_var_b12=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1261))), come_pop_stackframe(), __exception_result_var_b12)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1261))->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional94=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1265))->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1267),__exception_result_var_b13=((struct optional$2boolbool*)(right_value49=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1267))->keys[it_38], "./comelang2.h", 1267)),key))), come_pop_stackframe(), __exception_result_var_b13)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result34__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->items[it_38];
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_38>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1274))->size,                    __freed_obj__ = 0, 
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
                (come_push_stackframe("./comelang2.h", 1588),__exception_result_var_b18=memset(&default_value_41,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b18);
                __freed_obj__ = 0;
                hash_42=(come_push_stackframe("./comelang2.h", 1590),__exception_result_var_b19=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1590))), come_pop_stackframe(), __exception_result_var_b19)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1590))->size;
                __freed_obj__ = 0;
                it_43=hash_42;
                __freed_obj__ = 0;
                while(_while_condtional8=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional8) {
                    if(_if_conditional110=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1594))->item_existance[it_43],                    __freed_obj__ = 0, 
                    _if_conditional110) {
                        if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1596),__exception_result_var_b20=((struct optional$2boolbool*)(right_value52=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1596))->keys[it_43], "./comelang2.h", 1596)),key))), come_pop_stackframe(), __exception_result_var_b20)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
                        (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value52, 
                        __freed_obj__ = 0, 
                        _if_conditional111) {
                            __result40__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value54=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value53=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1598)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1598))->items[it_43],(_Bool)1)));
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
                        if(_if_conditional112=it_43>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional112) {
                            it_43=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional113=it_43==hash_42,                            __freed_obj__ = 0, 
                            _if_conditional113) {
                                __result41__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1607), ((struct optional$2sFunpbool*)(right_value56=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value55=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1607))),default_value_41,(_Bool)0))));
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
                        __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1611), ((struct optional$2sFunpbool*)(right_value58=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value57=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1611))),default_value_41,(_Bool)0))));
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
                __result43__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1615), ((struct optional$2sFunpbool*)(right_value60=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value59=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1615))),default_value_41,(_Bool)0))));
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
                if(_if_conditional114=self==((void*)0),                __freed_obj__ = 0, 
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional116=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional116) {
                        if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional121=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional122=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional122) {
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
_Bool _if_conditional123;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional9;
_Bool _if_conditional124;
void* right_value75;
void* right_value76;
struct optional$2sTypephbool* __result47__;
struct sType* default_value_60;
void* __exception_result_var_b35;
void* right_value77;
void* right_value78;
struct optional$2sTypephbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&default_value_60, 0, sizeof(struct sType*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
            if(_if_conditional123=position<0,            __freed_obj__ = 0, 
            _if_conditional123) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_58=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 741))->head;
            __freed_obj__ = 0;
            i_59=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_58!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional124=position==i_59,                __freed_obj__ = 0, 
                _if_conditional124) {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value76=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value75=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 745)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_58, "./comelang2.h", 745))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value75;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_58=((struct list_item$1sTypeph*)come_null_check(it_58, "./comelang2.h", 747))->next;
                __freed_obj__ = 0;
                i_59++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 752),__exception_result_var_b35=memset(&default_value_60,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b35);
            __freed_obj__ = 0;
            __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 753), ((struct optional$2sTypephbool*)(right_value78=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value77=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 753))),(struct sType*)come_increment_ref_count(default_value_60),(_Bool)0))));
            if(default_value_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value78;
            __freed_obj__ = 0;
            return __result48__;
            __freed_obj__ = 0;
            if(default_value_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional125=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional125) {
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
_Bool _if_conditional126;
struct sType* default_value_61;
void* __exception_result_var_b37;
struct sType* __result49__;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_61, 0, sizeof(struct sType*));
            if(_if_conditional126=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional126) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b37=memset(&default_value_61,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b37);
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = default_value_61;
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
_Bool _if_conditional135;
void* right_value93;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj44;
_Bool _if_conditional137;
void* right_value94;
struct list_item$1CVALUEph* litem_65;
struct CVALUE* __dec_obj45;
void* right_value95;
struct list_item$1CVALUEph* litem_66;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional135=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 274))->len==0,            __freed_obj__ = 0, 
            _if_conditional135) {
                litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 275))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value93;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_64, "./comelang2.h", 277))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_64, "./comelang2.h", 278))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj44=((struct list_item$1CVALUEph*)come_null_check(litem_64, "./comelang2.h", 279))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_64, "./comelang2.h", 279))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 281))->tail=litem_64;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 282))->head=litem_64;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional137=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->len==1,                __freed_obj__ = 0, 
                _if_conditional137) {
                    litem_65=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value94=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 285))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_65, "./comelang2.h", 287))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 287))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_65, "./comelang2.h", 288))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj45=((struct list_item$1CVALUEph*)come_null_check(litem_65, "./comelang2.h", 289))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_65, "./comelang2.h", 289))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 291))->tail=litem_65;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 292))->head, "./comelang2.h", 292))->next=litem_65;
                    __freed_obj__ = 0;
                }
                else {
                    litem_66=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value95=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 295))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value95;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_66, "./comelang2.h", 297))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 297))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_66, "./comelang2.h", 298))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj46=((struct list_item$1CVALUEph*)come_null_check(litem_66, "./comelang2.h", 299))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_66, "./comelang2.h", 299))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 301))->tail, "./comelang2.h", 301))->next=litem_66;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->tail=litem_66;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 305))->len++;
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
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional136=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj47;
void* right_value96;
char* __dec_obj48;
void* right_value97;
char* __exception_result_var_b49;
char* __dec_obj49;
struct sReturnNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
    __dec_obj47=((struct sReturnNode*)come_null_check(self, "b.c", 153))->value;
    ((struct sReturnNode*)come_null_check(self, "b.c", 153))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sReturnNode*)come_null_check(self, "b.c", 154))->value_source;
    ((struct sReturnNode*)come_null_check(self, "b.c", 154))->value_source=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(value_source))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    ((struct sReturnNode*)come_null_check(self, "b.c", 156))->sline=((struct sInfo*)come_null_check(info, "b.c", 156))->sline;
    __freed_obj__ = 0;
    __dec_obj49=((struct sReturnNode*)come_null_check(self, "b.c", 157))->sname;
    ((struct sReturnNode*)come_null_check(self, "b.c", 157))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 157),__exception_result_var_b49=((char*)(right_value97=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 157))->sname))), come_pop_stackframe(), __exception_result_var_b49));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value97;
    __freed_obj__ = 0;
    __result53__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    if(value_source && !__freed_obj__) { value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    if(value_source && !__freed_obj__) { value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 1, 0); }
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional138=self!=((void*)0)&&((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional138) {
            if(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value && !__freed_obj__) { ((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value = come_decrement_ref_count(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value, ((struct sNode*)((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional139=self!=((void*)0)&&((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional139) {
            if(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional140=self!=((void*)0)&&((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional140) {
            if(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2))->sname && !__freed_obj__) { ((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2))->sname = come_decrement_ref_count(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result54__ = ((struct sReturnNode*)come_null_check(self, "b.c", 164))->sline;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
char* __exception_result_var_b50;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
    __result55__ = __result_obj__ = (come_push_stackframe("b.c", 169),__exception_result_var_b50=((char*)(right_value98=__builtin_string(((struct sReturnNode*)come_null_check(self, "b.c", 169))->sname))), come_pop_stackframe(), __exception_result_var_b50);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

char* sReturnNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value99;
char* __exception_result_var_b51;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
    __result56__ = __result_obj__ = (come_push_stackframe("b.c", 174),__exception_result_var_b51=((char*)(right_value99=__builtin_string("sReturnNode"))), come_pop_stackframe(), __exception_result_var_b51);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

_Bool sReturnNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional141;
struct sFun* come_fun_67;
void* right_value100;
struct sType* result_type_68;
void* right_value101;
struct sType* __exception_result_var_b52;
struct sType* result_type2_69;
struct sType* result_type3_70;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value102;
struct sNode* __exception_result_var_b53;
struct sNode* node_71;
_Bool __exception_result_var_b54;
_Bool _if_conditional144;
_Bool __result58__;
_Bool __exception_result_var_b55;
_Bool _if_conditional145;
_Bool __result59__;
void* right_value103;
struct CVALUE* __exception_result_var_b56;
struct CVALUE* come_value_72;
_Bool _if_conditional146;
int __exception_result_var_b57;
int right_value_id_73;
_Bool _if_conditional147;
void* right_value104;
struct sType* __exception_result_var_b58;
struct sType* come_value_type_74;
static int num_result_75=0;
void* right_value105;
char* __exception_result_var_b59;
char* var_name_76;
int num_result_stack_77;
_Bool _if_conditional148;
void* right_value106;
struct optional$2charphbool* __exception_result_var_b60;
void* right_value107;
struct optional$2charphbool* __exception_result_var_b62;
_Bool __exception_result_var_b63;
_Bool _if_conditional151;
void* right_value108;
char* __exception_result_var_b64;
struct sFun* come_fun_79;
_Bool __exception_result_var_b65;
_Bool _if_conditional152;
void* right_value109;
char* __exception_result_var_b66;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_67, 0, sizeof(struct sFun*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_type_68, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_type2_69, 0, sizeof(struct sType*));
memset(&result_type3_70, 0, sizeof(struct sType*));
memset(&right_value102, 0, sizeof(void*));
memset(&node_71, 0, sizeof(struct sNode*));
memset(&right_value103, 0, sizeof(void*));
memset(&come_value_72, 0, sizeof(struct CVALUE*));
memset(&right_value_id_73, 0, sizeof(int));
memset(&right_value104, 0, sizeof(void*));
memset(&come_value_type_74, 0, sizeof(struct sType*));
memset(&right_value105, 0, sizeof(void*));
memset(&var_name_76, 0, sizeof(char*));
memset(&num_result_stack_77, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&come_fun_79, 0, sizeof(struct sFun*));
memset(&right_value109, 0, sizeof(void*));
    if(_if_conditional141=((struct sReturnNode*)come_null_check(self, "b.c", 184))->value,    __freed_obj__ = 0, 
    _if_conditional141) {
        come_fun_67=((struct sInfo*)come_null_check(info, "b.c", 185))->come_fun;
        __freed_obj__ = 0;
        result_type_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(((struct sFun*)come_null_check(come_fun_67, "b.c", 187))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value100;
        __freed_obj__ = 0;
        result_type2_69=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 189),__exception_result_var_b52=((struct sType*)(right_value101=solve_generics(result_type_68,((struct sInfo*)come_null_check(info, "b.c", 189))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b52));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value101;
        __freed_obj__ = 0;
        result_type3_70=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_69, "b.c", 191))->mNoSolvedGenericsType, "b.c", 191))->v1;
        __freed_obj__ = 0;
        if(_if_conditional142=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_69, "b.c", 192))->mNoSolvedGenericsType, "b.c", 192))->v1,        __freed_obj__ = 0, 
        _if_conditional142) {
            result_type3_70=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_69, "b.c", 193))->mNoSolvedGenericsType, "b.c", 193))->v1;
            __freed_obj__ = 0;
        }
        else {
            result_type3_70=result_type2_69;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional143=((struct sType*)come_null_check(result_type3_70, "b.c", 199))->mException,        __freed_obj__ = 0, 
        _if_conditional143) {
            node_71=(struct sNode*)come_increment_ref_count((come_push_stackframe("b.c", 200),__exception_result_var_b53=((struct sNode*)(right_value102=create_some_object((struct sNode*)come_increment_ref_count(((struct sReturnNode*)come_null_check(self, "b.c", 200))->value),info))), come_pop_stackframe(), __exception_result_var_b53));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value102;
            __freed_obj__ = 0;
            if(_if_conditional144=!(come_push_stackframe("b.c", 202),__exception_result_var_b54=node_compile(node_71,info), come_pop_stackframe(), __exception_result_var_b54),            __freed_obj__ = 0, 
            _if_conditional144) {
                __result58__ = (_Bool)0;
                if(node_71 && !__freed_obj__) { node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0, 0); } 
                if(result_type_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result58__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(node_71 && !__freed_obj__) { node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional145=!(come_push_stackframe("b.c", 207),__exception_result_var_b55=node_compile(((struct sReturnNode*)come_null_check(self, "b.c", 207))->value,info), come_pop_stackframe(), __exception_result_var_b55),            __freed_obj__ = 0, 
            _if_conditional145) {
                __result59__ = (_Bool)0;
                if(result_type_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result59__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_72=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("b.c", 212),__exception_result_var_b56=((struct CVALUE*)(right_value103=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b56));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value103;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 213),dec_stack_ptr(1,info),come_pop_stackframe());
        __freed_obj__ = 0;
        if(_if_conditional146=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_72, "b.c", 215))->type, "b.c", 215))->mHeap&&((struct CVALUE*)come_null_check(come_value_72, "b.c", 215))->var==((void*)0),        __freed_obj__ = 0, 
        _if_conditional146) {
            right_value_id_73=(come_push_stackframe("b.c", 216),__exception_result_var_b57=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_72, "b.c", 216))->c_value)), come_pop_stackframe(), __exception_result_var_b57);
            __freed_obj__ = 0;
            if(_if_conditional147=right_value_id_73!=-1,            __freed_obj__ = 0, 
            _if_conditional147) {
                (come_push_stackframe("b.c", 219),remove_object_from_right_values(right_value_id_73,info),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_type_74=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 223),__exception_result_var_b58=((struct sType*)(right_value104=solve_generics(((struct CVALUE*)come_null_check(come_value_72, "b.c", 223))->type,((struct sInfo*)come_null_check(info, "b.c", 223))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b58));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value104;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        var_name_76=(char*)come_increment_ref_count((come_push_stackframe("b.c", 226),__exception_result_var_b59=((char*)(right_value105=xsprintf("__result%d__",++num_result_75))), come_pop_stackframe(), __exception_result_var_b59));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value105;
        __freed_obj__ = 0;
        num_result_stack_77=num_result_75;
        __freed_obj__ = 0;
        if(_if_conditional148=((struct sType*)come_null_check(result_type2_69, "b.c", 228))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional148) {
            (come_push_stackframe("b.c", 229),add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("b.c", 229),__exception_result_var_b60=((struct optional$2charphbool*)(right_value106=make_define_var(result_type2_69,var_name_76,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b60))),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
            (come_push_stackframe("b.c", 230),add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_76,((struct CVALUE*)come_null_check(come_value_72, "b.c", 230))->c_value),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("b.c", 233),add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("b.c", 233),__exception_result_var_b62=((struct optional$2charphbool*)(right_value107=make_define_var(result_type2_69,var_name_76,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b62))),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value107;
            __freed_obj__ = 0;
            (come_push_stackframe("b.c", 234),add_come_code(info,"%s = %s;\n",var_name_76,((struct CVALUE*)come_null_check(come_value_72, "b.c", 234))->c_value),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 236),add_last_code_to_source(info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 238),free_objects_on_return(((struct sFun*)come_null_check(come_fun_67, "b.c", 238))->mBlock,info,((struct CVALUE*)come_null_check(come_value_72, "b.c", 238))->var,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 239),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 241),caller_end(info),come_pop_stackframe());
        __freed_obj__ = 0;
        if(_if_conditional151=(come_push_stackframe("b.c", 243),__exception_result_var_b63=string_operator_equals(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 243))->come_fun, "b.c", 243))->mName,"main"), come_pop_stackframe(), __exception_result_var_b63),        __freed_obj__ = 0, 
        _if_conditional151) {
            (come_push_stackframe("b.c", 244),free_objects(((struct sInfo*)come_null_check(info, "b.c", 244))->gv_table,((void*)0),info),come_pop_stackframe());
            __freed_obj__ = 0;
            (come_push_stackframe("b.c", 245),add_come_code(info,(come_push_stackframe("b.c", 245),__exception_result_var_b64=((char*)(right_value108=xsprintf("come_heap_final();\n"))), come_pop_stackframe(), __exception_result_var_b64)),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value108;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 248),add_come_code(info,"return __result%d__;\n",num_result_stack_77),come_pop_stackframe());
        __freed_obj__ = 0;
        if(result_type_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_69, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_72 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,come_value_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_76 && !__freed_obj__) { var_name_76 = come_decrement_ref_count(var_name_76, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        come_fun_79=((struct sInfo*)come_null_check(info, "b.c", 251))->come_fun;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 252),caller_end(info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 254),add_last_code_to_source(info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 255),free_objects_on_return(((struct sFun*)come_null_check(come_fun_79, "b.c", 255))->mBlock,info,((void*)0),(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 256),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        if(_if_conditional152=(come_push_stackframe("b.c", 258),__exception_result_var_b65=string_operator_equals(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 258))->come_fun, "b.c", 258))->mName,"main"), come_pop_stackframe(), __exception_result_var_b65),        __freed_obj__ = 0, 
        _if_conditional152) {
            (come_push_stackframe("b.c", 259),free_objects(((struct sInfo*)come_null_check(info, "b.c", 259))->gv_table,((void*)0),info),come_pop_stackframe());
            __freed_obj__ = 0;
            (come_push_stackframe("b.c", 260),add_come_code(info,(come_push_stackframe("b.c", 260),__exception_result_var_b66=((char*)(right_value109=xsprintf("come_heap_final();\n"))), come_pop_stackframe(), __exception_result_var_b66)),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value109;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 262),add_come_code(info,"return;\n"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "b.c", 265))->last_statment_is_return=(_Bool)1;
    __freed_obj__ = 0;
    __result62__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
char* default_value_78;
void* __exception_result_var_b61;
char* __result60__;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_78, 0, sizeof(char*));
                if(_if_conditional149=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional149) {
                    __freed_obj__ = 0;
                    (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b61=memset(&default_value_78,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b61);
                    __freed_obj__ = 0;
                    __result60__ = __result_obj__ = default_value_78;
                    __freed_obj__ = 0;
                    return __result60__;
                    __freed_obj__ = 0;
                }
                else {
                    __result61__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                    __freed_obj__ = 0;
                    return __result61__;
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
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional150=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional150) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value110;
char* __exception_result_var_b67;
char* __dec_obj50;
struct sLineNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
    ((struct sLineNode*)come_null_check(self, "b.c", 280))->sline=((struct sInfo*)come_null_check(info, "b.c", 280))->sline;
    __freed_obj__ = 0;
    __dec_obj50=((struct sLineNode*)come_null_check(self, "b.c", 281))->sname;
    ((struct sLineNode*)come_null_check(self, "b.c", 281))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 281),__exception_result_var_b67=((char*)(right_value110=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 281))->sname))), come_pop_stackframe(), __exception_result_var_b67));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    __result63__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sLineNode_finalize(struct sLineNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional153=self!=((void*)0)&&((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional153) {
            if(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value && !__freed_obj__) { ((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value = come_decrement_ref_count(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value, ((struct sNode*)((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional154=self!=((void*)0)&&((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional154) {
            if(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional155=self!=((void*)0)&&((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional155) {
            if(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sLineNode_sline(struct sLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result64__ = ((struct sLineNode*)come_null_check(self, "b.c", 288))->sline;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value111;
char* __exception_result_var_b68;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
    __result65__ = __result_obj__ = (come_push_stackframe("b.c", 293),__exception_result_var_b68=((char*)(right_value111=__builtin_string(((struct sLineNode*)come_null_check(self, "b.c", 293))->sname))), come_pop_stackframe(), __exception_result_var_b68);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

_Bool sLineNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result66__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

char* sLineNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value112;
char* __exception_result_var_b69;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
    __result67__ = __result_obj__ = (come_push_stackframe("b.c", 303),__exception_result_var_b69=((char*)(right_value112=__builtin_string("sLineNode"))), come_pop_stackframe(), __exception_result_var_b69);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112;
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
struct CVALUE* come_value_80;
void* right_value114;
char* __exception_result_var_b70;
char* __dec_obj51;
void* right_value115;
void* right_value116;
struct sType* __exception_result_var_b71;
struct sType* __dec_obj52;
struct list$1CVALUEph* __exception_result_var_b72;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value113=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 308))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_80, "b.c", 310))->c_value;
    ((struct CVALUE*)come_null_check(come_value_80, "b.c", 310))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 310),__exception_result_var_b70=((char*)(right_value114=xsprintf("%d",((struct sInfo*)come_null_check(info, "b.c", 310))->sline))), come_pop_stackframe(), __exception_result_var_b70));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    __dec_obj52=((struct CVALUE*)come_null_check(come_value_80, "b.c", 311))->type;
    ((struct CVALUE*)come_null_check(come_value_80, "b.c", 311))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 311),__exception_result_var_b71=((struct sType*)(right_value116=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 311)))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b71));
    if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value115;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value116;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_80, "b.c", 312))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 314),__exception_result_var_b72=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 314))->stack, "b.c", 314)),(struct CVALUE*)come_increment_ref_count(come_value_80)), come_pop_stackframe(), __exception_result_var_b72);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 316),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_80, "b.c", 316))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result68__ = (_Bool)1;
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __exception_result_var_b73;
char* __dec_obj53;
struct sSNameNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    ((struct sSNameNode*)come_null_check(self, "b.c", 331))->sline=((struct sInfo*)come_null_check(info, "b.c", 331))->sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sSNameNode*)come_null_check(self, "b.c", 332))->sname;
    ((struct sSNameNode*)come_null_check(self, "b.c", 332))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 332),__exception_result_var_b73=((char*)(right_value117=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 332))->sname))), come_pop_stackframe(), __exception_result_var_b73));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    __result69__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional156=self!=((void*)0)&&((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional156) {
            if(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value && !__freed_obj__) { ((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value = come_decrement_ref_count(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value, ((struct sNode*)((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional157=self!=((void*)0)&&((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            if(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional158=self!=((void*)0)&&((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional158) {
            if(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = ((struct sSNameNode*)come_null_check(self, "b.c", 339))->sline;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
char* __exception_result_var_b74;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
    __result71__ = __result_obj__ = (come_push_stackframe("b.c", 344),__exception_result_var_b74=((char*)(right_value118=__builtin_string(((struct sSNameNode*)come_null_check(self, "b.c", 344))->sname))), come_pop_stackframe(), __exception_result_var_b74);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

_Bool sSNameNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

char* sSNameNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value119;
char* __exception_result_var_b75;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result73__ = __result_obj__ = (come_push_stackframe("b.c", 354),__exception_result_var_b75=((char*)(right_value119=__builtin_string("sSNameNode"))), come_pop_stackframe(), __exception_result_var_b75);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value120;
struct CVALUE* come_value_81;
void* right_value121;
char* __exception_result_var_b76;
char* __dec_obj54;
void* right_value122;
void* right_value123;
struct sType* __exception_result_var_b77;
struct sType* __dec_obj55;
struct list$1CVALUEph* __exception_result_var_b78;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&come_value_81, 0, sizeof(struct CVALUE*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
    come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 359))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    __dec_obj54=((struct CVALUE*)come_null_check(come_value_81, "b.c", 361))->c_value;
    ((struct CVALUE*)come_null_check(come_value_81, "b.c", 361))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 361),__exception_result_var_b76=((char*)(right_value121=xsprintf("\"%s\"",((struct sInfo*)come_null_check(info, "b.c", 361))->sname))), come_pop_stackframe(), __exception_result_var_b76));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    __dec_obj55=((struct CVALUE*)come_null_check(come_value_81, "b.c", 362))->type;
    ((struct CVALUE*)come_null_check(come_value_81, "b.c", 362))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 362),__exception_result_var_b77=((struct sType*)(right_value123=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 362)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b77));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value123;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_81, "b.c", 363))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 365),__exception_result_var_b78=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 365))->stack, "b.c", 365)),(struct CVALUE*)come_increment_ref_count(come_value_81)), come_pop_stackframe(), __exception_result_var_b78);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 367),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_81, "b.c", 367))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result74__ = (_Bool)1;
    if(come_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
    if(come_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value124;
char* __exception_result_var_b79;
char* __dec_obj56;
struct sFuncNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
    ((struct sFuncNode*)come_null_check(self, "b.c", 382))->sline=((struct sInfo*)come_null_check(info, "b.c", 382))->sline;
    __freed_obj__ = 0;
    __dec_obj56=((struct sFuncNode*)come_null_check(self, "b.c", 383))->sname;
    ((struct sFuncNode*)come_null_check(self, "b.c", 383))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 383),__exception_result_var_b79=((char*)(right_value124=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 383))->sname))), come_pop_stackframe(), __exception_result_var_b79));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value124;
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional159=self!=((void*)0)&&((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional159) {
            if(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value && !__freed_obj__) { ((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value = come_decrement_ref_count(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value, ((struct sNode*)((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional160=self!=((void*)0)&&((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional160) {
            if(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional161=self!=((void*)0)&&((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional161) {
            if(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 2))->sname && !__freed_obj__) { ((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 2))->sname = come_decrement_ref_count(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = ((struct sFuncNode*)come_null_check(self, "b.c", 390))->sline;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __exception_result_var_b80;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
    __result77__ = __result_obj__ = (come_push_stackframe("b.c", 395),__exception_result_var_b80=((char*)(right_value125=__builtin_string(((struct sFuncNode*)come_null_check(self, "b.c", 395))->sname))), come_pop_stackframe(), __exception_result_var_b80);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

_Bool sFuncNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

char* sFuncNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __exception_result_var_b81;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result79__ = __result_obj__ = (come_push_stackframe("b.c", 405),__exception_result_var_b81=((char*)(right_value126=__builtin_string("sFuncNode"))), come_pop_stackframe(), __exception_result_var_b81);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value127;
struct CVALUE* come_value_82;
void* right_value128;
char* __exception_result_var_b82;
char* __dec_obj57;
void* right_value129;
void* right_value130;
struct sType* __exception_result_var_b83;
struct sType* __dec_obj58;
struct list$1CVALUEph* __exception_result_var_b84;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 410))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    __dec_obj57=((struct CVALUE*)come_null_check(come_value_82, "b.c", 412))->c_value;
    ((struct CVALUE*)come_null_check(come_value_82, "b.c", 412))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 412),__exception_result_var_b82=((char*)(right_value128=xsprintf("\"%s\"",((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 412))->come_fun, "b.c", 412))->mName))), come_pop_stackframe(), __exception_result_var_b82));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    __dec_obj58=((struct CVALUE*)come_null_check(come_value_82, "b.c", 413))->type;
    ((struct CVALUE*)come_null_check(come_value_82, "b.c", 413))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 413),__exception_result_var_b83=((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 413)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b83));
    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value129;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value130;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_82, "b.c", 415))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 417),__exception_result_var_b84=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 417))->stack, "b.c", 417)),(struct CVALUE*)come_increment_ref_count(come_value_82)), come_pop_stackframe(), __exception_result_var_b84);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 419),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_82, "b.c", 419))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result80__ = (_Bool)1;
    if(come_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(come_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value131;
char* __exception_result_var_b85;
char* __dec_obj59;
struct sCallerFuncNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
    ((struct sCallerFuncNode*)come_null_check(self, "b.c", 434))->sline=((struct sInfo*)come_null_check(info, "b.c", 434))->sline;
    __freed_obj__ = 0;
    __dec_obj59=((struct sCallerFuncNode*)come_null_check(self, "b.c", 435))->sname;
    ((struct sCallerFuncNode*)come_null_check(self, "b.c", 435))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 435),__exception_result_var_b85=((char*)(right_value131=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 435))->sname))), come_pop_stackframe(), __exception_result_var_b85));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value131;
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional162=self!=((void*)0)&&((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional162) {
            if(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value && !__freed_obj__) { ((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value = come_decrement_ref_count(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value, ((struct sNode*)((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional163=self!=((void*)0)&&((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional163) {
            if(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional164=self!=((void*)0)&&((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional164) {
            if(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 2))->sname && !__freed_obj__) { ((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = ((struct sCallerFuncNode*)come_null_check(self, "b.c", 442))->sline;
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value132;
char* __exception_result_var_b86;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
    __result83__ = __result_obj__ = (come_push_stackframe("b.c", 447),__exception_result_var_b86=((char*)(right_value132=__builtin_string(((struct sCallerFuncNode*)come_null_check(self, "b.c", 447))->sname))), come_pop_stackframe(), __exception_result_var_b86);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132;
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

_Bool sCallerFuncNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

char* sCallerFuncNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value133;
char* __exception_result_var_b87;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
    __result85__ = __result_obj__ = (come_push_stackframe("b.c", 457),__exception_result_var_b87=((char*)(right_value133=__builtin_string("sCallerFuncNode"))), come_pop_stackframe(), __exception_result_var_b87);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value134;
struct CVALUE* come_value_83;
_Bool _if_conditional165;
void* right_value135;
char* __exception_result_var_b88;
char* __dec_obj60;
void* right_value136;
char* __exception_result_var_b89;
char* __dec_obj61;
void* right_value137;
void* right_value138;
struct sType* __exception_result_var_b90;
struct sType* __dec_obj62;
struct list$1CVALUEph* __exception_result_var_b91;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&come_value_83, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 462))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = 0;
    if(_if_conditional165=((struct sInfo*)come_null_check(info, "b.c", 464))->caller_fun,    __freed_obj__ = 0, 
    _if_conditional165) {
        __dec_obj60=((struct CVALUE*)come_null_check(come_value_83, "b.c", 465))->c_value;
        ((struct CVALUE*)come_null_check(come_value_83, "b.c", 465))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 465),__exception_result_var_b88=((char*)(right_value135=xsprintf("\"%s\"",((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 465))->caller_fun, "b.c", 465))->mName))), come_pop_stackframe(), __exception_result_var_b88));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value135;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj61=((struct CVALUE*)come_null_check(come_value_83, "b.c", 468))->c_value;
        ((struct CVALUE*)come_null_check(come_value_83, "b.c", 468))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 468),__exception_result_var_b89=((char*)(right_value136=xsprintf("\"\""))), come_pop_stackframe(), __exception_result_var_b89));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value136;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj62=((struct CVALUE*)come_null_check(come_value_83, "b.c", 470))->type;
    ((struct CVALUE*)come_null_check(come_value_83, "b.c", 470))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 470),__exception_result_var_b90=((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 470)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b90));
    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value138;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_83, "b.c", 472))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 474),__exception_result_var_b91=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 474))->stack, "b.c", 474)),(struct CVALUE*)come_increment_ref_count(come_value_83)), come_pop_stackframe(), __exception_result_var_b91);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 476),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_83, "b.c", 476))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result86__ = (_Bool)1;
    if(come_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(come_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __exception_result_var_b92;
char* __dec_obj63;
struct sCallerLineNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    ((struct sCallerLineNode*)come_null_check(self, "b.c", 491))->sline=((struct sInfo*)come_null_check(info, "b.c", 491))->sline;
    __freed_obj__ = 0;
    __dec_obj63=((struct sCallerLineNode*)come_null_check(self, "b.c", 492))->sname;
    ((struct sCallerLineNode*)come_null_check(self, "b.c", 492))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 492),__exception_result_var_b92=((char*)(right_value139=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 492))->sname))), come_pop_stackframe(), __exception_result_var_b92));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional166=self!=((void*)0)&&((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional166) {
            if(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value && !__freed_obj__) { ((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value = come_decrement_ref_count(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value, ((struct sNode*)((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional167=self!=((void*)0)&&((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional167) {
            if(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional168=self!=((void*)0)&&((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional168) {
            if(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 2))->sname && !__freed_obj__) { ((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = ((struct sCallerLineNode*)come_null_check(self, "b.c", 499))->sline;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
char* __exception_result_var_b93;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
    __result89__ = __result_obj__ = (come_push_stackframe("b.c", 504),__exception_result_var_b93=((char*)(right_value140=__builtin_string(((struct sCallerLineNode*)come_null_check(self, "b.c", 504))->sname))), come_pop_stackframe(), __exception_result_var_b93);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

_Bool sCallerLineNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value141;
struct CVALUE* come_value_84;
void* right_value142;
char* __exception_result_var_b94;
char* __dec_obj64;
void* right_value143;
void* right_value144;
struct sType* __exception_result_var_b95;
struct sType* __dec_obj65;
struct list$1CVALUEph* __exception_result_var_b96;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value141, 0, sizeof(void*));
memset(&come_value_84, 0, sizeof(struct CVALUE*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 514))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    __dec_obj64=((struct CVALUE*)come_null_check(come_value_84, "b.c", 516))->c_value;
    ((struct CVALUE*)come_null_check(come_value_84, "b.c", 516))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 516),__exception_result_var_b94=((char*)(right_value142=xsprintf("%d",((struct sInfo*)come_null_check(info, "b.c", 516))->caller_line))), come_pop_stackframe(), __exception_result_var_b94));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value142;
    __freed_obj__ = 0;
    __dec_obj65=((struct CVALUE*)come_null_check(come_value_84, "b.c", 517))->type;
    ((struct CVALUE*)come_null_check(come_value_84, "b.c", 517))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 517),__exception_result_var_b95=((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 517)))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b95));
    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value143;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value144;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_84, "b.c", 518))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 520),__exception_result_var_b96=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 520))->stack, "b.c", 520)),(struct CVALUE*)come_increment_ref_count(come_value_84)), come_pop_stackframe(), __exception_result_var_b96);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 522),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_84, "b.c", 522))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result91__ = (_Bool)1;
    if(come_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
    if(come_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sCallerLineNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value145;
char* __exception_result_var_b97;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
    __result92__ = __result_obj__ = (come_push_stackframe("b.c", 529),__exception_result_var_b97=((char*)(right_value145=__builtin_string("sCallerLineNode"))), come_pop_stackframe(), __exception_result_var_b97);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
char* __exception_result_var_b98;
char* __dec_obj66;
struct sCallerSNameNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
    ((struct sCallerSNameNode*)come_null_check(self, "b.c", 542))->sline=((struct sInfo*)come_null_check(info, "b.c", 542))->sline;
    __freed_obj__ = 0;
    __dec_obj66=((struct sCallerSNameNode*)come_null_check(self, "b.c", 543))->sname;
    ((struct sCallerSNameNode*)come_null_check(self, "b.c", 543))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 543),__exception_result_var_b98=((char*)(right_value146=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 543))->sname))), come_pop_stackframe(), __exception_result_var_b98));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    __result93__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional169=self!=((void*)0)&&((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional169) {
            if(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value && !__freed_obj__) { ((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value = come_decrement_ref_count(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value, ((struct sNode*)((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional170=self!=((void*)0)&&((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional170) {
            if(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional171=self!=((void*)0)&&((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional171) {
            if(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 2))->sname && !__freed_obj__) { ((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = ((struct sCallerSNameNode*)come_null_check(self, "b.c", 550))->sline;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value147;
char* __exception_result_var_b99;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
    __result95__ = __result_obj__ = (come_push_stackframe("b.c", 555),__exception_result_var_b99=((char*)(right_value147=__builtin_string(((struct sCallerSNameNode*)come_null_check(self, "b.c", 555))->sname))), come_pop_stackframe(), __exception_result_var_b99);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

_Bool sCallerSNameNode_terminated(){
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

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
struct CVALUE* come_value_85;
void* right_value149;
char* __exception_result_var_b100;
char* __dec_obj67;
void* right_value150;
void* right_value151;
struct sType* __exception_result_var_b101;
struct sType* __dec_obj68;
struct list$1CVALUEph* __exception_result_var_b102;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 565))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    __dec_obj67=((struct CVALUE*)come_null_check(come_value_85, "b.c", 567))->c_value;
    ((struct CVALUE*)come_null_check(come_value_85, "b.c", 567))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 567),__exception_result_var_b100=((char*)(right_value149=xsprintf("\"%s\"",((struct sInfo*)come_null_check(info, "b.c", 567))->caller_sname))), come_pop_stackframe(), __exception_result_var_b100));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value149;
    __freed_obj__ = 0;
    __dec_obj68=((struct CVALUE*)come_null_check(come_value_85, "b.c", 568))->type;
    ((struct CVALUE*)come_null_check(come_value_85, "b.c", 568))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 568),__exception_result_var_b101=((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "b.c", 568)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b101));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value150;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value151;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_85, "b.c", 569))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 571),__exception_result_var_b102=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 571))->stack, "b.c", 571)),(struct CVALUE*)come_increment_ref_count(come_value_85)), come_pop_stackframe(), __exception_result_var_b102);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 573),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_85, "b.c", 573))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    __result97__ = (_Bool)1;
    if(come_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
    if(come_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sCallerSNameNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value152;
char* __exception_result_var_b103;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
    __result98__ = __result_obj__ = (come_push_stackframe("b.c", 580),__exception_result_var_b103=((char*)(right_value152=__builtin_string("sCallerSNameNode"))), come_pop_stackframe(), __exception_result_var_b103);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value152;
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj69;
void* right_value153;
char* __dec_obj70;
void* right_value154;
char* __exception_result_var_b104;
char* __dec_obj71;
struct sParentReturnNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    __dec_obj69=((struct sParentReturnNode*)come_null_check(self, "b.c", 593))->value;
    ((struct sParentReturnNode*)come_null_check(self, "b.c", 593))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj70=((struct sParentReturnNode*)come_null_check(self, "b.c", 594))->value_source;
    ((struct sParentReturnNode*)come_null_check(self, "b.c", 594))->value_source=(char*)come_increment_ref_count(((char*)(right_value153=string_clone(value_source))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value153;
    __freed_obj__ = 0;
    ((struct sParentReturnNode*)come_null_check(self, "b.c", 596))->sline=((struct sInfo*)come_null_check(info, "b.c", 596))->sline;
    __freed_obj__ = 0;
    __dec_obj71=((struct sParentReturnNode*)come_null_check(self, "b.c", 597))->sname;
    ((struct sParentReturnNode*)come_null_check(self, "b.c", 597))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 597),__exception_result_var_b104=((char*)(right_value154=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 597))->sname))), come_pop_stackframe(), __exception_result_var_b104));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value154;
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    if(value_source && !__freed_obj__) { value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    if(value_source && !__freed_obj__) { value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 1, 0); }
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional172=self!=((void*)0)&&((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional172) {
            if(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value && !__freed_obj__) { ((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value = come_decrement_ref_count(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value, ((struct sNode*)((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional173=self!=((void*)0)&&((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 1))->value_source!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional173) {
            if(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 1))->value_source && !__freed_obj__) { ((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 1))->value_source = come_decrement_ref_count(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 1))->value_source, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional174=self!=((void*)0)&&((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional174) {
            if(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 2))->sname && !__freed_obj__) { ((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 2))->sname = come_decrement_ref_count(((struct sParentReturnNode*)come_null_check(self, "sParentReturnNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result100__ = ((struct sParentReturnNode*)come_null_check(self, "b.c", 604))->sline;
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value155;
char* __exception_result_var_b105;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
    __result101__ = __result_obj__ = (come_push_stackframe("b.c", 609),__exception_result_var_b105=((char*)(right_value155=__builtin_string(((struct sParentReturnNode*)come_null_check(self, "b.c", 609))->sname))), come_pop_stackframe(), __exception_result_var_b105);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155;
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

_Bool sParentReturnNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sParentReturnNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value156;
char* __exception_result_var_b106;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
    __result103__ = __result_obj__ = (come_push_stackframe("b.c", 619),__exception_result_var_b106=((char*)(right_value156=__builtin_string("sParentReturnNode"))), come_pop_stackframe(), __exception_result_var_b106);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
_Bool __result104__;
struct sFun* come_fun_86;
void* right_value157;
struct sType* result_type_87;
void* right_value158;
struct sType* __exception_result_var_b107;
struct sType* result_type2_88;
struct sType* result_type3_89;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool __exception_result_var_b108;
_Bool _if_conditional178;
_Bool __result105__;
void* right_value159;
struct CVALUE* __exception_result_var_b109;
struct CVALUE* come_value_90;
_Bool _if_conditional179;
int __exception_result_var_b110;
int right_value_id_91;
_Bool _if_conditional180;
void* right_value160;
char* __exception_result_var_b111;
char* __dec_obj72;
void* right_value161;
char* __exception_result_var_b112;
char* var_name2_92;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
_Bool __exception_result_var_b113;
_Bool _if_conditional181;
struct sFun* come_fun_93;
void* right_value166;
char* __exception_result_var_b114;
char* var_name2_94;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool __exception_result_var_b115;
_Bool _if_conditional182;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_86, 0, sizeof(struct sFun*));
memset(&right_value157, 0, sizeof(void*));
memset(&result_type_87, 0, sizeof(struct sType*));
memset(&right_value158, 0, sizeof(void*));
memset(&result_type2_88, 0, sizeof(struct sType*));
memset(&result_type3_89, 0, sizeof(struct sType*));
memset(&right_value159, 0, sizeof(void*));
memset(&come_value_90, 0, sizeof(struct CVALUE*));
memset(&right_value_id_91, 0, sizeof(int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&var_name2_92, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&come_fun_93, 0, sizeof(struct sFun*));
memset(&right_value166, 0, sizeof(void*));
memset(&var_name2_94, 0, sizeof(char*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    if(_if_conditional175=((struct sInfo*)come_null_check(info, "b.c", 624))->current_stack_frame_struct==((void*)0),    __freed_obj__ = 0, 
    _if_conditional175) {
        (come_push_stackframe("b.c", 625),err_msg(info,"not in method block"),come_pop_stackframe());
        __freed_obj__ = 0;
        __result104__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_fun_86=((struct sInfo*)come_null_check(info, "b.c", 629))->come_fun;
    __freed_obj__ = 0;
    result_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(((struct sFun*)come_null_check(come_fun_86, "b.c", 631))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    result_type2_88=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 633),__exception_result_var_b107=((struct sType*)(right_value158=solve_generics(result_type_87,((struct sInfo*)come_null_check(info, "b.c", 633))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b107));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158;
    __freed_obj__ = 0;
    result_type3_89=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_88, "b.c", 635))->mNoSolvedGenericsType, "b.c", 635))->v1;
    __freed_obj__ = 0;
    if(_if_conditional176=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_88, "b.c", 636))->mNoSolvedGenericsType, "b.c", 636))->v1,    __freed_obj__ = 0, 
    _if_conditional176) {
        result_type3_89=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_88, "b.c", 637))->mNoSolvedGenericsType, "b.c", 637))->v1;
        __freed_obj__ = 0;
    }
    else {
        result_type3_89=result_type2_88;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional177=((struct sParentReturnNode*)come_null_check(self, "b.c", 643))->value,    __freed_obj__ = 0, 
    _if_conditional177) {
        if(_if_conditional178=!(come_push_stackframe("b.c", 644),__exception_result_var_b108=node_compile(((struct sParentReturnNode*)come_null_check(self, "b.c", 644))->value,info), come_pop_stackframe(), __exception_result_var_b108),        __freed_obj__ = 0, 
        _if_conditional178) {
            __result105__ = (_Bool)0;
            if(result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result105__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_90=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("b.c", 648),__exception_result_var_b109=((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b109));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 649),dec_stack_ptr(1,info),come_pop_stackframe());
        __freed_obj__ = 0;
        if(_if_conditional179=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_90, "b.c", 651))->type, "b.c", 651))->mHeap&&((struct CVALUE*)come_null_check(come_value_90, "b.c", 651))->var==((void*)0),        __freed_obj__ = 0, 
        _if_conditional179) {
            right_value_id_91=(come_push_stackframe("b.c", 652),__exception_result_var_b110=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_90, "b.c", 652))->c_value)), come_pop_stackframe(), __exception_result_var_b110);
            __freed_obj__ = 0;
            if(_if_conditional180=right_value_id_91!=-1,            __freed_obj__ = 0, 
            _if_conditional180) {
                (come_push_stackframe("b.c", 655),remove_object_from_right_values(right_value_id_91,info),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj72=((struct CVALUE*)come_null_check(come_value_90, "b.c", 659))->c_value;
        ((struct CVALUE*)come_null_check(come_value_90, "b.c", 659))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 659),__exception_result_var_b111=((char*)(right_value160=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_90, "b.c", 659))->type,((struct CVALUE*)come_null_check(come_value_90, "b.c", 659))->c_value,info))), come_pop_stackframe(), __exception_result_var_b111));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value160;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 661),free_objects_on_return(((struct sFun*)come_null_check(come_fun_86, "b.c", 661))->mBlock,info,((struct CVALUE*)come_null_check(come_value_90, "b.c", 661))->var,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 662),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        var_name2_92=(char*)come_increment_ref_count((come_push_stackframe("b.c", 664),__exception_result_var_b112=((char*)(right_value161=xsprintf("((struct __current_stack%d__*) parent)",((struct sInfo*)come_null_check(info, "b.c", 664))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b112));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value161;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 668),add_come_code(info,((char*)(right_value165=xsprintf("            \%s->__method_block_result_kind__ = 3;\n            \%s->__method_block_return_value__ = \%s;\n",((char*)(right_value162=string_to_string(var_name2_92))),((char*)(right_value163=string_to_string(var_name2_92))),((char*)(right_value164=string_to_string(((struct CVALUE*)come_null_check(come_value_90, "b.c", 667))->c_value))))))),come_pop_stackframe());
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value162;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value163;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value164;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value165;
        __freed_obj__ = 0;
        if(_if_conditional181=(come_push_stackframe("b.c", 670),__exception_result_var_b113=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_89, "b.c", 670))->mClass, "b.c", 670))->mName,"void"), come_pop_stackframe(), __exception_result_var_b113)&&((struct sType*)come_null_check(result_type3_89, "b.c", 670))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional181) {
            (come_push_stackframe("b.c", 671),add_come_code(info,"return;"),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("b.c", 674),add_come_code(info,"return (void*)0;"),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(come_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name2_92 && !__freed_obj__) { var_name2_92 = come_decrement_ref_count(var_name2_92, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        come_fun_93=((struct sInfo*)come_null_check(info, "b.c", 678))->come_fun;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 679),free_objects_on_return(((struct sFun*)come_null_check(come_fun_93, "b.c", 679))->mBlock,info,((void*)0),(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 680),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        __freed_obj__ = 0;
        var_name2_94=(char*)come_increment_ref_count((come_push_stackframe("b.c", 682),__exception_result_var_b114=((char*)(right_value166=xsprintf("((struct __current_stack%d__*) parent)",((struct sInfo*)come_null_check(info, "b.c", 682))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b114));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 686),add_come_code(info,((char*)(right_value169=xsprintf("            \%s->__method_block_result_kind__ = 4;\n            \%s->__method_block_return_value__ = 0;\n",((char*)(right_value167=string_to_string(var_name2_94))),((char*)(right_value168=string_to_string(var_name2_94))))))),come_pop_stackframe());
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value167;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value169;
        __freed_obj__ = 0;
        if(_if_conditional182=(come_push_stackframe("b.c", 688),__exception_result_var_b115=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_89, "b.c", 688))->mClass, "b.c", 688))->mName,"void"), come_pop_stackframe(), __exception_result_var_b115)&&((struct sType*)come_null_check(result_type3_89, "b.c", 688))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional182) {
            (come_push_stackframe("b.c", 689),add_come_code(info,"return;"),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("b.c", 692),add_come_code(info,"return (void*)0;"),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(var_name2_94 && !__freed_obj__) { var_name2_94 = come_decrement_ref_count(var_name2_94, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "b.c", 696))->last_statment_is_return=(_Bool)1;
    __freed_obj__ = 0;
    __result106__ = (_Bool)1;
    if(result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value170;
char* __exception_result_var_b116;
char* __dec_obj73;
struct sParentBreakNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
    ((struct sParentBreakNode*)come_null_check(self, "b.c", 709))->sline=((struct sInfo*)come_null_check(info, "b.c", 709))->sline;
    __freed_obj__ = 0;
    __dec_obj73=((struct sParentBreakNode*)come_null_check(self, "b.c", 710))->sname;
    ((struct sParentBreakNode*)come_null_check(self, "b.c", 710))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 710),__exception_result_var_b116=((char*)(right_value170=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 710))->sname))), come_pop_stackframe(), __exception_result_var_b116));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    __result107__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional183=self!=((void*)0)&&((struct sParentBreakNode*)come_null_check(self, "sParentBreakNode_finalize", 0))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional183) {
            if(((struct sParentBreakNode*)come_null_check(self, "sParentBreakNode_finalize", 0))->sname && !__freed_obj__) { ((struct sParentBreakNode*)come_null_check(self, "sParentBreakNode_finalize", 0))->sname = come_decrement_ref_count(((struct sParentBreakNode*)come_null_check(self, "sParentBreakNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = ((struct sParentBreakNode*)come_null_check(self, "b.c", 717))->sline;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value171;
char* __exception_result_var_b117;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
    __result109__ = __result_obj__ = (come_push_stackframe("b.c", 722),__exception_result_var_b117=((char*)(right_value171=__builtin_string(((struct sParentBreakNode*)come_null_check(self, "b.c", 722))->sname))), come_pop_stackframe(), __exception_result_var_b117);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value171;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

_Bool sParentBreakNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

char* sParentBreakNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __exception_result_var_b118;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
    __result111__ = __result_obj__ = (come_push_stackframe("b.c", 732),__exception_result_var_b118=((char*)(right_value172=__builtin_string("sParentBreakNode"))), come_pop_stackframe(), __exception_result_var_b118);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional184;
_Bool __result112__;
struct sFun* come_fun_95;
void* right_value173;
struct sType* result_type_96;
void* right_value174;
struct sType* __exception_result_var_b119;
struct sType* result_type2_97;
struct sType* result_type3_98;
_Bool _if_conditional185;
void* right_value175;
char* __exception_result_var_b120;
char* var_name2_99;
void* right_value176;
void* right_value177;
void* right_value178;
_Bool __exception_result_var_b121;
_Bool _if_conditional186;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_95, 0, sizeof(struct sFun*));
memset(&right_value173, 0, sizeof(void*));
memset(&result_type_96, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&result_type2_97, 0, sizeof(struct sType*));
memset(&result_type3_98, 0, sizeof(struct sType*));
memset(&right_value175, 0, sizeof(void*));
memset(&var_name2_99, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    if(_if_conditional184=((struct sInfo*)come_null_check(info, "b.c", 737))->current_stack_frame_struct==((void*)0),    __freed_obj__ = 0, 
    _if_conditional184) {
        (come_push_stackframe("b.c", 738),err_msg(info,"not in method block"),come_pop_stackframe());
        __freed_obj__ = 0;
        __result112__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_fun_95=((struct sInfo*)come_null_check(info, "b.c", 742))->come_fun;
    __freed_obj__ = 0;
    result_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(((struct sFun*)come_null_check(come_fun_95, "b.c", 744))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = 0;
    result_type2_97=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 746),__exception_result_var_b119=((struct sType*)(right_value174=solve_generics(result_type_96,((struct sInfo*)come_null_check(info, "b.c", 746))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b119));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    result_type3_98=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_97, "b.c", 748))->mNoSolvedGenericsType, "b.c", 748))->v1;
    __freed_obj__ = 0;
    if(_if_conditional185=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_97, "b.c", 749))->mNoSolvedGenericsType, "b.c", 749))->v1,    __freed_obj__ = 0, 
    _if_conditional185) {
        result_type3_98=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_97, "b.c", 750))->mNoSolvedGenericsType, "b.c", 750))->v1;
        __freed_obj__ = 0;
    }
    else {
        result_type3_98=result_type2_97;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 756),free_objects_on_return(((struct sFun*)come_null_check(come_fun_95, "b.c", 756))->mBlock,info,((void*)0),(_Bool)0),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 757),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
    __freed_obj__ = 0;
    var_name2_99=(char*)come_increment_ref_count((come_push_stackframe("b.c", 759),__exception_result_var_b120=((char*)(right_value175=xsprintf("((struct __current_stack%d__*) parent)",((struct sInfo*)come_null_check(info, "b.c", 759))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b120));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value175;
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 763),add_come_code(info,((char*)(right_value178=xsprintf("        \%s->__method_block_result_kind__ = 1;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value176=string_to_string(var_name2_99))),((char*)(right_value177=string_to_string(var_name2_99))))))),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value177;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value178;
    __freed_obj__ = 0;
    if(_if_conditional186=(come_push_stackframe("b.c", 765),__exception_result_var_b121=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_98, "b.c", 765))->mClass, "b.c", 765))->mName,"void"), come_pop_stackframe(), __exception_result_var_b121)&&((struct sType*)come_null_check(result_type3_98, "b.c", 765))->mPointerNum==0,    __freed_obj__ = 0, 
    _if_conditional186) {
        (come_push_stackframe("b.c", 766),add_come_code(info,"return;"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    else {
        (come_push_stackframe("b.c", 769),add_come_code(info,"return (void*)0;"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "b.c", 772))->last_statment_is_return=(_Bool)1;
    __freed_obj__ = 0;
    __result113__ = (_Bool)1;
    if(result_type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_99 && !__freed_obj__) { var_name2_99 = come_decrement_ref_count(var_name2_99, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(result_type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_99 && !__freed_obj__) { var_name2_99 = come_decrement_ref_count(var_name2_99, (void*)0, (void*)0, 0, 0, 0); }
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __exception_result_var_b122;
char* __dec_obj74;
struct sParentContinueNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    ((struct sParentContinueNode*)come_null_check(self, "b.c", 785))->sline=((struct sInfo*)come_null_check(info, "b.c", 785))->sline;
    __freed_obj__ = 0;
    __dec_obj74=((struct sParentContinueNode*)come_null_check(self, "b.c", 786))->sname;
    ((struct sParentContinueNode*)come_null_check(self, "b.c", 786))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 786),__exception_result_var_b122=((char*)(right_value179=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 786))->sname))), come_pop_stackframe(), __exception_result_var_b122));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179;
    __freed_obj__ = 0;
    __result114__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional187=self!=((void*)0)&&((struct sParentContinueNode*)come_null_check(self, "sParentContinueNode_finalize", 0))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            if(((struct sParentContinueNode*)come_null_check(self, "sParentContinueNode_finalize", 0))->sname && !__freed_obj__) { ((struct sParentContinueNode*)come_null_check(self, "sParentContinueNode_finalize", 0))->sname = come_decrement_ref_count(((struct sParentContinueNode*)come_null_check(self, "sParentContinueNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = ((struct sParentContinueNode*)come_null_check(self, "b.c", 793))->sline;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value180;
char* __exception_result_var_b123;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
    __result116__ = __result_obj__ = (come_push_stackframe("b.c", 798),__exception_result_var_b123=((char*)(right_value180=__builtin_string(((struct sParentContinueNode*)come_null_check(self, "b.c", 798))->sname))), come_pop_stackframe(), __exception_result_var_b123);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

_Bool sParentContinueNode_terminated(){
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

char* sParentContinueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value181;
char* __exception_result_var_b124;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result118__ = __result_obj__ = (come_push_stackframe("b.c", 808),__exception_result_var_b124=((char*)(right_value181=__builtin_string("sParentContinueNode"))), come_pop_stackframe(), __exception_result_var_b124);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
_Bool __result119__;
struct sFun* come_fun_100;
void* right_value182;
struct sType* result_type_101;
void* right_value183;
struct sType* __exception_result_var_b125;
struct sType* result_type2_102;
struct sType* result_type3_103;
_Bool _if_conditional189;
void* right_value184;
char* __exception_result_var_b126;
char* var_name2_104;
void* right_value185;
void* right_value186;
void* right_value187;
_Bool __exception_result_var_b127;
_Bool _if_conditional190;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&come_fun_100, 0, sizeof(struct sFun*));
memset(&right_value182, 0, sizeof(void*));
memset(&result_type_101, 0, sizeof(struct sType*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_type2_102, 0, sizeof(struct sType*));
memset(&result_type3_103, 0, sizeof(struct sType*));
memset(&right_value184, 0, sizeof(void*));
memset(&var_name2_104, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    if(_if_conditional188=((struct sInfo*)come_null_check(info, "b.c", 813))->current_stack_frame_struct==((void*)0),    __freed_obj__ = 0, 
    _if_conditional188) {
        (come_push_stackframe("b.c", 814),err_msg(info,"not in method block"),come_pop_stackframe());
        __freed_obj__ = 0;
        __result119__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_fun_100=((struct sInfo*)come_null_check(info, "b.c", 818))->come_fun;
    __freed_obj__ = 0;
    result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(((struct sFun*)come_null_check(come_fun_100, "b.c", 820))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    result_type2_102=(struct sType*)come_increment_ref_count((come_push_stackframe("b.c", 822),__exception_result_var_b125=((struct sType*)(right_value183=solve_generics(result_type_101,((struct sInfo*)come_null_check(info, "b.c", 822))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b125));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value183;
    __freed_obj__ = 0;
    result_type3_103=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_102, "b.c", 824))->mNoSolvedGenericsType, "b.c", 824))->v1;
    __freed_obj__ = 0;
    if(_if_conditional189=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_102, "b.c", 825))->mNoSolvedGenericsType, "b.c", 825))->v1,    __freed_obj__ = 0, 
    _if_conditional189) {
        result_type3_103=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_102, "b.c", 826))->mNoSolvedGenericsType, "b.c", 826))->v1;
        __freed_obj__ = 0;
    }
    else {
        result_type3_103=result_type2_102;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 832),free_objects_on_return(((struct sFun*)come_null_check(come_fun_100, "b.c", 832))->mBlock,info,((void*)0),(_Bool)0),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 833),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
    __freed_obj__ = 0;
    var_name2_104=(char*)come_increment_ref_count((come_push_stackframe("b.c", 835),__exception_result_var_b126=((char*)(right_value184=xsprintf("((struct __current_stack%d__*) parent)",((struct sInfo*)come_null_check(info, "b.c", 835))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b126));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value184;
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 839),add_come_code(info,((char*)(right_value187=xsprintf("        \%s->__method_block_result_kind__ = 2;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value185=string_to_string(var_name2_104))),((char*)(right_value186=string_to_string(var_name2_104))))))),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value185;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value187;
    __freed_obj__ = 0;
    if(_if_conditional190=(come_push_stackframe("b.c", 841),__exception_result_var_b127=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_103, "b.c", 841))->mClass, "b.c", 841))->mName,"void"), come_pop_stackframe(), __exception_result_var_b127)&&((struct sType*)come_null_check(result_type3_103, "b.c", 841))->mPointerNum==0,    __freed_obj__ = 0, 
    _if_conditional190) {
        (come_push_stackframe("b.c", 842),add_come_code(info,"return;"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    else {
        (come_push_stackframe("b.c", 845),add_come_code(info,"return (void*)0;"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "b.c", 848))->last_statment_is_return=(_Bool)1;
    __freed_obj__ = 0;
    __result120__ = (_Bool)1;
    if(result_type_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_102 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_104 && !__freed_obj__) { var_name2_104 = come_decrement_ref_count(var_name2_104, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
    if(result_type_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type2_102 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_104 && !__freed_obj__) { var_name2_104 = come_decrement_ref_count(var_name2_104, (void*)0, (void*)0, 0, 0, 0); }
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj75;
void* right_value188;
char* __exception_result_var_b128;
char* __dec_obj76;
struct sDerefferenceNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
    __dec_obj75=((struct sDerefferenceNode*)come_null_check(self, "b.c", 863))->value;
    ((struct sDerefferenceNode*)come_null_check(self, "b.c", 863))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sDerefferenceNode*)come_null_check(self, "b.c", 864))->sline=((struct sInfo*)come_null_check(info, "b.c", 864))->sline;
    __freed_obj__ = 0;
    __dec_obj76=((struct sDerefferenceNode*)come_null_check(self, "b.c", 865))->sname;
    ((struct sDerefferenceNode*)come_null_check(self, "b.c", 865))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 865),__exception_result_var_b128=((char*)(right_value188=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 865))->sname))), come_pop_stackframe(), __exception_result_var_b128));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value188;
    __freed_obj__ = 0;
    ((struct sDerefferenceNode*)come_null_check(self, "b.c", 866))->mQuote=quote;
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional191=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional191) {
            if(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value && !__freed_obj__) { ((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value = come_decrement_ref_count(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value, ((struct sNode*)((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional192=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional192) {
            if(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = ((struct sDerefferenceNode*)come_null_check(self, "b.c", 873))->sline;
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value189;
char* __exception_result_var_b129;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
    __result123__ = __result_obj__ = (come_push_stackframe("b.c", 878),__exception_result_var_b129=((char*)(right_value189=__builtin_string(((struct sDerefferenceNode*)come_null_check(self, "b.c", 878))->sname))), come_pop_stackframe(), __exception_result_var_b129);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

_Bool sDerefferenceNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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

char* sDerefferenceNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value190;
char* __exception_result_var_b130;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
    __result125__ = __result_obj__ = (come_push_stackframe("b.c", 888),__exception_result_var_b130=((char*)(right_value190=__builtin_string("sDerefferenceNode"))), come_pop_stackframe(), __exception_result_var_b130);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value_105;
_Bool __exception_result_var_b131;
_Bool _if_conditional193;
_Bool __result126__;
void* right_value191;
struct CVALUE* __exception_result_var_b132;
struct CVALUE* left_value_106;
struct sType* type_107;
char* fun_name_108;
_Bool calling_fun_109;
_Bool _if_conditional194;
_Bool __exception_result_var_b133;
_Bool _if_conditional195;
void* right_value192;
struct CVALUE* come_value_110;
void* right_value193;
char* __exception_result_var_b134;
char* __dec_obj77;
void* right_value194;
struct sType* __dec_obj78;
struct list$1CVALUEph* __exception_result_var_b135;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value_105, 0, sizeof(struct sNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&left_value_106, 0, sizeof(struct CVALUE*));
memset(&type_107, 0, sizeof(struct sType*));
memset(&fun_name_108, 0, sizeof(char*));
memset(&calling_fun_109, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    value_105=((struct sDerefferenceNode*)come_null_check(self, "b.c", 893))->value;
    __freed_obj__ = 0;
    if(_if_conditional193=!(come_push_stackframe("b.c", 895),__exception_result_var_b131=node_compile(value_105,info), come_pop_stackframe(), __exception_result_var_b131),    __freed_obj__ = 0, 
    _if_conditional193) {
        __result126__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_106=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("b.c", 899),__exception_result_var_b132=((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b132));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value191;
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 900),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    type_107=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_106, "b.c", 902))->type);
    __freed_obj__ = 0;
    fun_name_108="operator_derefference";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional194=((struct sDerefferenceNode*)come_null_check(self, "b.c", 907))->mQuote,    __freed_obj__ = 0, 
    _if_conditional194) {
        calling_fun_109=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_109=(come_push_stackframe("b.c", 911),__exception_result_var_b133=operator_overload_fun_self(type_107,fun_name_108,left_value_106,info), come_pop_stackframe(), __exception_result_var_b133);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional195=!calling_fun_109,    __freed_obj__ = 0, 
    _if_conditional195) {
        come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 915))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value192;
        __freed_obj__ = 0;
        __dec_obj77=((struct CVALUE*)come_null_check(come_value_110, "b.c", 917))->c_value;
        ((struct CVALUE*)come_null_check(come_value_110, "b.c", 917))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 917),__exception_result_var_b134=((char*)(right_value193=xsprintf("*%s",((struct CVALUE*)come_null_check(left_value_106, "b.c", 917))->c_value))), come_pop_stackframe(), __exception_result_var_b134));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value193;
        __freed_obj__ = 0;
        __dec_obj78=((struct CVALUE*)come_null_check(come_value_110, "b.c", 918))->type;
        ((struct CVALUE*)come_null_check(come_value_110, "b.c", 918))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(((struct CVALUE*)come_null_check(left_value_106, "b.c", 918))->type))));
        if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value194;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "b.c", 919))->type, "b.c", 919))->mPointerNum--;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_110, "b.c", 920))->var=((void*)0);
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 922),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_110, "b.c", 922))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("b.c", 924),__exception_result_var_b135=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 924))->stack, "b.c", 924)),(struct CVALUE*)come_increment_ref_count(come_value_110)), come_pop_stackframe(), __exception_result_var_b135);
        __freed_obj__ = 0;
        if(come_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result127__ = (_Bool)1;
    if(left_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
    if(left_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj79;
void* right_value195;
char* __exception_result_var_b136;
char* __dec_obj80;
struct sRefferenceNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __dec_obj79=((struct sRefferenceNode*)come_null_check(self, "b.c", 939))->value;
    ((struct sRefferenceNode*)come_null_check(self, "b.c", 939))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sRefferenceNode*)come_null_check(self, "b.c", 940))->sline=((struct sInfo*)come_null_check(info, "b.c", 940))->sline;
    __freed_obj__ = 0;
    __dec_obj80=((struct sRefferenceNode*)come_null_check(self, "b.c", 941))->sname;
    ((struct sRefferenceNode*)come_null_check(self, "b.c", 941))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 941),__exception_result_var_b136=((char*)(right_value195=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 941))->sname))), come_pop_stackframe(), __exception_result_var_b136));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    __result128__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional196=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value && !__freed_obj__) { ((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value = come_decrement_ref_count(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value, ((struct sNode*)((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional197=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            if(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1))->sname && !__freed_obj__) { ((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1))->sname = come_decrement_ref_count(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = ((struct sRefferenceNode*)come_null_check(self, "b.c", 948))->sline;
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __exception_result_var_b137;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
    __result130__ = __result_obj__ = (come_push_stackframe("b.c", 953),__exception_result_var_b137=((char*)(right_value196=__builtin_string(((struct sRefferenceNode*)come_null_check(self, "b.c", 953))->sname))), come_pop_stackframe(), __exception_result_var_b137);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

_Bool sRefferenceNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

char* sRefferenceNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __exception_result_var_b138;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result132__ = __result_obj__ = (come_push_stackframe("b.c", 963),__exception_result_var_b138=((char*)(right_value197=__builtin_string("sRefferenceNode"))), come_pop_stackframe(), __exception_result_var_b138);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value_111;
_Bool __exception_result_var_b139;
_Bool _if_conditional198;
_Bool __result133__;
void* right_value198;
struct CVALUE* __exception_result_var_b140;
struct CVALUE* left_value_112;
void* right_value199;
struct CVALUE* come_value_113;
void* right_value200;
char* __exception_result_var_b141;
char* __dec_obj81;
void* right_value201;
struct sType* __dec_obj82;
struct list$1CVALUEph* __exception_result_var_b142;
_Bool __result134__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value_111, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&left_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
memset(&come_value_113, 0, sizeof(struct CVALUE*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
    value_111=((struct sRefferenceNode*)come_null_check(self, "b.c", 969))->value;
    __freed_obj__ = 0;
    if(_if_conditional198=!(come_push_stackframe("b.c", 971),__exception_result_var_b139=node_compile(value_111,info), come_pop_stackframe(), __exception_result_var_b139),    __freed_obj__ = 0, 
    _if_conditional198) {
        __result133__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result133__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_112=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("b.c", 975),__exception_result_var_b140=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b140));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 976),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 978))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value199;
    __freed_obj__ = 0;
    __dec_obj81=((struct CVALUE*)come_null_check(come_value_113, "b.c", 980))->c_value;
    ((struct CVALUE*)come_null_check(come_value_113, "b.c", 980))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 980),__exception_result_var_b141=((char*)(right_value200=xsprintf("&%s",((struct CVALUE*)come_null_check(left_value_112, "b.c", 980))->c_value))), come_pop_stackframe(), __exception_result_var_b141));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value200;
    __freed_obj__ = 0;
    __dec_obj82=((struct CVALUE*)come_null_check(come_value_113, "b.c", 981))->type;
    ((struct CVALUE*)come_null_check(come_value_113, "b.c", 981))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(((struct CVALUE*)come_null_check(left_value_112, "b.c", 981))->type))));
    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value201;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_113, "b.c", 982))->type, "b.c", 982))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_113, "b.c", 983))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 985),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_113, "b.c", 985))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 987),__exception_result_var_b142=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 987))->stack, "b.c", 987)),(struct CVALUE*)come_increment_ref_count(come_value_113)), come_pop_stackframe(), __exception_result_var_b142);
    __freed_obj__ = 0;
    __result134__ = (_Bool)1;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
    __result135__ = (_Bool)1;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj83;
void* right_value202;
char* __exception_result_var_b143;
char* __dec_obj84;
struct sReverseNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
    __dec_obj83=((struct sReverseNode*)come_null_check(self, "b.c", 1003))->value;
    ((struct sReverseNode*)come_null_check(self, "b.c", 1003))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sReverseNode*)come_null_check(self, "b.c", 1004))->sline=((struct sInfo*)come_null_check(info, "b.c", 1004))->sline;
    __freed_obj__ = 0;
    __dec_obj84=((struct sReverseNode*)come_null_check(self, "b.c", 1005))->sname;
    ((struct sReverseNode*)come_null_check(self, "b.c", 1005))->sname=(char*)come_increment_ref_count((come_push_stackframe("b.c", 1005),__exception_result_var_b143=((char*)(right_value202=__builtin_string(((struct sInfo*)come_null_check(info, "b.c", 1005))->sname))), come_pop_stackframe(), __exception_result_var_b143));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    __result136__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

static void sReverseNode_finalize(struct sReverseNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
_Bool _if_conditional200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional199=self!=((void*)0)&&((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value && !__freed_obj__) { ((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value = come_decrement_ref_count(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value, ((struct sNode*)((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional200=self!=((void*)0)&&((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional200) {
            if(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1))->sname && !__freed_obj__) { ((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1))->sname = come_decrement_ref_count(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = ((struct sReverseNode*)come_null_check(self, "b.c", 1012))->sline;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value203;
char* __exception_result_var_b144;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
    __result138__ = __result_obj__ = (come_push_stackframe("b.c", 1017),__exception_result_var_b144=((char*)(right_value203=__builtin_string(((struct sReverseNode*)come_null_check(self, "b.c", 1017))->sname))), come_pop_stackframe(), __exception_result_var_b144);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

_Bool sReverseNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

char* sReverseNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
char* __exception_result_var_b145;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
    __result140__ = __result_obj__ = (come_push_stackframe("b.c", 1027),__exception_result_var_b145=((char*)(right_value204=__builtin_string("sReverseNode"))), come_pop_stackframe(), __exception_result_var_b145);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value_114;
_Bool __exception_result_var_b146;
_Bool _if_conditional201;
_Bool __result141__;
void* right_value205;
struct CVALUE* __exception_result_var_b147;
struct CVALUE* left_value_115;
void* right_value206;
struct CVALUE* come_value_116;
void* right_value207;
char* __exception_result_var_b148;
char* __dec_obj85;
void* right_value208;
struct sType* __dec_obj86;
struct list$1CVALUEph* __exception_result_var_b149;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value_114, 0, sizeof(struct sNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&left_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value206, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
    value_114=((struct sReverseNode*)come_null_check(self, "b.c", 1032))->value;
    __freed_obj__ = 0;
    if(_if_conditional201=!(come_push_stackframe("b.c", 1034),__exception_result_var_b146=node_compile(value_114,info), come_pop_stackframe(), __exception_result_var_b146),    __freed_obj__ = 0, 
    _if_conditional201) {
        __result141__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result141__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_115=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("b.c", 1038),__exception_result_var_b147=((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b147));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205;
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1039),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "b.c", 1041))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value206;
    __freed_obj__ = 0;
    __dec_obj85=((struct CVALUE*)come_null_check(come_value_116, "b.c", 1043))->c_value;
    ((struct CVALUE*)come_null_check(come_value_116, "b.c", 1043))->c_value=(char*)come_increment_ref_count((come_push_stackframe("b.c", 1043),__exception_result_var_b148=((char*)(right_value207=xsprintf("!%s",((struct CVALUE*)come_null_check(left_value_115, "b.c", 1043))->c_value))), come_pop_stackframe(), __exception_result_var_b148));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value207;
    __freed_obj__ = 0;
    __dec_obj86=((struct CVALUE*)come_null_check(come_value_116, "b.c", 1044))->type;
    ((struct CVALUE*)come_null_check(come_value_116, "b.c", 1044))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(((struct CVALUE*)come_null_check(left_value_115, "b.c", 1044))->type))));
    if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value208;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_116, "b.c", 1045))->type, "b.c", 1045))->mPointerNum--;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_116, "b.c", 1046))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1048),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_116, "b.c", 1048))->c_value),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1050),__exception_result_var_b149=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "b.c", 1050))->stack, "b.c", 1050)),(struct CVALUE*)come_increment_ref_count(come_value_116)), come_pop_stackframe(), __exception_result_var_b149);
    __freed_obj__ = 0;
    __result142__ = (_Bool)1;
    if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
    if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_node_v1(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b150;
struct sNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("b.c", 1057),skip_spaces_and_lf(info),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1058),parse_sharp_v5(info),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1060),err_msg(info,"invalid character(%c)(1)\n",*((struct sInfo*)come_null_check(info, "b.c", 1060))->p),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1061),__exception_result_var_b150=printf("XXX %s %d\n",((struct sInfo*)come_null_check(info, "b.c", 1061))->sname,((struct sInfo*)come_null_check(info, "b.c", 1061))->sline), come_pop_stackframe(), __exception_result_var_b150);
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1062),stackframe(),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("b.c", 1063),exit(3),come_pop_stackframe());
    __freed_obj__ = 0;
    __result143__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

int main(int argc, char** argv){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __exception_result_var_b151;
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
come_heap_init(0, 1);
    (come_push_stackframe("b.c", 1069),__exception_result_var_b151=puts("AAA"), come_pop_stackframe(), __exception_result_var_b151);
    __freed_obj__ = 0;
    __result144__ = 0;
    __freed_obj__ = 0;
    come_heap_final();
    return __result144__;
    __freed_obj__ = 0;
come_heap_final();
}

