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
struct sComeStackFrame
{
    char mSName[256];
    int mSLine;
};
struct list_item$1sComeStackFrameph
{
    struct sComeStackFrame* item;
    struct list_item$1sComeStackFrameph* prev;
    struct list_item$1sComeStackFrameph* next;
};
struct list$1sComeStackFrameph
{
    struct list_item$1sComeStackFrameph* head;
    struct list_item$1sComeStackFrameph* tail;
    int len;
    struct list_item$1sComeStackFrameph* it;
};
struct list$1sComeStackFrameph* gComeStackFrame=((void*)0);
struct buffer* gComeStackFrameBuffer=((void*)0);
int gNumComeStackFrame=0;
char* gCallerSName[10];
int gCallerSLine[10];
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
struct sMemHeader
{
    long int size;
    int freed;
    char* sname;
    int sline;
    char* caller_sname[10];
    int caller_sline[10];
    struct sMemHeader* next;
    struct sMemHeader* alloc_next;
};
struct sHeapPool
{
    char** mem_pages;
    int size_pages;
    int num_pages;
    char* top;
    struct sMemHeader* free_mem;
    struct sMemHeader* malloced_free_mem;
    struct sMemHeader* alloc_mem;
};
struct sHeapPool gHeapPool;
struct optional$2_IO_FILEpbool
{
    struct _IO_FILE* v1;
    _Bool v2;
};

// header function
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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
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

char* dirname(char* __path);

char* __xpg_basename(char* __path);

void come_push_stackframe(char* sname, int sline);

static void sComeStackFrame_finalize(struct sComeStackFrame* self);
static int list$1sComeStackFrameph_length(struct list$1sComeStackFrameph* self);
static void list$1sComeStackFrameph_pop_front(struct list$1sComeStackFrameph* self);
static void list_item$1sComeStackFramephp_finalize(struct list_item$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_add(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item);
static struct sComeStackFrame* sComeStackFrame_clone(struct sComeStackFrame* self);
void come_pop_stackframe();

void come_clear_stackframe();

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reset(struct list$1sComeStackFrameph* self);
void come_save_stackframe(char* sname, int sline);

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reverse(struct list$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_initialize(struct list$1sComeStackFrameph* self);
static void list$1sComeStackFramephp_finalize(struct list$1sComeStackFrameph* self);
static struct list$1sComeStackFrameph* list$1sComeStackFrameph_push_back(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item);
static struct sComeStackFrame* list$1sComeStackFrameph_begin(struct list$1sComeStackFrameph* self);
static _Bool list$1sComeStackFrameph_end(struct list$1sComeStackFrameph* self);
static struct sComeStackFrame* list$1sComeStackFrameph_next(struct list$1sComeStackFrameph* self);
void come_show_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init();

void come_heap_final();

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline);
static void come_free_mem_of_heap_pool(char* mem);
void* come_calloc(long int count, long int size, char* sname, int sline);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long int self, long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

struct optional$2charphbool* FILE_read(struct _IO_FILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f);

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2);
static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void list$1charph_finalize(struct list$1charph* self);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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

void come_push_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
void* right_value10;
struct sComeStackFrame* come_stackframe_5;
_Bool _if_conditional6;
void* right_value15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&come_stackframe_5, 0, sizeof(struct sComeStackFrame*));
memset(&right_value15, 0, sizeof(void*));
    if(_if_conditional5=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional5) {
        come_stackframe_5=(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value10=(struct sComeStackFrame*)come_calloc(1, sizeof(struct sComeStackFrame)*(1), "libcomelang2.c", 23))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        strncpy(((struct sComeStackFrame*)come_null_check(come_stackframe_5, "libcomelang2.c", 25))->mSName,sname,256);
        __freed_obj__ = 0;
        ((struct sComeStackFrame*)come_null_check(come_stackframe_5, "libcomelang2.c", 26))->mSLine=sline;
        __freed_obj__ = 0;
        if(_if_conditional6=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 32)))>=7,        __freed_obj__ = 0, 
        _if_conditional6) {
            list$1sComeStackFrameph_pop_front(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 29)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1sComeStackFrameph_add(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 32)),(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value15=sComeStackFrame_clone(come_stackframe_5)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value15;
        __freed_obj__ = 0;
        if(come_stackframe_5 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,come_stackframe_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static void sComeStackFrame_finalize(struct sComeStackFrame* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sComeStackFrameph_length(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result12__ = ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 415))->len;
            __freed_obj__ = 0;
            return __result12__;
            __freed_obj__ = 0;
}

static void list$1sComeStackFrameph_pop_front(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
struct list_item$1sComeStackFrameph* litem_6;
_Bool _if_conditional9;
struct list_item$1sComeStackFrameph* litem_7;
_Bool _if_conditional10;
struct list_item$1sComeStackFrameph* litem_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&litem_6, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&litem_7, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&litem_8, 0, sizeof(struct list_item$1sComeStackFrameph*));
                if(_if_conditional7=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 273))->len==1,                __freed_obj__ = 0, 
                _if_conditional7) {
                    litem_6=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 243))->head;
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 244))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 245))->tail=((void*)0);
                    __freed_obj__ = 0;
                    if(litem_6 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 249))->len--;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional9=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 273))->len==2,                    __freed_obj__ = 0, 
                    _if_conditional9) {
                        litem_7=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 252))->head;
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 254))->head=((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 254))->head, "./comelang2.h", 254))->next;
                        __freed_obj__ = 0;
                        ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 255))->head, "./comelang2.h", 255))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 256))->head, "./comelang2.h", 256))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 257))->tail=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 257))->head;
                        __freed_obj__ = 0;
                        if(litem_7 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 261))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional10=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 273))->len>=3,                        __freed_obj__ = 0, 
                        _if_conditional10) {
                            litem_8=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 264))->head;
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 266))->head=((struct list_item$1sComeStackFrameph*)come_null_check(litem_8, "./comelang2.h", 266))->next;
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 267))->head, "./comelang2.h", 267))->prev=((void*)0);
                            __freed_obj__ = 0;
                            if(litem_8 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,litem_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 271))->len--;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1sComeStackFramephp_finalize(struct list_item$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional8) {
                            if(((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,((struct list_item$1sComeStackFrameph*)come_null_check(self, "list_item$1sComeStackFramephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_add(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
void* right_value11;
struct list_item$1sComeStackFrameph* litem_9;
struct sComeStackFrame* __dec_obj6;
_Bool _if_conditional12;
void* right_value12;
struct list_item$1sComeStackFrameph* litem_10;
struct sComeStackFrame* __dec_obj7;
void* right_value13;
struct list_item$1sComeStackFrameph* litem_11;
struct sComeStackFrame* __dec_obj8;
struct list$1sComeStackFrameph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value13, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sComeStackFrameph*));
            if(_if_conditional11=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 237))->len==0,            __freed_obj__ = 0, 
            _if_conditional11) {
                litem_9=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value11=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 207))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11;
                __freed_obj__ = 0;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_9, "./comelang2.h", 209))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_9, "./comelang2.h", 210))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj6=((struct list_item$1sComeStackFrameph*)come_null_check(litem_9, "./comelang2.h", 211))->item;
                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_9, "./comelang2.h", 211))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                if(__dec_obj6) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_9;
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 214))->head=litem_9;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional12=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 237))->len==1,                __freed_obj__ = 0, 
                _if_conditional12) {
                    litem_10=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value12=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 217))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_10, "./comelang2.h", 219))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 219))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_10, "./comelang2.h", 220))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj7=((struct list_item$1sComeStackFrameph*)come_null_check(litem_10, "./comelang2.h", 221))->item;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_10, "./comelang2.h", 221))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                    if(__dec_obj7) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_10;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_10;
                    __freed_obj__ = 0;
                }
                else {
                    litem_11=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value13=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 227))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value13;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_11, "./comelang2.h", 229))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 229))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_11, "./comelang2.h", 230))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj8=((struct list_item$1sComeStackFrameph*)come_null_check(litem_11, "./comelang2.h", 231))->item;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(litem_11, "./comelang2.h", 231))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                    if(__dec_obj8) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_11;
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_11;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 237))->len++;
            __freed_obj__ = 0;
            __result13__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sComeStackFrame* sComeStackFrame_clone(struct sComeStackFrame* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
struct sComeStackFrame* __result14__;
void* right_value14;
struct sComeStackFrame* result_12;
_Bool _if_conditional14;
_Bool _if_conditional15;
struct sComeStackFrame* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct sComeStackFrame*));
            if(_if_conditional13=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional13) {
                __result14__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_12=(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value14=(struct sComeStackFrame*)come_calloc(1, sizeof(struct sComeStackFrame)*(1), "sComeStackFrame_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                memcpy(((struct sComeStackFrame*)come_null_check(result_12, "sComeStackFrame_clone", 4))->mSName,((struct sComeStackFrame*)come_null_check(self, "sComeStackFrame_clone", 4))->mSName,sizeof(((struct sComeStackFrame*)come_null_check(result_12, "sComeStackFrame_clone", 4))->mSName));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                ((struct sComeStackFrame*)come_null_check(result_12, "sComeStackFrame_clone", 5))->mSLine=((struct sComeStackFrame*)come_null_check(self, "sComeStackFrame_clone", 5))->mSLine;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result15__ = __result_obj__ = result_12;
            if(result_12 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
            if(result_12 && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void come_pop_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional16=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional16) {
        list$1sComeStackFrameph_pop_front(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 39)));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void come_clear_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    buffer_reset(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 45)));
    __freed_obj__ = 0;
    list$1sComeStackFrameph_reset(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 46)));
    __freed_obj__ = 0;
    gNumComeStackFrame=0;
    __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reset(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sComeStackFrameph* it_13;
_Bool _while_condtional1;
struct list_item$1sComeStackFrameph* prev_it_14;
struct list$1sComeStackFrameph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sComeStackFrameph*));
        it_13=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 481))->head;
        __freed_obj__ = 0;
        while(_while_condtional1=it_13!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional1) {
            prev_it_14=it_13;
            __freed_obj__ = 0;
            it_13=((struct list_item$1sComeStackFrameph*)come_null_check(it_13, "./comelang2.h", 484))->next;
            __freed_obj__ = 0;
            if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 491))->len=0;
        __freed_obj__ = 0;
        __result16__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result16__;
        __freed_obj__ = 0;
}

void come_save_stackframe(char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
_Bool _if_conditional18;
void* right_value16;
void* right_value23;
struct list$1sComeStackFrameph* o2_saved_22;
struct sComeStackFrame* it_25;
_Bool _for_condtionalA1;
void* right_value24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&o2_saved_22, 0, sizeof(struct list$1sComeStackFrameph*));
memset(&it_25, 0, sizeof(struct sComeStackFrame*));
memset(&right_value24, 0, sizeof(void*));
    if(_if_conditional17=gComeStackFrame,    __freed_obj__ = 0, 
    _if_conditional17) {
        if(_if_conditional18=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 61)))>gNumComeStackFrame,        __freed_obj__ = 0, 
        _if_conditional18) {
            buffer_reset(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 54)));
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 55)),((char*)(right_value16=xsprintf("%s %d\n",sname,sline))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
            for(
            o2_saved_22=(struct list$1sComeStackFrameph*)come_increment_ref_count((((struct list$1sComeStackFrameph*)(right_value23=list$1sComeStackFrameph_reverse(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 59))))))),it_25=list$1sComeStackFrameph_begin(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_22), "libcomelang2.c", 59))) ,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value23),
            (right_value23 && right_value23 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(list$1sComeStackFramephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value23, 
            __freed_obj__ = 0, 
            0;            _for_condtionalA1=            !list$1sComeStackFrameph_end(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_22), "libcomelang2.c", 59))) ,            __freed_obj__ = 0, 
            _for_condtionalA1;            it_25=list$1sComeStackFrameph_next(((struct list$1sComeStackFrameph*)come_null_check((o2_saved_22), "libcomelang2.c", 59))) ,            __freed_obj__ = 0, 
            0            ){
                buffer_append_str(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 57)),((char*)(right_value24=xsprintf("%s %d\n",((struct sComeStackFrame*)come_null_check(it_25, "libcomelang2.c", 57))->mSName,((struct sComeStackFrame*)come_null_check(it_25, "libcomelang2.c", 57))->mSLine))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = 0;
            }
            if(o2_saved_22 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,o2_saved_22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            gNumComeStackFrame=list$1sComeStackFrameph_length(((struct list$1sComeStackFrameph*)come_null_check(gComeStackFrame, "libcomelang2.c", 59)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_reverse(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
void* right_value18;
struct list$1sComeStackFrameph* result_17;
struct list_item$1sComeStackFrameph* it_18;
_Bool _while_condtional3;
void* right_value22;
struct list$1sComeStackFrameph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sComeStackFrameph*));
memset(&it_18, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value22, 0, sizeof(void*));
                result_17=(struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value18=list$1sComeStackFrameph_initialize((struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value17=(struct list$1sComeStackFrameph*)come_calloc(1, sizeof(struct list$1sComeStackFrameph)*(1), "./comelang2.h", 1000))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value17;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value18;
                __freed_obj__ = 0;
                it_18=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 1002))->tail;
                __freed_obj__ = 0;
                while(_while_condtional3=it_18!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional3) {
                    list$1sComeStackFrameph_push_back(((struct list$1sComeStackFrameph*)come_null_check(result_17, "./comelang2.h", 1004)),(struct sComeStackFrame*)come_increment_ref_count(((struct sComeStackFrame*)(right_value22=sComeStackFrame_clone(((struct list_item$1sComeStackFrameph*)come_null_check(it_18, "./comelang2.h", 1004))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value22;
                    __freed_obj__ = 0;
                    it_18=((struct list_item$1sComeStackFrameph*)come_null_check(it_18, "./comelang2.h", 1005))->prev;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_17;
                if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_initialize(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sComeStackFrameph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result17__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result17__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sComeStackFramephp_finalize(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sComeStackFrameph* it_15;
_Bool _while_condtional2;
struct list_item$1sComeStackFrameph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sComeStackFrameph*));
                        it_15=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 174))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_15!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_16=it_15;
                            __freed_obj__ = 0;
                            it_15=((struct list_item$1sComeStackFrameph*)come_null_check(it_15, "./comelang2.h", 177))->next;
                            __freed_obj__ = 0;
                            if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sComeStackFrameph* list$1sComeStackFrameph_push_back(struct list$1sComeStackFrameph* self, struct sComeStackFrame* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
void* right_value19;
struct list_item$1sComeStackFrameph* litem_19;
struct sComeStackFrame* __dec_obj9;
_Bool _if_conditional20;
void* right_value20;
struct list_item$1sComeStackFrameph* litem_20;
struct sComeStackFrame* __dec_obj10;
void* right_value21;
struct list_item$1sComeStackFrameph* litem_21;
struct sComeStackFrame* __dec_obj11;
struct list$1sComeStackFrameph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sComeStackFrameph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sComeStackFrameph*));
                        if(_if_conditional19=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 307))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional19) {
                            litem_19=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value19=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 277))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value19;
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_19, "./comelang2.h", 279))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_19, "./comelang2.h", 280))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj9=((struct list_item$1sComeStackFrameph*)come_null_check(litem_19, "./comelang2.h", 281))->item;
                            ((struct list_item$1sComeStackFrameph*)come_null_check(litem_19, "./comelang2.h", 281))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                            if(__dec_obj9) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_19;
                            __freed_obj__ = 0;
                            ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 284))->head=litem_19;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional20=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 307))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional20) {
                                litem_20=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value20=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 287))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_20, "./comelang2.h", 289))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 289))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_20, "./comelang2.h", 290))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sComeStackFrameph*)come_null_check(litem_20, "./comelang2.h", 291))->item;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_20, "./comelang2.h", 291))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_20;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_21=(struct list_item$1sComeStackFrameph*)come_increment_ref_count(((struct list_item$1sComeStackFrameph*)(right_value21=(struct list_item$1sComeStackFrameph*)come_calloc(1, sizeof(struct list_item$1sComeStackFrameph)*(1), "./comelang2.h", 297))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sComeStackFramephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value21;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_21, "./comelang2.h", 299))->prev=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 299))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_21, "./comelang2.h", 300))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sComeStackFrameph*)come_null_check(litem_21, "./comelang2.h", 301))->item;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(litem_21, "./comelang2.h", 301))->item=(struct sComeStackFrame*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sComeStackFrame_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_21;
                                __freed_obj__ = 0;
                                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_21;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 307))->len++;
                        __freed_obj__ = 0;
                        __result18__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result18__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sComeStackFrame_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sComeStackFrame* list$1sComeStackFrameph_begin(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
struct sComeStackFrame* result_23;
struct sComeStackFrame* __result20__;
_Bool _if_conditional22;
struct sComeStackFrame* __result21__;
struct sComeStackFrame* result_24;
struct sComeStackFrame* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(struct sComeStackFrame*));
memset(&result_24, 0, sizeof(struct sComeStackFrame*));
                if(_if_conditional21=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    __freed_obj__ = 0;
                    memset(&result_23,0,sizeof(struct sComeStackFrame*));
                    __freed_obj__ = 0;
                    __result20__ = __result_obj__ = result_23;
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 341))->head;
                __freed_obj__ = 0;
                if(_if_conditional22=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 347))->it,                __freed_obj__ = 0, 
                _if_conditional22) {
                    __result21__ = __result_obj__ = ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_24,0,sizeof(struct sComeStackFrame*));
                __freed_obj__ = 0;
                __result22__ = __result_obj__ = result_24;
                __freed_obj__ = 0;
                return __result22__;
                __freed_obj__ = 0;
}

static _Bool list$1sComeStackFrameph_end(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result23__ = self==((void*)0)||((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
}

static struct sComeStackFrame* list$1sComeStackFrameph_next(struct list$1sComeStackFrameph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
struct sComeStackFrame* result_26;
struct sComeStackFrame* __result24__;
_Bool _if_conditional24;
struct sComeStackFrame* __result25__;
struct sComeStackFrame* result_27;
struct sComeStackFrame* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_26, 0, sizeof(struct sComeStackFrame*));
memset(&result_27, 0, sizeof(struct sComeStackFrame*));
                if(_if_conditional23=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    __freed_obj__ = 0;
                    memset(&result_26,0,sizeof(struct sComeStackFrame*));
                    __freed_obj__ = 0;
                    __result24__ = __result_obj__ = result_26;
                    __freed_obj__ = 0;
                    return __result24__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
                __freed_obj__ = 0;
                if(_if_conditional24=((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 365))->it,                __freed_obj__ = 0, 
                _if_conditional24) {
                    __result25__ = __result_obj__ = ((struct list_item$1sComeStackFrameph*)come_null_check(((struct list$1sComeStackFrameph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_27,0,sizeof(struct sComeStackFrame*));
                __freed_obj__ = 0;
                __result26__ = __result_obj__ = result_27;
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
}

void come_show_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
    printf("%s",((char*)(right_value25=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 66))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25;
    __freed_obj__ = 0;
}

void stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
    printf("%s",((char*)(right_value26=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 71))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value26;
    __freed_obj__ = 0;
}

char* come_get_stackframe(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value27;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((char*)(right_value27=buffer_to_string(((struct buffer*)come_null_check(gComeStackFrameBuffer, "libcomelang2.c", 76)))));
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}

void* come_null_check(void* mem, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
int i_28;
_Bool _for_condtionalA2;
_Bool _if_conditional26;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_28, 0, sizeof(int));
    if(_if_conditional25=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional25) {
        printf("%s %d: null check error\n",sname,sline);
        __freed_obj__ = 0;
        for(
        i_28=2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_28<10 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_28++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional26=gCallerSName[i_28],            __freed_obj__ = 0, 
            _if_conditional26) {
                printf("%s %d\n",gCallerSName[i_28],gCallerSLine[i_28]);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result28__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool __result29__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional27=!self,    __freed_obj__ = 0, 
    _if_conditional27) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional28=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 102))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional28) {
            __result29__ = self;
            __freed_obj__ = 0;
            return __result29__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result30__ = self;
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}

_Bool bool_value(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = self;
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

int int_catch(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
_Bool _if_conditional30;
int __result32__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional29=self<0,    __freed_obj__ = 0, 
    _if_conditional29) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional30=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 121))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional30) {
            __result32__ = self;
            __freed_obj__ = 0;
            return __result32__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result33__ = self;
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

int int_expect(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
_Bool _if_conditional32;
int __result34__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional31=self<0,    __freed_obj__ = 0, 
    _if_conditional31) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional32=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 133))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional32) {
            __result34__ = self;
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        exit(1);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result35__ = self;
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

int int_value(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = self;
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}

int int_except(int self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional33;
_Bool _if_conditional34;
int __result37__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional33=self<0,    __freed_obj__ = 0, 
    _if_conditional33) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional34=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 151))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional34) {
            __result37__ = self;
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result38__ = self;
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool __result39__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional35=!self,    __freed_obj__ = 0, 
    _if_conditional35) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional36=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 163))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional36) {
            __result39__ = self;
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result40__ = self;
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool __result41__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional37=!self,    __freed_obj__ = 0, 
    _if_conditional37) {
        block(parent);
        __freed_obj__ = 0;
        if(_if_conditional38=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 176))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional38) {
            __result41__ = self;
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result42__ = self;
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}

void xassert(char* msg, _Bool test){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    __freed_obj__ = 0;
    if(_if_conditional39=!test,    __freed_obj__ = 0, 
    _if_conditional39) {
        puts("false");
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts("ok");
    __freed_obj__ = 0;
}

void come_heap_init(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
const int size_pages_29=4;
int i_30;
_Bool _for_condtionalA3;
void* right_value28;
void* right_value29;
void* right_value30;
void* right_value31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_30, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
    memset(gCallerSName,0,sizeof(char*)*10);
    __freed_obj__ = 0;
    memset(gCallerSLine,0,sizeof(int)*10);
    __freed_obj__ = 0;
    if(_if_conditional40=gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional40) {
        memset(&gHeapPool,0,sizeof(struct sHeapPool));
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        gHeapPool.size_pages=size_pages_29;
        __freed_obj__ = 0;
        gHeapPool.mem_pages=calloc(1,sizeof(void*)*size_pages_29);
        __freed_obj__ = 0;
        for(
        i_30=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_30<size_pages_29 ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_30++ ,        __freed_obj__ = 0, 
        0        ){
            gHeapPool.mem_pages[i_30]=calloc(1,sizeof(char)*4048*2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        gHeapPool.top=gHeapPool.mem_pages[0];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    gComeStackFrame=(struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value29=list$1sComeStackFrameph_initialize((struct list$1sComeStackFrameph*)come_increment_ref_count(((struct list$1sComeStackFrameph*)(right_value28=(struct list$1sComeStackFrameph*)come_calloc(1, sizeof(struct list$1sComeStackFrameph)*(1), "libcomelang2.c", 255))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value28;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value29;
    __freed_obj__ = 0;
    gComeStackFrameBuffer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value30=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 256))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value30);
    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value30;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value31;
    __freed_obj__ = 0;
}

void come_heap_final(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sMemHeader* it_31;
_Bool _while_condtional4;
struct sMemHeader* next_it_32;
_Bool _if_conditional43;
int i_33;
_Bool _for_condtionalA4;
_Bool _if_conditional44;
int i_34;
_Bool _for_condtionalA5;
struct sMemHeader* it_35;
_Bool _while_condtional5;
struct sMemHeader* next_it_36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_31, 0, sizeof(struct sMemHeader*));
memset(&next_it_32, 0, sizeof(struct sMemHeader*));
memset(&i_33, 0, sizeof(int));
memset(&i_34, 0, sizeof(int));
memset(&it_35, 0, sizeof(struct sMemHeader*));
memset(&next_it_36, 0, sizeof(struct sMemHeader*));
    if(gComeStackFrame && !__freed_obj__) { come_call_finalizer(list$1sComeStackFramephp_finalize,gComeStackFrame, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(gComeStackFrameBuffer && !__freed_obj__) { come_call_finalizer(buffer_finalize,gComeStackFrameBuffer, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional41=gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional41) {
        if(_if_conditional42=gComeDebug,        __freed_obj__ = 0, 
        _if_conditional42) {
            it_31=gHeapPool.alloc_mem;
            __freed_obj__ = 0;
            while(_while_condtional4=it_31,            __freed_obj__ = 0, 
            _while_condtional4) {
                next_it_32=((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 268))->alloc_next;
                __freed_obj__ = 0;
                if(_if_conditional43=!((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 284))->freed,                __freed_obj__ = 0, 
                _if_conditional43) {
                    printf("%s %d, ",((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 271))->sname,((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 271))->sline);
                    __freed_obj__ = 0;
                    for(
                    i_33=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA4=                    i_33<10 ,                    __freed_obj__ = 0, 
                    _for_condtionalA4;                    i_33++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        printf("%s %d",((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 273))->caller_sname[i_33],((struct sMemHeader*)come_null_check(it_31, "libcomelang2.c", 273))->caller_sline[i_33]);
                        __freed_obj__ = 0;
                        if(_if_conditional44=i_33==10-1,                        __freed_obj__ = 0, 
                        _if_conditional44) {
                            printf(":");
                            __freed_obj__ = 0;
                        }
                        else {
                            printf(", ");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    printf(": detecting memory leak(%p)\n",(char*)it_31+sizeof(struct sMemHeader)+sizeof(long int)+sizeof(long int));
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_31=next_it_32;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        for(
        i_34=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        i_34<gHeapPool.size_pages ,        __freed_obj__ = 0, 
        _for_condtionalA5;        i_34++ ,        __freed_obj__ = 0, 
        0        ){
            free(gHeapPool.mem_pages[i_34]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(gHeapPool.mem_pages);
        __freed_obj__ = 0;
        it_35=gHeapPool.malloced_free_mem;
        __freed_obj__ = 0;
        while(_while_condtional5=it_35,        __freed_obj__ = 0, 
        _while_condtional5) {
            next_it_36=((struct sMemHeader*)come_null_check(it_35, "libcomelang2.c", 295))->next;
            __freed_obj__ = 0;
            free(it_35);
            __freed_obj__ = 0;
            it_35=next_it_36;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
void* __result43__;
void* result_37;
_Bool _if_conditional46;
struct sMemHeader* it_38;
struct sMemHeader* prev_it_39;
_Bool _while_condtional6;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* __result44__;
struct sMemHeader* header_40;
void* __result45__;
struct sMemHeader* it_41;
struct sMemHeader* prev_it_42;
_Bool _while_condtional7;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* __result46__;
_Bool _if_conditional51;
_Bool _if_conditional52;
int new_size_pages_43;
char** new_mem_pages_44;
int i_45;
_Bool _for_condtionalA6;
int i_46;
_Bool _for_condtionalA7;
struct sMemHeader* header_47;
void* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_37, 0, sizeof(void*));
memset(&it_38, 0, sizeof(struct sMemHeader*));
memset(&prev_it_39, 0, sizeof(struct sMemHeader*));
memset(&header_40, 0, sizeof(struct sMemHeader*));
memset(&it_41, 0, sizeof(struct sMemHeader*));
memset(&prev_it_42, 0, sizeof(struct sMemHeader*));
memset(&new_size_pages_43, 0, sizeof(int));
memset(&new_mem_pages_44, 0, sizeof(char**));
memset(&i_45, 0, sizeof(int));
memset(&i_46, 0, sizeof(int));
memset(&header_47, 0, sizeof(struct sMemHeader*));
    if(_if_conditional45=!gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional45) {
        __result43__ = __result_obj__ = calloc(1,size);
        __freed_obj__ = 0;
        return __result43__;
        __freed_obj__ = 0;
    }
    else {
        result_37=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional46=size+sizeof(struct sMemHeader)>=4048*2,        __freed_obj__ = 0, 
        _if_conditional46) {
            it_38=gHeapPool.malloced_free_mem;
            __freed_obj__ = 0;
            prev_it_39=it_38;
            __freed_obj__ = 0;
            while(_while_condtional6=it_38,            __freed_obj__ = 0, 
            _while_condtional6) {
                if(_if_conditional47=size<=((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 344))->size,                __freed_obj__ = 0, 
                _if_conditional47) {
                    result_37=(char*)it_38+sizeof(struct sMemHeader);
                    __freed_obj__ = 0;
                    if(_if_conditional48=it_38==gHeapPool.malloced_free_mem,                    __freed_obj__ = 0, 
                    _if_conditional48) {
                        gHeapPool.malloced_free_mem=((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 326))->next;
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sMemHeader*)come_null_check(prev_it_39, "libcomelang2.c", 329))->next=((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 329))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    memset(result_37,0,size);
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 334))->freed=(_Bool)0;
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 335))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 336))->sname=sname;
                    __freed_obj__ = 0;
                    ((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 337))->sline=sline;
                    __freed_obj__ = 0;
                    memcpy(((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 338))->caller_sname,gCallerSName,sizeof(char*)*10);
                    __freed_obj__ = 0;
                    memcpy(((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 339))->caller_sline,gCallerSLine,sizeof(int)*10);
                    __freed_obj__ = 0;
                    __result44__ = __result_obj__ = result_37;
                    __freed_obj__ = 0;
                    return __result44__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                prev_it_39=it_38;
                __freed_obj__ = 0;
                it_38=((struct sMemHeader*)come_null_check(it_38, "libcomelang2.c", 345))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            header_40=calloc(1,size+sizeof(struct sMemHeader));
            __freed_obj__ = 0;
            result_37=(char*)header_40+sizeof(struct sMemHeader);
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 352))->size=size;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 353))->freed=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 354))->sname=sname;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 355))->sline=sline;
            __freed_obj__ = 0;
            memcpy(((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 356))->caller_sname,gCallerSName,sizeof(char*)*10);
            __freed_obj__ = 0;
            memcpy(((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 357))->caller_sline,gCallerSLine,sizeof(int)*10);
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_40, "libcomelang2.c", 359))->alloc_next=gHeapPool.alloc_mem;
            __freed_obj__ = 0;
            gHeapPool.alloc_mem=header_40;
            __freed_obj__ = 0;
            __result45__ = __result_obj__ = result_37;
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_41=gHeapPool.free_mem;
        __freed_obj__ = 0;
        prev_it_42=it_41;
        __freed_obj__ = 0;
        while(_while_condtional7=it_41,        __freed_obj__ = 0, 
        _while_condtional7) {
            if(_if_conditional49=size<=((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 391))->size,            __freed_obj__ = 0, 
            _if_conditional49) {
                result_37=(char*)it_41+sizeof(struct sMemHeader);
                __freed_obj__ = 0;
                if(_if_conditional50=it_41==gHeapPool.free_mem,                __freed_obj__ = 0, 
                _if_conditional50) {
                    gHeapPool.free_mem=((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 373))->next;
                    __freed_obj__ = 0;
                }
                else {
                    ((struct sMemHeader*)come_null_check(prev_it_42, "libcomelang2.c", 376))->next=((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 376))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                memset(result_37,0,size);
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 381))->freed=(_Bool)0;
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 382))->next=((void*)0);
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 383))->sname=sname;
                __freed_obj__ = 0;
                ((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 384))->sline=sline;
                __freed_obj__ = 0;
                memcpy(((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 385))->caller_sname,gCallerSName,sizeof(char*)*10);
                __freed_obj__ = 0;
                memcpy(((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 386))->caller_sline,gCallerSLine,sizeof(int)*10);
                __freed_obj__ = 0;
                __result46__ = __result_obj__ = result_37;
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            prev_it_42=it_41;
            __freed_obj__ = 0;
            it_41=((struct sMemHeader*)come_null_check(it_41, "libcomelang2.c", 392))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=gHeapPool.top+size+sizeof(struct sMemHeader)-gHeapPool.mem_pages[gHeapPool.num_pages]>=4048*2,        __freed_obj__ = 0, 
        _if_conditional51) {
            gHeapPool.num_pages++;
            __freed_obj__ = 0;
            if(_if_conditional52=gHeapPool.num_pages==gHeapPool.size_pages,            __freed_obj__ = 0, 
            _if_conditional52) {
                new_size_pages_43=gHeapPool.size_pages*2;
                __freed_obj__ = 0;
                new_mem_pages_44=calloc(1,sizeof(char*)*new_size_pages_43);
                __freed_obj__ = 0;
                for(
                i_45=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA6=                i_45<gHeapPool.size_pages ,                __freed_obj__ = 0, 
                _for_condtionalA6;                i_45++ ,                __freed_obj__ = 0, 
                0                ){
                    new_mem_pages_44[i_45]=gHeapPool.mem_pages[i_45];
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                for(
                i_46=gHeapPool.size_pages ,                __freed_obj__ = 0, 
                0;                _for_condtionalA7=                i_46<new_size_pages_43 ,                __freed_obj__ = 0, 
                _for_condtionalA7;                i_46++ ,                __freed_obj__ = 0, 
                0                ){
                    new_mem_pages_44[i_46]=calloc(1,sizeof(char)*4048*2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                free(gHeapPool.mem_pages);
                __freed_obj__ = 0;
                gHeapPool.mem_pages=new_mem_pages_44;
                __freed_obj__ = 0;
                gHeapPool.size_pages=new_size_pages_43;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            gHeapPool.top=gHeapPool.mem_pages[gHeapPool.num_pages];
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        header_47=(struct sMemHeader*)gHeapPool.top;
        __freed_obj__ = 0;
        result_37=gHeapPool.top+sizeof(struct sMemHeader);
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 424))->size=size;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 425))->freed=(_Bool)0;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 426))->sname=sname;
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 427))->sline=sline;
        __freed_obj__ = 0;
        memcpy(((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 428))->caller_sname,gCallerSName,sizeof(char*)*10);
        __freed_obj__ = 0;
        memcpy(((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 429))->caller_sline,gCallerSLine,sizeof(int)*10);
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 430))->next=((void*)0);
        __freed_obj__ = 0;
        ((struct sMemHeader*)come_null_check(header_47, "libcomelang2.c", 432))->alloc_next=gHeapPool.alloc_mem;
        __freed_obj__ = 0;
        gHeapPool.alloc_mem=header_47;
        __freed_obj__ = 0;
        gHeapPool.top+=size+sizeof(struct sMemHeader);
        __freed_obj__ = 0;
        memset(result_37,0,size);
        __freed_obj__ = 0;
        __result47__ = __result_obj__ = result_37;
        __freed_obj__ = 0;
        return __result47__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

static void come_free_mem_of_heap_pool(char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sMemHeader* header_48;
long int size_49;
int freed_50;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_48, 0, sizeof(struct sMemHeader*));
memset(&size_49, 0, sizeof(long int));
memset(&freed_50, 0, sizeof(int));
    if(_if_conditional53=!gComeMalloc,    __freed_obj__ = 0, 
    _if_conditional53) {
        if(_if_conditional54=mem,        __freed_obj__ = 0, 
        _if_conditional54) {
            free(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        header_48=(struct sMemHeader*)(mem-sizeof(struct sMemHeader));
        __freed_obj__ = 0;
        size_49=((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 457))->size;
        __freed_obj__ = 0;
        freed_50=((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 458))->freed;
        __freed_obj__ = 0;
        if(_if_conditional55=size_49+sizeof(struct sMemHeader)>=4048*2,        __freed_obj__ = 0, 
        _if_conditional55) {
            if(_if_conditional56=freed_50,            __freed_obj__ = 0, 
            _if_conditional56) {
                __freed_obj__ = 0;
                return;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 467))->next=gHeapPool.malloced_free_mem;
            __freed_obj__ = 0;
            gHeapPool.malloced_free_mem=header_48;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 470))->freed=(_Bool)1;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional57=freed_50,            __freed_obj__ = 0, 
            _if_conditional57) {
                __freed_obj__ = 0;
                return;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 478))->next=gHeapPool.free_mem;
            __freed_obj__ = 0;
            gHeapPool.free_mem=header_48;
            __freed_obj__ = 0;
            ((struct sMemHeader*)come_null_check(header_48, "libcomelang2.c", 481))->freed=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void* come_calloc(long int count, long int size, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_51;
long int* ref_count_52;
long int* size2_53;
void* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_51, 0, sizeof(char*));
memset(&ref_count_52, 0, sizeof(long int*));
memset(&size2_53, 0, sizeof(long int*));
    mem_51=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline);
    __freed_obj__ = 0;
    ref_count_52=(long int*)mem_51;
    __freed_obj__ = 0;
    *ref_count_52=0;
    __freed_obj__ = 0;
    size2_53=(long int*)(mem_51+sizeof(long int));
    __freed_obj__ = 0;
    *size2_53=size*count+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    __result48__ = __result_obj__ = mem_51+sizeof(long int)+sizeof(long int);
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

void come_free_object(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
long int* ref_count_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_54, 0, sizeof(long int*));
    if(_if_conditional58=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional58) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_54=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    come_free_mem_of_heap_pool((char*)ref_count_54);
    __freed_obj__ = 0;
}

void* come_memdup(void* block, char* sname, int sline){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* __result49__;
char* mem_55;
long int* size_p_56;
long int size_57;
void* result_58;
void* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_55, 0, sizeof(char*));
memset(&size_p_56, 0, sizeof(long int*));
memset(&size_57, 0, sizeof(long int));
memset(&result_58, 0, sizeof(void*));
    if(_if_conditional59=!block,    __freed_obj__ = 0, 
    _if_conditional59) {
        __result49__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_55=(char*)block-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    size_p_56=(long int*)(mem_55+sizeof(long int));
    __freed_obj__ = 0;
    size_57=*size_p_56-sizeof(long int)-sizeof(long int);
    __freed_obj__ = 0;
    result_58=come_calloc(1,size_57,sname,sline);
    __freed_obj__ = 0;
    memcpy(result_58,block,size_57);
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = result_58;
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

void* come_increment_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
void* __result51__;
long int* ref_count_59;
void* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_59, 0, sizeof(long int*));
    if(_if_conditional60=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional60) {
        __result51__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_59=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    (*ref_count_59)++;
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

void* come_print_ref_count(void* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
void* __result53__;
long int* ref_count_60;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_60, 0, sizeof(long int*));
    if(_if_conditional61=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional61) {
        __result53__ = __result_obj__ = mem;
        __freed_obj__ = 0;
        return __result53__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_60=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    printf("ref_count %ld\n",*ref_count_60);
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional62;
void* __result55__;
long int* ref_count_61;
_Bool _if_conditional63;
long int count_62;
_Bool _if_conditional64;
_Bool _if_conditional65;
void (*finalizer_63)(void*);
void* __result56__;
void* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_61, 0, sizeof(long int*));
memset(&count_62, 0, sizeof(long int));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
    if(_if_conditional62=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional62) {
        __result55__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ref_count_61=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    __freed_obj__ = 0;
    if(_if_conditional63=!no_decrement,    __freed_obj__ = 0, 
    _if_conditional63) {
        (*ref_count_61)--;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    count_62=*ref_count_61;
    __freed_obj__ = 0;
    if(_if_conditional64=!no_free&&(count_62<=0||force_delete_),    __freed_obj__ = 0, 
    _if_conditional64) {
        if(_if_conditional65=protocol_obj&&protocol_fun,        __freed_obj__ = 0, 
        _if_conditional65) {
            finalizer_63=protocol_fun;
            __freed_obj__ = 0;
            finalizer_63(protocol_obj);
            __freed_obj__ = 0;
            come_free_object(protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_free_object(mem);
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result57__ = __result_obj__ = mem;
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
void (*finalizer_64)(void*);
void (*finalizer_65)(void*);
long int* ref_count_66;
_Bool _if_conditional70;
long int count_67;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
void (*finalizer_68)(void*);
_Bool _if_conditional74;
void (*finalizer_69)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&ref_count_66, 0, sizeof(long int*));
memset(&count_67, 0, sizeof(long int));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
    if(_if_conditional66=mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional66) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=call_finalizer_only,    __freed_obj__ = 0, 
    _if_conditional67) {
        if(_if_conditional68=fun,        __freed_obj__ = 0, 
        _if_conditional68) {
            if(_if_conditional69=protocol_obj&&protocol_fun,            __freed_obj__ = 0, 
            _if_conditional69) {
                finalizer_64=protocol_fun;
                __freed_obj__ = 0;
                finalizer_64(protocol_obj);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            finalizer_65=fun;
            __freed_obj__ = 0;
            finalizer_65(mem);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        ref_count_66=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        __freed_obj__ = 0;
        if(_if_conditional70=!no_decrement,        __freed_obj__ = 0, 
        _if_conditional70) {
            (*ref_count_66)--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        count_67=*ref_count_66;
        __freed_obj__ = 0;
        if(_if_conditional71=!no_free&&(count_67<=0||force_delete_),        __freed_obj__ = 0, 
        _if_conditional71) {
            if(_if_conditional72=mem,            __freed_obj__ = 0, 
            _if_conditional72) {
                if(_if_conditional73=protocol_obj&&protocol_fun,                __freed_obj__ = 0, 
                _if_conditional73) {
                    finalizer_68=protocol_fun;
                    __freed_obj__ = 0;
                    finalizer_68(protocol_obj);
                    __freed_obj__ = 0;
                    come_free_object(protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional74=fun,                __freed_obj__ = 0, 
                _if_conditional74) {
                    finalizer_69=fun;
                    __freed_obj__ = 0;
                    finalizer_69(mem);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object(mem);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* __builtin_string(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
char* __result58__;
int len_70;
void* right_value32;
char* result_71;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_70, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&result_71, 0, sizeof(char*));
    if(_if_conditional75=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional75) {
        __result58__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_70=strlen(str)+1;
    __freed_obj__ = 0;
    result_71=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(len_70)), "libcomelang2.c", 636))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value32;
    __freed_obj__ = 0;
    strncpy(result_71,str,len_70);
    __freed_obj__ = 0;
    __result59__ = __result_obj__ = result_71;
    if(result_71 && !__freed_obj__) { result_71 = come_decrement_ref_count(result_71, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
    if(result_71 && !__freed_obj__) { result_71 = come_decrement_ref_count(result_71, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_72;
int i_73;
_Bool _for_condtionalA8;
_Bool _if_conditional76;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_72, 0, sizeof(_Bool));
memset(&i_73, 0, sizeof(int));
    found_72=(_Bool)0;
    __freed_obj__ = 0;
    for(
    i_73=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    i_73<len ,    __freed_obj__ = 0, 
    _for_condtionalA8;    i_73++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional76=array[i_73]==element,        __freed_obj__ = 0, 
        _if_conditional76) {
            found_72=(_Bool)1;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result60__ = found_72;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

struct buffer* buffer_initialize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value33;
char* __dec_obj12;
struct buffer* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 660))->size=128;
    __freed_obj__ = 0;
    __dec_obj12=((struct buffer*)come_null_check(self, "libcomelang2.c", 661))->buf;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 661))->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 661))->size)), "libcomelang2.c", 661))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value33;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 662))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 663))->len=0;
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional77=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 670))->buf,    __freed_obj__ = 0, 
    _if_conditional77) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 670))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 670))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 670))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void buffer_force_finalize(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional78=self&&((struct buffer*)come_null_check(self, "libcomelang2.c", 674))->buf,    __freed_obj__ = 0, 
    _if_conditional78) {
        if(((struct buffer*)come_null_check(self, "libcomelang2.c", 674))->buf && !__freed_obj__) { ((struct buffer*)come_null_check(self, "libcomelang2.c", 674))->buf = come_decrement_ref_count(((struct buffer*)come_null_check(self, "libcomelang2.c", 674))->buf, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct buffer* buffer_clone(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct buffer* __result62__;
void* right_value34;
struct buffer* result_74;
void* right_value35;
char* __dec_obj13;
struct buffer* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct buffer*));
memset(&right_value35, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional79) {
        __result62__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_74=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value34=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 683))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_74, "libcomelang2.c", 685))->size=((struct buffer*)come_null_check(self, "libcomelang2.c", 685))->size;
    __freed_obj__ = 0;
    __dec_obj13=((struct buffer*)come_null_check(result_74, "libcomelang2.c", 686))->buf;
    ((struct buffer*)come_null_check(result_74, "libcomelang2.c", 686))->buf=(char*)come_increment_ref_count(((char*)(right_value35=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 686))->size)), "libcomelang2.c", 686))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value35;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(result_74, "libcomelang2.c", 687))->len=((struct buffer*)come_null_check(self, "libcomelang2.c", 687))->len;
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(result_74, "libcomelang2.c", 688))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 688))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 688))->len);
    __freed_obj__ = 0;
    __result63__ = __result_obj__ = result_74;
    if(result_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
    if(result_74 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional80;
int __result64__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional80=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional80) {
        __result64__ = 0;
        __freed_obj__ = 0;
        return __result64__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result65__ = ((struct buffer*)come_null_check(self, "libcomelang2.c", 698))->len;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

void buffer_reset(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional81=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional81) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 706))->buf[0]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 707))->len=0;
    __freed_obj__ = 0;
}

void buffer_trim(struct buffer* self, int len){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional82=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional82) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 715))->len-=len;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 716))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 716))->len]=0;
    __freed_obj__ = 0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
struct buffer* __result66__;
_Bool _if_conditional84;
void* right_value36;
char* old_buf_75;
int old_len_76;
int new_size_77;
void* right_value37;
char* __dec_obj14;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
memset(&right_value37, 0, sizeof(void*));
    if(_if_conditional83=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional83) {
        __result66__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional84=((struct buffer*)come_null_check(self, "libcomelang2.c", 735))->len+size+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 735))->size,    __freed_obj__ = 0, 
    _if_conditional84) {
        old_buf_75=(char*)come_increment_ref_count(((char*)(right_value36=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 725))->size)), "libcomelang2.c", 725))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value36;
        __freed_obj__ = 0;
        memcpy(old_buf_75,((struct buffer*)come_null_check(self, "libcomelang2.c", 726))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 726))->size);
        __freed_obj__ = 0;
        old_len_76=((struct buffer*)come_null_check(self, "libcomelang2.c", 727))->len;
        __freed_obj__ = 0;
        new_size_77=(((struct buffer*)come_null_check(self, "libcomelang2.c", 728))->size+size+1)*2;
        __freed_obj__ = 0;
        __dec_obj14=((struct buffer*)come_null_check(self, "libcomelang2.c", 729))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 729))->buf=(char*)come_increment_ref_count(((char*)(right_value37=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libcomelang2.c", 729))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value37;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 730))->buf,old_buf_75,old_len_76);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 731))->buf[old_len_76]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 732))->size=new_size_77;
        __freed_obj__ = 0;
        if(old_buf_75 && !__freed_obj__) { old_buf_75 = come_decrement_ref_count(old_buf_75, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 735))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 735))->len,mem,size);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 736))->len+=size;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 737))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 737))->len]=0;
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional85;
struct buffer* __result68__;
_Bool _if_conditional86;
void* right_value38;
char* old_buf_78;
int old_len_79;
int new_size_80;
void* right_value39;
char* __dec_obj15;
struct buffer* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&old_buf_78, 0, sizeof(char*));
memset(&old_len_79, 0, sizeof(int));
memset(&new_size_80, 0, sizeof(int));
memset(&right_value39, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional85) {
        __result68__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional86=((struct buffer*)come_null_check(self, "libcomelang2.c", 758))->len+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 758))->size,    __freed_obj__ = 0, 
    _if_conditional86) {
        old_buf_78=(char*)come_increment_ref_count(((char*)(right_value38=charp_clone(((struct buffer*)come_null_check(self, "libcomelang2.c", 748))->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value38;
        __freed_obj__ = 0;
        old_len_79=((struct buffer*)come_null_check(self, "libcomelang2.c", 749))->len;
        __freed_obj__ = 0;
        new_size_80=(((struct buffer*)come_null_check(self, "libcomelang2.c", 751))->size+10+1)*2;
        __freed_obj__ = 0;
        __dec_obj15=((struct buffer*)come_null_check(self, "libcomelang2.c", 752))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 752))->buf=(char*)come_increment_ref_count(((char*)(right_value39=(char*)come_calloc(1, sizeof(char)*(1*(new_size_80)), "libcomelang2.c", 752))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value39;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 753))->buf,old_buf_78,old_len_79);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 754))->buf[old_len_79]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 755))->size=new_size_80;
        __freed_obj__ = 0;
        if(old_buf_78 && !__freed_obj__) { old_buf_78 = come_decrement_ref_count(old_buf_78, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 758))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 758))->len]=c;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 759))->len++;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 761))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 761))->len]=0;
    __freed_obj__ = 0;
    __result69__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
struct buffer* __result70__;
int size_81;
_Bool _if_conditional88;
void* right_value40;
char* old_buf_82;
int old_len_83;
int new_size_84;
void* right_value41;
char* __dec_obj16;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_81, 0, sizeof(int));
memset(&right_value40, 0, sizeof(void*));
memset(&old_buf_82, 0, sizeof(char*));
memset(&old_len_83, 0, sizeof(int));
memset(&new_size_84, 0, sizeof(int));
memset(&right_value41, 0, sizeof(void*));
    if(_if_conditional87=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional87) {
        __result70__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_81=strlen(mem);
    __freed_obj__ = 0;
    if(_if_conditional88=((struct buffer*)come_null_check(self, "libcomelang2.c", 784))->len+size_81+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 784))->size,    __freed_obj__ = 0, 
    _if_conditional88) {
        old_buf_82=(char*)come_increment_ref_count(((char*)(right_value40=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 774))->size)), "libcomelang2.c", 774))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value40;
        __freed_obj__ = 0;
        memcpy(old_buf_82,((struct buffer*)come_null_check(self, "libcomelang2.c", 775))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 775))->size);
        __freed_obj__ = 0;
        old_len_83=((struct buffer*)come_null_check(self, "libcomelang2.c", 776))->len;
        __freed_obj__ = 0;
        new_size_84=(((struct buffer*)come_null_check(self, "libcomelang2.c", 777))->size+size_81+1)*2;
        __freed_obj__ = 0;
        __dec_obj16=((struct buffer*)come_null_check(self, "libcomelang2.c", 778))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 778))->buf=(char*)come_increment_ref_count(((char*)(right_value41=(char*)come_calloc(1, sizeof(char)*(1*(new_size_84)), "libcomelang2.c", 778))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value41;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 779))->buf,old_buf_82,old_len_83);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 780))->buf[old_len_83]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 781))->size=new_size_84;
        __freed_obj__ = 0;
        if(old_buf_82 && !__freed_obj__) { old_buf_82 = come_decrement_ref_count(old_buf_82, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 784))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 784))->len,mem,size_81);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 785))->len+=size_81;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 786))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 786))->len]=0;
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
struct buffer* __result72__;
int size_85;
_Bool _if_conditional90;
void* right_value42;
char* old_buf_86;
int old_len_87;
int new_size_88;
void* right_value43;
char* __dec_obj17;
struct buffer* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_85, 0, sizeof(int));
memset(&right_value42, 0, sizeof(void*));
memset(&old_buf_86, 0, sizeof(char*));
memset(&old_len_87, 0, sizeof(int));
memset(&new_size_88, 0, sizeof(int));
memset(&right_value43, 0, sizeof(void*));
    if(_if_conditional89=self==((void*)0)||mem==((void*)0),    __freed_obj__ = 0, 
    _if_conditional89) {
        __result72__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result72__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    size_85=strlen(mem)+1;
    __freed_obj__ = 0;
    if(_if_conditional90=((struct buffer*)come_null_check(self, "libcomelang2.c", 808))->len+size_85+1+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 808))->size,    __freed_obj__ = 0, 
    _if_conditional90) {
        old_buf_86=(char*)come_increment_ref_count(((char*)(right_value42=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 798))->size)), "libcomelang2.c", 798))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value42;
        __freed_obj__ = 0;
        memcpy(old_buf_86,((struct buffer*)come_null_check(self, "libcomelang2.c", 799))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 799))->size);
        __freed_obj__ = 0;
        old_len_87=((struct buffer*)come_null_check(self, "libcomelang2.c", 800))->len;
        __freed_obj__ = 0;
        new_size_88=(((struct buffer*)come_null_check(self, "libcomelang2.c", 801))->size+size_85+1)*2;
        __freed_obj__ = 0;
        __dec_obj17=((struct buffer*)come_null_check(self, "libcomelang2.c", 802))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 802))->buf=(char*)come_increment_ref_count(((char*)(right_value43=(char*)come_calloc(1, sizeof(char)*(1*(new_size_88)), "libcomelang2.c", 802))));
        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value43;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 803))->buf,old_buf_86,old_len_87);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 804))->buf[old_len_87]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 805))->size=new_size_88;
        __freed_obj__ = 0;
        if(old_buf_86 && !__freed_obj__) { old_buf_86 = come_decrement_ref_count(old_buf_86, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 808))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 808))->len,mem,size_85);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 809))->len+=size_85;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 810))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 810))->len]=0;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 811))->len++;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
struct buffer* __result74__;
int* mem_89;
int size_90;
_Bool _if_conditional92;
void* right_value44;
char* old_buf_91;
int old_len_92;
int new_size_93;
void* right_value45;
char* __dec_obj18;
struct buffer* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_89, 0, sizeof(int*));
memset(&size_90, 0, sizeof(int));
memset(&right_value44, 0, sizeof(void*));
memset(&old_buf_91, 0, sizeof(char*));
memset(&old_len_92, 0, sizeof(int));
memset(&new_size_93, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
    if(_if_conditional91=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional91) {
        __result74__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result74__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_89=&value;
    __freed_obj__ = 0;
    size_90=sizeof(int);
    __freed_obj__ = 0;
    if(_if_conditional92=((struct buffer*)come_null_check(self, "libcomelang2.c", 835))->len+size_90+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 835))->size,    __freed_obj__ = 0, 
    _if_conditional92) {
        old_buf_91=(char*)come_increment_ref_count(((char*)(right_value44=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 825))->size)), "libcomelang2.c", 825))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value44;
        __freed_obj__ = 0;
        memcpy(old_buf_91,((struct buffer*)come_null_check(self, "libcomelang2.c", 826))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 826))->size);
        __freed_obj__ = 0;
        old_len_92=((struct buffer*)come_null_check(self, "libcomelang2.c", 827))->len;
        __freed_obj__ = 0;
        new_size_93=(((struct buffer*)come_null_check(self, "libcomelang2.c", 828))->size+size_90+1)*2;
        __freed_obj__ = 0;
        __dec_obj18=((struct buffer*)come_null_check(self, "libcomelang2.c", 829))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 829))->buf=(char*)come_increment_ref_count(((char*)(right_value45=(char*)come_calloc(1, sizeof(char)*(1*(new_size_93)), "libcomelang2.c", 829))));
        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value45;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 830))->buf,old_buf_91,old_len_92);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 831))->buf[old_len_92]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 832))->size=new_size_93;
        __freed_obj__ = 0;
        if(old_buf_91 && !__freed_obj__) { old_buf_91 = come_decrement_ref_count(old_buf_91, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 835))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 835))->len,mem_89,size_90);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 836))->len+=size_90;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 837))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 837))->len]=0;
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_94;
int size_95;
_Bool _if_conditional93;
void* right_value46;
char* old_buf_96;
int old_len_97;
int new_size_98;
void* right_value47;
char* __dec_obj19;
struct buffer* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_94, 0, sizeof(long*));
memset(&size_95, 0, sizeof(int));
memset(&right_value46, 0, sizeof(void*));
memset(&old_buf_96, 0, sizeof(char*));
memset(&old_len_97, 0, sizeof(int));
memset(&new_size_98, 0, sizeof(int));
memset(&right_value47, 0, sizeof(void*));
    mem_94=&value;
    __freed_obj__ = 0;
    size_95=sizeof(long);
    __freed_obj__ = 0;
    if(_if_conditional93=((struct buffer*)come_null_check(self, "libcomelang2.c", 858))->len+size_95+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 858))->size,    __freed_obj__ = 0, 
    _if_conditional93) {
        old_buf_96=(char*)come_increment_ref_count(((char*)(right_value46=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 848))->size)), "libcomelang2.c", 848))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = 0;
        memcpy(old_buf_96,((struct buffer*)come_null_check(self, "libcomelang2.c", 849))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 849))->size);
        __freed_obj__ = 0;
        old_len_97=((struct buffer*)come_null_check(self, "libcomelang2.c", 850))->len;
        __freed_obj__ = 0;
        new_size_98=(((struct buffer*)come_null_check(self, "libcomelang2.c", 851))->size+size_95+1)*2;
        __freed_obj__ = 0;
        __dec_obj19=((struct buffer*)come_null_check(self, "libcomelang2.c", 852))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 852))->buf=(char*)come_increment_ref_count(((char*)(right_value47=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libcomelang2.c", 852))));
        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value47;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 853))->buf,old_buf_96,old_len_97);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 854))->buf[old_len_97]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 855))->size=new_size_98;
        __freed_obj__ = 0;
        if(old_buf_96 && !__freed_obj__) { old_buf_96 = come_decrement_ref_count(old_buf_96, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 858))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 858))->len,mem_94,size_95);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 859))->len+=size_95;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 860))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 860))->len]=0;
    __freed_obj__ = 0;
    __result76__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct buffer* __result77__;
short short* mem_99;
int size_100;
_Bool _if_conditional95;
void* right_value48;
char* old_buf_101;
int old_len_102;
int new_size_103;
void* right_value49;
char* __dec_obj20;
struct buffer* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_99, 0, sizeof(short short*));
memset(&size_100, 0, sizeof(int));
memset(&right_value48, 0, sizeof(void*));
memset(&old_buf_101, 0, sizeof(char*));
memset(&old_len_102, 0, sizeof(int));
memset(&new_size_103, 0, sizeof(int));
memset(&right_value49, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional94) {
        __result77__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result77__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    mem_99=&value;
    __freed_obj__ = 0;
    size_100=sizeof(short short);
    __freed_obj__ = 0;
    if(_if_conditional95=((struct buffer*)come_null_check(self, "libcomelang2.c", 885))->len+size_100+1+1>=((struct buffer*)come_null_check(self, "libcomelang2.c", 885))->size,    __freed_obj__ = 0, 
    _if_conditional95) {
        old_buf_101=(char*)come_increment_ref_count(((char*)(right_value48=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(self, "libcomelang2.c", 875))->size)), "libcomelang2.c", 875))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = 0;
        memcpy(old_buf_101,((struct buffer*)come_null_check(self, "libcomelang2.c", 876))->buf,((struct buffer*)come_null_check(self, "libcomelang2.c", 876))->size);
        __freed_obj__ = 0;
        old_len_102=((struct buffer*)come_null_check(self, "libcomelang2.c", 877))->len;
        __freed_obj__ = 0;
        new_size_103=(((struct buffer*)come_null_check(self, "libcomelang2.c", 878))->size+size_100+1)*2;
        __freed_obj__ = 0;
        __dec_obj20=((struct buffer*)come_null_check(self, "libcomelang2.c", 879))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 879))->buf=(char*)come_increment_ref_count(((char*)(right_value49=(char*)come_calloc(1, sizeof(char)*(1*(new_size_103)), "libcomelang2.c", 879))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value49;
        __freed_obj__ = 0;
        memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 880))->buf,old_buf_101,old_len_102);
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 881))->buf[old_len_102]=0;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 882))->size=new_size_103;
        __freed_obj__ = 0;
        if(old_buf_101 && !__freed_obj__) { old_buf_101 = come_decrement_ref_count(old_buf_101, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    memcpy(((struct buffer*)come_null_check(self, "libcomelang2.c", 885))->buf+((struct buffer*)come_null_check(self, "libcomelang2.c", 885))->len,mem_99,size_100);
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 886))->len+=size_100;
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 887))->buf[((struct buffer*)come_null_check(self, "libcomelang2.c", 887))->len]=0;
    __freed_obj__ = 0;
    __result78__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

struct buffer* buffer_alignment(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct buffer* __result79__;
int len_104;
_Bool _if_conditional97;
int new_size_105;
void* right_value50;
char* __dec_obj21;
int i_106;
_Bool _for_condtionalA9;
struct buffer* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_104, 0, sizeof(int));
memset(&new_size_105, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&i_106, 0, sizeof(int));
    if(_if_conditional96=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional96) {
        __result79__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_104=((struct buffer*)come_null_check(self, "libcomelang2.c", 898))->len;
    __freed_obj__ = 0;
    len_104=(len_104+3)&~3;
    __freed_obj__ = 0;
    if(_if_conditional97=len_104>=((struct buffer*)come_null_check(self, "libcomelang2.c", 907))->size,    __freed_obj__ = 0, 
    _if_conditional97) {
        new_size_105=(((struct buffer*)come_null_check(self, "libcomelang2.c", 902))->size+1+1)*2;
        __freed_obj__ = 0;
        __dec_obj21=((struct buffer*)come_null_check(self, "libcomelang2.c", 903))->buf;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 903))->buf=(char*)come_increment_ref_count(((char*)(right_value50=(char*)come_calloc(1, sizeof(char)*(1*(new_size_105)), "libcomelang2.c", 903))));
        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = 0;
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 904))->size=new_size_105;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    i_106=((struct buffer*)come_null_check(self, "libcomelang2.c", 911))->len ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    i_106<len_104 ,    __freed_obj__ = 0, 
    _for_condtionalA9;    i_106++ ,    __freed_obj__ = 0, 
    0    ){
        ((struct buffer*)come_null_check(self, "libcomelang2.c", 908))->buf[i_106]=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct buffer*)come_null_check(self, "libcomelang2.c", 911))->len=len_104;
    __freed_obj__ = 0;
    __result80__ = __result_obj__ = self;
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
void* right_value51;
void* right_value52;
struct optional$2intbool* __result82__;
_Bool _if_conditional99;
void* right_value53;
void* right_value54;
struct optional$2intbool* __result83__;
_Bool _if_conditional100;
void* right_value55;
void* right_value56;
struct optional$2intbool* __result84__;
void* right_value57;
void* right_value58;
struct optional$2intbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    if(_if_conditional98=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional98) {
        __result82__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 919), ((struct optional$2intbool*)(right_value52=optional$2intbool_initialize(((struct optional$2intbool*)(right_value51=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 919))),0,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value51;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value52;
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional99=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional99) {
            __result83__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 922), ((struct optional$2intbool*)(right_value54=optional$2intbool_initialize(((struct optional$2intbool*)(right_value53=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 922))),-1,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value54;
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional100=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                __result84__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 925), ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 925))),1,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value56;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result85__ = __result_obj__ = ((struct optional$2intbool*)(right_value58=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value57=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 928)))),strcmp(((struct buffer*)come_null_check(left, "libcomelang2.c", 928))->buf,((struct buffer*)come_null_check(right, "libcomelang2.c", 928))->buf),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value57;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result81__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result81__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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

struct buffer* string_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value59;
void* right_value60;
struct buffer* result_107;
_Bool _if_conditional101;
struct buffer* __result86__;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_107, 0, sizeof(struct buffer*));
    result_107=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value60=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value59=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 933))), "libcomelang2.c", 933)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value60;
    __freed_obj__ = 0;
    if(_if_conditional101=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional101) {
        __result86__ = __result_obj__ = result_107;
        if(result_107 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_107, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(result_107, "libcomelang2.c", 939)),self);
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = result_107;
    if(result_107 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_107, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(result_107 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
void* right_value62;
struct buffer* result_108;
_Bool _if_conditional102;
struct buffer* __result88__;
struct buffer* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&result_108, 0, sizeof(struct buffer*));
    result_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value61=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 946))), "libcomelang2.c", 946)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value61;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value62;
    __freed_obj__ = 0;
    if(_if_conditional102=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional102) {
        __result88__ = __result_obj__ = result_108;
        if(result_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_108, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result88__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(result_108, "libcomelang2.c", 952)),self);
    __freed_obj__ = 0;
    __result89__ = __result_obj__ = result_108;
    if(result_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_108, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
    if(result_108 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
void* right_value63;
char* __result90__;
void* right_value64;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
    if(_if_conditional103=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional103) {
        __result90__ = __result_obj__ = ((char*)(right_value63=__builtin_string("")));
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result91__ = __result_obj__ = ((char*)(right_value64=__builtin_string(((struct buffer*)come_null_check(self, "libcomelang2.c", 963))->buf)));
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

_Bool bool_equals(_Bool self, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = self==right;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

_Bool int_equals(int self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = self==right;
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

_Bool char_equals(char self, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = self==right;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

_Bool short_equals(short short self, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = self==right;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

_Bool long_equals(long self, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = self==right;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

_Bool size_t_equals(long int self, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = self==right;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool float_equals(float self, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = self==right;
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

_Bool double_equals(double self, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result99__ = self==right;
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

struct optional$2boolbool* string_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
void* right_value65;
void* right_value66;
struct optional$2boolbool* __result101__;
_Bool _if_conditional105;
void* right_value67;
void* right_value68;
struct optional$2boolbool* __result102__;
_Bool _if_conditional106;
void* right_value69;
void* right_value70;
struct optional$2boolbool* __result103__;
void* right_value71;
void* right_value72;
struct optional$2boolbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
    if(_if_conditional104=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional104) {
        __result101__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1012), ((struct optional$2boolbool*)(right_value66=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value65=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1012))),(_Bool)1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value66;
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional105=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional105) {
            __result102__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1015), ((struct optional$2boolbool*)(right_value68=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value67=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1015))),(_Bool)0,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value68;
            __freed_obj__ = 0;
            return __result102__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional106=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                __result103__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1018), ((struct optional$2boolbool*)(right_value70=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value69=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1018))),(_Bool)0,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value69;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value70;
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result104__ = __result_obj__ = ((struct optional$2intbool*)(right_value72=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value71=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1021)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result100__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result100__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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

struct optional$2boolbool* charp_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value73;
void* right_value74;
struct optional$2boolbool* __result105__;
_Bool _if_conditional108;
void* right_value75;
void* right_value76;
struct optional$2boolbool* __result106__;
_Bool _if_conditional109;
void* right_value77;
void* right_value78;
struct optional$2boolbool* __result107__;
void* right_value79;
void* right_value80;
struct optional$2boolbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
    if(_if_conditional107=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional107) {
        __result105__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1027), ((struct optional$2boolbool*)(right_value74=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value73=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1027))),(_Bool)1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value73;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value74;
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional108=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            __result106__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1030), ((struct optional$2boolbool*)(right_value76=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value75=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1030))),(_Bool)0,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value76;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional109=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional109) {
                __result107__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 1033), ((struct optional$2boolbool*)(right_value78=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value77=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1033))),(_Bool)0,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                return __result107__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = ((struct optional$2intbool*)(right_value80=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value79=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1036)))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value79;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

_Bool string_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
_Bool __result109__;
_Bool _if_conditional111;
_Bool __result110__;
_Bool _if_conditional112;
_Bool __result111__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional110=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional110) {
        __result109__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional111=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional111) {
            __result110__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional112=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional112) {
                __result111__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result111__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result112__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

_Bool charp_operator_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
_Bool __result113__;
_Bool _if_conditional114;
_Bool __result114__;
_Bool _if_conditional115;
_Bool __result115__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional113=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional113) {
        __result113__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional114=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional114) {
            __result114__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional115=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional115) {
                __result115__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result116__ = strcmp(self,right)==0;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

_Bool string_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
_Bool __result117__;
_Bool _if_conditional117;
_Bool __result118__;
_Bool _if_conditional118;
_Bool __result119__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional116=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional116) {
        __result117__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result117__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional117=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional117) {
            __result118__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result118__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional118=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                __result119__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result119__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result120__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

_Bool charp_operator_not_equals(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool __result121__;
_Bool _if_conditional120;
_Bool __result122__;
_Bool _if_conditional121;
_Bool __result123__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional119=self==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional119) {
        __result121__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional120=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional120) {
            __result122__ = (_Bool)1;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional121=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __result123__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result124__ = strcmp(self,right)!=0;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

char* charp_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
void* right_value81;
char* __result125__;
int len_109;
void* right_value82;
char* result_110;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&len_109, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
    if(_if_conditional122=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional122) {
        __result125__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        __freed_obj__ = 0;
        return __result125__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_109=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_110=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_109+1)), "libcomelang2.c", 1107))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    strncpy(result_110,self,len_109+1);
    __freed_obj__ = 0;
    strncat(result_110,right,len_109+1);
    __freed_obj__ = 0;
    __result126__ = __result_obj__ = result_110;
    if(result_110 && !__freed_obj__) { result_110 = come_decrement_ref_count(result_110, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
    if(result_110 && !__freed_obj__) { result_110 = come_decrement_ref_count(result_110, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
void* right_value83;
char* __result127__;
int len_111;
void* right_value84;
char* result_112;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&len_111, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
    if(_if_conditional123=self==((void*)0)||right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional123) {
        __result127__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        __freed_obj__ = 0;
        return __result127__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_111=strlen(self)+strlen(right);
    __freed_obj__ = 0;
    result_112=(char*)come_increment_ref_count(((char*)(right_value84=(char*)come_calloc(1, sizeof(char)*(1*(len_111+1)), "libcomelang2.c", 1122))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    strncpy(result_112,self,len_111+1);
    __freed_obj__ = 0;
    strncat(result_112,right,len_111+1);
    __freed_obj__ = 0;
    __result128__ = __result_obj__ = result_112;
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value85;
char* __result129__;
void* right_value86;
void* right_value87;
struct buffer* buf_113;
int i_114;
_Bool _for_condtionalA10;
void* right_value88;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&buf_113, 0, sizeof(struct buffer*));
memset(&i_114, 0, sizeof(int));
memset(&right_value88, 0, sizeof(void*));
    if(_if_conditional124=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional124) {
        __result129__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        __freed_obj__ = 0;
        return __result129__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_113=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1135))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value86;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value87;
    __freed_obj__ = 0;
    for(
    i_114=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA10=    i_114<right ,    __freed_obj__ = 0, 
    _for_condtionalA10;    i_114++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_113, "libcomelang2.c", 1138)),self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result130__ = __result_obj__ = ((char*)(right_value88=buffer_to_string(((struct buffer*)come_null_check(buf_113, "libcomelang2.c", 1141)))));
    if(buf_113 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
    if(buf_113 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_113, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
void* right_value89;
char* __result131__;
void* right_value90;
void* right_value91;
struct buffer* buf_115;
int i_116;
_Bool _for_condtionalA11;
void* right_value92;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&buf_115, 0, sizeof(struct buffer*));
memset(&i_116, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
    if(_if_conditional125=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional125) {
        __result131__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        __freed_obj__ = 0;
        return __result131__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_115=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1149))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value91;
    __freed_obj__ = 0;
    for(
    i_116=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    i_116<right ,    __freed_obj__ = 0, 
    _for_condtionalA11;    i_116++ ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_115, "libcomelang2.c", 1152)),self);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result132__ = __result_obj__ = ((char*)(right_value92=buffer_to_string(((struct buffer*)come_null_check(buf_115, "libcomelang2.c", 1155)))));
    if(buf_115 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
    if(buf_115 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_115, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = (int_get_hash_key(((int)value)));
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

unsigned int char_get_hash_key(char value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = value;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

unsigned int short_get_hash_key(short int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = value;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

unsigned int int_get_hash_key(int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = value;
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

unsigned int long_get_hash_key(long value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = value;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

unsigned int size_t_get_hash_key(long int value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = value;
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

unsigned int float_get_hash_key(float value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

unsigned int double_get_hash_key(double value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = (unsigned int)value;
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

unsigned int string_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
unsigned int __result141__;
int result_117;
char* p_118;
_Bool _while_condtional8;
unsigned int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_117, 0, sizeof(int));
memset(&p_118, 0, sizeof(char*));
    if(_if_conditional126=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional126) {
        __result141__ = 0;
        __freed_obj__ = 0;
        return __result141__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_117=0;
    __freed_obj__ = 0;
    p_118=value;
    __freed_obj__ = 0;
    while(_while_condtional8=*p_118,    __freed_obj__ = 0, 
    _while_condtional8) {
        result_117+=(*p_118);
        __freed_obj__ = 0;
        p_118++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result142__ = result_117;
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

unsigned int charp_get_hash_key(char* value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
unsigned int __result143__;
int result_119;
char* p_120;
_Bool _while_condtional9;
unsigned int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_119, 0, sizeof(int));
memset(&p_120, 0, sizeof(char*));
    if(_if_conditional127=value==((void*)0),    __freed_obj__ = 0, 
    _if_conditional127) {
        __result143__ = 0;
        __freed_obj__ = 0;
        return __result143__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_119=0;
    __freed_obj__ = 0;
    p_120=value;
    __freed_obj__ = 0;
    while(_while_condtional9=*p_120,    __freed_obj__ = 0, 
    _while_condtional9) {
        result_119+=(*p_120);
        __freed_obj__ = 0;
        p_120++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result144__ = result_119;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

_Bool bool_clone(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = self;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

char char_clone(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = self;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

short int short_clone(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = self;
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

int int_clone(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = self;
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
}

long int long_clone(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = self;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

long int size_t_clone(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result150__ = self;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

double double_clone(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = self;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

float float_clone(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result152__ = self;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

char* charp_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
char* __result153__;
void* right_value93;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
    if(_if_conditional128=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional128) {
        __result153__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result153__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result154__ = __result_obj__ = ((char*)(right_value93=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

char* string_clone(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
char* __result155__;
void* right_value94;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    if(_if_conditional129=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional129) {
        __result155__ = __result_obj__ = ((void*)0);
        __freed_obj__ = 0;
        return __result155__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result156__ = __result_obj__ = ((char*)(right_value94=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

_Bool xiswalpha(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_121;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_121, 0, sizeof(_Bool));
    result_121=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result157__ = result_121;
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool xiswblank(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

_Bool xiswdigit(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result159__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

_Bool xiswalnum(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = xiswalpha(c)||xiswdigit(c);
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

_Bool xisalpha(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_122;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_122, 0, sizeof(_Bool));
    result_122=(c>=97&&c<=122)||(c>=65&&c<=90);
    __freed_obj__ = 0;
    __result161__ = result_122;
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

_Bool xisblank(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result162__ = c==32||c==9;
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

_Bool xisdigit(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result163__ = (c>=48&&c<=57);
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
}

_Bool xisalnum(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result164__ = xisalpha(c)||xisdigit(c);
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
}

_Bool xisascii(char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_123;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_123, 0, sizeof(_Bool));
    result_123=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result165__ = result_123;
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

_Bool xiswascii(unsigned int c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_124;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_124, 0, sizeof(_Bool));
    result_124=(c>=32&&c<=126);
    __freed_obj__ = 0;
    __result166__ = result_124;
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

int string_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
int __result167__;
int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional130=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional130) {
        __result167__ = 0;
        __freed_obj__ = 0;
        return __result167__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result168__ = strlen(str);
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
}

int charp_length(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
int __result169__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional131=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional131) {
        __result169__ = 0;
        __freed_obj__ = 0;
        return __result169__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result170__ = strlen(str);
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

char* string_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
void* right_value95;
char* __result171__;
int len_125;
void* right_value96;
char* result_126;
int i_127;
_Bool _for_condtionalA12;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_125, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&result_126, 0, sizeof(char*));
memset(&i_127, 0, sizeof(int));
    if(_if_conditional132=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional132) {
        __result171__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_125=strlen(str);
    __freed_obj__ = 0;
    result_126=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(len_125+1)), "libcomelang2.c", 1366))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    for(
    i_127=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA12=    i_127<len_125 ,    __freed_obj__ = 0, 
    _for_condtionalA12;    i_127++ ,    __freed_obj__ = 0, 
    0    ){
        result_126[i_127]=str[len_125-i_127-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_126[len_125]=0;
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = result_126;
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
void* right_value97;
char* __result173__;
int len_128;
void* right_value98;
char* result_129;
int i_130;
_Bool _for_condtionalA13;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&len_128, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&i_130, 0, sizeof(int));
    if(_if_conditional133=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional133) {
        __result173__ = __result_obj__ = ((char*)(right_value97=__builtin_string("")));
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_128=strlen(str);
    __freed_obj__ = 0;
    result_129=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(len_128+1)), "libcomelang2.c", 1383))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    for(
    i_130=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA13=    i_130<len_128 ,    __freed_obj__ = 0, 
    _for_condtionalA13;    i_130++ ,    __freed_obj__ = 0, 
    0    ){
        result_129[i_130]=str[len_128-i_130-1];
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_129[len_128]=0;
    __freed_obj__ = 0;
    __result174__ = __result_obj__ = result_129;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
void* right_value99;
char* __result175__;
int len_131;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value100;
void* right_value101;
char* __result176__;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value102;
char* __result177__;
_Bool _if_conditional141;
void* right_value103;
char* __result178__;
void* right_value104;
char* result_132;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&len_131, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
    if(_if_conditional134=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional134) {
        __result175__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        __freed_obj__ = 0;
        return __result175__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_131=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional135=head<0,    __freed_obj__ = 0, 
    _if_conditional135) {
        head+=len_131;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional136=tail<0,    __freed_obj__ = 0, 
    _if_conditional136) {
        tail+=len_131+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional137=head>tail,    __freed_obj__ = 0, 
    _if_conditional137) {
        __result176__ = __result_obj__ = ((char*)(right_value101=string_reverse(((char*)come_null_check(((char*)(right_value100=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1409)),tail,head))), "libcomelang2.c", 1409)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value100;
        __freed_obj__ = 0;
        return __result176__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional138=head<0,    __freed_obj__ = 0, 
    _if_conditional138) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional139=tail>=len_131,    __freed_obj__ = 0, 
    _if_conditional139) {
        tail=len_131;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional140=head==tail,    __freed_obj__ = 0, 
    _if_conditional140) {
        __result177__ = __result_obj__ = ((char*)(right_value102=__builtin_string("")));
        __freed_obj__ = 0;
        return __result177__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional141=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional141) {
        __result178__ = __result_obj__ = ((char*)(right_value103=__builtin_string("")));
        __freed_obj__ = 0;
        return __result178__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_132=(char*)come_increment_ref_count(((char*)(right_value104=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1428))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value104;
    __freed_obj__ = 0;
    memcpy(result_132,str+head,tail-head);
    __freed_obj__ = 0;
    result_132[tail-head]=0;
    __freed_obj__ = 0;
    __result179__ = __result_obj__ = result_132;
    if(result_132 && !__freed_obj__) { result_132 = come_decrement_ref_count(result_132, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result179__;
    __freed_obj__ = 0;
    if(result_132 && !__freed_obj__) { result_132 = come_decrement_ref_count(result_132, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
void* right_value105;
char* __result180__;
int len_133;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value106;
void* right_value107;
char* __result181__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value108;
char* __result182__;
_Bool _if_conditional149;
void* right_value109;
char* __result183__;
void* right_value110;
char* result_134;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&len_133, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result_134, 0, sizeof(char*));
    if(_if_conditional142=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional142) {
        __result180__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        __freed_obj__ = 0;
        return __result180__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_133=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional143=head<0,    __freed_obj__ = 0, 
    _if_conditional143) {
        head+=len_133;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional144=tail<0,    __freed_obj__ = 0, 
    _if_conditional144) {
        tail+=len_133+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional145=head>tail,    __freed_obj__ = 0, 
    _if_conditional145) {
        __result181__ = __result_obj__ = ((char*)(right_value107=string_reverse(((char*)come_null_check(((char*)(right_value106=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1452)),tail,head))), "libcomelang2.c", 1452)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value106;
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional146=head<0,    __freed_obj__ = 0, 
    _if_conditional146) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional147=tail>=len_133,    __freed_obj__ = 0, 
    _if_conditional147) {
        tail=len_133;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional148=head==tail,    __freed_obj__ = 0, 
    _if_conditional148) {
        __result182__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        __freed_obj__ = 0;
        return __result182__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional149=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional149) {
        __result183__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
        __freed_obj__ = 0;
        return __result183__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_134=(char*)come_increment_ref_count(((char*)(right_value110=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1471))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    memcpy(result_134,str+head,tail-head);
    __freed_obj__ = 0;
    result_134[tail-head]=0;
    __freed_obj__ = 0;
    __result184__ = __result_obj__ = result_134;
    if(result_134 && !__freed_obj__) { result_134 = come_decrement_ref_count(result_134, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
    if(result_134 && !__freed_obj__) { result_134 = come_decrement_ref_count(result_134, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
void* right_value111;
char* __result185__;
int len_135;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value112;
void* right_value113;
char* __result186__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value114;
char* __result187__;
_Bool _if_conditional157;
void* right_value115;
char* __result188__;
void* right_value116;
char* result_136;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&len_135, 0, sizeof(int));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&result_136, 0, sizeof(char*));
    if(_if_conditional150=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional150) {
        __result185__ = __result_obj__ = ((char*)(right_value111=__builtin_string("")));
        __freed_obj__ = 0;
        return __result185__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_135=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional151=head<0,    __freed_obj__ = 0, 
    _if_conditional151) {
        head+=len_135;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional152=tail<0,    __freed_obj__ = 0, 
    _if_conditional152) {
        tail+=len_135+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional153=head>tail,    __freed_obj__ = 0, 
    _if_conditional153) {
        __result186__ = __result_obj__ = ((char*)(right_value113=string_reverse(((char*)come_null_check(((char*)(right_value112=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1495)),tail,head))), "libcomelang2.c", 1495)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional154=head<0,    __freed_obj__ = 0, 
    _if_conditional154) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional155=tail>=len_135,    __freed_obj__ = 0, 
    _if_conditional155) {
        tail=len_135;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional156=head==tail,    __freed_obj__ = 0, 
    _if_conditional156) {
        __result187__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        __freed_obj__ = 0;
        return __result187__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional157=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional157) {
        __result188__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        __freed_obj__ = 0;
        return __result188__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_136=(char*)come_increment_ref_count(((char*)(right_value116=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1514))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    memcpy(result_136,str+head,tail-head);
    __freed_obj__ = 0;
    result_136[tail-head]=0;
    __freed_obj__ = 0;
    __result189__ = __result_obj__ = result_136;
    if(result_136 && !__freed_obj__) { result_136 = come_decrement_ref_count(result_136, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result189__;
    __freed_obj__ = 0;
    if(result_136 && !__freed_obj__) { result_136 = come_decrement_ref_count(result_136, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
void* right_value117;
char* __result190__;
int len_137;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value118;
void* right_value119;
char* __result191__;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value120;
char* __result192__;
_Bool _if_conditional165;
void* right_value121;
char* __result193__;
void* right_value122;
char* result_138;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&len_137, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&result_138, 0, sizeof(char*));
    if(_if_conditional158=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional158) {
        __result190__ = __result_obj__ = ((char*)(right_value117=__builtin_string("")));
        __freed_obj__ = 0;
        return __result190__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_137=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional159=head<0,    __freed_obj__ = 0, 
    _if_conditional159) {
        head+=len_137;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional160=tail<0,    __freed_obj__ = 0, 
    _if_conditional160) {
        tail+=len_137+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional161=head>tail,    __freed_obj__ = 0, 
    _if_conditional161) {
        __result191__ = __result_obj__ = ((char*)(right_value119=string_reverse(((char*)come_null_check(((char*)(right_value118=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1538)),tail,head))), "libcomelang2.c", 1538)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value118;
        __freed_obj__ = 0;
        return __result191__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional162=head<0,    __freed_obj__ = 0, 
    _if_conditional162) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional163=tail>=len_137,    __freed_obj__ = 0, 
    _if_conditional163) {
        tail=len_137;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional164=head==tail,    __freed_obj__ = 0, 
    _if_conditional164) {
        __result192__ = __result_obj__ = ((char*)(right_value120=__builtin_string("")));
        __freed_obj__ = 0;
        return __result192__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional165=tail-head+1<1,    __freed_obj__ = 0, 
    _if_conditional165) {
        __result193__ = __result_obj__ = ((char*)(right_value121=__builtin_string("")));
        __freed_obj__ = 0;
        return __result193__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_138=(char*)come_increment_ref_count(((char*)(right_value122=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1557))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    memcpy(result_138,str+head,tail-head);
    __freed_obj__ = 0;
    result_138[tail-head]=0;
    __freed_obj__ = 0;
    __result194__ = __result_obj__ = result_138;
    if(result_138 && !__freed_obj__) { result_138 = come_decrement_ref_count(result_138, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
    if(result_138 && !__freed_obj__) { result_138 = come_decrement_ref_count(result_138, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional166;
void* right_value123;
char* __result195__;
va_list args_139;
char* result_140;
int len_141;
_Bool _if_conditional167;
void* right_value124;
char* __result196__;
void* right_value125;
char* result2_142;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&args_139, 0, sizeof(va_list));
memset(&result_140, 0, sizeof(char*));
memset(&len_141, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&result2_142, 0, sizeof(char*));
    if(_if_conditional166=msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional166) {
        __result195__ = __result_obj__ = ((char*)(right_value123=__builtin_string("")));
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_139,msg);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    len_141=vasprintf(&result_140,msg,args_139);
    __freed_obj__ = 0;
    __builtin_va_end(args_139);
    __freed_obj__ = 0;
    if(_if_conditional167=len_141<0,    __freed_obj__ = 0, 
    _if_conditional167) {
        __result196__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
        if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result196__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_142=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(result_140))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125;
    __freed_obj__ = 0;
    free(result_140);
    __freed_obj__ = 0;
    __result197__ = __result_obj__ = result2_142;
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_142 && !__freed_obj__) { result2_142 = come_decrement_ref_count(result2_142, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result197__;
    __freed_obj__ = 0;
    if((&args_139) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_139), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_142 && !__freed_obj__) { result2_142 = come_decrement_ref_count(result2_142, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
void* right_value126;
char* __result198__;
int len_143;
_Bool _if_conditional169;
void* right_value127;
char* __result199__;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value128;
char* __result200__;
_Bool _if_conditional174;
void* right_value129;
char* sub_str_144;
void* right_value130;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&len_143, 0, sizeof(int));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&sub_str_144, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
    if(_if_conditional168=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional168) {
        __result198__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
        __freed_obj__ = 0;
        return __result198__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_143=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional169=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional169) {
        __result199__ = __result_obj__ = ((char*)(right_value127=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result199__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional170=head<0,    __freed_obj__ = 0, 
    _if_conditional170) {
        head+=len_143;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional171=tail<0,    __freed_obj__ = 0, 
    _if_conditional171) {
        tail+=len_143+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional172=head<0,    __freed_obj__ = 0, 
    _if_conditional172) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional173=tail<0,    __freed_obj__ = 0, 
    _if_conditional173) {
        __result200__ = __result_obj__ = ((char*)(right_value128=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result200__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional174=tail>=len_143,    __freed_obj__ = 0, 
    _if_conditional174) {
        tail=len_143;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_144=(char*)come_increment_ref_count(((char*)(right_value129=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1619)),tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_144,string_length(((char*)come_null_check(sub_str_144, "libcomelang2.c", 1621)))+1);
    __freed_obj__ = 0;
    __result201__ = __result_obj__ = ((char*)(right_value130=__builtin_string(str)));
    if(sub_str_144 && !__freed_obj__) { sub_str_144 = come_decrement_ref_count(sub_str_144, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result201__;
    __freed_obj__ = 0;
    if(sub_str_144 && !__freed_obj__) { sub_str_144 = come_decrement_ref_count(sub_str_144, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
void* right_value131;
char* __result202__;
int len_145;
_Bool _if_conditional176;
void* right_value132;
char* __result203__;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value133;
char* __result204__;
_Bool _if_conditional181;
void* right_value134;
char* sub_str_146;
void* right_value135;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&len_145, 0, sizeof(int));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&sub_str_146, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
    if(_if_conditional175=str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional175) {
        __result202__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        __freed_obj__ = 0;
        return __result202__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    len_145=strlen(str);
    __freed_obj__ = 0;
    if(_if_conditional176=strcmp(str,"")==0,    __freed_obj__ = 0, 
    _if_conditional176) {
        __result203__ = __result_obj__ = ((char*)(right_value132=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result203__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional177=head<0,    __freed_obj__ = 0, 
    _if_conditional177) {
        head+=len_145;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional178=tail<0,    __freed_obj__ = 0, 
    _if_conditional178) {
        tail+=len_145+1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional179=head<0,    __freed_obj__ = 0, 
    _if_conditional179) {
        head=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional180=tail<0,    __freed_obj__ = 0, 
    _if_conditional180) {
        __result204__ = __result_obj__ = ((char*)(right_value133=__builtin_string(str)));
        __freed_obj__ = 0;
        return __result204__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional181=tail>=len_145,    __freed_obj__ = 0, 
    _if_conditional181) {
        tail=len_145;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    sub_str_146=(char*)come_increment_ref_count(((char*)(right_value134=charp_substring(((char*)come_null_check(str, "libcomelang2.c", 1658)),tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_146,string_length(((char*)come_null_check(sub_str_146, "libcomelang2.c", 1660)))+1);
    __freed_obj__ = 0;
    __result205__ = __result_obj__ = ((char*)(right_value135=__builtin_string(str)));
    if(sub_str_146 && !__freed_obj__) { sub_str_146 = come_decrement_ref_count(sub_str_146, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result205__;
    __freed_obj__ = 0;
    if(sub_str_146 && !__freed_obj__) { sub_str_146 = come_decrement_ref_count(sub_str_146, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
void* right_value136;
void* right_value137;
struct list$1charph* __result207__;
void* right_value138;
void* right_value139;
struct list$1charph* result_149;
void* right_value140;
void* right_value141;
struct buffer* str_150;
int i_151;
_Bool _for_condtionalA14;
_Bool _if_conditional184;
void* right_value145;
_Bool _if_conditional187;
void* right_value146;
struct list$1charph* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct list$1charph*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&str_150, 0, sizeof(struct buffer*));
memset(&i_151, 0, sizeof(int));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    if(_if_conditional182=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional182) {
        __result207__ = __result_obj__ = ((struct list$1charph*)(right_value137=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1668)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value136;
        __freed_obj__ = 0;
        return __result207__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_149=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value138=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1671))), "libcomelang2.c", 1671)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value139;
    __freed_obj__ = 0;
    str_150=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value141=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value140=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1673))), "libcomelang2.c", 1673)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value141;
    __freed_obj__ = 0;
    for(
    i_151=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    i_151<charp_length(((char*)come_null_check(self, "libcomelang2.c", 1684))) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    i_151++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional184=self[i_151]==c,        __freed_obj__ = 0, 
        _if_conditional184) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_149, "libcomelang2.c", 1677)),(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(((struct buffer*)come_null_check(str_150, "libcomelang2.c", 1677))->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value145;
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(str_150, "libcomelang2.c", 1678)));
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(str_150, "libcomelang2.c", 1681)),self[i_151]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional187=buffer_length(((struct buffer*)come_null_check(str_150, "libcomelang2.c", 1688)))!=0,    __freed_obj__ = 0, 
    _if_conditional187) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_149, "libcomelang2.c", 1685)),(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(((struct buffer*)come_null_check(str_150, "libcomelang2.c", 1685))->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result209__ = __result_obj__ = result_149;
    if(result_149 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_149, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_150 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result209__;
    __freed_obj__ = 0;
    if(result_149 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_150 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->len=0;
            __freed_obj__ = 0;
            __result206__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result206__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_147;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_148;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_148, 0, sizeof(struct list_item$1charph*));
                it_147=((struct list$1charph*)come_null_check(self, "./comelang2.h", 174))->head;
                __freed_obj__ = 0;
                while(_while_condtional10=it_147!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    prev_it_148=it_147;
                    __freed_obj__ = 0;
                    it_147=((struct list_item$1charph*)come_null_check(it_147, "./comelang2.h", 177))->next;
                    __freed_obj__ = 0;
                    if(prev_it_148 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional183=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional183) {
                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional185;
void* right_value142;
struct list_item$1charph* litem_152;
char* __dec_obj22;
_Bool _if_conditional186;
void* right_value143;
struct list_item$1charph* litem_153;
char* __dec_obj23;
void* right_value144;
struct list_item$1charph* litem_154;
char* __dec_obj24;
struct list$1charph* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1charph*));
memset(&right_value143, 0, sizeof(void*));
memset(&litem_153, 0, sizeof(struct list_item$1charph*));
memset(&right_value144, 0, sizeof(void*));
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional185=((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional185) {
                    litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value142;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj22=((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 281))->item;
                    ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 281))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_152;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head=litem_152;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional186=((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        litem_153=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value143;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 289))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj23=((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 291))->item;
                        ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 291))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_153;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_153;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value144;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 299))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj24=((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 301))->item;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 301))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_154;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_154;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result208__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result208__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
void* right_value147;
void* right_value148;
struct list$1charph* __result210__;
void* right_value149;
void* right_value150;
struct list$1charph* result_155;
void* right_value151;
void* right_value152;
struct buffer* str_156;
int i_157;
_Bool _for_condtionalA15;
_Bool _if_conditional189;
void* right_value153;
_Bool _if_conditional190;
void* right_value154;
struct list$1charph* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct list$1charph*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&str_156, 0, sizeof(struct buffer*));
memset(&i_157, 0, sizeof(int));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    if(_if_conditional188=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional188) {
        __result210__ = __result_obj__ = ((struct list$1charph*)(right_value148=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value147=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1694)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value147;
        __freed_obj__ = 0;
        return __result210__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_155=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1697))), "libcomelang2.c", 1697)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value150;
    __freed_obj__ = 0;
    str_156=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value152=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value151=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1699))), "libcomelang2.c", 1699)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value151;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value152;
    __freed_obj__ = 0;
    for(
    i_157=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    i_157<charp_length(((char*)come_null_check(self, "libcomelang2.c", 1710))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    i_157++ ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional189=self[i_157]==c,        __freed_obj__ = 0, 
        _if_conditional189) {
            list$1charph_push_back(((struct list$1charph*)come_null_check(result_155, "libcomelang2.c", 1703)),(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(((struct buffer*)come_null_check(str_156, "libcomelang2.c", 1703))->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value153;
            __freed_obj__ = 0;
            buffer_reset(((struct buffer*)come_null_check(str_156, "libcomelang2.c", 1704)));
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(str_156, "libcomelang2.c", 1707)),self[i_157]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional190=buffer_length(((struct buffer*)come_null_check(str_156, "libcomelang2.c", 1714)))!=0,    __freed_obj__ = 0, 
    _if_conditional190) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_155, "libcomelang2.c", 1711)),(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(((struct buffer*)come_null_check(str_156, "libcomelang2.c", 1711))->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result211__ = __result_obj__ = result_155;
    if(result_155 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_156 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result211__;
    __freed_obj__ = 0;
    if(result_155 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_156 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
void* right_value155;
char* __result212__;
char* p_158;
_Bool _while_condtional11;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value156;
char* __result213__;
void* right_value157;
char* __result214__;
void* right_value158;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&p_158, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    if(_if_conditional191=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional191) {
        __result212__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        __freed_obj__ = 0;
        return __result212__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_158=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional11=p_158>=path,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional192=*p_158==47,        __freed_obj__ = 0, 
        _if_conditional192) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_158--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional193=p_158<path,    __freed_obj__ = 0, 
    _if_conditional193) {
        __result213__ = __result_obj__ = ((char*)(right_value156=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result213__;
        __freed_obj__ = 0;
    }
    else {
        __result214__ = __result_obj__ = ((char*)(right_value157=__builtin_string(p_158+1)));
        __freed_obj__ = 0;
        return __result214__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result215__ = __result_obj__ = ((char*)(right_value158=__builtin_string("")));
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
}

char* xdirname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
void* right_value159;
char* __result216__;
void* right_value160;
void* right_value161;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    if(_if_conditional194=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional194) {
        __result216__ = __result_obj__ = ((char*)(right_value159=__builtin_string("")));
        __freed_obj__ = 0;
        return __result216__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result217__ = __result_obj__ = ((char*)(right_value161=__builtin_string(dirname(((char*)(right_value160=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    return __result217__;
    __freed_obj__ = 0;
}

char* xnoextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
void* right_value162;
char* __result218__;
void* right_value163;
char* path2_159;
char* p_160;
_Bool _while_condtional12;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value164;
char* __result219__;
void* right_value165;
char* __result220__;
void* right_value166;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&path2_159, 0, sizeof(char*));
memset(&p_160, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    if(_if_conditional195=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional195) {
        __result218__ = __result_obj__ = ((char*)(right_value162=__builtin_string("")));
        __freed_obj__ = 0;
        return __result218__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    path2_159=(char*)come_increment_ref_count(((char*)(right_value163=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = 0;
    p_160=path2_159+strlen(path2_159);
    __freed_obj__ = 0;
    while(_while_condtional12=p_160>=path2_159,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional196=*p_160==46,        __freed_obj__ = 0, 
        _if_conditional196) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_160--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional197=p_160<path2_159,    __freed_obj__ = 0, 
    _if_conditional197) {
        __result219__ = __result_obj__ = ((char*)(right_value164=__builtin_string(path2_159)));
        if(path2_159 && !__freed_obj__) { path2_159 = come_decrement_ref_count(path2_159, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result219__;
        __freed_obj__ = 0;
    }
    else {
        __result220__ = __result_obj__ = ((char*)(right_value165=string_substring(((char*)come_null_check(path2_159, "libcomelang2.c", 1776)),0,p_160-path2_159)));
        if(path2_159 && !__freed_obj__) { path2_159 = come_decrement_ref_count(path2_159, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result220__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result221__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
    if(path2_159 && !__freed_obj__) { path2_159 = come_decrement_ref_count(path2_159, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result221__;
    __freed_obj__ = 0;
    if(path2_159 && !__freed_obj__) { path2_159 = come_decrement_ref_count(path2_159, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
void* right_value167;
char* __result222__;
char* p_161;
_Bool _while_condtional13;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value168;
char* __result223__;
void* right_value169;
char* __result224__;
void* right_value170;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&p_161, 0, sizeof(char*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
    if(_if_conditional198=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional198) {
        __result222__ = __result_obj__ = ((char*)(right_value167=__builtin_string("")));
        __freed_obj__ = 0;
        return __result222__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    p_161=path+strlen(path);
    __freed_obj__ = 0;
    while(_while_condtional13=p_161>=path,    __freed_obj__ = 0, 
    _while_condtional13) {
        if(_if_conditional199=*p_161==46,        __freed_obj__ = 0, 
        _if_conditional199) {
            break;
            __freed_obj__ = 0;
        }
        else {
            p_161--;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional200=p_161<path,    __freed_obj__ = 0, 
    _if_conditional200) {
        __result223__ = __result_obj__ = ((char*)(right_value168=__builtin_string(path)));
        __freed_obj__ = 0;
        return __result223__;
        __freed_obj__ = 0;
    }
    else {
        __result224__ = __result_obj__ = ((char*)(right_value169=__builtin_string(p_161+1)));
        __freed_obj__ = 0;
        return __result224__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result225__ = __result_obj__ = ((char*)(right_value170=__builtin_string("")));
    __freed_obj__ = 0;
    return __result225__;
    __freed_obj__ = 0;
}

char* xrealpath(char* path){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
void* right_value171;
char* __result226__;
char* result_162;
void* right_value172;
char* result2_163;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&result_162, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&result2_163, 0, sizeof(char*));
    if(_if_conditional201=path==((void*)0),    __freed_obj__ = 0, 
    _if_conditional201) {
        __result226__ = __result_obj__ = ((char*)(right_value171=__builtin_string("")));
        __freed_obj__ = 0;
        return __result226__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_162=realpath(path,((void*)0));
    __freed_obj__ = 0;
    result2_163=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(result_162))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    free(result_162);
    __freed_obj__ = 0;
    __result227__ = __result_obj__ = result2_163;
    if(result2_163 && !__freed_obj__) { result2_163 = come_decrement_ref_count(result2_163, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result227__;
    __freed_obj__ = 0;
    if(result2_163 && !__freed_obj__) { result2_163 = come_decrement_ref_count(result2_163, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
void* right_value173;
char* __result228__;
void* right_value174;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
    if(_if_conditional202=self,    __freed_obj__ = 0, 
    _if_conditional202) {
        __result228__ = __result_obj__ = ((char*)(right_value173=__builtin_string("true")));
        __freed_obj__ = 0;
        return __result228__;
        __freed_obj__ = 0;
    }
    else {
        __result229__ = __result_obj__ = ((char*)(right_value174=__builtin_string("false")));
        __freed_obj__ = 0;
        return __result229__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* char_to_string(char self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value175=xsprintf("%c",self)));
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
}

char* short_to_string(short short self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value176;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
    __result231__ = __result_obj__ = ((char*)(right_value176=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
}

char* int_to_string(int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value177;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
    __result232__ = __result_obj__ = ((char*)(right_value177=xsprintf("%d",self)));
    __freed_obj__ = 0;
    return __result232__;
    __freed_obj__ = 0;
}

char* long_to_string(long self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value178;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
    __result233__ = __result_obj__ = ((char*)(right_value178=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result233__;
    __freed_obj__ = 0;
}

char* size_t_to_string(long int self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    __result234__ = __result_obj__ = ((char*)(right_value179=xsprintf("%ld",self)));
    __freed_obj__ = 0;
    return __result234__;
    __freed_obj__ = 0;
}

char* float_to_string(float self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value180;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
    __result235__ = __result_obj__ = ((char*)(right_value180=xsprintf("%f",self)));
    __freed_obj__ = 0;
    return __result235__;
    __freed_obj__ = 0;
}

char* double_to_string(double self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value181;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result236__ = __result_obj__ = ((char*)(right_value181=xsprintf("%lf",self)));
    __freed_obj__ = 0;
    return __result236__;
    __freed_obj__ = 0;
}

char* string_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
void* right_value182;
char* __result237__;
void* right_value183;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    if(_if_conditional203=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional203) {
        __result237__ = __result_obj__ = ((char*)(right_value182=__builtin_string("")));
        __freed_obj__ = 0;
        return __result237__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result238__ = __result_obj__ = ((char*)(right_value183=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result238__;
    __freed_obj__ = 0;
}

char* charp_to_string(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
void* right_value184;
char* __result239__;
void* right_value185;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
    if(_if_conditional204=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional204) {
        __result239__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        __freed_obj__ = 0;
        return __result239__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result240__ = __result_obj__ = ((char*)(right_value185=__builtin_string(self)));
    __freed_obj__ = 0;
    return __result240__;
    __freed_obj__ = 0;
}

int bool_compare(_Bool left, _Bool right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
int __result241__;
_Bool _if_conditional206;
int __result242__;
_Bool _if_conditional207;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional205=!left&&right,    __freed_obj__ = 0, 
    _if_conditional205) {
        __result241__ = -1;
        __freed_obj__ = 0;
        return __result241__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional206=left&&right,        __freed_obj__ = 0, 
        _if_conditional206) {
            __result242__ = 0;
            __freed_obj__ = 0;
            return __result242__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional207=!left&&!right,            __freed_obj__ = 0, 
            _if_conditional207) {
                __result243__ = 0;
                __freed_obj__ = 0;
                return __result243__;
                __freed_obj__ = 0;
            }
            else {
                __result244__ = 1;
                __freed_obj__ = 0;
                return __result244__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result245__ = 0;
    __freed_obj__ = 0;
    return __result245__;
    __freed_obj__ = 0;
}

int char_compare(char left, char right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
int __result246__;
_Bool _if_conditional209;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional208=left<right,    __freed_obj__ = 0, 
    _if_conditional208) {
        __result246__ = -1;
        __freed_obj__ = 0;
        return __result246__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional209=left>right,        __freed_obj__ = 0, 
        _if_conditional209) {
            __result247__ = 1;
            __freed_obj__ = 0;
            return __result247__;
            __freed_obj__ = 0;
        }
        else {
            __result248__ = 0;
            __freed_obj__ = 0;
            return __result248__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result249__ = 0;
    __freed_obj__ = 0;
    return __result249__;
    __freed_obj__ = 0;
}

int short_compare(short short left, short short right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int __result250__;
_Bool _if_conditional211;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=left<right,    __freed_obj__ = 0, 
    _if_conditional210) {
        __result250__ = -1;
        __freed_obj__ = 0;
        return __result250__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional211=left>right,        __freed_obj__ = 0, 
        _if_conditional211) {
            __result251__ = 1;
            __freed_obj__ = 0;
            return __result251__;
            __freed_obj__ = 0;
        }
        else {
            __result252__ = 0;
            __freed_obj__ = 0;
            return __result252__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result253__ = 0;
    __freed_obj__ = 0;
    return __result253__;
    __freed_obj__ = 0;
}

int int_compare(int left, int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
int __result254__;
_Bool _if_conditional213;
int __result255__;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional212=left<right,    __freed_obj__ = 0, 
    _if_conditional212) {
        __result254__ = -1;
        __freed_obj__ = 0;
        return __result254__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional213=left>right,        __freed_obj__ = 0, 
        _if_conditional213) {
            __result255__ = 1;
            __freed_obj__ = 0;
            return __result255__;
            __freed_obj__ = 0;
        }
        else {
            __result256__ = 0;
            __freed_obj__ = 0;
            return __result256__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result257__ = 0;
    __freed_obj__ = 0;
    return __result257__;
    __freed_obj__ = 0;
}

int long_compare(long left, long right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
int __result258__;
_Bool _if_conditional215;
int __result259__;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional214=left<right,    __freed_obj__ = 0, 
    _if_conditional214) {
        __result258__ = -1;
        __freed_obj__ = 0;
        return __result258__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional215=left>right,        __freed_obj__ = 0, 
        _if_conditional215) {
            __result259__ = 1;
            __freed_obj__ = 0;
            return __result259__;
            __freed_obj__ = 0;
        }
        else {
            __result260__ = 0;
            __freed_obj__ = 0;
            return __result260__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result261__ = 0;
    __freed_obj__ = 0;
    return __result261__;
    __freed_obj__ = 0;
}

int size_t_compare(long int left, long int right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
int __result262__;
_Bool _if_conditional217;
int __result263__;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional216=left<right,    __freed_obj__ = 0, 
    _if_conditional216) {
        __result262__ = -1;
        __freed_obj__ = 0;
        return __result262__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional217=left>right,        __freed_obj__ = 0, 
        _if_conditional217) {
            __result263__ = 1;
            __freed_obj__ = 0;
            return __result263__;
            __freed_obj__ = 0;
        }
        else {
            __result264__ = 0;
            __freed_obj__ = 0;
            return __result264__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result265__ = 0;
    __freed_obj__ = 0;
    return __result265__;
    __freed_obj__ = 0;
}

int float_compare(float left, float right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
int __result266__;
_Bool _if_conditional219;
int __result267__;
int __result268__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional218=left<right,    __freed_obj__ = 0, 
    _if_conditional218) {
        __result266__ = -1;
        __freed_obj__ = 0;
        return __result266__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional219=left>right,        __freed_obj__ = 0, 
        _if_conditional219) {
            __result267__ = 1;
            __freed_obj__ = 0;
            return __result267__;
            __freed_obj__ = 0;
        }
        else {
            __result268__ = 0;
            __freed_obj__ = 0;
            return __result268__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result269__ = 0;
    __freed_obj__ = 0;
    return __result269__;
    __freed_obj__ = 0;
}

int double_compare(double left, double right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
int __result270__;
_Bool _if_conditional221;
int __result271__;
int __result272__;
int __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional220=left<right,    __freed_obj__ = 0, 
    _if_conditional220) {
        __result270__ = -1;
        __freed_obj__ = 0;
        return __result270__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional221=left>right,        __freed_obj__ = 0, 
        _if_conditional221) {
            __result271__ = 1;
            __freed_obj__ = 0;
            return __result271__;
            __freed_obj__ = 0;
        }
        else {
            __result272__ = 0;
            __freed_obj__ = 0;
            return __result272__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result273__ = 0;
    __freed_obj__ = 0;
    return __result273__;
    __freed_obj__ = 0;
}

int string_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
int __result274__;
_Bool _if_conditional223;
int __result275__;
_Bool _if_conditional224;
int __result276__;
int __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional222=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional222) {
        __result274__ = 0;
        __freed_obj__ = 0;
        return __result274__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional223=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional223) {
            __result275__ = -1;
            __freed_obj__ = 0;
            return __result275__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional224=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                __result276__ = 1;
                __freed_obj__ = 0;
                return __result276__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result277__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result277__;
    __freed_obj__ = 0;
}

int charp_compare(char* left, char* right){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
int __result278__;
_Bool _if_conditional226;
int __result279__;
_Bool _if_conditional227;
int __result280__;
int __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional225=left==((void*)0)&&right==((void*)0),    __freed_obj__ = 0, 
    _if_conditional225) {
        __result278__ = 0;
        __freed_obj__ = 0;
        return __result278__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional226=left==((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            __result279__ = -1;
            __freed_obj__ = 0;
            return __result279__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional227=right==((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                __result280__ = 1;
                __freed_obj__ = 0;
                return __result280__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result281__ = strcmp(left,right);
    __freed_obj__ = 0;
    return __result281__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* FILE_read(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
void* right_value186;
void* right_value187;
void* right_value188;
struct optional$2charphbool* __result283__;
void* right_value189;
void* right_value190;
struct buffer* buf_164;
_Bool _while_condtional14;
int size_166;
_Bool _if_conditional230;
void* right_value191;
void* right_value192;
void* right_value193;
struct optional$2charphbool* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&buf_164, 0, sizeof(struct buffer*));
memset(&size_166, 0, sizeof(int));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional228=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional228) {
        __result283__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2048), ((struct optional$2charphbool*)(right_value188=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value187=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2048))),(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value186;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value187;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value188;
        __freed_obj__ = 0;
        return __result283__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_164=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value189=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2050))), "libcomelang2.c", 2050)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = 0;
    while(_while_condtional14=1,    __freed_obj__ = 0, 
    _while_condtional14) {
        char buf2_165[8192];
        memset(&buf2_165, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_166=fread(buf2_165,1,8192,f);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_164, "libcomelang2.c", 2057)),buf2_165,size_166);
        __freed_obj__ = 0;
        if(_if_conditional230=size_166<8192,        __freed_obj__ = 0, 
        _if_conditional230) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result284__ = __result_obj__ = ((struct optional$2charphbool*)(right_value193=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value192=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2064)))),(char*)come_increment_ref_count(((char*)(right_value191=buffer_to_string(((struct buffer*)come_null_check(buf_164, "libcomelang2.c", 2064)))))),(_Bool)1)));
    if(buf_164 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value191;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value192;
    __freed_obj__ = 0;
    return __result284__;
    __freed_obj__ = 0;
    if(buf_164 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj25;
struct optional$2charphbool* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj25=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result282__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result282__;
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
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional229=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional229) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* FILE_write(struct _IO_FILE* f, char* str){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result285__;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
    if(_if_conditional231=f==((void*)0)||str==((void*)0),    __freed_obj__ = 0, 
    _if_conditional231) {
        __result285__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2070), ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2070))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value195;
        __freed_obj__ = 0;
        return __result285__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result286__ = __result_obj__ = ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2073)))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    return __result286__;
    __freed_obj__ = 0;
}

struct optional$2intbool* FILE_fclose(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result287__;
int result_167;
_Bool _if_conditional233;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result288__;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&result_167, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    if(_if_conditional232=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional232) {
        __result287__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2079), ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2079))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        return __result287__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_167=fclose(f);
    __freed_obj__ = 0;
    if(_if_conditional233=result_167<0,    __freed_obj__ = 0, 
    _if_conditional233) {
        __result288__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2085), ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2085))),result_167,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = 0;
        return __result288__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result289__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2088)))),result_167,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    return __result289__;
    __freed_obj__ = 0;
}

struct optional$2_IO_FILEpbool* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
void* right_value204;
void* right_value205;
struct optional$2_IO_FILEpbool* __result291__;
va_list args_169;
int result_170;
_Bool _if_conditional235;
void* right_value206;
void* right_value207;
struct optional$2_IO_FILEpbool* __result292__;
void* right_value208;
void* right_value209;
struct optional$2_IO_FILEpbool* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&args_169, 0, sizeof(va_list));
memset(&result_170, 0, sizeof(int));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
    if(_if_conditional234=f==((void*)0)||msg==((void*)0),    __freed_obj__ = 0, 
    _if_conditional234) {
        __result291__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2094), ((struct optional$2_IO_FILEpbool*)(right_value205=optional$2_IO_FILEpbool_initialize(((struct optional$2_IO_FILEpbool*)(right_value204=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2094))),f,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value205;
        __freed_obj__ = 0;
        return __result291__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    char msg2_168[1024*2*2*2];
    memset(&msg2_168, 0, sizeof(char)    *(1024*2*2*2)    );
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_169,msg);
    __freed_obj__ = 0;
    vsnprintf(msg2_168,1024*2*2*2,msg,args_169);
    __freed_obj__ = 0;
    __builtin_va_end(args_169);
    __freed_obj__ = 0;
    result_170=fprintf(f,"%s",msg2_168);
    __freed_obj__ = 0;
    if(_if_conditional235=result_170<0,    __freed_obj__ = 0, 
    _if_conditional235) {
        __result292__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2106), ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2106))),result_170,(_Bool)0))));
        if((&args_169) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_169), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value207;
        __freed_obj__ = 0;
        return __result292__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result293__ = __result_obj__ = ((struct optional$2_IO_FILEpbool*)(right_value209=optional$2_IO_FILEpbool_initialize((struct optional$2_IO_FILEpbool*)come_increment_ref_count(((struct optional$2_IO_FILEpbool*)(right_value208=(struct optional$2_IO_FILEpbool*)come_calloc(1, sizeof(struct optional$2_IO_FILEpbool)*(1), "libcomelang2.c", 2109)))),f,(_Bool)1)));
    if((&args_169) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_169), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    return __result293__;
    __freed_obj__ = 0;
    if((&args_169) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_169), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2_IO_FILEpbool* optional$2_IO_FILEpbool_initialize(struct optional$2_IO_FILEpbool* self, struct _IO_FILE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2_IO_FILEpbool* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2_IO_FILEpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result290__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result290__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2_IO_FILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2_IO_FILEpboolp_finalize(struct optional$2_IO_FILEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result294__;
struct _IO_FILE* f_171;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result295__;
int result_172;
_Bool _if_conditional239;
void* right_value214;
void* right_value215;
struct optional$2intbool* __result296__;
int result2_173;
_Bool _if_conditional240;
void* right_value216;
void* right_value217;
struct optional$2intbool* __result297__;
void* right_value218;
void* right_value219;
struct optional$2intbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&f_171, 0, sizeof(struct _IO_FILE*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&result_172, 0, sizeof(int));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&result2_173, 0, sizeof(int));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    if(_if_conditional236=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional236) {
        __result294__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2115), ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2115))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211;
        __freed_obj__ = 0;
        return __result294__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional237=append,    __freed_obj__ = 0, 
    _if_conditional237) {
        f_171=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_171=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional238=f_171==((void*)0),    __freed_obj__ = 0, 
    _if_conditional238) {
        __result295__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2127), ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2127))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value212;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value213;
        __freed_obj__ = 0;
        return __result295__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_172=fwrite(self,strlen(self),1,f_171);
    __freed_obj__ = 0;
    if(_if_conditional239=result_172<0,    __freed_obj__ = 0, 
    _if_conditional239) {
        __result296__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2133), ((struct optional$2intbool*)(right_value215=optional$2intbool_initialize(((struct optional$2intbool*)(right_value214=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2133))),result_172,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value215;
        __freed_obj__ = 0;
        return __result296__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_173=fclose(f_171);
    __freed_obj__ = 0;
    if(_if_conditional240=result2_173<0,    __freed_obj__ = 0, 
    _if_conditional240) {
        __result297__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2139), ((struct optional$2intbool*)(right_value217=optional$2intbool_initialize(((struct optional$2intbool*)(right_value216=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2139))),result2_173,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value216;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value217;
        __freed_obj__ = 0;
        return __result297__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result298__ = __result_obj__ = ((struct optional$2intbool*)(right_value219=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value218=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2142)))),result_172,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    return __result298__;
    __freed_obj__ = 0;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
void* right_value220;
void* right_value221;
struct optional$2intbool* __result299__;
struct _IO_FILE* f_174;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value222;
void* right_value223;
struct optional$2intbool* __result300__;
int result_175;
_Bool _if_conditional244;
void* right_value224;
void* right_value225;
struct optional$2intbool* __result301__;
int result2_176;
_Bool _if_conditional245;
void* right_value226;
void* right_value227;
struct optional$2intbool* __result302__;
void* right_value228;
void* right_value229;
struct optional$2intbool* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&f_174, 0, sizeof(struct _IO_FILE*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&result_175, 0, sizeof(int));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&result2_176, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
    if(_if_conditional241=self==((void*)0)||file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result299__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2148), ((struct optional$2intbool*)(right_value221=optional$2intbool_initialize(((struct optional$2intbool*)(right_value220=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2148))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value220;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value221;
        __freed_obj__ = 0;
        return __result299__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional242=append,    __freed_obj__ = 0, 
    _if_conditional242) {
        f_174=fopen(file_name,"a");
        __freed_obj__ = 0;
    }
    else {
        f_174=fopen(file_name,"w");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional243=f_174==((void*)0),    __freed_obj__ = 0, 
    _if_conditional243) {
        __result300__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2160), ((struct optional$2intbool*)(right_value223=optional$2intbool_initialize(((struct optional$2intbool*)(right_value222=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2160))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value223;
        __freed_obj__ = 0;
        return __result300__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_175=fwrite(self,strlen(self),1,f_174);
    __freed_obj__ = 0;
    if(_if_conditional244=result_175<0,    __freed_obj__ = 0, 
    _if_conditional244) {
        __result301__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2166), ((struct optional$2intbool*)(right_value225=optional$2intbool_initialize(((struct optional$2intbool*)(right_value224=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2166))),result_175,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value225;
        __freed_obj__ = 0;
        return __result301__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result2_176=fclose(f_174);
    __freed_obj__ = 0;
    if(_if_conditional245=result2_176<0,    __freed_obj__ = 0, 
    _if_conditional245) {
        __result302__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2172), ((struct optional$2intbool*)(right_value227=optional$2intbool_initialize(((struct optional$2intbool*)(right_value226=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2172))),result2_176,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value226;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value227;
        __freed_obj__ = 0;
        return __result302__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result303__ = __result_obj__ = ((struct optional$2intbool*)(right_value229=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value228=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2175)))),result_175,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    return __result303__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
void* right_value230;
void* right_value231;
void* right_value232;
struct optional$2charphbool* __result304__;
struct _IO_FILE* f_177;
_Bool _if_conditional247;
void* right_value233;
void* right_value234;
void* right_value235;
struct optional$2charphbool* __result305__;
void* right_value236;
void* right_value237;
struct buffer* buf_178;
_Bool _while_condtional15;
int size_180;
_Bool _if_conditional248;
void* right_value238;
char* result_181;
int result2_182;
_Bool _if_conditional249;
void* right_value239;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result306__;
void* right_value242;
void* right_value243;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&f_177, 0, sizeof(struct _IO_FILE*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&buf_178, 0, sizeof(struct buffer*));
memset(&size_180, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&result_181, 0, sizeof(char*));
memset(&result2_182, 0, sizeof(int));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
    if(_if_conditional246=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional246) {
        __result304__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2181), ((struct optional$2charphbool*)(right_value232=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value231=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2181))),(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value231;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value232;
        __freed_obj__ = 0;
        return __result304__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_177=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional247=f_177==((void*)0),    __freed_obj__ = 0, 
    _if_conditional247) {
        __result305__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2187), ((struct optional$2charphbool*)(right_value235=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value234=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2187))),(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value233;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value234;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value235;
        __freed_obj__ = 0;
        return __result305__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_178=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value237=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value236=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2190))), "libcomelang2.c", 2190)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value236;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value237;
    __freed_obj__ = 0;
    while(_while_condtional15=1,    __freed_obj__ = 0, 
    _while_condtional15) {
        char buf2_179[8192];
        memset(&buf2_179, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_180=fread(buf2_179,1,8192,f_177);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_178, "libcomelang2.c", 2197)),buf2_179,size_180);
        __freed_obj__ = 0;
        if(_if_conditional248=size_180<8192,        __freed_obj__ = 0, 
        _if_conditional248) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_181=(char*)come_increment_ref_count(((char*)(right_value238=buffer_to_string(((struct buffer*)come_null_check(buf_178, "libcomelang2.c", 2204))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value238;
    __freed_obj__ = 0;
    result2_182=fclose(f_177);
    __freed_obj__ = 0;
    if(_if_conditional249=result2_182<0,    __freed_obj__ = 0, 
    _if_conditional249) {
        __result306__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2209), ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2209))),(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("")))),(_Bool)0))));
        if(buf_178 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_181 && !__freed_obj__) { result_181 = come_decrement_ref_count(result_181, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value239;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value240;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value241;
        __freed_obj__ = 0;
        return __result306__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result307__ = __result_obj__ = ((struct optional$2charphbool*)(right_value243=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value242=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2212)))),(char*)come_increment_ref_count(result_181),(_Bool)1)));
    if(buf_178 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_181 && !__freed_obj__) { result_181 = come_decrement_ref_count(result_181, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value242;
    __freed_obj__ = 0;
    return __result307__;
    __freed_obj__ = 0;
    if(buf_178 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_181 && !__freed_obj__) { result_181 = come_decrement_ref_count(result_181, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
void* right_value244;
void* right_value245;
void* right_value246;
struct optional$2charphbool* __result308__;
struct _IO_FILE* f_183;
_Bool _if_conditional251;
void* right_value247;
void* right_value248;
void* right_value249;
struct optional$2charphbool* __result309__;
void* right_value250;
void* right_value251;
struct buffer* buf_184;
_Bool _while_condtional16;
int size_186;
_Bool _if_conditional252;
void* right_value252;
char* result_187;
int result2_188;
_Bool _if_conditional253;
void* right_value253;
void* right_value254;
void* right_value255;
struct optional$2charphbool* __result310__;
void* right_value256;
void* right_value257;
struct optional$2charphbool* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&f_183, 0, sizeof(struct _IO_FILE*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&size_186, 0, sizeof(int));
memset(&right_value252, 0, sizeof(void*));
memset(&result_187, 0, sizeof(char*));
memset(&result2_188, 0, sizeof(int));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
    if(_if_conditional250=file_name==((void*)0),    __freed_obj__ = 0, 
    _if_conditional250) {
        __result308__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2218), ((struct optional$2charphbool*)(right_value246=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value245=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2218))),(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value246;
        __freed_obj__ = 0;
        return __result308__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_183=fopen(file_name,"r");
    __freed_obj__ = 0;
    if(_if_conditional251=f_183==((void*)0),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result309__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2224), ((struct optional$2charphbool*)(right_value249=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value248=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2224))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value248;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value249;
        __freed_obj__ = 0;
        return __result309__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buf_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value250=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2227))), "libcomelang2.c", 2227)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value251;
    __freed_obj__ = 0;
    while(_while_condtional16=1,    __freed_obj__ = 0, 
    _while_condtional16) {
        char buf2_185[8192];
        memset(&buf2_185, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        size_186=fread(buf2_185,1,8192,f_183);
        __freed_obj__ = 0;
        buffer_append(((struct buffer*)come_null_check(buf_184, "libcomelang2.c", 2234)),buf2_185,size_186);
        __freed_obj__ = 0;
        if(_if_conditional252=size_186<8192,        __freed_obj__ = 0, 
        _if_conditional252) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_187=(char*)come_increment_ref_count(((char*)(right_value252=buffer_to_string(((struct buffer*)come_null_check(buf_184, "libcomelang2.c", 2241))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value252;
    __freed_obj__ = 0;
    result2_188=fclose(f_183);
    __freed_obj__ = 0;
    if(_if_conditional253=result2_188<0,    __freed_obj__ = 0, 
    _if_conditional253) {
        __result310__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2246), ((struct optional$2charphbool*)(right_value255=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value254=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2246))),(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string("")))),(_Bool)0))));
        if(buf_184 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_187 && !__freed_obj__) { result_187 = come_decrement_ref_count(result_187, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value255;
        __freed_obj__ = 0;
        return __result310__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result311__ = __result_obj__ = ((struct optional$2charphbool*)(right_value257=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value256=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2249)))),(char*)come_increment_ref_count(result_187),(_Bool)1)));
    if(buf_184 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_187 && !__freed_obj__) { result_187 = come_decrement_ref_count(result_187, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value256;
    __freed_obj__ = 0;
    return __result311__;
    __freed_obj__ = 0;
    if(buf_184 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_187 && !__freed_obj__) { result_187 = come_decrement_ref_count(result_187, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct _IO_FILE* f){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value258;
void* right_value259;
struct list$1charph* result_189;
_Bool _if_conditional254;
void* right_value260;
void* right_value261;
struct optional$2list$1charphphbool* __result313__;
_Bool _while_condtional17;
_Bool _if_conditional256;
void* right_value262;
void* right_value263;
void* right_value264;
struct optional$2list$1charphphbool* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&result_189, 0, sizeof(struct list$1charph*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
    result_189=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2254))), "libcomelang2.c", 2254)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value258;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value259;
    __freed_obj__ = 0;
    if(_if_conditional254=f==((void*)0),    __freed_obj__ = 0, 
    _if_conditional254) {
        __result313__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2257), ((struct optional$2list$1charphphbool*)(right_value261=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value260=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2257))),(struct list$1charph*)come_increment_ref_count(result_189),(_Bool)0))));
        if(result_189 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value260;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value261;
        __freed_obj__ = 0;
        return __result313__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional17=1,    __freed_obj__ = 0, 
    _while_condtional17) {
        char buf_190[8192];
        memset(&buf_190, 0, sizeof(char)        *(8192)        );
        __freed_obj__ = 0;
        if(_if_conditional256=fgets(buf_190,8192,f)==((void*)0),        __freed_obj__ = 0, 
        _if_conditional256) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1charph_push_back(((struct list$1charph*)come_null_check(result_189, "libcomelang2.c", 2267)),(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(buf_190)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result314__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value264=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value263=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2270)))),(struct list$1charph*)come_increment_ref_count(result_189),(_Bool)1)));
    if(result_189 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value263;
    __freed_obj__ = 0;
    return __result314__;
    __freed_obj__ = 0;
    if(result_189 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_189, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj26;
struct optional$2list$1charphphbool* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj26=((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj26) { come_call_finalizer(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct optional$2list$1charphphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result312__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result312__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
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

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional255=self!=((void*)0)&&((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional255) {
                    if(((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct optional$2list$1charphphbool*)come_null_check(self, "optional$2list$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional257;
void* right_value265;
void* right_value266;
struct optional$2intbool* __result315__;
struct _IO_FILE* f_191;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value267;
void* right_value268;
struct optional$2intbool* __result316__;
void* right_value269;
void* right_value270;
struct optional$2intbool* __result317__;
void* right_value271;
void* right_value272;
struct optional$2intbool* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&f_191, 0, sizeof(struct _IO_FILE*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional257=path==((void*)0)||mode==((void*)0),    __freed_obj__ = 0, 
    _if_conditional257) {
        __result315__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2276), ((struct optional$2intbool*)(right_value266=optional$2intbool_initialize(((struct optional$2intbool*)(right_value265=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2276))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value265;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value266;
        __freed_obj__ = 0;
        return __result315__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    f_191=fopen(path,mode);
    __freed_obj__ = 0;
    if(_if_conditional258=f_191,    __freed_obj__ = 0, 
    _if_conditional258) {
        block(parent,f_191);
        __freed_obj__ = 0;
        if(_if_conditional259=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2287))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional259) {
            fclose(f_191);
            __freed_obj__ = 0;
            __result316__ = __result_obj__ = ((struct optional$2intbool*)(right_value268=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value267=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2284)))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
            if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value267;
            __freed_obj__ = 0;
            return __result316__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_191);
        __freed_obj__ = 0;
        __result317__ = __result_obj__ = ((struct optional$2intbool*)(right_value270=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value269=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2289)))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value269;
        __freed_obj__ = 0;
        return __result317__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result318__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2292), ((struct optional$2intbool*)(right_value272=optional$2intbool_initialize(((struct optional$2intbool*)(right_value271=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2292))),-1,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value272;
    __freed_obj__ = 0;
    return __result318__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
void* right_value273;
void* right_value274;
struct optional$2charphbool* __result319__;
void* right_value275;
void* right_value276;
void* right_value277;
struct optional$2charphbool* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
    if(_if_conditional260=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional260) {
        __result319__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2301), ((struct optional$2intbool*)(right_value274=optional$2intbool_initialize(((struct optional$2intbool*)(right_value273=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2301))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value274;
        __freed_obj__ = 0;
        return __result319__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result320__ = __result_obj__ = ((struct optional$2charphbool*)(right_value277=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value276=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2305)))),(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value275;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value276;
    __freed_obj__ = 0;
    return __result320__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* charp_print(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
void* right_value278;
void* right_value279;
struct optional$2charphbool* __result321__;
void* right_value280;
void* right_value281;
void* right_value282;
struct optional$2charphbool* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
    if(_if_conditional261=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional261) {
        __result321__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2311), ((struct optional$2intbool*)(right_value279=optional$2intbool_initialize(((struct optional$2intbool*)(right_value278=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2311))),-1,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value278;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value279;
        __freed_obj__ = 0;
        return __result321__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    printf("%s",self);
    __freed_obj__ = 0;
    __result322__ = __result_obj__ = ((struct optional$2charphbool*)(right_value282=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value281=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2315)))),(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value280;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value281;
    __freed_obj__ = 0;
    return __result322__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional262;
void* right_value283;
void* right_value284;
void* right_value285;
struct optional$2charphbool* __result323__;
char* msg2_192;
va_list args_193;
void* right_value286;
void* right_value287;
void* right_value288;
struct optional$2charphbool* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&msg2_192, 0, sizeof(char*));
memset(&args_193, 0, sizeof(va_list));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
    if(_if_conditional262=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional262) {
        __result323__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2322), ((struct optional$2charphbool*)(right_value285=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value284=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2322))),(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value283;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value284;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value285;
        __freed_obj__ = 0;
        return __result323__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_193,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_192,self,args_193);
    __freed_obj__ = 0;
    __builtin_va_end(args_193);
    __freed_obj__ = 0;
    printf("%s",msg2_192);
    __freed_obj__ = 0;
    free(msg2_192);
    __freed_obj__ = 0;
    __result324__ = __result_obj__ = ((struct optional$2charphbool*)(right_value288=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value287=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2335)))),(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(self)))),(_Bool)1)));
    if((&args_193) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_193), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value286;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value287;
    __freed_obj__ = 0;
    return __result324__;
    __freed_obj__ = 0;
    if((&args_193) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_193), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional263;
void* right_value289;
void* right_value290;
void* right_value291;
struct optional$2charphbool* __result325__;
char* msg2_194;
va_list args_195;
void* right_value292;
void* right_value293;
void* right_value294;
struct optional$2charphbool* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&msg2_194, 0, sizeof(char*));
memset(&args_195, 0, sizeof(va_list));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
    if(_if_conditional263=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional263) {
        __result325__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2341), ((struct optional$2charphbool*)(right_value291=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value290=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2341))),(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value289;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value290;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value291;
        __freed_obj__ = 0;
        return __result325__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_195,self);
    __freed_obj__ = 0;
    vasprintf(&msg2_194,self,args_195);
    __freed_obj__ = 0;
    __builtin_va_end(args_195);
    __freed_obj__ = 0;
    printf("%s",msg2_194);
    __freed_obj__ = 0;
    free(msg2_194);
    __freed_obj__ = 0;
    __result326__ = __result_obj__ = ((struct optional$2charphbool*)(right_value294=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value293=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2354)))),(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(self)))),(_Bool)1)));
    if((&args_195) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_195), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value292;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value293;
    __freed_obj__ = 0;
    return __result326__;
    __freed_obj__ = 0;
    if((&args_195) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_195), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __freed_obj__ = 0;
    __result327__ = self;
    __freed_obj__ = 0;
    return __result327__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* string_puts(char* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional264;
void* right_value295;
void* right_value296;
void* right_value297;
struct optional$2charphbool* __result328__;
void* right_value298;
void* right_value299;
void* right_value300;
struct optional$2charphbool* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
    if(_if_conditional264=self==((void*)0),    __freed_obj__ = 0, 
    _if_conditional264) {
        __result328__ = __result_obj__ = (come_save_stackframe("libcomelang2.c", 2367), ((struct optional$2charphbool*)(right_value297=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value296=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2367))),(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string("")))),(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value295;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value296;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value297);
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value297;
        __freed_obj__ = 0;
        return __result328__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    puts(self);
    __freed_obj__ = 0;
    __result329__ = __result_obj__ = ((struct optional$2charphbool*)(right_value300=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value299=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2371)))),(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value298;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value299;
    __freed_obj__ = 0;
    return __result329__;
    __freed_obj__ = 0;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_196;
_Bool _for_condtionalA16;
_Bool _if_conditional265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_196, 0, sizeof(int));
    for(
    i_196=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    i_196<self ,    __freed_obj__ = 0, 
    _for_condtionalA16;    i_196++ ,    __freed_obj__ = 0, 
    0    ){
        block(parent,i_196);
        __freed_obj__ = 0;
        if(_if_conditional265=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "libcomelang2.c", 2385))->__method_block_result_kind__!=0,        __freed_obj__ = 0, 
        _if_conditional265) {
            __freed_obj__ = 0;
            return;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

