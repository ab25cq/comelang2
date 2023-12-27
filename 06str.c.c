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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sSStringNode
{
    char* value;
    struct list$1sNodeph* exps;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    unsigned int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sNoneNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sSomeNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

long int __sysconf(int __name);

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
_Bool sSStringNode_terminated();

char* sSStringNode_kind();

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info);

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

char* sCharNode_kind();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated();

char* sWCharNode_kind();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

char* sWStringNode_kind();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

char* sRegexNode_kind();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

char* sListNode_kind();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

char* sTupleNode_kind();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
_Bool sNoneNode_terminated();

char* sNoneNode_kind();

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info);

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info);

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
_Bool sSomeNode_terminated();

char* sSomeNode_kind();

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info);

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

char* sMapNode_kind();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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







struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
struct sStrNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
    __dec_obj1=((struct sStrNode*)come_null_check(self, "06str.c", 13))->value;
    ((struct sStrNode*)come_null_check(self, "06str.c", 13))->value=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(value))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStrNode*)come_null_check(self, "06str.c", 15))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj2=((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname;
    ((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 16))->sname))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
void* right_value3;
struct buffer* buf_0;
char* p_1;
_Bool _while_condtional1;
_Bool _if_conditional3;
void* right_value4;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&buf_0, 0, sizeof(struct buffer*));
memset(&p_1, 0, sizeof(char*));
memset(&right_value4, 0, sizeof(void*));
    buf_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28))))))));
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    p_1=str;
    __freed_obj__ = 0;
    while(_while_condtional1=*p_1,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional3=*p_1==34,        __freed_obj__ = 0, 
        _if_conditional3) {
            p_1++;
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_0, "06str.c", 34)),92);
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_0, "06str.c", 35)),34);
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(buf_0, "06str.c", 38)),*p_1);
            __freed_obj__ = 0;
            p_1++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = ((char*)(right_value4=buffer_to_string(((struct buffer*)come_null_check(buf_0, "06str.c", 43)))));
    if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(buf_0 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value5;
char* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
    __result10__ = __result_obj__ = ((char*)(right_value5=__builtin_string("sStrNode")));
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value6;
struct CVALUE* come_value_2;
void* right_value7;
char* __dec_obj3;
void* right_value8;
void* right_value9;
struct sType* __dec_obj4;
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&come_value_2, 0, sizeof(struct CVALUE*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
    come_value_2=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value6=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53))));
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj3=((struct CVALUE*)come_null_check(come_value_2, "06str.c", 55))->c_value;
    ((struct CVALUE*)come_null_check(come_value_2, "06str.c", 55))->c_value=(char*)come_increment_ref_count(((char*)(right_value7=xsprintf("\"%s\"",((struct sStrNode*)come_null_check(self, "06str.c", 55))->value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj4=((struct CVALUE*)come_null_check(come_value_2, "06str.c", 56))->type;
    ((struct CVALUE*)come_null_check(come_value_2, "06str.c", 56))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value9=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value8=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))));
    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_2, "06str.c", 58))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 60))->stack, "06str.c", 60)),(struct CVALUE*)come_increment_ref_count(come_value_2));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_2, "06str.c", 62))->c_value);
    __freed_obj__ = 0;
    __result12__ = (_Bool)1;
    if(come_value_2 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
    if(come_value_2 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional5=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional5) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
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
                if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional6) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional8) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional9) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional12) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional15) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional20) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional7) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_3;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
                        it_3=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_3!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional11) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_5;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
                        it_5=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_5!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional13) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_7;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
                        it_7=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_7!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional16) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional22;
void* right_value10;
struct list_item$1CVALUEph* litem_9;
struct CVALUE* __dec_obj5;
_Bool _if_conditional24;
void* right_value11;
struct list_item$1CVALUEph* litem_10;
struct CVALUE* __dec_obj6;
void* right_value12;
struct list_item$1CVALUEph* litem_11;
struct CVALUE* __dec_obj7;
struct list$1CVALUEph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional22=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional22) {
            litem_9=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value10=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_9, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_9, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj5=((struct list_item$1CVALUEph*)come_null_check(litem_9, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_9, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj5) { come_call_finalizer(CVALUE_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_9;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_9;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional24=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional24) {
                litem_10=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value11=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_10, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_10, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj6=((struct list_item$1CVALUEph*)come_null_check(litem_10, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_10, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj6) { come_call_finalizer(CVALUE_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_10;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_10;
                __freed_obj__ = 0;
            }
            else {
                litem_11=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value12=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_11, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_11, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj7=((struct list_item$1CVALUEph*)come_null_check(litem_11, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_11, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj7) { come_call_finalizer(CVALUE_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_11;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_11;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result11__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result11__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional23=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = ((struct sStrNode*)come_null_check(self, "06str.c", 69))->sline;
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result14__ = __result_obj__ = ((char*)(right_value13=__builtin_string(((struct sStrNode*)come_null_check(self, "06str.c", 74))->sname)));
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value14;
char* __dec_obj8;
void* right_value22;
struct list$1sNodeph* __dec_obj12;
void* right_value23;
char* __dec_obj13;
struct sSStringNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
    __dec_obj8=((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value=(char*)come_increment_ref_count(((char*)(right_value14=__builtin_string(value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj12=((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(exps))));
    if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 91))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj13=((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname=(char*)come_increment_ref_count(((char*)(right_value23=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 92))->sname))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result21__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional25;
struct list$1sNodeph* __result15__;
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_12;
struct list_item$1sNodeph* it_13;
_Bool _while_condtional5;
void* right_value21;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct list$1sNodeph*));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value21, 0, sizeof(void*));
        if(_if_conditional25=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __result15__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_12=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional5=it_13!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional5) {
            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_12, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_13, "./comelang2.h", 192))->item)))));
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            it_13=((struct list_item$1sNodeph*)come_null_check(it_13, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result20__ = __result_obj__ = result_12;
        if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result20__;
        __freed_obj__ = 0;
        if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result16__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result16__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
void* right_value17;
struct list_item$1sNodeph* litem_14;
struct sNode* __dec_obj9;
_Bool _if_conditional27;
void* right_value18;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj10;
void* right_value19;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional26=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional26) {
                    litem_14=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 206))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_14;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_14;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional27=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional27) {
                        litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 216))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_15;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_15;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 226))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_16;
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_16;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result17__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
struct sNode* __result18__;
void* right_value20;
struct sNode* result_17;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
struct sNode* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct sNode*));
                if(_if_conditional28=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional28) {
                    __result18__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_17=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                if(_if_conditional29=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional29) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional30=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional31=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional31) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional32=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional32) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional33) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional35) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    ((struct sNode*)come_null_check(result_17, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_17;
                if(result_17 && !__freed_obj__) { result_17 = come_decrement_ref_count(result_17, ((struct sNode*)result_17)->finalize, ((struct sNode*)result_17)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_17 && !__freed_obj__) { result_17 = come_decrement_ref_count(result_17, ((struct sNode*)result_17)->finalize, ((struct sNode*)result_17)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

char* sSStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((char*)(right_value24=__builtin_string("sSStringNode")));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
struct CVALUE* come_value_18;
void* right_value26;
void* right_value27;
struct buffer* buf_19;
_Bool _if_conditional40;
struct list$1sNodeph* o2_saved_20;
struct sNode* it_23;
_Bool _for_condtionalA1;
_Bool _if_conditional45;
_Bool __result32__;
void* right_value28;
struct CVALUE* come_value_26;
void* right_value29;
char* method_name_27;
void* right_value31;
_Bool _if_conditional51;
struct sType* obj_type_31;
_Bool _if_conditional67;
struct sType* obj_type2_32;
void* right_value32;
void* right_value33;
char* __dec_obj14;
void* right_value34;
void* right_value35;
struct buffer* buf2_33;
void* right_value36;
void* right_value37;
struct sType* type_34;
void* right_value38;
void* right_value39;
char* c_value_35;
void* right_value40;
void* right_value41;
struct sType* type2_36;
void* right_value42;
char* __dec_obj15;
void* right_value43;
char* __dec_obj16;
void* right_value71;
struct sType* __dec_obj36;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&come_value_18, 0, sizeof(struct CVALUE*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&buf_19, 0, sizeof(struct buffer*));
memset(&o2_saved_20, 0, sizeof(struct list$1sNodeph*));
memset(&it_23, 0, sizeof(struct sNode*));
memset(&right_value28, 0, sizeof(void*));
memset(&come_value_26, 0, sizeof(struct CVALUE*));
memset(&right_value29, 0, sizeof(void*));
memset(&method_name_27, 0, sizeof(char*));
memset(&right_value31, 0, sizeof(void*));
memset(&obj_type_31, 0, sizeof(struct sType*));
memset(&obj_type2_32, 0, sizeof(struct sType*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&buf2_33, 0, sizeof(struct buffer*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&type_34, 0, sizeof(struct sType*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&c_value_35, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&type2_36, 0, sizeof(struct sType*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    come_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value25=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buf_19=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111))))))));
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 113)),"xsprintf(\"");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 114)),((struct sSStringNode*)come_null_check(self, "06str.c", 114))->value);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 115)),"\"");
    __freed_obj__ = 0;
    if(_if_conditional40=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 157))->exps, "06str.c", 157)))>0,    __freed_obj__ = 0, 
    _if_conditional40) {
        for(
        o2_saved_20=(struct list$1sNodeph*)come_increment_ref_count((((struct sSStringNode*)come_null_check(self, "06str.c", 155))->exps)),it_23=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_20), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_20), "06str.c", 155))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_23=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_20), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional45=!((struct sNode*)come_null_check(it_23, "06str.c", 123))->compile(((struct sNode*)come_null_check(it_23, "06str.c", 123))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional45) {
                __result32__ = (_Bool)0;
                if(o2_saved_20 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_20, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_19 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_26=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value28=get_value_from_stack(-1,info))));
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_name_27=(char*)come_increment_ref_count(((char*)(right_value29=create_method_name(((struct CVALUE*)come_null_check(come_value_26, "06str.c", 126))->type,(_Bool)0,"to_string",info))));
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional51=((struct sFun*)(right_value31=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 140))->funcs, "06str.c", 140)),method_name_27,((void*)0))))==((void*)0),            (right_value31 && right_value31 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional51) {
                obj_type_31=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_26, "06str.c", 129))->type, "06str.c", 129))->mNoSolvedGenericsType, "06str.c", 129))->v1;
                __freed_obj__ = 0;
                if(_if_conditional67=obj_type_31&&list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_31, "06str.c", 138))->mGenericsTypes, "06str.c", 138)))>0,                __freed_obj__ = 0, 
                _if_conditional67) {
                    obj_type2_32=((struct CVALUE*)come_null_check(come_value_26, "06str.c", 131))->type;
                    __freed_obj__ = 0;
                    __dec_obj14=method_name_27;
                    method_name_27=(char*)come_increment_ref_count(((char*)(right_value33=make_generics_function(obj_type2_32,(char*)come_increment_ref_count(((char*)(right_value32=__builtin_string("to_string")))),info))));
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_26, "06str.c", 135))->type, "06str.c", 135))->mClass, "06str.c", 135))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buf2_33=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value34=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))));
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_33, "06str.c", 142)),method_name_27);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_33, "06str.c", 143)),"(");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_33, "06str.c", 144)),((struct CVALUE*)come_null_check(come_value_26, "06str.c", 144))->c_value);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_33, "06str.c", 145)),")");
            __freed_obj__ = 0;
            type_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value36=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))));
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_34, "06str.c", 148))->mHeap=(_Bool)1;
            __freed_obj__ = 0;
            c_value_35=(char*)come_increment_ref_count(((char*)(right_value39=append_object_to_right_values(((char*)(right_value38=buffer_to_string(((struct buffer*)come_null_check(buf2_33, "06str.c", 150))))),(struct sType*)come_increment_ref_count(type_34),info))));
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 152)),",");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 153)),c_value_35);
            __freed_obj__ = 0;
            if(come_value_26 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_26, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_27 && !__freed_obj__) { method_name_27 = come_decrement_ref_count(method_name_27, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_33, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_35 && !__freed_obj__) { c_value_35 = come_decrement_ref_count(c_value_35, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_20 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_20, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_19, "06str.c", 157)),")");
    __freed_obj__ = 0;
    type2_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value40=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_36, "06str.c", 160))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj15=((struct CVALUE*)come_null_check(come_value_18, "06str.c", 162))->c_value;
    ((struct CVALUE*)come_null_check(come_value_18, "06str.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value42=buffer_to_string(((struct buffer*)come_null_check(buf_19, "06str.c", 162))))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj16=((struct CVALUE*)come_null_check(come_value_18, "06str.c", 163))->c_value;
    ((struct CVALUE*)come_null_check(come_value_18, "06str.c", 163))->c_value=(char*)come_increment_ref_count(((char*)(right_value43=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_18, "06str.c", 163))->c_value,(struct sType*)come_increment_ref_count(type2_36),info))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj36=((struct CVALUE*)come_null_check(come_value_18, "06str.c", 164))->type;
    ((struct CVALUE*)come_null_check(come_value_18, "06str.c", 164))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(type2_36))));
    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_18, "06str.c", 165))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 167))->stack, "06str.c", 167)),(struct CVALUE*)come_increment_ref_count(come_value_18));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_18, "06str.c", 169))->c_value);
    __freed_obj__ = 0;
    __result52__ = (_Bool)1;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_19 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_36, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_19 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result24__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional41;
struct sNode* result_21;
struct sNode* __result25__;
_Bool _if_conditional42;
struct sNode* __result26__;
struct sNode* result_22;
struct sNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_21, 0, sizeof(struct sNode*));
memset(&result_22, 0, sizeof(struct sNode*));
            if(_if_conditional41=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional41) {
                __freed_obj__ = 0;
                memset(&result_21,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result25__ = __result_obj__ = result_21;
                __freed_obj__ = 0;
                return __result25__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional42=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional42) {
                __result26__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_22,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result27__ = __result_obj__ = result_22;
            __freed_obj__ = 0;
            return __result27__;
            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result28__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result28__;
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional43;
struct sNode* result_24;
struct sNode* __result29__;
_Bool _if_conditional44;
struct sNode* __result30__;
struct sNode* result_25;
struct sNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_24, 0, sizeof(struct sNode*));
memset(&result_25, 0, sizeof(struct sNode*));
            if(_if_conditional43=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional43) {
                __freed_obj__ = 0;
                memset(&result_24,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = result_24;
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional44=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional44) {
                __result30__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_25,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result31__ = __result_obj__ = result_25;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_28;
unsigned int it_29;
_Bool _while_condtional6;
_Bool _if_conditional46;
void* right_value30;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional48;
struct sFun* __result35__;
_Bool _if_conditional49;
_Bool _if_conditional50;
struct sFun* __result36__;
struct sFun* __result37__;
struct sFun* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_28, 0, sizeof(unsigned int));
memset(&it_29, 0, sizeof(unsigned int));
memset(&right_value30, 0, sizeof(void*));
                hash_28=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                __freed_obj__ = 0;
                it_29=hash_28;
                __freed_obj__ = 0;
                while(_while_condtional6=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional6) {
                    if(_if_conditional46=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_29],                    __freed_obj__ = 0, 
                    _if_conditional46) {
                        if(_if_conditional48=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value30=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_29], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                        (right_value30 && right_value30 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional48) {
                            __result35__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_29];
                            __freed_obj__ = 0;
                            return __result35__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_29++;
                        __freed_obj__ = 0;
                        if(_if_conditional49=it_29>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                        __freed_obj__ = 0, 
                        _if_conditional49) {
                            it_29=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional50=it_29==hash_28,                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                __result36__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result36__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result37__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result37__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result38__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional47;
_Bool default_value_30;
_Bool __result33__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_30, 0, sizeof(_Bool));
                            if(_if_conditional47=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                __freed_obj__ = 0;
                                memset(&default_value_30,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result33__ = default_value_30;
                                __freed_obj__ = 0;
                                return __result33__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result34__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result34__;
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

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional52=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional52) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional53=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional53) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional54=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional54) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional55=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional55) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional56=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional56) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional57=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional57) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional58=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional58) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional61=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional61) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional63=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional63) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional64=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional64) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional65=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional65) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional66=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional66) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional59;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional59=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional59) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional60=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional60) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result39__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional68;
struct sType* __result40__;
void* right_value44;
struct sType* result_37;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional74;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional75;
void* right_value49;
char* __dec_obj20;
_Bool _if_conditional76;
void* right_value56;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional80;
void* right_value57;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value58;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional83;
void* right_value65;
struct list$1charph* __dec_obj30;
_Bool _if_conditional87;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value67;
struct sNode* __dec_obj32;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value68;
struct sNode* __dec_obj33;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value69;
char* __dec_obj34;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
void* right_value70;
char* __dec_obj35;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
        if(_if_conditional68=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional68) {
            __result40__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            __dec_obj18=((struct sType*)come_null_check(result_37, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_37, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj19=((struct sType*)come_null_check(result_37, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_37, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            __dec_obj20=((struct sType*)come_null_check(result_37, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_37, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            __dec_obj24=((struct sType*)come_null_check(result_37, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_37, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            __dec_obj25=((struct sType*)come_null_check(result_37, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_37, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj25) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            __dec_obj26=((struct sType*)come_null_check(result_37, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_37, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj26) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            __dec_obj30=((struct sType*)come_null_check(result_37, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_37, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj30) { come_call_finalizer(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            __dec_obj31=((struct sType*)come_null_check(result_37, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_37, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional88=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional89) {
            __dec_obj32=((struct sType*)come_null_check(result_37, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_37, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional90=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional92=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional92) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional93=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional93) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional94=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional94) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional95=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional95) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional96=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional96) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional97=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional97) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional98=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional98) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional99=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional99) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional100=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional100) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional101=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional101) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional102=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional102) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional103=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional103) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional104=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional104) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional105=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional105) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional106=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional106) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional107) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional109=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional109) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional110=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional110) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional111=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional111) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional112=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional112) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional113=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional113) {
            __dec_obj33=((struct sType*)come_null_check(result_37, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_37, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional114) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional115=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional115) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional116=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            __dec_obj34=((struct sType*)come_null_check(result_37, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_37, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional117=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional117) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional120=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional120) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional121=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional121) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional122=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            ((struct sType*)come_null_check(result_37, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional125=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            __dec_obj35=((struct sType*)come_null_check(result_37, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_37, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result51__ = __result_obj__ = result_37;
        if(result_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
        if(result_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional71;
struct tuple1$1sTypeph* __result41__;
void* right_value45;
struct tuple1$1sTypeph* result_38;
_Bool _if_conditional73;
void* right_value46;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value46, 0, sizeof(void*));
                if(_if_conditional71=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional71) {
                    __result41__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_38=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional73=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional73) {
                    __dec_obj17=((struct tuple1$1sTypeph*)come_null_check(result_38, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_38, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result42__ = __result_obj__ = result_38;
                if(result_38 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result42__;
                __freed_obj__ = 0;
                if(result_38 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional72=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional72) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional77;
struct list$1sTypeph* __result43__;
void* right_value50;
void* right_value51;
struct list$1sTypeph* result_39;
struct list_item$1sTypeph* it_40;
_Bool _while_condtional7;
void* right_value55;
struct list$1sTypeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct list$1sTypeph*));
memset(&it_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
                if(_if_conditional77=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional77) {
                    __result43__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result43__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_39=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_40=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_40!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_39, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_40, "./comelang2.h", 192))->item)))));
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_40=((struct list_item$1sTypeph*)come_null_check(it_40, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result46__ = __result_obj__ = result_39;
                if(result_39 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
                if(result_39 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result44__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result44__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional78;
void* right_value52;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj21;
_Bool _if_conditional79;
void* right_value53;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj22;
void* right_value54;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj23;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional78=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional78) {
                            litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_41;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_41;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional79=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional79) {
                                litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_42;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_42;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_43;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_43;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result45__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result45__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional84;
struct list$1charph* __result47__;
void* right_value59;
void* right_value60;
struct list$1charph* result_44;
struct list_item$1charph* it_45;
_Bool _while_condtional8;
void* right_value64;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1charph*));
memset(&it_45, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
                if(_if_conditional84=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional84) {
                    __result47__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_44=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value59=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_45=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_45!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_44, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value64=string_clone(((struct list_item$1charph*)come_null_check(it_45, "./comelang2.h", 192))->item)))));
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_45=((struct list_item$1charph*)come_null_check(it_45, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result50__ = __result_obj__ = result_44;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result48__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional85;
void* right_value61;
struct list_item$1charph* litem_46;
char* __dec_obj27;
_Bool _if_conditional86;
void* right_value62;
struct list_item$1charph* litem_47;
char* __dec_obj28;
void* right_value63;
struct list_item$1charph* litem_48;
char* __dec_obj29;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1charph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1charph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional85=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional85) {
                            litem_46=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_46, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_46, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj27=((struct list_item$1charph*)come_null_check(litem_46, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_46, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_46;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_46;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional86=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional86) {
                                litem_47=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value62=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_47, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_47, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj28=((struct list_item$1charph*)come_null_check(litem_47, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_47, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_47;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_47;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_48=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj29=((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_48, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_48;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_48;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result49__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result49__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result53__ = ((struct sSStringNode*)come_null_check(self, "06str.c", 176))->sline;
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value72;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
    __result54__ = __result_obj__ = ((char*)(right_value72=__builtin_string(((struct sSStringNode*)come_null_check(self, "06str.c", 181))->sname)));
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value73;
char* __dec_obj37;
struct sCharNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
    ((struct sCharNode*)come_null_check(self, "06str.c", 193))->value=value;
    __freed_obj__ = 0;
    ((struct sCharNode*)come_null_check(self, "06str.c", 195))->sline=((struct sInfo*)come_null_check(info, "06str.c", 195))->sline;
    __freed_obj__ = 0;
    __dec_obj37=((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname;
    ((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 196))->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result55__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result56__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value74;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
    __result57__ = __result_obj__ = ((char*)(right_value74=__builtin_string("sCharNode")));
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value75;
struct CVALUE* come_value_49;
void* right_value76;
char* __dec_obj38;
void* right_value77;
void* right_value78;
struct sType* __dec_obj39;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&come_value_49, 0, sizeof(struct CVALUE*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
    come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj38=((struct CVALUE*)come_null_check(come_value_49, "06str.c", 215))->c_value;
    ((struct CVALUE*)come_null_check(come_value_49, "06str.c", 215))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%d",((struct sCharNode*)come_null_check(self, "06str.c", 215))->value))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj39=((struct CVALUE*)come_null_check(come_value_49, "06str.c", 216))->type;
    ((struct CVALUE*)come_null_check(come_value_49, "06str.c", 216))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value77=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_49, "06str.c", 217))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 219))->stack, "06str.c", 219)),(struct CVALUE*)come_increment_ref_count(come_value_49));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_49, "06str.c", 221))->c_value);
    __freed_obj__ = 0;
    __result58__ = (_Bool)1;
    if(come_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
    if(come_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = ((struct sCharNode*)come_null_check(self, "06str.c", 228))->sline;
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value79;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
    __result60__ = __result_obj__ = ((char*)(right_value79=__builtin_string(((struct sCharNode*)come_null_check(self, "06str.c", 233))->sname)));
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value80;
char* __dec_obj40;
struct sWCharNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
    ((struct sWCharNode*)come_null_check(self, "06str.c", 245))->value=value;
    __freed_obj__ = 0;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 247))->sline=((struct sInfo*)come_null_check(info, "06str.c", 247))->sline;
    __freed_obj__ = 0;
    __dec_obj40=((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 248))->sname))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result62__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value81;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
    __result63__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sWCharNode")));
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value82;
struct CVALUE* come_value_50;
void* right_value83;
char* __dec_obj41;
void* right_value84;
void* right_value85;
struct sType* __dec_obj42;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&come_value_50, 0, sizeof(struct CVALUE*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
    come_value_50=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj41=((struct CVALUE*)come_null_check(come_value_50, "06str.c", 267))->c_value;
    ((struct CVALUE*)come_null_check(come_value_50, "06str.c", 267))->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("L'%lc'",((struct sWCharNode*)come_null_check(self, "06str.c", 267))->value))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj42=((struct CVALUE*)come_null_check(come_value_50, "06str.c", 268))->type;
    ((struct CVALUE*)come_null_check(come_value_50, "06str.c", 268))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_50, "06str.c", 269))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 271))->stack, "06str.c", 271)),(struct CVALUE*)come_increment_ref_count(come_value_50));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_50, "06str.c", 273))->c_value);
    __freed_obj__ = 0;
    __result64__ = (_Bool)1;
    if(come_value_50 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
    if(come_value_50 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_50, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = ((struct sWCharNode*)come_null_check(self, "06str.c", 280))->sline;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value86;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(right_value86=__builtin_string(((struct sWCharNode*)come_null_check(self, "06str.c", 285))->sname)));
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int* __dec_obj43;
void* right_value87;
char* __dec_obj44;
struct sWStringNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
    __dec_obj43=((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 299))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj44=((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 300))->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value88;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value88=__builtin_string("sWStringNode")));
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value89;
struct CVALUE* come_value_51;
void* right_value90;
char* __dec_obj45;
void* right_value91;
void* right_value92;
struct sType* __dec_obj46;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj45=((struct CVALUE*)come_null_check(come_value_51, "06str.c", 319))->c_value;
    ((struct CVALUE*)come_null_check(come_value_51, "06str.c", 319))->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("L'%ls'",((struct sWStringNode*)come_null_check(self, "06str.c", 319))->value))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_51, "06str.c", 320))->type;
    ((struct CVALUE*)come_null_check(come_value_51, "06str.c", 320))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_51, "06str.c", 321))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 323))->stack, "06str.c", 323)),(struct CVALUE*)come_increment_ref_count(come_value_51));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_51, "06str.c", 325))->c_value);
    __freed_obj__ = 0;
    __result70__ = (_Bool)1;
    if(come_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(come_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = ((struct sWStringNode*)come_null_check(self, "06str.c", 332))->sline;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value93;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value93=__builtin_string(((struct sWStringNode*)come_null_check(self, "06str.c", 337))->sname)));
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value94;
char* __dec_obj47;
void* right_value95;
char* __dec_obj48;
struct sRegexNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    __dec_obj47=((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(str))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 353))->global=global;
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 354))->ignore_case=ignore_case;
    __freed_obj__ = 0;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 356))->sline=sline;
    __freed_obj__ = 0;
    __dec_obj48=((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 357))->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
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

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value96;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sRegexNode")));
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value97;
struct CVALUE* come_value_52;
void* right_value98;
void* right_value99;
void* right_value100;
void* right_value101;
void* right_value102;
char* __dec_obj49;
void* right_value103;
void* right_value104;
struct sType* __dec_obj50;
void* right_value105;
char* __dec_obj51;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_52, 0, sizeof(struct CVALUE*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    come_value_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj49=((struct CVALUE*)come_null_check(come_value_52, "06str.c", 376))->c_value;
    ((struct CVALUE*)come_null_check(come_value_52, "06str.c", 376))->c_value=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",((struct sRegexNode*)come_null_check(self, "06str.c", 376))->str,((struct sRegexNode*)come_null_check(self, "06str.c", 376))->ignore_case?((char*)(right_value98=__builtin_string("1"))):((char*)(right_value99=__builtin_string("0"))),((struct sRegexNode*)come_null_check(self, "06str.c", 376))->global?((char*)(right_value100=__builtin_string("1"))):((char*)(right_value101=__builtin_string("0")))))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_52, "06str.c", 377))->type;
    ((struct CVALUE*)come_null_check(come_value_52, "06str.c", 377))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))));
    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_52, "06str.c", 378))->type, "06str.c", 378))->mPointerNum=1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_52, "06str.c", 379))->type, "06str.c", 379))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_52, "06str.c", 380))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 382))->stack, "06str.c", 382)),(struct CVALUE*)come_increment_ref_count(come_value_52));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_52, "06str.c", 384))->c_value);
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_52, "06str.c", 386))->c_value;
    ((struct CVALUE*)come_null_check(come_value_52, "06str.c", 386))->c_value=(char*)come_increment_ref_count(((char*)(right_value105=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_52, "06str.c", 386))->c_value,(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_52, "06str.c", 386))->type),info))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result76__ = (_Bool)1;
    if(come_value_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(come_value_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = ((struct sRegexNode*)come_null_check(self, "06str.c", 393))->sline;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value106;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value106=__builtin_string(((struct sRegexNode*)come_null_check(self, "06str.c", 398))->sname)));
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj52;
void* right_value107;
char* __dec_obj53;
struct sListNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
    __dec_obj52=((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements;
    ((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj52) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sListNode*)come_null_check(self, "06str.c", 412))->sline=((struct sInfo*)come_null_check(info, "06str.c", 412))->sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sListNode*)come_null_check(self, "06str.c", 413))->sname;
    ((struct sListNode*)come_null_check(self, "06str.c", 413))->sname=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 413))->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value108;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value108=__builtin_string("sListNode")));
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* list_elements_53;
void* right_value109;
void* right_value110;
struct list$1CVALUEph* params_56;
struct sType* list_element_type_57;
struct list$1sNodeph* o2_saved_58;
struct sNode* it_59;
_Bool _for_condtionalA2;
_Bool _if_conditional134;
_Bool __result83__;
void* right_value111;
struct CVALUE* come_value_60;
void* right_value112;
struct sType* __dec_obj54;
void* right_value113;
struct sType* type_values_61;
void* right_value117;
static int list_value_num_65=0;
void* right_value118;
char* var_name_66;
void* right_value119;
struct sVar* var__67;
void* right_value120;
void* right_value121;
void* right_value122;
struct buffer* source_69;
int i_70;
struct list$1CVALUEph* o2_saved_71;
struct CVALUE* it_74;
_Bool _for_condtionalA3;
_Bool _if_conditional143;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
struct sType* list_type_81;
void* right_value137;
void* right_value138;
struct sType* obj_type_85;
char* fun_name_86;
void* right_value139;
void* right_value140;
void* right_value141;
char* generics_fun_name_87;
void* right_value142;
struct sFun* fun_88;
_Bool _if_conditional150;
void* right_value143;
void* right_value144;
char* __dec_obj62;
void* right_value145;
_Bool _if_conditional151;
_Bool __result101__;
void* right_value146;
struct sType* result_type_89;
struct sType* type_90;
void* right_value147;
struct CVALUE* obj_value_91;
void* right_value148;
void* right_value149;
struct buffer* num_string_92;
void* right_value150;
struct sType* type2_93;
void* right_value151;
char* type_name_94;
void* right_value152;
void* right_value153;
char* __dec_obj63;
void* right_value154;
struct sType* type3_95;
void* right_value155;
struct sType* __dec_obj64;
void* right_value156;
char* __dec_obj65;
void* right_value157;
void* right_value158;
struct list$1CVALUEph* come_params_96;
void* right_value163;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
char* __dec_obj67;
_Bool _if_conditional160;
void* right_value164;
char* __dec_obj68;
_Bool _if_conditional161;
void* right_value165;
char* __dec_obj69;
void* right_value166;
char* __dec_obj70;
_Bool _if_conditional162;
void* right_value167;
char* __dec_obj71;
void* right_value168;
struct CVALUE* come_value2_101;
void* right_value169;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value170;
struct CVALUE* come_value3_102;
void* right_value171;
char* __dec_obj74;
struct sType* __dec_obj75;
void* right_value172;
void* right_value173;
struct buffer* buf_103;
int j_104;
struct list$1CVALUEph* o2_saved_105;
struct CVALUE* it_106;
_Bool _for_condtionalA4;
_Bool _if_conditional163;
void* right_value174;
struct CVALUE* come_value4_107;
void* right_value175;
char* __dec_obj76;
_Bool _if_conditional164;
void* right_value176;
void* right_value177;
char* __dec_obj77;
void* right_value178;
struct sType* __dec_obj78;
void* right_value179;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_53, 0, sizeof(struct list$1sNodeph*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&params_56, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_57, 0, sizeof(struct sType*));
memset(&o2_saved_58, 0, sizeof(struct list$1sNodeph*));
memset(&it_59, 0, sizeof(struct sNode*));
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_60, 0, sizeof(struct CVALUE*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&type_values_61, 0, sizeof(struct sType*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&var_name_66, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&var__67, 0, sizeof(struct sVar*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&source_69, 0, sizeof(struct buffer*));
memset(&i_70, 0, sizeof(int));
memset(&o2_saved_71, 0, sizeof(struct list$1CVALUEph*));
memset(&it_74, 0, sizeof(struct CVALUE*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&list_type_81, 0, sizeof(struct sType*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&obj_type_85, 0, sizeof(struct sType*));
memset(&fun_name_86, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&generics_fun_name_87, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&fun_88, 0, sizeof(struct sFun*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&result_type_89, 0, sizeof(struct sType*));
memset(&type_90, 0, sizeof(struct sType*));
memset(&right_value147, 0, sizeof(void*));
memset(&obj_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&num_string_92, 0, sizeof(struct buffer*));
memset(&right_value150, 0, sizeof(void*));
memset(&type2_93, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&type_name_94, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&type3_95, 0, sizeof(struct sType*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&come_params_96, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&come_value2_101, 0, sizeof(struct CVALUE*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&come_value3_102, 0, sizeof(struct CVALUE*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&buf_103, 0, sizeof(struct buffer*));
memset(&j_104, 0, sizeof(int));
memset(&o2_saved_105, 0, sizeof(struct list$1CVALUEph*));
memset(&it_106, 0, sizeof(struct CVALUE*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value4_107, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    list_elements_53=((struct sListNode*)come_null_check(self, "06str.c", 430))->list_elements;
    __freed_obj__ = 0;
    params_56=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value110=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value109=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    o2_saved_58=(list_elements_53),it_59=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_58), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_58), "06str.c", 448))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    it_59=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_58), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional134=!((struct sNode*)come_null_check(it_59, "06str.c", 440))->compile(((struct sNode*)come_null_check(it_59, "06str.c", 440))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional134) {
            __result83__ = (_Bool)0;
            if(params_56 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_56, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(params_56, "06str.c", 443)),(struct CVALUE*)come_increment_ref_count(come_value_60));
        __freed_obj__ = 0;
        __dec_obj54=list_element_type_57;
        list_element_type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(((struct CVALUE*)come_null_check(come_value_60, "06str.c", 445))->type))));
        if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_values_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(list_element_type_57))));
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_values_61, "06str.c", 449))->mArrayNum, "06str.c", 449)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_56, "06str.c", 449))),info)))));
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_values_61, "06str.c", 450))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    var_name_66=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("__list_values%d__",++list_value_num_65))));
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name_66,(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type_values_61)))),info);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var__67=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 457))->lv_table,var_name_66);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("06str.c", 459),((struct optional$2charphbool*)(right_value120=make_define_var(type_values_61,((struct sVar*)come_null_check(var__67, "06str.c", 459))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    source_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))));
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_69, "06str.c", 463)),"{");
    __freed_obj__ = 0;
    i_70=0;
    __freed_obj__ = 0;
    for(
    o2_saved_71=(struct list$1CVALUEph*)come_increment_ref_count((params_56)),it_74=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_71), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_71), "06str.c", 476))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_74=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_71), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional143=((struct sType*)come_null_check(list_element_type_57, "06str.c", 473))->mHeap,        __freed_obj__ = 0, 
        _if_conditional143) {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_69, "06str.c", 468)),((char*)(right_value128=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__67, "06str.c", 468))->mCValueName,i_70,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 468),((struct optional$2CVALUEphbool*)(right_value127=list$1CVALUEphp_operator_load_element(params_56,i_70))))), "06str.c", 468))->c_value))));
            come_pop_stackframe();
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_69, "06str.c", 471)),((char*)(right_value130=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__67, "06str.c", 471))->mCValueName,i_70,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 471),((struct optional$2CVALUEphbool*)(right_value129=list$1CVALUEphp_operator_load_element(params_56,i_70))))), "06str.c", 471))->c_value))));
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_70++;
        __freed_obj__ = 0;
    }
    if(o2_saved_71 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_69, "06str.c", 476)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value131=buffer_to_string(((struct buffer*)come_null_check(source_69, "06str.c", 478))))));
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list_type_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))));
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(list_type_81, "06str.c", 481))->mGenericsTypes, "06str.c", 481)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(list_element_type_57)))));
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    obj_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(list_type_81))));
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_86="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_87=(char*)come_increment_ref_count(((char*)(right_value141=string_to_string(((char*)come_null_check(((char*)(right_value140=make_generics_function(obj_type_85,(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(fun_name_86)))),info))), "06str.c", 486))))));
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_88=((struct sFun*)(right_value142=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 488))->funcs, "06str.c", 488)),generics_fun_name_87,((void*)0))));
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional150=fun_88==((void*)0),    __freed_obj__ = 0, 
    _if_conditional150) {
        __dec_obj62=generics_fun_name_87;
        generics_fun_name_87=(char*)come_increment_ref_count(((char*)(right_value144=create_method_name(obj_type_85,(_Bool)0,((char*)(right_value143=__builtin_string(fun_name_86))),info))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_88=((struct sFun*)(right_value145=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 493))->funcs, "06str.c", 493)),generics_fun_name_87,((void*)0))));
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional151=fun_88==((void*)0),        __freed_obj__ = 0, 
        _if_conditional151) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_87,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 496))->come_fun, "06str.c", 496))->mName);
            __freed_obj__ = 0;
            __result101__ = (_Bool)1;
            if(params_56 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_56, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_66 && !__freed_obj__) { var_name_66 = come_decrement_ref_count(var_name_66, (void*)0, (void*)0, 0, 0, 0); }
            if(source_69 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_87 && !__freed_obj__) { generics_fun_name_87 = come_decrement_ref_count(generics_fun_name_87, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(((struct sFun*)come_null_check(fun_88, "06str.c", 501))->mResultType))));
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_89, "06str.c", 502))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_90=list_type_81;
    __freed_obj__ = 0;
    obj_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_92=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))));
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_92, "06str.c", 510)),"1");
    __freed_obj__ = 0;
    type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=solve_generics(type_90,type_90,info))));
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_94=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 514),((struct optional$2charphbool*)(right_value151=make_type_name_string(type2_93,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj63=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 516))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 516))->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_94,type_name_94,((char*)(right_value152=buffer_to_string(((struct buffer*)come_null_check(num_string_92, "06str.c", 516))))),((struct sInfo*)come_null_check(info, "06str.c", 516))->sname,((struct sInfo*)come_null_check(info, "06str.c", 516))->sline))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type2_93))));
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_95, "06str.c", 519))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_95, "06str.c", 520))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_93, "06str.c", 521))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj64=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 522))->type;
    ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 522))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type2_93))));
    if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj65=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 523))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 523))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 523))->c_value,(struct sType*)come_increment_ref_count(type3_95),info))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 524))->type, "06str.c", 524))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 525))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_96=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value158=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value157=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))));
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    if(_if_conditional157=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("06str.c", 556),((struct optional$2sTypephbool*)(right_value163=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_88, "06str.c", 556))->mParamTypes,0))))), "06str.c", 556))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 556))->type, "06str.c", 556))->mHeap,    come_pop_stackframe() ,    (right_value163 && right_value163 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional157) {
        if(_if_conditional158=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 555))->var,        __freed_obj__ = 0, 
        _if_conditional158) {
            if(_if_conditional159=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional159) {
                __dec_obj67=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 532))->var, "06str.c", 532))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 532))->var, "06str.c", 532))->mCValueName=((void*)0);
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional160=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mShare,                __freed_obj__ = 0, 
                _if_conditional160) {
                    __dec_obj68=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 535))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 535))->c_value=(char*)come_increment_ref_count(((char*)(right_value164=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 535))->type,((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 535))->c_value,info))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional161=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional161) {
                        __dec_obj69=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 538))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 538))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 538))->type,((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 538))->c_value,info))));
                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj70=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 541))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 541))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 541))->type,((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 541))->c_value,info))));
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional162=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 554))->type, "06str.c", 554))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional162) {
            }
            else {
                __dec_obj71=((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 552))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 552))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 552))->type,((struct CVALUE*)come_null_check(obj_value_91, "06str.c", 552))->c_value,info))));
                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_96, "06str.c", 556)),(struct CVALUE*)come_increment_ref_count(obj_value_91));
    __freed_obj__ = 0;
    come_value2_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 558))));
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj72=((struct CVALUE*)come_null_check(come_value2_101, "06str.c", 560))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_101, "06str.c", 560))->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_56, "06str.c", 560)))))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj73=((struct CVALUE*)come_null_check(come_value2_101, "06str.c", 561))->type;
    ((struct CVALUE*)come_null_check(come_value2_101, "06str.c", 561))->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_101, "06str.c", 562))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_96, "06str.c", 564)),(struct CVALUE*)come_increment_ref_count(come_value2_101));
    __freed_obj__ = 0;
    come_value3_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 566))));
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj74=((struct CVALUE*)come_null_check(come_value3_102, "06str.c", 568))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_102, "06str.c", 568))->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s",((struct sVar*)come_null_check(var__67, "06str.c", 568))->mCValueName))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj75=((struct CVALUE*)come_null_check(come_value3_102, "06str.c", 569))->type;
    ((struct CVALUE*)come_null_check(come_value3_102, "06str.c", 569))->type=((void*)0);
    if(__dec_obj75) { come_call_finalizer(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_102, "06str.c", 570))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_96, "06str.c", 572)),(struct CVALUE*)come_increment_ref_count(come_value3_102));
    __freed_obj__ = 0;
    buf_103=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 574))))))));
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_103, "06str.c", 576)),generics_fun_name_87);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_103, "06str.c", 577)),"(");
    __freed_obj__ = 0;
    j_104=0;
    __freed_obj__ = 0;
    for(
    o2_saved_105=(struct list$1CVALUEph*)come_increment_ref_count((come_params_96)),it_106=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_105), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_105), "06str.c", 589))) ,    __freed_obj__ = 0, 
    _for_condtionalA4;    it_106=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_105), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_103, "06str.c", 581)),((struct CVALUE*)come_null_check(it_106, "06str.c", 581))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional163=j_104!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_96, "06str.c", 587)))-1,        __freed_obj__ = 0, 
        _if_conditional163) {
            buffer_append_str(((struct buffer*)come_null_check(buf_103, "06str.c", 584)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_104++;
        __freed_obj__ = 0;
    }
    if(o2_saved_105 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_103, "06str.c", 589)),")");
    __freed_obj__ = 0;
    come_value4_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 591))));
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj76=((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 593))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 593))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(((struct buffer*)come_null_check(buf_103, "06str.c", 593))))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional164=((struct sType*)come_null_check(result_type_89, "06str.c", 599))->mHeap,    __freed_obj__ = 0, 
    _if_conditional164) {
        __dec_obj77=((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 596))->c_value;
        ((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 596))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=append_object_to_right_values(((char*)(right_value176=buffer_to_string(((struct buffer*)come_null_check(buf_103, "06str.c", 596))))),(struct sType*)come_increment_ref_count(result_type_89),info))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj78=((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 599))->type;
    ((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 599))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(result_type_89))));
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 600))->type, "06str.c", 600))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_107, "06str.c", 601))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value179=buffer_to_string(((struct buffer*)come_null_check(buf_103, "06str.c", 603))))));
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 605))->stack, "06str.c", 605)),(struct CVALUE*)come_increment_ref_count(come_value4_107));
    __freed_obj__ = 0;
    __result108__ = (_Bool)1;
    if(params_56 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_66 && !__freed_obj__) { var_name_66 = come_decrement_ref_count(var_name_66, (void*)0, (void*)0, 0, 0, 0); }
    if(source_69 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_87 && !__freed_obj__) { generics_fun_name_87 = come_decrement_ref_count(generics_fun_name_87, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_92 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_94 && !__freed_obj__) { type_name_94 = come_decrement_ref_count(type_name_94, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_96 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_103 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(params_56 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_66 && !__freed_obj__) { var_name_66 = come_decrement_ref_count(var_name_66, (void*)0, (void*)0, 0, 0, 0); }
    if(source_69 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_87 && !__freed_obj__) { generics_fun_name_87 = come_decrement_ref_count(generics_fun_name_87, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_92 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_94 && !__freed_obj__) { type_name_94 = come_decrement_ref_count(type_name_94, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_96 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_103 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result82__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_54;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_54, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1CVALUEph*));
            it_54=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional9=it_54!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                prev_it_55=it_54;
                __freed_obj__ = 0;
                it_54=((struct list_item$1CVALUEph*)come_null_check(it_54, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional135;
void* right_value114;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj55;
_Bool _if_conditional136;
void* right_value115;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj56;
void* right_value116;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional135=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional135) {
            litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_62, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_62, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj55=((struct list_item$1sNodeph*)come_null_check(litem_62, "./comelang2.h", 276))->item;
            ((struct list_item$1sNodeph*)come_null_check(litem_62, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_62;
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_62;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional136=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional136) {
                litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_63, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_63, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj56=((struct list_item$1sNodeph*)come_null_check(litem_63, "./comelang2.h", 286))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_63, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_63;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_63;
                __freed_obj__ = 0;
            }
            else {
                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_64, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_64, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj57=((struct list_item$1sNodeph*)come_null_check(litem_64, "./comelang2.h", 296))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_64, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_64;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_64;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result84__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result85__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional137;
char* default_value_68;
char* __result86__;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_68, 0, sizeof(char*));
        if(_if_conditional137=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional137) {
            __freed_obj__ = 0;
            memset(&default_value_68,0,sizeof(char*));
            __freed_obj__ = 0;
            __result86__ = __result_obj__ = default_value_68;
            __freed_obj__ = 0;
            return __result86__;
            __freed_obj__ = 0;
        }
        else {
            __result87__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result87__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional138=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional138) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional139;
struct CVALUE* result_72;
struct CVALUE* __result88__;
_Bool _if_conditional140;
struct CVALUE* __result89__;
struct CVALUE* result_73;
struct CVALUE* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(struct CVALUE*));
memset(&result_73, 0, sizeof(struct CVALUE*));
        if(_if_conditional139=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional139) {
            __freed_obj__ = 0;
            memset(&result_72,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result88__ = __result_obj__ = result_72;
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional140=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional140) {
            __result89__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_73,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result90__ = __result_obj__ = result_73;
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result91__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result91__;
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
struct CVALUE* result_75;
struct CVALUE* __result92__;
_Bool _if_conditional142;
struct CVALUE* __result93__;
struct CVALUE* result_76;
struct CVALUE* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(struct CVALUE*));
memset(&result_76, 0, sizeof(struct CVALUE*));
        if(_if_conditional141=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional141) {
            __freed_obj__ = 0;
            memset(&result_75,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result92__ = __result_obj__ = result_75;
            __freed_obj__ = 0;
            return __result92__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional142=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional142) {
            __result93__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_76,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result94__ = __result_obj__ = result_76;
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional144;
struct list_item$1CVALUEph* it_77;
int i_78;
_Bool _while_condtional10;
_Bool _if_conditional145;
void* right_value123;
void* right_value124;
struct optional$2CVALUEphbool* __result96__;
struct CVALUE* default_value_79;
void* right_value125;
void* right_value126;
struct optional$2CVALUEphbool* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_77, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_78, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&default_value_79, 0, sizeof(struct CVALUE*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
                if(_if_conditional144=position<0,                __freed_obj__ = 0, 
                _if_conditional144) {
                    position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_77=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_78=0;
                __freed_obj__ = 0;
                while(_while_condtional10=it_77!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    if(_if_conditional145=position==i_78,                    __freed_obj__ = 0, 
                    _if_conditional145) {
                        __result96__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value124=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value123=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_77, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result96__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_77=((struct list_item$1CVALUEph*)come_null_check(it_77, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_78++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_79,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result97__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value126=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value125=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_79),(_Bool)0))));
                if(default_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result97__;
                __freed_obj__ = 0;
                if(default_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj58;
struct optional$2CVALUEphbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj58=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                            if(__dec_obj58) { come_call_finalizer(CVALUE_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result95__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result95__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional146=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional146) {
                                    if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional147;
struct CVALUE* default_value_80;
struct CVALUE* __result98__;
struct CVALUE* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_80, 0, sizeof(struct CVALUE*));
                if(_if_conditional147=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    __freed_obj__ = 0;
                    memset(&default_value_80,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    __result98__ = __result_obj__ = default_value_80;
                    __freed_obj__ = 0;
                    return __result98__;
                    __freed_obj__ = 0;
                }
                else {
                    __result99__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result99__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional148;
void* right_value134;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj59;
_Bool _if_conditional149;
void* right_value135;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj60;
void* right_value136;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj61;
struct list$1sTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value135, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value136, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional148=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional148) {
            litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj59=((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 276))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_82;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_82;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional149=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional149) {
                litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj60=((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 286))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_83;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_83;
                __freed_obj__ = 0;
            }
            else {
                litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 296))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_84;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_84;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result100__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional152=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional152) {
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
        __result102__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result102__;
        __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional153;
struct list_item$1sTypeph* it_97;
int i_98;
_Bool _while_condtional11;
_Bool _if_conditional154;
void* right_value159;
void* right_value160;
struct optional$2sTypephbool* __result104__;
struct sType* default_value_99;
void* right_value161;
void* right_value162;
struct optional$2sTypephbool* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_97, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_98, 0, sizeof(int));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&default_value_99, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
        if(_if_conditional153=position<0,        __freed_obj__ = 0, 
        _if_conditional153) {
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_97=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
        __freed_obj__ = 0;
        i_98=0;
        __freed_obj__ = 0;
        while(_while_condtional11=it_97!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional154=position==i_98,            __freed_obj__ = 0, 
            _if_conditional154) {
                __result104__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value160=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value159=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_97, "./comelang2.h", 742))->item),(_Bool)1)));
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_97=((struct list_item$1sTypeph*)come_null_check(it_97, "./comelang2.h", 744))->next;
            __freed_obj__ = 0;
            i_98++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_99,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result105__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value162=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value161=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_99),(_Bool)0))));
        if(default_value_99 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
        if(default_value_99 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj66;
struct optional$2sTypephbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj66=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result103__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional155=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional155) {
                            if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional156;
struct sType* default_value_100;
struct sType* __result106__;
struct sType* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_100, 0, sizeof(struct sType*));
        if(_if_conditional156=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional156) {
            __freed_obj__ = 0;
            memset(&default_value_100,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result106__ = __result_obj__ = default_value_100;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
        }
        else {
            __result107__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = ((struct sListNode*)come_null_check(self, "06str.c", 612))->sline;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value180;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value180=__builtin_string(((struct sListNode*)come_null_check(self, "06str.c", 617))->sname)));
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj79;
void* right_value181;
char* __dec_obj80;
struct sTupleNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __dec_obj79=((struct sTupleNode*)come_null_check(self, "06str.c", 629))->tuple_elements;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 629))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj79) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 631))->sline=((struct sInfo*)come_null_check(info, "06str.c", 631))->sline;
    __freed_obj__ = 0;
    __dec_obj80=((struct sTupleNode*)come_null_check(self, "06str.c", 632))->sname;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 632))->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 632))->sname))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value182;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
    __result113__ = __result_obj__ = ((char*)(right_value182=__builtin_string("sTupleNode")));
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* tuple_elements_108;
void* right_value183;
void* right_value184;
struct list$1sTypeph* tuple_types_109;
void* right_value185;
void* right_value186;
struct list$1CVALUEph* tuple_values_110;
struct list$1sNodeph* o2_saved_111;
struct sNode* it_112;
_Bool _for_condtionalA5;
_Bool _if_conditional167;
_Bool __result114__;
void* right_value187;
struct CVALUE* come_value_113;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
struct sType* type_115;
struct list$1sTypeph* o2_saved_116;
struct sType* it_119;
_Bool _for_condtionalA6;
void* right_value196;
void* right_value197;
struct CVALUE* obj_value_122;
void* right_value198;
void* right_value199;
struct buffer* num_string_123;
void* right_value200;
struct sType* type2_124;
void* right_value201;
char* type_name_125;
void* right_value202;
void* right_value203;
char* __dec_obj83;
void* right_value204;
struct sType* type3_126;
void* right_value205;
struct sType* __dec_obj84;
void* right_value206;
char* __dec_obj85;
void* right_value207;
struct sType* obj_type_127;
char* fun_name_128;
void* right_value208;
void* right_value209;
void* right_value210;
char* generics_fun_name_129;
void* right_value211;
struct sFun* fun_130;
_Bool _if_conditional176;
void* right_value212;
void* right_value213;
char* __dec_obj86;
void* right_value214;
_Bool _if_conditional177;
_Bool __result124__;
void* right_value215;
struct sType* result_type_131;
void* right_value216;
void* right_value217;
struct list$1CVALUEph* come_params_132;
void* right_value218;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __dec_obj87;
_Bool _if_conditional181;
void* right_value219;
char* __dec_obj88;
_Bool _if_conditional182;
void* right_value220;
char* __dec_obj89;
void* right_value221;
char* __dec_obj90;
_Bool _if_conditional183;
void* right_value222;
char* __dec_obj91;
int i_133;
struct list$1CVALUEph* o2_saved_134;
struct CVALUE* it_135;
_Bool _for_condtionalA7;
void* right_value223;
struct CVALUE* come_value_136;
void* right_value224;
struct optional$2sTypephbool* __exception_result_var_a3;
void* right_value225;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
char* __dec_obj92;
_Bool _if_conditional187;
void* right_value226;
char* __dec_obj93;
_Bool _if_conditional188;
void* right_value227;
char* __dec_obj94;
void* right_value228;
char* __dec_obj95;
_Bool _if_conditional189;
void* right_value229;
char* __dec_obj96;
void* right_value230;
void* right_value231;
struct buffer* buf_137;
int j_138;
struct list$1CVALUEph* o2_saved_139;
struct CVALUE* it_140;
_Bool _for_condtionalA8;
_Bool _if_conditional190;
void* right_value232;
struct CVALUE* come_value2_141;
void* right_value233;
char* __dec_obj97;
_Bool _if_conditional191;
void* right_value234;
void* right_value235;
char* __dec_obj98;
void* right_value236;
struct sType* __dec_obj99;
void* right_value237;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_108, 0, sizeof(struct list$1sNodeph*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&tuple_types_109, 0, sizeof(struct list$1sTypeph*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&tuple_values_110, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_111, 0, sizeof(struct list$1sNodeph*));
memset(&it_112, 0, sizeof(struct sNode*));
memset(&right_value187, 0, sizeof(void*));
memset(&come_value_113, 0, sizeof(struct CVALUE*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&type_115, 0, sizeof(struct sType*));
memset(&o2_saved_116, 0, sizeof(struct list$1sTypeph*));
memset(&it_119, 0, sizeof(struct sType*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&obj_value_122, 0, sizeof(struct CVALUE*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&num_string_123, 0, sizeof(struct buffer*));
memset(&right_value200, 0, sizeof(void*));
memset(&type2_124, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&type_name_125, 0, sizeof(char*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&type3_126, 0, sizeof(struct sType*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&obj_type_127, 0, sizeof(struct sType*));
memset(&fun_name_128, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&generics_fun_name_129, 0, sizeof(char*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_130, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&result_type_131, 0, sizeof(struct sType*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&come_params_132, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&i_133, 0, sizeof(int));
memset(&o2_saved_134, 0, sizeof(struct list$1CVALUEph*));
memset(&it_135, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&come_value_136, 0, sizeof(struct CVALUE*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&buf_137, 0, sizeof(struct buffer*));
memset(&j_138, 0, sizeof(int));
memset(&o2_saved_139, 0, sizeof(struct list$1CVALUEph*));
memset(&it_140, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&come_value2_141, 0, sizeof(struct CVALUE*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
    tuple_elements_108=((struct sTupleNode*)come_null_check(self, "06str.c", 649))->tuple_elements;
    __freed_obj__ = 0;
    tuple_types_109=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value184=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 650))))))));
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_110=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value186=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651))))))));
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_111=(tuple_elements_108),it_112=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_111), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_111), "06str.c", 665))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    it_112=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_111), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional167=!((struct sNode*)come_null_check(it_112, "06str.c", 658))->compile(((struct sNode*)come_null_check(it_112, "06str.c", 658))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional167) {
            __result114__ = (_Bool)0;
            if(tuple_types_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_110, "06str.c", 661)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=CVALUE_clone(come_value_113)))));
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_109, "06str.c", 662)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(((struct CVALUE*)come_null_check(come_value_113, "06str.c", 662))->type)))));
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 665)))),((char*)(right_value194=xsprintf("tuple%d",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(tuple_types_109, "06str.c", 665)))))),(_Bool)0,info))));
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_116=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_109)),it_119=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_116), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_116), "06str.c", 671))) ,    __freed_obj__ = 0, 
    _for_condtionalA6;    it_119=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_116), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_115, "06str.c", 668))->mGenericsTypes, "06str.c", 668)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(it_119)))));
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_116 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    obj_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 671))));
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_123=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 673))))))));
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_123, "06str.c", 675)),"1");
    __freed_obj__ = 0;
    type2_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type_115,type_115,info))));
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_125=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 679),((struct optional$2charphbool*)(right_value201=make_type_name_string(type2_124,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj83=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 681))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 681))->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_125,type_name_125,((char*)(right_value202=buffer_to_string(((struct buffer*)come_null_check(num_string_123, "06str.c", 681))))),((struct sInfo*)come_null_check(info, "06str.c", 681))->sname,((struct sInfo*)come_null_check(info, "06str.c", 681))->sline))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type2_124))));
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_126, "06str.c", 684))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_126, "06str.c", 685))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_124, "06str.c", 686))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj84=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 687))->type;
    ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 687))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type2_124))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj85=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 688))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 688))->c_value=(char*)come_increment_ref_count(((char*)(right_value206=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 688))->c_value,(struct sType*)come_increment_ref_count(type3_126),info))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 689))->type, "06str.c", 689))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 690))->var=((void*)0);
    __freed_obj__ = 0;
    obj_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(type2_124))));
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_128="initialize";
    __freed_obj__ = 0;
    generics_fun_name_129=(char*)come_increment_ref_count(((char*)(right_value210=string_to_string(((char*)come_null_check(((char*)(right_value209=make_generics_function(obj_type_127,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(fun_name_128)))),info))), "06str.c", 695))))));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_130=((struct sFun*)(right_value211=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 697))->funcs, "06str.c", 697)),generics_fun_name_129,((void*)0))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional176=fun_130==((void*)0),    __freed_obj__ = 0, 
    _if_conditional176) {
        __dec_obj86=generics_fun_name_129;
        generics_fun_name_129=(char*)come_increment_ref_count(((char*)(right_value213=create_method_name(obj_type_127,(_Bool)0,((char*)(right_value212=__builtin_string(fun_name_128))),info))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_130=((struct sFun*)(right_value214=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 702))->funcs, "06str.c", 702)),generics_fun_name_129,((void*)0))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional177=fun_130==((void*)0),        __freed_obj__ = 0, 
        _if_conditional177) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_129,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 705))->come_fun, "06str.c", 705))->mName);
            __freed_obj__ = 0;
            __result124__ = (_Bool)1;
            if(tuple_types_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_124, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_125 && !__freed_obj__) { type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_129 && !__freed_obj__) { generics_fun_name_129 = come_decrement_ref_count(generics_fun_name_129, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(((struct sFun*)come_null_check(fun_130, "06str.c", 710))->mResultType))));
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_131, "06str.c", 711))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    come_params_132=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value217=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value216=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 713))))))));
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional178=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 742),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value218=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_130, "06str.c", 742))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "06str.c", 742))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 742))->type, "06str.c", 742))->mHeap,    (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional178) {
        if(_if_conditional179=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 741))->var,        __freed_obj__ = 0, 
        _if_conditional179) {
            if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional180) {
                __dec_obj87=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 718))->var, "06str.c", 718))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 718))->var, "06str.c", 718))->mCValueName=((void*)0);
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mShare,                __freed_obj__ = 0, 
                _if_conditional181) {
                    __dec_obj88=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 721))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 721))->c_value=(char*)come_increment_ref_count(((char*)(right_value219=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 721))->type,((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 721))->c_value,info))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional182=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                        __dec_obj89=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 724))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 724))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 724))->type,((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 724))->c_value,info))));
                        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj90=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 727))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 727))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 727))->type,((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 727))->c_value,info))));
                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional183=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 740))->type, "06str.c", 740))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional183) {
            }
            else {
                __dec_obj91=((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 738))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 738))->c_value=(char*)come_increment_ref_count(((char*)(right_value222=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 738))->type,((struct CVALUE*)come_null_check(obj_value_122, "06str.c", 738))->c_value,info))));
                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_132, "06str.c", 742)),(struct CVALUE*)come_increment_ref_count(obj_value_122));
    __freed_obj__ = 0;
    i_133=1;
    __freed_obj__ = 0;
    for(
    o2_saved_134=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_110)),it_135=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_134), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_134), "06str.c", 780))) ,    __freed_obj__ = 0, 
    _for_condtionalA7;    it_135=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_134), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0    ){
        come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=CVALUE_clone(it_135))));
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional184=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value224=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_130, "06str.c", 775))->mParamTypes,i_133))), come_pop_stackframe(), __exception_result_var_a3))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value225=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_130, "06str.c", 775))->mParamTypes,i_133))), come_pop_stackframe(), __exception_result_var_a4)), "06str.c", 775))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 775))->type, "06str.c", 775))->mHeap,        (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
        (right_value225 && right_value225 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional184) {
            if(_if_conditional185=((struct CVALUE*)come_null_check(come_value_136, "06str.c", 774))->var,            __freed_obj__ = 0, 
            _if_conditional185) {
                if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional186) {
                    __dec_obj92=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 751))->var, "06str.c", 751))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 751))->var, "06str.c", 751))->mCValueName=((void*)0);
                    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional187=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional187) {
                        __dec_obj93=((struct CVALUE*)come_null_check(come_value_136, "06str.c", 754))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_136, "06str.c", 754))->c_value=(char*)come_increment_ref_count(((char*)(right_value226=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 754))->type,((struct CVALUE*)come_null_check(come_value_136, "06str.c", 754))->c_value,info))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional188=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional188) {
                            __dec_obj94=((struct CVALUE*)come_null_check(come_value_136, "06str.c", 757))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_136, "06str.c", 757))->c_value=(char*)come_increment_ref_count(((char*)(right_value227=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 757))->type,((struct CVALUE*)come_null_check(come_value_136, "06str.c", 757))->c_value,info))));
                            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                            if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj95=((struct CVALUE*)come_null_check(come_value_136, "06str.c", 760))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_136, "06str.c", 760))->c_value=(char*)come_increment_ref_count(((char*)(right_value228=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 760))->type,((struct CVALUE*)come_null_check(come_value_136, "06str.c", 760))->c_value,info))));
                            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                            if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional189=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 773))->type, "06str.c", 773))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional189) {
                }
                else {
                    __dec_obj96=((struct CVALUE*)come_null_check(come_value_136, "06str.c", 771))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_136, "06str.c", 771))->c_value=(char*)come_increment_ref_count(((char*)(right_value229=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_136, "06str.c", 771))->type,((struct CVALUE*)come_null_check(come_value_136, "06str.c", 771))->c_value,info))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_132, "06str.c", 775)),(struct CVALUE*)come_increment_ref_count(come_value_136));
        __freed_obj__ = 0;
        i_133++;
        __freed_obj__ = 0;
        if(come_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_134 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buf_137=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value231=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value230=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 780))))))));
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_137, "06str.c", 782)),generics_fun_name_129);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_137, "06str.c", 783)),"(");
    __freed_obj__ = 0;
    j_138=0;
    __freed_obj__ = 0;
    for(
    o2_saved_139=(struct list$1CVALUEph*)come_increment_ref_count((come_params_132)),it_140=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 795))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_140=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_139), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_137, "06str.c", 787)),((struct CVALUE*)come_null_check(it_140, "06str.c", 787))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional190=j_138!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_132, "06str.c", 793)))-1,        __freed_obj__ = 0, 
        _if_conditional190) {
            buffer_append_str(((struct buffer*)come_null_check(buf_137, "06str.c", 790)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_138++;
        __freed_obj__ = 0;
    }
    if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_137, "06str.c", 795)),")");
    __freed_obj__ = 0;
    come_value2_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 797))));
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj97=((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 799))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 799))->c_value=(char*)come_increment_ref_count(((char*)(right_value233=buffer_to_string(((struct buffer*)come_null_check(buf_137, "06str.c", 799))))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional191=((struct sType*)come_null_check(result_type_131, "06str.c", 805))->mHeap,    __freed_obj__ = 0, 
    _if_conditional191) {
        __dec_obj98=((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 802))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 802))->c_value=(char*)come_increment_ref_count(((char*)(right_value235=append_object_to_right_values(((char*)(right_value234=buffer_to_string(((struct buffer*)come_null_check(buf_137, "06str.c", 802))))),(struct sType*)come_increment_ref_count(result_type_131),info))));
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj99=((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 805))->type;
    ((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 805))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(result_type_131))));
    if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 806))->type, "06str.c", 806))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_141, "06str.c", 807))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value237=buffer_to_string(((struct buffer*)come_null_check(buf_137, "06str.c", 809))))));
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 811))->stack, "06str.c", 811)),(struct CVALUE*)come_increment_ref_count(come_value2_141));
    __freed_obj__ = 0;
    __result125__ = (_Bool)1;
    if(tuple_types_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_125 && !__freed_obj__) { type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_129 && !__freed_obj__) { generics_fun_name_129 = come_decrement_ref_count(generics_fun_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_132 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_141 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
    if(tuple_types_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_110 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_123 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_125 && !__freed_obj__) { type_name_125 = come_decrement_ref_count(type_name_125, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_129 && !__freed_obj__) { generics_fun_name_129 = come_decrement_ref_count(generics_fun_name_129, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_132 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_137 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_141 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_141, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional168;
struct CVALUE* __result115__;
void* right_value188;
struct CVALUE* result_114;
_Bool _if_conditional169;
void* right_value189;
char* __dec_obj81;
_Bool _if_conditional170;
void* right_value190;
struct sType* __dec_obj82;
_Bool _if_conditional171;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&result_114, 0, sizeof(struct CVALUE*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
            if(_if_conditional168=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional168) {
                __result115__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional169=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional169) {
                __dec_obj81=((struct CVALUE*)come_null_check(result_114, "CVALUE_clone", 4))->c_value;
                ((struct CVALUE*)come_null_check(result_114, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional170=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional170) {
                __dec_obj82=((struct CVALUE*)come_null_check(result_114, "CVALUE_clone", 5))->type;
                ((struct CVALUE*)come_null_check(result_114, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional171=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional171) {
                ((struct CVALUE*)come_null_check(result_114, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result116__ = __result_obj__ = result_114;
            if(result_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
            if(result_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional172;
struct sType* result_117;
struct sType* __result117__;
_Bool _if_conditional173;
struct sType* __result118__;
struct sType* result_118;
struct sType* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_117, 0, sizeof(struct sType*));
memset(&result_118, 0, sizeof(struct sType*));
        if(_if_conditional172=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional172) {
            __freed_obj__ = 0;
            memset(&result_117,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result117__ = __result_obj__ = result_117;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional173=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional173) {
            __result118__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result118__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_118,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result119__ = __result_obj__ = result_118;
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result120__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional174;
struct sType* result_120;
struct sType* __result121__;
_Bool _if_conditional175;
struct sType* __result122__;
struct sType* result_121;
struct sType* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_120, 0, sizeof(struct sType*));
memset(&result_121, 0, sizeof(struct sType*));
        if(_if_conditional174=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional174) {
            __freed_obj__ = 0;
            memset(&result_120,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = result_120;
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional175=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional175) {
            __result122__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_121,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result123__ = __result_obj__ = result_121;
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = ((struct sTupleNode*)come_null_check(self, "06str.c", 818))->sline;
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value238;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
    __result127__ = __result_obj__ = ((char*)(right_value238=__builtin_string(((struct sTupleNode*)come_null_check(self, "06str.c", 823))->sname)));
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value239;
struct sNode* __dec_obj100;
void* right_value240;
char* __dec_obj101;
struct sNoneNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
    __dec_obj100=((struct sNoneNode*)come_null_check(self, "06str.c", 835))->value;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 835))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=sNode_clone(value))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0); }
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 837))->sline=((struct sInfo*)come_null_check(info, "06str.c", 837))->sline;
    __freed_obj__ = 0;
    __dec_obj101=((struct sNoneNode*)come_null_check(self, "06str.c", 838))->sname;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 838))->sname=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 838))->sname))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result128__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value241;
void* right_value242;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value246;
struct sNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 845);
    _inf_obj_value1=come_increment_ref_count(((struct sNoneNode*)(right_value242=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value241=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 845)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result131__ = __result_obj__ = ((struct sNode*)(right_value246=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional194=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional194) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional195=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional195) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional196;
struct sNoneNode* __result129__;
void* right_value243;
struct sNoneNode* result_142;
_Bool _if_conditional197;
void* right_value244;
struct sNode* __dec_obj102;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value245;
char* __dec_obj103;
struct sNoneNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct sNoneNode*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
        if(_if_conditional196=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional196) {
            __result129__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_142=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value243=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional197=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            __dec_obj102=((struct sNoneNode*)come_null_check(result_142, "sNoneNode_clone", 4))->value;
            ((struct sNoneNode*)come_null_check(result_142, "sNoneNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 4))->value))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional198=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            ((struct sNoneNode*)come_null_check(result_142, "sNoneNode_clone", 5))->sline=((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            __dec_obj103=((struct sNoneNode*)come_null_check(result_142, "sNoneNode_clone", 6))->sname;
            ((struct sNoneNode*)come_null_check(result_142, "sNoneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 6))->sname))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result130__ = __result_obj__ = result_142;
        if(result_142 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
        if(result_142 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value247;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
    __result133__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sNoneNode")));
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value248;
void* right_value249;
struct list$1sTypeph* tuple_types_143;
void* right_value250;
void* right_value251;
struct list$1CVALUEph* tuple_values_144;
_Bool _if_conditional200;
_Bool __result134__;
void* right_value252;
struct CVALUE* come_value_145;
_Bool _if_conditional201;
void* right_value256;
void* right_value257;
void* right_value258;
struct sNode* false_node_149;
_Bool _if_conditional204;
_Bool __result136__;
void* right_value259;
struct CVALUE* come_value2_150;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
struct sType* type_151;
struct list$1sTypeph* o2_saved_152;
struct sType* it_153;
_Bool _for_condtionalA9;
void* right_value264;
void* right_value265;
struct CVALUE* obj_value_154;
void* right_value266;
void* right_value267;
struct buffer* num_string_155;
void* right_value268;
struct sType* type2_156;
void* right_value269;
char* type_name_157;
void* right_value270;
void* right_value271;
char* __dec_obj107;
void* right_value272;
struct sType* type3_158;
void* right_value273;
struct sType* __dec_obj108;
void* right_value274;
char* __dec_obj109;
void* right_value275;
struct sType* obj_type_159;
char* fun_name_160;
void* right_value276;
void* right_value277;
void* right_value278;
char* generics_fun_name_161;
void* right_value279;
struct sFun* fun_162;
_Bool _if_conditional205;
void* right_value280;
void* right_value281;
char* __dec_obj110;
void* right_value282;
_Bool _if_conditional206;
_Bool __result137__;
void* right_value283;
struct sType* result_type_163;
void* right_value284;
void* right_value285;
struct list$1CVALUEph* come_params_164;
void* right_value286;
struct optional$2sTypephbool* __exception_result_var_a5;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
char* __dec_obj111;
_Bool _if_conditional210;
void* right_value287;
char* __dec_obj112;
_Bool _if_conditional211;
void* right_value288;
char* __dec_obj113;
void* right_value289;
char* __dec_obj114;
_Bool _if_conditional212;
void* right_value290;
char* __dec_obj115;
int i_165;
struct list$1CVALUEph* o2_saved_166;
struct CVALUE* it_167;
_Bool _for_condtionalA10;
void* right_value291;
struct CVALUE* come_value_168;
void* right_value292;
struct optional$2sTypephbool* __exception_result_var_a6;
void* right_value293;
struct optional$2sTypephbool* __exception_result_var_a7;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
char* __dec_obj116;
_Bool _if_conditional216;
void* right_value294;
char* __dec_obj117;
_Bool _if_conditional217;
void* right_value295;
char* __dec_obj118;
void* right_value296;
char* __dec_obj119;
_Bool _if_conditional218;
void* right_value297;
char* __dec_obj120;
void* right_value298;
void* right_value299;
struct buffer* buf_169;
int j_170;
struct list$1CVALUEph* o2_saved_171;
struct CVALUE* it_172;
_Bool _for_condtionalA11;
_Bool _if_conditional219;
void* right_value300;
struct CVALUE* come_value3_173;
void* right_value301;
char* __dec_obj121;
_Bool _if_conditional220;
void* right_value302;
void* right_value303;
char* __dec_obj122;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
char* __dec_obj123;
void* right_value308;
struct sType* __dec_obj124;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&tuple_types_143, 0, sizeof(struct list$1sTypeph*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&tuple_values_144, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value252, 0, sizeof(void*));
memset(&come_value_145, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&false_node_149, 0, sizeof(struct sNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&come_value2_150, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&type_151, 0, sizeof(struct sType*));
memset(&o2_saved_152, 0, sizeof(struct list$1sTypeph*));
memset(&it_153, 0, sizeof(struct sType*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&obj_value_154, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&num_string_155, 0, sizeof(struct buffer*));
memset(&right_value268, 0, sizeof(void*));
memset(&type2_156, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&type_name_157, 0, sizeof(char*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&type3_158, 0, sizeof(struct sType*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&obj_type_159, 0, sizeof(struct sType*));
memset(&fun_name_160, 0, sizeof(char*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&generics_fun_name_161, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&fun_162, 0, sizeof(struct sFun*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&result_type_163, 0, sizeof(struct sType*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&come_params_164, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&i_165, 0, sizeof(int));
memset(&o2_saved_166, 0, sizeof(struct list$1CVALUEph*));
memset(&it_167, 0, sizeof(struct CVALUE*));
memset(&right_value291, 0, sizeof(void*));
memset(&come_value_168, 0, sizeof(struct CVALUE*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&buf_169, 0, sizeof(struct buffer*));
memset(&j_170, 0, sizeof(int));
memset(&o2_saved_171, 0, sizeof(struct list$1CVALUEph*));
memset(&it_172, 0, sizeof(struct CVALUE*));
memset(&right_value300, 0, sizeof(void*));
memset(&come_value3_173, 0, sizeof(struct CVALUE*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    tuple_types_143=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value249=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value248=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 860))))))));
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_144=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value250=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 861))))))));
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional200=!((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->compile(((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional200) {
        __result134__ = (_Bool)0;
        if(tuple_types_143 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_143, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_144, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result134__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional201=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_145, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_145, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_145, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1, "06str.c", 1041))->mClass, "06str.c", 1041))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional201) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 871))->stack, "06str.c", 871)),(struct CVALUE*)come_increment_ref_count(come_value_145));
        __freed_obj__ = 0;
    }
    else {
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_144, "06str.c", 874)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=CVALUE_clone(come_value_145)))));
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_143, "06str.c", 875)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(((struct CVALUE*)come_null_check(come_value_145, "06str.c", 875))->type)))));
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        false_node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=create_false_object(info))));
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        if(_if_conditional204=!((struct sNode*)come_null_check(false_node_149, "06str.c", 883))->compile(((struct sNode*)come_null_check(false_node_149, "06str.c", 883))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional204) {
            __result136__ = (_Bool)0;
            if(false_node_149 && !__freed_obj__) { false_node_149 = come_decrement_ref_count(false_node_149, ((struct sNode*)false_node_149)->finalize, ((struct sNode*)false_node_149)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_143 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_143, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_144, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result136__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_144, "06str.c", 886)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=CVALUE_clone(come_value2_150)))));
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_143, "06str.c", 887)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(((struct CVALUE*)come_null_check(come_value2_150, "06str.c", 887))->type)))));
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 889)))),"optional",(_Bool)0,info))));
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_152=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_143)),it_153=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_152), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_152), "06str.c", 895))) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_153=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_152), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_151, "06str.c", 892))->mGenericsTypes, "06str.c", 892)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(it_153)))));
            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_152 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 895))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        num_string_155=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value266=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 897))))))));
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_155, "06str.c", 899)),"1");
        __freed_obj__ = 0;
        type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=solve_generics(type_151,type_151,info))));
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_157=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 903),((struct optional$2charphbool*)(right_value269=make_type_name_string(type2_156,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj107=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 905))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 905))->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_157,type_name_157,((char*)(right_value270=buffer_to_string(((struct buffer*)come_null_check(num_string_155, "06str.c", 905))))),((struct sInfo*)come_null_check(info, "06str.c", 905))->sname,((struct sInfo*)come_null_check(info, "06str.c", 905))->sline))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(type2_156))));
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_158, "06str.c", 908))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_158, "06str.c", 909))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_156, "06str.c", 910))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj108=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 911))->type;
        ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 911))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(type_151))));
        if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj109=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 912))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 912))->c_value=(char*)come_increment_ref_count(((char*)(right_value274=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 912))->c_value,(struct sType*)come_increment_ref_count(type3_158),info))));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 913))->type, "06str.c", 913))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 914))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(type2_156))));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name_160="initialize";
        __freed_obj__ = 0;
        generics_fun_name_161=(char*)come_increment_ref_count(((char*)(right_value278=string_to_string(((char*)come_null_check(((char*)(right_value277=make_generics_function(obj_type_159,(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(fun_name_160)))),info))), "06str.c", 919))))));
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_162=((struct sFun*)(right_value279=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 921))->funcs, "06str.c", 921)),generics_fun_name_161,((void*)0))));
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional205=fun_162==((void*)0),        __freed_obj__ = 0, 
        _if_conditional205) {
            __dec_obj110=generics_fun_name_161;
            generics_fun_name_161=(char*)come_increment_ref_count(((char*)(right_value281=create_method_name(obj_type_159,(_Bool)0,((char*)(right_value280=__builtin_string(fun_name_160))),info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fun_162=((struct sFun*)(right_value282=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 926))->funcs, "06str.c", 926)),generics_fun_name_161,((void*)0))));
            if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional206=fun_162==((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_161,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 929))->come_fun, "06str.c", 929))->mName);
                __freed_obj__ = 0;
                __result137__ = (_Bool)1;
                if(false_node_149 && !__freed_obj__) { false_node_149 = come_decrement_ref_count(false_node_149, ((struct sNode*)false_node_149)->finalize, ((struct sNode*)false_node_149)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_155 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_157 && !__freed_obj__) { type_name_157 = come_decrement_ref_count(type_name_157, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_161 && !__freed_obj__) { generics_fun_name_161 = come_decrement_ref_count(generics_fun_name_161, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_143 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_144, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result137__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(((struct sFun*)come_null_check(fun_162, "06str.c", 934))->mResultType))));
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_163, "06str.c", 935))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_164=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value285=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value284=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 937))))))));
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional207=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 966),__exception_result_var_a5=((struct optional$2sTypephbool*)(right_value286=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_162, "06str.c", 966))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a5)), "06str.c", 966))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 966))->type, "06str.c", 966))->mHeap,        (right_value286 && right_value286 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional207) {
            if(_if_conditional208=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 965))->var,            __freed_obj__ = 0, 
            _if_conditional208) {
                if(_if_conditional209=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional209) {
                    __dec_obj111=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 942))->var, "06str.c", 942))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 942))->var, "06str.c", 942))->mCValueName=((void*)0);
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional210=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __dec_obj112=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 945))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 945))->c_value=(char*)come_increment_ref_count(((char*)(right_value287=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 945))->type,((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 945))->c_value,info))));
                        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional211=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional211) {
                            __dec_obj113=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 948))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 948))->c_value=(char*)come_increment_ref_count(((char*)(right_value288=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 948))->type,((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 948))->c_value,info))));
                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj114=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 951))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 951))->c_value=(char*)come_increment_ref_count(((char*)(right_value289=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 951))->type,((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 951))->c_value,info))));
                            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional212=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 964))->type, "06str.c", 964))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional212) {
                }
                else {
                    __dec_obj115=((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 962))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 962))->c_value=(char*)come_increment_ref_count(((char*)(right_value290=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 962))->type,((struct CVALUE*)come_null_check(obj_value_154, "06str.c", 962))->c_value,info))));
                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_164, "06str.c", 966)),(struct CVALUE*)come_increment_ref_count(obj_value_154));
        __freed_obj__ = 0;
        i_165=1;
        __freed_obj__ = 0;
        for(
        o2_saved_166=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_144)),it_167=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_166), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_166), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_167=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_166), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=CVALUE_clone(it_167))));
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional213=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a6=((struct optional$2sTypephbool*)(right_value292=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_162, "06str.c", 999))->mParamTypes,i_165))), come_pop_stackframe(), __exception_result_var_a6))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a7=((struct optional$2sTypephbool*)(right_value293=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_162, "06str.c", 999))->mParamTypes,i_165))), come_pop_stackframe(), __exception_result_var_a7)), "06str.c", 999))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 999))->type, "06str.c", 999))->mHeap,            (right_value292 && right_value292 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0):0,
            (right_value293 && right_value293 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional213) {
                if(_if_conditional214=((struct CVALUE*)come_null_check(come_value_168, "06str.c", 998))->var,                __freed_obj__ = 0, 
                _if_conditional214) {
                    if(_if_conditional215=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional215) {
                        __dec_obj116=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 975))->var, "06str.c", 975))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 975))->var, "06str.c", 975))->mCValueName=((void*)0);
                        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional216=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional216) {
                            __dec_obj117=((struct CVALUE*)come_null_check(come_value_168, "06str.c", 978))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_168, "06str.c", 978))->c_value=(char*)come_increment_ref_count(((char*)(right_value294=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 978))->type,((struct CVALUE*)come_null_check(come_value_168, "06str.c", 978))->c_value,info))));
                            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional217=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional217) {
                                __dec_obj118=((struct CVALUE*)come_null_check(come_value_168, "06str.c", 981))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_168, "06str.c", 981))->c_value=(char*)come_increment_ref_count(((char*)(right_value295=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 981))->type,((struct CVALUE*)come_null_check(come_value_168, "06str.c", 981))->c_value,info))));
                                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj119=((struct CVALUE*)come_null_check(come_value_168, "06str.c", 984))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_168, "06str.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value296=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 984))->type,((struct CVALUE*)come_null_check(come_value_168, "06str.c", 984))->c_value,info))));
                                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional218=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 997))->type, "06str.c", 997))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional218) {
                    }
                    else {
                        __dec_obj120=((struct CVALUE*)come_null_check(come_value_168, "06str.c", 995))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_168, "06str.c", 995))->c_value=(char*)come_increment_ref_count(((char*)(right_value297=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "06str.c", 995))->type,((struct CVALUE*)come_null_check(come_value_168, "06str.c", 995))->c_value,info))));
                        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_164, "06str.c", 999)),(struct CVALUE*)come_increment_ref_count(come_value_168));
            __freed_obj__ = 0;
            i_165++;
            __freed_obj__ = 0;
            if(come_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_169=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1004))))))));
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_169, "06str.c", 1006)),generics_fun_name_161);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_169, "06str.c", 1007)),"(");
        __freed_obj__ = 0;
        j_170=0;
        __freed_obj__ = 0;
        for(
        o2_saved_171=(struct list$1CVALUEph*)come_increment_ref_count((come_params_164)),it_172=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_172=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_171), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_169, "06str.c", 1011)),((struct CVALUE*)come_null_check(it_172, "06str.c", 1011))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional219=j_170!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_164, "06str.c", 1017)))-1,            __freed_obj__ = 0, 
            _if_conditional219) {
                buffer_append_str(((struct buffer*)come_null_check(buf_169, "06str.c", 1014)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_170++;
            __freed_obj__ = 0;
        }
        if(o2_saved_171 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_169, "06str.c", 1019)),")");
        __freed_obj__ = 0;
        come_value3_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1021))));
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj121=((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1023))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1023))->c_value=(char*)come_increment_ref_count(((char*)(right_value301=buffer_to_string(((struct buffer*)come_null_check(buf_169, "06str.c", 1023))))));
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional220=((struct sType*)come_null_check(result_type_163, "06str.c", 1029))->mHeap,        __freed_obj__ = 0, 
        _if_conditional220) {
            __dec_obj122=((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1026))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1026))->c_value=(char*)come_increment_ref_count(((char*)(right_value303=append_object_to_right_values(((char*)(right_value302=buffer_to_string(((struct buffer*)come_null_check(buf_169, "06str.c", 1026))))),(struct sType*)come_increment_ref_count(result_type_163),info))));
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj123=((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1031))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1031))->c_value=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value304=string_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sname))),((char*)(right_value305=int_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sline))),((char*)(right_value306=string_to_string(((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1031))->c_value)))))));
        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj124=((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1031))->type;
        ((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1031))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(result_type_163))));
        if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1032))->type, "06str.c", 1032))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1033))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value3_173, "06str.c", 1035))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1038))->stack, "06str.c", 1038)),(struct CVALUE*)come_increment_ref_count(come_value3_173));
        __freed_obj__ = 0;
        if(false_node_149 && !__freed_obj__) { false_node_149 = come_decrement_ref_count(false_node_149, ((struct sNode*)false_node_149)->finalize, ((struct sNode*)false_node_149)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_155 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_156 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_157 && !__freed_obj__) { type_name_157 = come_decrement_ref_count(type_name_157, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_161 && !__freed_obj__) { generics_fun_name_161 = come_decrement_ref_count(generics_fun_name_161, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_163 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_164 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_169 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result138__ = (_Bool)1;
    if(tuple_types_143 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
    if(tuple_types_143 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_144 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional202;
void* right_value253;
struct list_item$1CVALUEph* litem_146;
struct CVALUE* __dec_obj104;
_Bool _if_conditional203;
void* right_value254;
struct list_item$1CVALUEph* litem_147;
struct CVALUE* __dec_obj105;
void* right_value255;
struct list_item$1CVALUEph* litem_148;
struct CVALUE* __dec_obj106;
struct list$1CVALUEph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value254, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value255, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional202=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==0,            __freed_obj__ = 0, 
            _if_conditional202) {
                litem_146=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value253=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 202))));
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_146, "./comelang2.h", 204))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_146, "./comelang2.h", 205))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj104=((struct list_item$1CVALUEph*)come_null_check(litem_146, "./comelang2.h", 206))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_146, "./comelang2.h", 206))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj104) { come_call_finalizer(CVALUE_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_146;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 209))->head=litem_146;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional203=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==1,                __freed_obj__ = 0, 
                _if_conditional203) {
                    litem_147=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value254=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 212))));
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_147, "./comelang2.h", 214))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 214))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_147, "./comelang2.h", 215))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj105=((struct list_item$1CVALUEph*)come_null_check(litem_147, "./comelang2.h", 216))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_147, "./comelang2.h", 216))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj105) { come_call_finalizer(CVALUE_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_147;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_147;
                    __freed_obj__ = 0;
                }
                else {
                    litem_148=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value255=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 222))));
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 224))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 224))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 225))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj106=((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 226))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 226))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj106) { come_call_finalizer(CVALUE_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_148;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_148;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len++;
            __freed_obj__ = 0;
            __result135__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result135__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = ((struct sNoneNode*)come_null_check(self, "06str.c", 1046))->sline;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value309;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result140__ = __result_obj__ = ((char*)(right_value309=__builtin_string(((struct sNoneNode*)come_null_check(self, "06str.c", 1051))->sname)));
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj125;
void* right_value310;
char* __dec_obj126;
struct sSomeNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value310, 0, sizeof(void*));
    __dec_obj125=((struct sSomeNode*)come_null_check(self, "06str.c", 1063))->value;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1063))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1065))->sline=((struct sInfo*)come_null_check(info, "06str.c", 1065))->sline;
    __freed_obj__ = 0;
    __dec_obj126=((struct sSomeNode*)come_null_check(self, "06str.c", 1066))->sname;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 1066))->sname=(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 1066))->sname))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result141__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value311;
void* right_value312;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value316;
struct sNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1073);
    _inf_obj_value2=come_increment_ref_count(((struct sSomeNode*)(right_value312=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value311=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 1073)))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result144__ = __result_obj__ = ((struct sNode*)(right_value316=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional223=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional223) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional224=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional224) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional225;
struct sSomeNode* __result142__;
void* right_value313;
struct sSomeNode* result_174;
_Bool _if_conditional226;
void* right_value314;
struct sNode* __dec_obj127;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value315;
char* __dec_obj128;
struct sSomeNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
memset(&result_174, 0, sizeof(struct sSomeNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
        if(_if_conditional225=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional225) {
            __result142__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result142__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_174=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value313=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional226=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            __dec_obj127=((struct sSomeNode*)come_null_check(result_174, "sSomeNode_clone", 4))->value;
            ((struct sSomeNode*)come_null_check(result_174, "sSomeNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 4))->value))));
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0); }
            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional227=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional227) {
            ((struct sSomeNode*)come_null_check(result_174, "sSomeNode_clone", 5))->sline=((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional228=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional228) {
            __dec_obj128=((struct sSomeNode*)come_null_check(result_174, "sSomeNode_clone", 6))->sname;
            ((struct sSomeNode*)come_null_check(result_174, "sSomeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value315=string_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 6))->sname))));
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result143__ = __result_obj__ = result_174;
        if(result_174 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result143__;
        __freed_obj__ = 0;
        if(result_174 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value317;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
    __result146__ = __result_obj__ = ((char*)(right_value317=__builtin_string("sSomeNode")));
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value318;
void* right_value319;
struct list$1sTypeph* tuple_types_175;
void* right_value320;
void* right_value321;
struct list$1CVALUEph* tuple_values_176;
_Bool _if_conditional229;
_Bool __result147__;
void* right_value322;
struct CVALUE* come_value_177;
_Bool _if_conditional230;
struct tuple1$1sTypeph* mNoSolvedGenericsType_178;
void* right_value323;
void* right_value324;
void* right_value325;
struct sNode* true_node_179;
_Bool _if_conditional231;
_Bool __result148__;
void* right_value326;
struct CVALUE* come_value2_180;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
struct sType* type_181;
struct list$1sTypeph* o2_saved_182;
struct sType* it_183;
_Bool _for_condtionalA12;
void* right_value331;
void* right_value332;
struct CVALUE* obj_value_184;
void* right_value333;
void* right_value334;
struct buffer* num_string_185;
void* right_value335;
struct sType* type2_186;
void* right_value336;
char* type_name_187;
void* right_value337;
void* right_value338;
char* __dec_obj129;
void* right_value339;
struct sType* type3_188;
void* right_value340;
struct sType* __dec_obj130;
void* right_value341;
char* __dec_obj131;
void* right_value342;
struct sType* obj_type_189;
char* fun_name_190;
void* right_value343;
void* right_value344;
void* right_value345;
char* generics_fun_name_191;
void* right_value346;
struct sFun* fun_192;
_Bool _if_conditional232;
void* right_value347;
void* right_value348;
char* __dec_obj132;
void* right_value349;
_Bool _if_conditional233;
_Bool __result149__;
void* right_value350;
struct sType* result_type_193;
void* right_value351;
void* right_value352;
struct list$1CVALUEph* come_params_194;
void* right_value353;
struct optional$2sTypephbool* __exception_result_var_a8;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
char* __dec_obj133;
_Bool _if_conditional238;
void* right_value354;
char* __dec_obj134;
_Bool _if_conditional239;
void* right_value355;
char* __dec_obj135;
void* right_value356;
char* __dec_obj136;
_Bool _if_conditional240;
void* right_value357;
char* __dec_obj137;
int i_195;
struct list$1CVALUEph* o2_saved_196;
struct CVALUE* it_197;
_Bool _for_condtionalA13;
void* right_value358;
struct CVALUE* come_value_198;
void* right_value359;
struct optional$2sTypephbool* __exception_result_var_a9;
void* right_value360;
struct optional$2sTypephbool* __exception_result_var_a10;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
char* __dec_obj138;
_Bool _if_conditional244;
void* right_value361;
char* __dec_obj139;
_Bool _if_conditional245;
void* right_value362;
char* __dec_obj140;
void* right_value363;
char* __dec_obj141;
_Bool _if_conditional246;
void* right_value364;
char* __dec_obj142;
void* right_value365;
void* right_value366;
struct buffer* buf_199;
int j_200;
struct list$1CVALUEph* o2_saved_201;
struct CVALUE* it_202;
_Bool _for_condtionalA14;
_Bool _if_conditional247;
void* right_value367;
struct CVALUE* come_value3_203;
void* right_value368;
char* __dec_obj143;
_Bool _if_conditional248;
void* right_value369;
void* right_value370;
char* __dec_obj144;
void* right_value371;
struct sType* __dec_obj145;
void* right_value372;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&tuple_types_175, 0, sizeof(struct list$1sTypeph*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&tuple_values_176, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value322, 0, sizeof(void*));
memset(&come_value_177, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_178, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&true_node_179, 0, sizeof(struct sNode*));
memset(&right_value326, 0, sizeof(void*));
memset(&come_value2_180, 0, sizeof(struct CVALUE*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&type_181, 0, sizeof(struct sType*));
memset(&o2_saved_182, 0, sizeof(struct list$1sTypeph*));
memset(&it_183, 0, sizeof(struct sType*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&obj_value_184, 0, sizeof(struct CVALUE*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&num_string_185, 0, sizeof(struct buffer*));
memset(&right_value335, 0, sizeof(void*));
memset(&type2_186, 0, sizeof(struct sType*));
memset(&right_value336, 0, sizeof(void*));
memset(&type_name_187, 0, sizeof(char*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&type3_188, 0, sizeof(struct sType*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&obj_type_189, 0, sizeof(struct sType*));
memset(&fun_name_190, 0, sizeof(char*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&generics_fun_name_191, 0, sizeof(char*));
memset(&right_value346, 0, sizeof(void*));
memset(&fun_192, 0, sizeof(struct sFun*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&result_type_193, 0, sizeof(struct sType*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&come_params_194, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&i_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1CVALUEph*));
memset(&it_197, 0, sizeof(struct CVALUE*));
memset(&right_value358, 0, sizeof(void*));
memset(&come_value_198, 0, sizeof(struct CVALUE*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&buf_199, 0, sizeof(struct buffer*));
memset(&j_200, 0, sizeof(int));
memset(&o2_saved_201, 0, sizeof(struct list$1CVALUEph*));
memset(&it_202, 0, sizeof(struct CVALUE*));
memset(&right_value367, 0, sizeof(void*));
memset(&come_value3_203, 0, sizeof(struct CVALUE*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
    tuple_types_175=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value319=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1088))))))));
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_176=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value321=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value320=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1089))))))));
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional229=!((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->compile(((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional229) {
        __result147__ = (_Bool)0;
        if(tuple_types_175 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_175, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result147__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional230=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_177, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1, "06str.c", 1270))->mClass, "06str.c", 1270))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional230) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1099))->stack, "06str.c", 1099)),(struct CVALUE*)come_increment_ref_count(come_value_177));
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_176, "06str.c", 1104)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=CVALUE_clone(come_value_177)))));
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_175, "06str.c", 1105)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(((struct CVALUE*)come_null_check(come_value_177, "06str.c", 1105))->type)))));
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        true_node_179=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=create_true_object(info))));
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        if(_if_conditional231=!((struct sNode*)come_null_check(true_node_179, "06str.c", 1113))->compile(((struct sNode*)come_null_check(true_node_179, "06str.c", 1113))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional231) {
            __result148__ = (_Bool)0;
            if(mNoSolvedGenericsType_178 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_178, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_179 && !__freed_obj__) { true_node_179 = come_decrement_ref_count(true_node_179, ((struct sNode*)true_node_179)->finalize, ((struct sNode*)true_node_179)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_175 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_175, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_176, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result148__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=get_value_from_stack(-1,info))));
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_176, "06str.c", 1116)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=CVALUE_clone(come_value2_180)))));
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_175, "06str.c", 1117)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(((struct CVALUE*)come_null_check(come_value2_180, "06str.c", 1117))->type)))));
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1119)))),"optional",(_Bool)0,info))));
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_182=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_175)),it_183=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_182), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_182), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_183=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_182), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_181, "06str.c", 1122))->mGenericsTypes, "06str.c", 1122)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(it_183)))));
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_182 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1125))));
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        num_string_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value334=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1127))))))));
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_185, "06str.c", 1129)),"1");
        __freed_obj__ = 0;
        type2_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=solve_generics(type_181,type_181,info))));
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_187=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1133),((struct optional$2charphbool*)(right_value336=make_type_name_string(type2_186,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj129=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1135))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1135))->c_value=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_187,type_name_187,((char*)(right_value337=buffer_to_string(((struct buffer*)come_null_check(num_string_185, "06str.c", 1135))))),((struct sInfo*)come_null_check(info, "06str.c", 1135))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1135))->sline))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_clone(type2_186))));
        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_188, "06str.c", 1138))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_188, "06str.c", 1139))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_186, "06str.c", 1140))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj130=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1141))->type;
        ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1141))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(type2_186))));
        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj131=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1142))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1142))->c_value=(char*)come_increment_ref_count(((char*)(right_value341=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1142))->c_value,(struct sType*)come_increment_ref_count(type3_188),info))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1143))->type, "06str.c", 1143))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1144))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(type2_186))));
        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name_190="initialize";
        __freed_obj__ = 0;
        generics_fun_name_191=(char*)come_increment_ref_count(((char*)(right_value345=string_to_string(((char*)come_null_check(((char*)(right_value344=make_generics_function(obj_type_189,(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(fun_name_190)))),info))), "06str.c", 1149))))));
        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_192=((struct sFun*)(right_value346=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1151))->funcs, "06str.c", 1151)),generics_fun_name_191,((void*)0))));
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional232=fun_192==((void*)0),        __freed_obj__ = 0, 
        _if_conditional232) {
            __dec_obj132=generics_fun_name_191;
            generics_fun_name_191=(char*)come_increment_ref_count(((char*)(right_value348=create_method_name(obj_type_189,(_Bool)0,((char*)(right_value347=__builtin_string(fun_name_190))),info))));
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fun_192=((struct sFun*)(right_value349=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1156))->funcs, "06str.c", 1156)),generics_fun_name_191,((void*)0))));
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional233=fun_192==((void*)0),            __freed_obj__ = 0, 
            _if_conditional233) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_191,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1159))->come_fun, "06str.c", 1159))->mName);
                __freed_obj__ = 0;
                __result149__ = (_Bool)1;
                if(mNoSolvedGenericsType_178 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_179 && !__freed_obj__) { true_node_179 = come_decrement_ref_count(true_node_179, ((struct sNode*)true_node_179)->finalize, ((struct sNode*)true_node_179)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_187 && !__freed_obj__) { type_name_187 = come_decrement_ref_count(type_name_187, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_191 && !__freed_obj__) { generics_fun_name_191 = come_decrement_ref_count(generics_fun_name_191, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_175 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_175, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(((struct sFun*)come_null_check(fun_192, "06str.c", 1164))->mResultType))));
        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_193, "06str.c", 1165))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_194=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value352=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value351=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1167))))))));
        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional234=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1198),__exception_result_var_a8=((struct optional$2sTypephbool*)(right_value353=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_192, "06str.c", 1198))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a8)), "06str.c", 1198))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1198))->type, "06str.c", 1198))->mHeap,        (right_value353 && right_value353 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional234) {
            if(_if_conditional235=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1197))->var,            __freed_obj__ = 0, 
            _if_conditional235) {
                if(_if_conditional236=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1189))->var,                __freed_obj__ = 0, 
                _if_conditional236) {
                    if(_if_conditional237=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional237) {
                        __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName=((void*)0);
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional238=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional238) {
                            __dec_obj134=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1176))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1176))->c_value=(char*)come_increment_ref_count(((char*)(right_value354=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1176))->type,((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1176))->c_value,info))));
                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional239=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional239) {
                                __dec_obj135=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1179))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1179))->c_value=(char*)come_increment_ref_count(((char*)(right_value355=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1179))->type,((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1179))->c_value,info))));
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj136=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1182))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1182))->c_value=(char*)come_increment_ref_count(((char*)(right_value356=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1182))->type,((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1182))->c_value,info))));
                                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional240=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1196))->type, "06str.c", 1196))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional240) {
                }
                else {
                    __dec_obj137=((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1194))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1194))->c_value=(char*)come_increment_ref_count(((char*)(right_value357=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1194))->type,((struct CVALUE*)come_null_check(obj_value_184, "06str.c", 1194))->c_value,info))));
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_194, "06str.c", 1198)),(struct CVALUE*)come_increment_ref_count(obj_value_184));
        __freed_obj__ = 0;
        i_195=1;
        __freed_obj__ = 0;
        for(
        o2_saved_196=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_176)),it_197=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_196), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_196), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        _for_condtionalA13;        it_197=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_196), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=CVALUE_clone(it_197))));
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional241=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a9=((struct optional$2sTypephbool*)(right_value359=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_192, "06str.c", 1231))->mParamTypes,i_195))), come_pop_stackframe(), __exception_result_var_a9))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a10=((struct optional$2sTypephbool*)(right_value360=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_192, "06str.c", 1231))->mParamTypes,i_195))), come_pop_stackframe(), __exception_result_var_a10)), "06str.c", 1231))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1231))->type, "06str.c", 1231))->mHeap,            (right_value359 && right_value359 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0):0,
            (right_value360 && right_value360 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional241) {
                if(_if_conditional242=((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1230))->var,                __freed_obj__ = 0, 
                _if_conditional242) {
                    if(_if_conditional243=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional243) {
                        __dec_obj138=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName=((void*)0);
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional244=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional244) {
                            __dec_obj139=((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1210))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1210))->c_value=(char*)come_increment_ref_count(((char*)(right_value361=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1210))->type,((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1210))->c_value,info))));
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional245=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional245) {
                                __dec_obj140=((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1213))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1213))->c_value=(char*)come_increment_ref_count(((char*)(right_value362=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1213))->type,((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1213))->c_value,info))));
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj141=((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1216))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1216))->c_value=(char*)come_increment_ref_count(((char*)(right_value363=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1216))->type,((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1216))->c_value,info))));
                                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional246=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1229))->type, "06str.c", 1229))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional246) {
                    }
                    else {
                        __dec_obj142=((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1227))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1227))->c_value=(char*)come_increment_ref_count(((char*)(right_value364=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1227))->type,((struct CVALUE*)come_null_check(come_value_198, "06str.c", 1227))->c_value,info))));
                        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_194, "06str.c", 1231)),(struct CVALUE*)come_increment_ref_count(come_value_198));
            __freed_obj__ = 0;
            i_195++;
            __freed_obj__ = 0;
            if(come_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_196 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_199=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1236))))))));
        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_199, "06str.c", 1238)),generics_fun_name_191);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_199, "06str.c", 1239)),"(");
        __freed_obj__ = 0;
        j_200=0;
        __freed_obj__ = 0;
        for(
        o2_saved_201=(struct list$1CVALUEph*)come_increment_ref_count((come_params_194)),it_202=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        _for_condtionalA14;        it_202=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_201), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_199, "06str.c", 1243)),((struct CVALUE*)come_null_check(it_202, "06str.c", 1243))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional247=j_200!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_194, "06str.c", 1249)))-1,            __freed_obj__ = 0, 
            _if_conditional247) {
                buffer_append_str(((struct buffer*)come_null_check(buf_199, "06str.c", 1246)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_200++;
            __freed_obj__ = 0;
        }
        if(o2_saved_201 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_199, "06str.c", 1251)),")");
        __freed_obj__ = 0;
        come_value3_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value367=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1253))));
        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj143=((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1255))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1255))->c_value=(char*)come_increment_ref_count(((char*)(right_value368=buffer_to_string(((struct buffer*)come_null_check(buf_199, "06str.c", 1255))))));
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional248=((struct sType*)come_null_check(result_type_193, "06str.c", 1261))->mHeap,        __freed_obj__ = 0, 
        _if_conditional248) {
            __dec_obj144=((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1258))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1258))->c_value=(char*)come_increment_ref_count(((char*)(right_value370=append_object_to_right_values(((char*)(right_value369=buffer_to_string(((struct buffer*)come_null_check(buf_199, "06str.c", 1258))))),(struct sType*)come_increment_ref_count(result_type_193),info))));
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj145=((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1261))->type;
        ((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1261))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(result_type_193))));
        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1262))->type, "06str.c", 1262))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_203, "06str.c", 1263))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((char*)(right_value372=buffer_to_string(((struct buffer*)come_null_check(buf_199, "06str.c", 1265))))));
        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1267))->stack, "06str.c", 1267)),(struct CVALUE*)come_increment_ref_count(come_value3_203));
        __freed_obj__ = 0;
        if(mNoSolvedGenericsType_178 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_179 && !__freed_obj__) { true_node_179 = come_decrement_ref_count(true_node_179, ((struct sNode*)true_node_179)->finalize, ((struct sNode*)true_node_179)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_185 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_186 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_187 && !__freed_obj__) { type_name_187 = come_decrement_ref_count(type_name_187, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_191 && !__freed_obj__) { generics_fun_name_191 = come_decrement_ref_count(generics_fun_name_191, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_194 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_199 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_203 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result150__ = (_Bool)1;
    if(tuple_types_175 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
    if(tuple_types_175 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_176 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = ((struct sSomeNode*)come_null_check(self, "06str.c", 1275))->sline;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value373;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value373, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value373=__builtin_string(((struct sSomeNode*)come_null_check(self, "06str.c", 1280))->sname)));
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj146;
struct list$1sNodeph* __dec_obj147;
void* right_value374;
char* __dec_obj148;
struct sMapNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
    __dec_obj146=((struct sMapNode*)come_null_check(self, "06str.c", 1293))->map_key_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1293))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj146) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj147=((struct sMapNode*)come_null_check(self, "06str.c", 1294))->map_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1294))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj147) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1296))->sline=((struct sInfo*)come_null_check(info, "06str.c", 1296))->sline;
    __freed_obj__ = 0;
    __dec_obj148=((struct sMapNode*)come_null_check(self, "06str.c", 1297))->sname;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1297))->sname=(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 1297))->sname))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result153__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result154__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value375;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value375, 0, sizeof(void*));
    __result155__ = __result_obj__ = ((char*)(right_value375=__builtin_string("sMapNode")));
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* map_key_elements_204;
struct list$1sNodeph* map_elements_205;
void* right_value376;
void* right_value377;
struct list$1CVALUEph* key_params_206;
void* right_value378;
void* right_value379;
struct list$1CVALUEph* element_params_207;
struct sType* map_key_type_208;
struct sType* map_element_type_209;
int i_210;
_Bool _for_condtionalA15;
void* right_value384;
struct sNode* key_elements_215;
void* right_value385;
struct sNode* elements_216;
_Bool _if_conditional256;
_Bool __result161__;
void* right_value386;
struct CVALUE* come_value_217;
_Bool _if_conditional257;
_Bool __result162__;
void* right_value387;
struct CVALUE* come_value2_218;
void* right_value388;
struct sType* __dec_obj150;
void* right_value389;
struct sType* __dec_obj151;
static int map_value_num_219=0;
void* right_value390;
struct sType* key_type_values_220;
void* right_value391;
void* right_value392;
char* var_name_221;
void* right_value393;
struct sVar* var__222;
void* right_value394;
void* right_value395;
struct sType* element_type_values_223;
void* right_value396;
void* right_value397;
char* var_name2_224;
void* right_value398;
struct sVar* var2__225;
void* right_value399;
void* right_value400;
void* right_value401;
struct buffer* source_226;
int i_227;
_Bool _for_condtionalA16;
void* right_value402;
struct CVALUE* key_param_228;
void* right_value403;
struct CVALUE* element_param_229;
_Bool _if_conditional258;
void* right_value404;
void* right_value405;
_Bool _if_conditional259;
void* right_value406;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sType* map_type_230;
void* right_value411;
void* right_value412;
void* right_value413;
struct sType* obj_type_231;
char* fun_name_232;
void* right_value414;
void* right_value415;
void* right_value416;
char* generics_fun_name_233;
void* right_value417;
struct sFun* fun_234;
_Bool _if_conditional260;
void* right_value418;
void* right_value419;
char* __dec_obj152;
void* right_value420;
_Bool _if_conditional261;
_Bool __result163__;
void* right_value421;
struct sType* result_type_235;
struct sType* type_236;
void* right_value422;
struct CVALUE* obj_value_237;
void* right_value423;
void* right_value424;
struct buffer* num_string_238;
void* right_value425;
struct sType* type2_239;
void* right_value426;
char* type_name_240;
void* right_value427;
void* right_value428;
char* __dec_obj153;
void* right_value429;
struct sType* type3_241;
void* right_value430;
struct sType* __dec_obj154;
void* right_value431;
char* __dec_obj155;
void* right_value432;
void* right_value433;
struct list$1CVALUEph* come_params_242;
void* right_value434;
struct optional$2sTypephbool* __exception_result_var_a11;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
char* __dec_obj156;
_Bool _if_conditional265;
void* right_value435;
char* __dec_obj157;
_Bool _if_conditional266;
void* right_value436;
char* __dec_obj158;
void* right_value437;
char* __dec_obj159;
_Bool _if_conditional267;
void* right_value438;
char* __dec_obj160;
void* right_value439;
struct CVALUE* come_value2_243;
void* right_value440;
char* __dec_obj161;
struct sType* __dec_obj162;
void* right_value441;
struct CVALUE* come_value3_244;
void* right_value442;
char* __dec_obj163;
struct sType* __dec_obj164;
void* right_value443;
struct CVALUE* come_value4_245;
void* right_value444;
char* __dec_obj165;
struct sType* __dec_obj166;
void* right_value445;
void* right_value446;
struct buffer* buf_246;
int j_247;
struct list$1CVALUEph* o2_saved_248;
struct CVALUE* it_249;
_Bool _for_condtionalA17;
_Bool _if_conditional268;
void* right_value447;
struct CVALUE* come_value5_250;
void* right_value448;
char* __dec_obj167;
_Bool _if_conditional269;
void* right_value449;
void* right_value450;
char* __dec_obj168;
void* right_value451;
struct sType* __dec_obj169;
void* right_value452;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_204, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_205, 0, sizeof(struct list$1sNodeph*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&key_params_206, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&element_params_207, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_208, 0, sizeof(struct sType*));
memset(&map_element_type_209, 0, sizeof(struct sType*));
memset(&i_210, 0, sizeof(int));
memset(&right_value384, 0, sizeof(void*));
memset(&key_elements_215, 0, sizeof(struct sNode*));
memset(&right_value385, 0, sizeof(void*));
memset(&elements_216, 0, sizeof(struct sNode*));
memset(&right_value386, 0, sizeof(void*));
memset(&come_value_217, 0, sizeof(struct CVALUE*));
memset(&right_value387, 0, sizeof(void*));
memset(&come_value2_218, 0, sizeof(struct CVALUE*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&key_type_values_220, 0, sizeof(struct sType*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&var_name_221, 0, sizeof(char*));
memset(&right_value393, 0, sizeof(void*));
memset(&var__222, 0, sizeof(struct sVar*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&element_type_values_223, 0, sizeof(struct sType*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&var_name2_224, 0, sizeof(char*));
memset(&right_value398, 0, sizeof(void*));
memset(&var2__225, 0, sizeof(struct sVar*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&source_226, 0, sizeof(struct buffer*));
memset(&i_227, 0, sizeof(int));
memset(&right_value402, 0, sizeof(void*));
memset(&key_param_228, 0, sizeof(struct CVALUE*));
memset(&right_value403, 0, sizeof(void*));
memset(&element_param_229, 0, sizeof(struct CVALUE*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&map_type_230, 0, sizeof(struct sType*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&obj_type_231, 0, sizeof(struct sType*));
memset(&fun_name_232, 0, sizeof(char*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&generics_fun_name_233, 0, sizeof(char*));
memset(&right_value417, 0, sizeof(void*));
memset(&fun_234, 0, sizeof(struct sFun*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&result_type_235, 0, sizeof(struct sType*));
memset(&type_236, 0, sizeof(struct sType*));
memset(&right_value422, 0, sizeof(void*));
memset(&obj_value_237, 0, sizeof(struct CVALUE*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&num_string_238, 0, sizeof(struct buffer*));
memset(&right_value425, 0, sizeof(void*));
memset(&type2_239, 0, sizeof(struct sType*));
memset(&right_value426, 0, sizeof(void*));
memset(&type_name_240, 0, sizeof(char*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&type3_241, 0, sizeof(struct sType*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&come_params_242, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&come_value2_243, 0, sizeof(struct CVALUE*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&come_value3_244, 0, sizeof(struct CVALUE*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&come_value4_245, 0, sizeof(struct CVALUE*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&buf_246, 0, sizeof(struct buffer*));
memset(&j_247, 0, sizeof(int));
memset(&o2_saved_248, 0, sizeof(struct list$1CVALUEph*));
memset(&it_249, 0, sizeof(struct CVALUE*));
memset(&right_value447, 0, sizeof(void*));
memset(&come_value5_250, 0, sizeof(struct CVALUE*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
    map_key_elements_204=((struct sMapNode*)come_null_check(self, "06str.c", 1314))->map_key_elements;
    __freed_obj__ = 0;
    map_elements_205=((struct sMapNode*)come_null_check(self, "06str.c", 1315))->map_elements;
    __freed_obj__ = 0;
    key_params_206=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value377=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value376=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1317))))))));
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    element_params_207=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value379=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value378=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1318))))))));
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_210=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    i_210<list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(map_key_elements_204, "06str.c", 1348))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    i_210++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_elements_215=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1323),((struct optional$2sNodephbool*)(right_value384=list$1sNodephp_operator_load_element(map_key_elements_204,i_210)))));
        come_pop_stackframe();
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        elements_216=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1324),((struct optional$2sNodephbool*)(right_value385=list$1sNodephp_operator_load_element(map_elements_205,i_210)))));
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional256=!((struct sNode*)come_null_check(key_elements_215, "06str.c", 1330))->compile(((struct sNode*)come_null_check(key_elements_215, "06str.c", 1330))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional256) {
            __result161__ = (_Bool)0;
            if(key_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result161__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value386=get_value_from_stack(-1,info))));
        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(key_params_206, "06str.c", 1333)),(struct CVALUE*)come_increment_ref_count(come_value_217));
        __freed_obj__ = 0;
        if(_if_conditional257=!((struct sNode*)come_null_check(elements_216, "06str.c", 1339))->compile(((struct sNode*)come_null_check(elements_216, "06str.c", 1339))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional257) {
            __result162__ = (_Bool)0;
            if(come_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result162__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value387=get_value_from_stack(-1,info))));
        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(element_params_207, "06str.c", 1342)),(struct CVALUE*)come_increment_ref_count(come_value2_218));
        __freed_obj__ = 0;
        __dec_obj150=map_key_type_208;
        map_key_type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(((struct CVALUE*)come_null_check(come_value_217, "06str.c", 1344))->type))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj151=map_element_type_209;
        map_element_type_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(((struct CVALUE*)come_null_check(come_value2_218, "06str.c", 1345))->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    key_type_values_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_clone(map_key_type_208))));
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(key_type_values_220, "06str.c", 1351))->mArrayNum, "06str.c", 1351)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_206, "06str.c", 1351))),info)))));
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(key_type_values_220, "06str.c", 1352))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name_221=(char*)come_increment_ref_count(((char*)(right_value392=xsprintf("__map_keys%d__",++map_value_num_219))));
    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name_221,(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(key_type_values_220)))),info);
    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var__222=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1358))->lv_table,var_name_221);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1360),((struct optional$2charphbool*)(right_value394=make_define_var(key_type_values_220,((struct sVar*)come_null_check(var__222, "06str.c", 1360))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    element_type_values_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value395=sType_clone(map_element_type_209))));
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(element_type_values_223, "06str.c", 1363))->mArrayNum, "06str.c", 1363)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(element_params_207, "06str.c", 1363))),info)))));
    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(element_type_values_223, "06str.c", 1364))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name2_224=(char*)come_increment_ref_count(((char*)(right_value397=xsprintf("__map_element%d__",map_value_num_219))));
    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_224,(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(element_type_values_223)))),info);
    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var2__225=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1370))->lv_table,var_name2_224);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1372),((struct optional$2charphbool*)(right_value399=make_define_var(element_type_values_223,((struct sVar*)come_null_check(var2__225, "06str.c", 1372))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    source_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value401=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value400=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1374))))))));
    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1376)),"{");
    __freed_obj__ = 0;
    for(
    i_227=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    i_227<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_206, "06str.c", 1397))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    i_227++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_param_228=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1379),((struct optional$2CVALUEphbool*)(right_value402=list$1CVALUEphp_operator_load_element(key_params_206,i_227)))));
        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        element_param_229=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1380),((struct optional$2CVALUEphbool*)(right_value403=list$1CVALUEphp_operator_load_element(element_params_207,i_227)))));
        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional258=((struct sType*)come_null_check(map_key_type_208, "06str.c", 1389))->mHeap,        __freed_obj__ = 0, 
        _if_conditional258) {
            buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1383)),((char*)(right_value404=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__222, "06str.c", 1383))->mCValueName,i_227,((struct CVALUE*)come_null_check(key_param_228, "06str.c", 1383))->c_value))));
            if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1386)),((char*)(right_value405=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__222, "06str.c", 1386))->mCValueName,i_227,((struct CVALUE*)come_null_check(key_param_228, "06str.c", 1386))->c_value))));
            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional259=((struct sType*)come_null_check(map_element_type_209, "06str.c", 1395))->mHeap,        __freed_obj__ = 0, 
        _if_conditional259) {
            buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1390)),((char*)(right_value406=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var2__225, "06str.c", 1390))->mCValueName,i_227,((struct CVALUE*)come_null_check(element_param_229, "06str.c", 1390))->c_value))));
            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1393)),((char*)(right_value407=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var2__225, "06str.c", 1393))->mCValueName,i_227,((struct CVALUE*)come_null_check(element_param_229, "06str.c", 1393))->c_value))));
            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_226, "06str.c", 1397)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value408=buffer_to_string(((struct buffer*)come_null_check(source_226, "06str.c", 1399))))));
    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    map_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value410=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value409=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1401)))),"map",(_Bool)0,info))));
    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_230, "06str.c", 1402))->mGenericsTypes, "06str.c", 1402)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value411=sType_clone(map_key_type_208)))));
    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_230, "06str.c", 1403))->mGenericsTypes, "06str.c", 1403)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value412=sType_clone(map_element_type_209)))));
    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    obj_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value413=sType_clone(map_type_230))));
    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_232="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_233=(char*)come_increment_ref_count(((char*)(right_value416=string_to_string(((char*)come_null_check(((char*)(right_value415=make_generics_function(obj_type_231,(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(fun_name_232)))),info))), "06str.c", 1408))))));
    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_234=((struct sFun*)(right_value417=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1410))->funcs, "06str.c", 1410)),generics_fun_name_233,((void*)0))));
    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional260=fun_234==((void*)0),    __freed_obj__ = 0, 
    _if_conditional260) {
        __dec_obj152=generics_fun_name_233;
        generics_fun_name_233=(char*)come_increment_ref_count(((char*)(right_value419=create_method_name(obj_type_231,(_Bool)0,((char*)(right_value418=__builtin_string(fun_name_232))),info))));
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
        if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_234=((struct sFun*)(right_value420=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1415))->funcs, "06str.c", 1415)),generics_fun_name_233,((void*)0))));
        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional261=fun_234==((void*)0),        __freed_obj__ = 0, 
        _if_conditional261) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_233,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1418))->come_fun, "06str.c", 1418))->mName);
            __freed_obj__ = 0;
            __result163__ = (_Bool)1;
            if(key_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
            if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result163__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(((struct sFun*)come_null_check(fun_234, "06str.c", 1423))->mResultType))));
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_235, "06str.c", 1424))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_236=map_type_230;
    __freed_obj__ = 0;
    obj_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value422=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1428))));
    if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1430))))))));
    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_238, "06str.c", 1432)),"1");
    __freed_obj__ = 0;
    type2_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value425=solve_generics(type_236,type_236,info))));
    if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_240=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1436),((struct optional$2charphbool*)(right_value426=make_type_name_string(type2_239,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj153=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1438))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1438))->c_value=(char*)come_increment_ref_count(((char*)(right_value428=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_240,type_name_240,((char*)(right_value427=buffer_to_string(((struct buffer*)come_null_check(num_string_238, "06str.c", 1438))))),((struct sInfo*)come_null_check(info, "06str.c", 1438))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1438))->sline))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value429=sType_clone(type2_239))));
    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_241, "06str.c", 1441))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_241, "06str.c", 1442))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_239, "06str.c", 1443))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj154=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1444))->type;
    ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1444))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value430=sType_clone(type2_239))));
    if(__dec_obj154) { come_call_finalizer(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj155=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1445))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1445))->c_value=(char*)come_increment_ref_count(((char*)(right_value431=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1445))->c_value,(struct sType*)come_increment_ref_count(type3_241),info))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1446))->type, "06str.c", 1446))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1447))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_242=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value433=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value432=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1449))))))));
    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional262=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1478),__exception_result_var_a11=((struct optional$2sTypephbool*)(right_value434=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_234, "06str.c", 1478))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a11)), "06str.c", 1478))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1478))->type, "06str.c", 1478))->mHeap,    (right_value434 && right_value434 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional262) {
        if(_if_conditional263=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1477))->var,        __freed_obj__ = 0, 
        _if_conditional263) {
            if(_if_conditional264=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional264) {
                __dec_obj156=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName=((void*)0);
                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional265=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mShare,                __freed_obj__ = 0, 
                _if_conditional265) {
                    __dec_obj157=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1457))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1457))->c_value=(char*)come_increment_ref_count(((char*)(right_value435=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1457))->type,((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1457))->c_value,info))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
                    if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional266=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional266) {
                        __dec_obj158=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1460))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1460))->c_value=(char*)come_increment_ref_count(((char*)(right_value436=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1460))->type,((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1460))->c_value,info))));
                        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
                        if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj159=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1463))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1463))->c_value=(char*)come_increment_ref_count(((char*)(right_value437=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1463))->type,((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1463))->c_value,info))));
                        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
                        if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional267=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1476))->type, "06str.c", 1476))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional267) {
            }
            else {
                __dec_obj160=((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1474))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1474))->c_value=(char*)come_increment_ref_count(((char*)(right_value438=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1474))->type,((struct CVALUE*)come_null_check(obj_value_237, "06str.c", 1474))->c_value,info))));
                if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_242, "06str.c", 1478)),(struct CVALUE*)come_increment_ref_count(obj_value_237));
    __freed_obj__ = 0;
    come_value2_243=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value439=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1480))));
    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj161=((struct CVALUE*)come_null_check(come_value2_243, "06str.c", 1482))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_243, "06str.c", 1482))->c_value=(char*)come_increment_ref_count(((char*)(right_value440=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_206, "06str.c", 1482)))))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj162=((struct CVALUE*)come_null_check(come_value2_243, "06str.c", 1483))->type;
    ((struct CVALUE*)come_null_check(come_value2_243, "06str.c", 1483))->type=((void*)0);
    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_243, "06str.c", 1484))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_242, "06str.c", 1486)),(struct CVALUE*)come_increment_ref_count(come_value2_243));
    __freed_obj__ = 0;
    come_value3_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value441=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1488))));
    if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj163=((struct CVALUE*)come_null_check(come_value3_244, "06str.c", 1490))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_244, "06str.c", 1490))->c_value=(char*)come_increment_ref_count(((char*)(right_value442=xsprintf("%s",((struct sVar*)come_null_check(var__222, "06str.c", 1490))->mCValueName))));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj164=((struct CVALUE*)come_null_check(come_value3_244, "06str.c", 1491))->type;
    ((struct CVALUE*)come_null_check(come_value3_244, "06str.c", 1491))->type=((void*)0);
    if(__dec_obj164) { come_call_finalizer(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_244, "06str.c", 1492))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_242, "06str.c", 1494)),(struct CVALUE*)come_increment_ref_count(come_value3_244));
    __freed_obj__ = 0;
    come_value4_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value443=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1496))));
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj165=((struct CVALUE*)come_null_check(come_value4_245, "06str.c", 1498))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_245, "06str.c", 1498))->c_value=(char*)come_increment_ref_count(((char*)(right_value444=xsprintf("%s",((struct sVar*)come_null_check(var2__225, "06str.c", 1498))->mCValueName))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
    if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj166=((struct CVALUE*)come_null_check(come_value4_245, "06str.c", 1499))->type;
    ((struct CVALUE*)come_null_check(come_value4_245, "06str.c", 1499))->type=((void*)0);
    if(__dec_obj166) { come_call_finalizer(sType_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_245, "06str.c", 1500))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_242, "06str.c", 1502)),(struct CVALUE*)come_increment_ref_count(come_value4_245));
    __freed_obj__ = 0;
    buf_246=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value446=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value445=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1504))))))));
    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_246, "06str.c", 1506)),generics_fun_name_233);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_246, "06str.c", 1507)),"(");
    __freed_obj__ = 0;
    j_247=0;
    __freed_obj__ = 0;
    for(
    o2_saved_248=(struct list$1CVALUEph*)come_increment_ref_count((come_params_242)),it_249=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_248), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_248), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_249=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_248), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_246, "06str.c", 1511)),((struct CVALUE*)come_null_check(it_249, "06str.c", 1511))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional268=j_247!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_242, "06str.c", 1517)))-1,        __freed_obj__ = 0, 
        _if_conditional268) {
            buffer_append_str(((struct buffer*)come_null_check(buf_246, "06str.c", 1514)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_247++;
        __freed_obj__ = 0;
    }
    if(o2_saved_248 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_246, "06str.c", 1519)),")");
    __freed_obj__ = 0;
    come_value5_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value447=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1521))));
    if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj167=((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1523))->c_value;
    ((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1523))->c_value=(char*)come_increment_ref_count(((char*)(right_value448=buffer_to_string(((struct buffer*)come_null_check(buf_246, "06str.c", 1523))))));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
    if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional269=((struct sType*)come_null_check(result_type_235, "06str.c", 1529))->mHeap,    __freed_obj__ = 0, 
    _if_conditional269) {
        __dec_obj168=((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1526))->c_value;
        ((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1526))->c_value=(char*)come_increment_ref_count(((char*)(right_value450=append_object_to_right_values(((char*)(right_value449=buffer_to_string(((struct buffer*)come_null_check(buf_246, "06str.c", 1526))))),(struct sType*)come_increment_ref_count(result_type_235),info))));
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
        if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj169=((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1529))->type;
    ((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1529))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value451=sType_clone(result_type_235))));
    if(__dec_obj169) { come_call_finalizer(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1530))->type, "06str.c", 1530))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value5_250, "06str.c", 1531))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value452=buffer_to_string(((struct buffer*)come_null_check(buf_246, "06str.c", 1533))))));
    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1535))->stack, "06str.c", 1535)),(struct CVALUE*)come_increment_ref_count(come_value5_250));
    __freed_obj__ = 0;
    __result164__ = (_Bool)1;
    if(key_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
    if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_238 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_240 && !__freed_obj__) { type_name_240 = come_decrement_ref_count(type_name_240, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_242 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_243 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
    if(key_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
    if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_238 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_240 && !__freed_obj__) { type_name_240 = come_decrement_ref_count(type_name_240, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_242 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_243 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_250, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional252;
struct list_item$1sNodeph* it_211;
int i_212;
_Bool _while_condtional12;
_Bool _if_conditional253;
void* right_value380;
void* right_value381;
struct optional$2sNodephbool* __result157__;
struct sNode* default_value_213;
void* right_value382;
void* right_value383;
struct optional$2sNodephbool* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_211, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_212, 0, sizeof(int));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&default_value_213, 0, sizeof(struct sNode*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
            if(_if_conditional252=position<0,            __freed_obj__ = 0, 
            _if_conditional252) {
                position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_211=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_212=0;
            __freed_obj__ = 0;
            while(_while_condtional12=it_211!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional253=position==i_212,                __freed_obj__ = 0, 
                _if_conditional253) {
                    __result157__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value381=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value380=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 742)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_211, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result157__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_211=((struct list_item$1sNodeph*)come_null_check(it_211, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_212++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_213,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result158__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sNodephbool*)(right_value383=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value382=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 750))),(struct sNode*)come_increment_ref_count(default_value_213),(_Bool)0))));
            if(default_value_213 && !__freed_obj__) { default_value_213 = come_decrement_ref_count(default_value_213, ((struct sNode*)default_value_213)->finalize, ((struct sNode*)default_value_213)->_protocol_obj, 0, 0, 0); } 
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result158__;
            __freed_obj__ = 0;
            if(default_value_213 && !__freed_obj__) { default_value_213 = come_decrement_ref_count(default_value_213, ((struct sNode*)default_value_213)->finalize, ((struct sNode*)default_value_213)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj149;
struct optional$2sNodephbool* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj149=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result156__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result156__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional254=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional254) {
                                if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional255;
struct sNode* default_value_214;
struct sNode* __result159__;
struct sNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_214, 0, sizeof(struct sNode*));
            if(_if_conditional255=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional255) {
                __freed_obj__ = 0;
                memset(&default_value_214,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result159__ = __result_obj__ = default_value_214;
                __freed_obj__ = 0;
                return __result159__;
                __freed_obj__ = 0;
            }
            else {
                __result160__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result160__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = ((struct sMapNode*)come_null_check(self, "06str.c", 1542))->sline;
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value453;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value453, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(right_value453=__builtin_string(((struct sMapNode*)come_null_check(self, "06str.c", 1547))->sname)));
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional270;
int sline_251;
void* right_value454;
void* right_value455;
struct list$1sNodeph* exps_252;
void* right_value456;
void* right_value457;
struct buffer* value_253;
char* head_of_last_line_254;
_Bool _while_condtional13;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
int len_255;
_Bool _while_condtional14;
_Bool _if_conditional277;
_Bool _while_condtional15;
_Bool _if_conditional278;
void* right_value458;
struct sNode* exp_256;
_Bool _if_conditional279;
_Bool _if_conditional280;
int sline2_257;
_Bool _if_conditional281;
void* right_value459;
void* right_value460;
void* right_value461;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value466;
struct sNode* __result169__;
_Bool _if_conditional290;
int sline_259;
void* right_value467;
void* right_value468;
struct buffer* value_260;
_Bool _while_condtional16;
_Bool _if_conditional291;
char* p_261;
int sline_262;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
int sline2_263;
_Bool _if_conditional296;
void* right_value469;
void* right_value470;
void* right_value471;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value475;
struct sNode* __result172__;
_Bool _if_conditional303;
int sline_265;
void* right_value476;
void* right_value477;
struct buffer* buf_266;
_Bool _while_condtional17;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool global_267;
_Bool ignore_case_268;
_Bool _while_condtional18;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value478;
void* right_value479;
void* right_value480;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value484;
struct sNode* __result175__;
_Bool _if_conditional317;
int c_270;
_Bool _if_conditional318;
_Bool _if_conditional319;
int n_271;
_Bool _while_condtional19;
_Bool _if_conditional320;
int n_272;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_275;
_Bool _if_conditional321;
void* right_value485;
void* right_value486;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value489;
struct sNode* __result178__;
_Bool _if_conditional327;
unsigned int c_277;
_Bool _if_conditional328;
_Bool _if_conditional329;
int n_278;
_Bool _while_condtional22;
_Bool _if_conditional330;
int n_279;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_282;
unsigned char p2_283;
_Bool _if_conditional331;
int size_284;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value490;
void* right_value491;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value494;
struct sNode* __result181__;
_Bool _if_conditional340;
int sline_287;
void* right_value495;
void* right_value496;
struct buffer* value_288;
_Bool _while_condtional25;
_Bool _if_conditional341;
char* p_289;
int sline_290;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
int len_291;
int n_292;
_Bool _while_condtional26;
_Bool _if_conditional345;
_Bool _while_condtional27;
unsigned long int lont_295;
int n_296;
_Bool _if_conditional346;
int sline2_297;
_Bool _if_conditional347;
int len_298;
void* right_value497;
unsigned int* wstr_299;
char* str_300;
_Bool _if_conditional348;
void* right_value498;
void* right_value499;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value503;
struct sNode* __result184__;
_Bool _if_conditional355;
int sline_302;
void* right_value504;
void* right_value505;
struct list$1sNodeph* exps_303;
void* right_value506;
void* right_value507;
struct buffer* value_304;
_Bool _while_condtional28;
_Bool _if_conditional356;
char* p_305;
int sline_306;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
void* right_value508;
struct sNode* exp_307;
_Bool _if_conditional360;
_Bool _if_conditional361;
int len_308;
_Bool _while_condtional29;
_Bool _if_conditional362;
_Bool _while_condtional30;
_Bool _if_conditional363;
void* right_value509;
struct sNode* exp_309;
_Bool _if_conditional364;
_Bool _if_conditional365;
int sline2_310;
_Bool _if_conditional366;
void* right_value510;
void* right_value511;
void* right_value512;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value517;
struct sNode* __result187__;
_Bool _if_conditional375;
char* p_312;
_Bool no_comma_313;
void* right_value518;
struct sNode* node_314;
char* p2_315;
void* right_value519;
void* right_value520;
struct buffer* first_element_source_316;
void* right_value521;
void* right_value522;
struct list$1sNodeph* list_elements_317;
void* right_value523;
void* right_value524;
struct list$1sNodeph* map_keys_318;
void* right_value525;
void* right_value526;
struct list$1sNodeph* map_elements_319;
_Bool _if_conditional376;
_Bool no_comma_320;
void* right_value527;
struct sNode* node2_321;
_Bool _if_conditional377;
void* right_value528;
void* right_value529;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value534;
struct sNode* __result190__;
void* right_value535;
_Bool _while_condtional31;
_Bool no_comma_324;
void* right_value536;
struct sNode* node2_325;
void* right_value537;
void* right_value538;
struct sNode* node3_326;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value539;
void* right_value540;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value545;
struct sNode* __result195__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _while_condtional32;
_Bool no_comma_328;
void* right_value546;
struct sNode* node2_329;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value547;
void* right_value548;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value552;
struct sNode* __result198__;
void* right_value553;
struct sNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_251, 0, sizeof(int));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&exps_252, 0, sizeof(struct list$1sNodeph*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&value_253, 0, sizeof(struct buffer*));
memset(&head_of_last_line_254, 0, sizeof(char*));
memset(&len_255, 0, sizeof(int));
memset(&right_value458, 0, sizeof(void*));
memset(&exp_256, 0, sizeof(struct sNode*));
memset(&sline2_257, 0, sizeof(int));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value466, 0, sizeof(void*));
memset(&sline_259, 0, sizeof(int));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&value_260, 0, sizeof(struct buffer*));
memset(&p_261, 0, sizeof(char*));
memset(&sline_262, 0, sizeof(int));
memset(&sline2_263, 0, sizeof(int));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&sline_265, 0, sizeof(int));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&buf_266, 0, sizeof(struct buffer*));
memset(&global_267, 0, sizeof(_Bool));
memset(&ignore_case_268, 0, sizeof(_Bool));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&c_270, 0, sizeof(int));
memset(&n_271, 0, sizeof(int));
memset(&n_272, 0, sizeof(int));
memset(&n_275, 0, sizeof(unsigned long long int));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&c_277, 0, sizeof(unsigned int));
memset(&n_278, 0, sizeof(int));
memset(&n_279, 0, sizeof(int));
memset(&n_282, 0, sizeof(unsigned long long int));
memset(&p2_283, 0, sizeof(unsigned char));
memset(&size_284, 0, sizeof(int));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&sline_287, 0, sizeof(int));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&value_288, 0, sizeof(struct buffer*));
memset(&p_289, 0, sizeof(char*));
memset(&sline_290, 0, sizeof(int));
memset(&len_291, 0, sizeof(int));
memset(&n_292, 0, sizeof(int));
memset(&lont_295, 0, sizeof(unsigned long int));
memset(&n_296, 0, sizeof(int));
memset(&sline2_297, 0, sizeof(int));
memset(&len_298, 0, sizeof(int));
memset(&right_value497, 0, sizeof(void*));
memset(&wstr_299, 0, sizeof(unsigned int*));
memset(&str_300, 0, sizeof(char*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value503, 0, sizeof(void*));
memset(&sline_302, 0, sizeof(int));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&exps_303, 0, sizeof(struct list$1sNodeph*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_value507, 0, sizeof(void*));
memset(&value_304, 0, sizeof(struct buffer*));
memset(&p_305, 0, sizeof(char*));
memset(&sline_306, 0, sizeof(int));
memset(&right_value508, 0, sizeof(void*));
memset(&exp_307, 0, sizeof(struct sNode*));
memset(&len_308, 0, sizeof(int));
memset(&right_value509, 0, sizeof(void*));
memset(&exp_309, 0, sizeof(struct sNode*));
memset(&sline2_310, 0, sizeof(int));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
memset(&p_312, 0, sizeof(char*));
memset(&no_comma_313, 0, sizeof(_Bool));
memset(&right_value518, 0, sizeof(void*));
memset(&node_314, 0, sizeof(struct sNode*));
memset(&p2_315, 0, sizeof(char*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_value520, 0, sizeof(void*));
memset(&first_element_source_316, 0, sizeof(struct buffer*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&list_elements_317, 0, sizeof(struct list$1sNodeph*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&map_keys_318, 0, sizeof(struct list$1sNodeph*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&map_elements_319, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_320, 0, sizeof(_Bool));
memset(&right_value527, 0, sizeof(void*));
memset(&node2_321, 0, sizeof(struct sNode*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&no_comma_324, 0, sizeof(_Bool));
memset(&right_value536, 0, sizeof(void*));
memset(&node2_325, 0, sizeof(struct sNode*));
memset(&right_value537, 0, sizeof(void*));
memset(&right_value538, 0, sizeof(void*));
memset(&node3_326, 0, sizeof(struct sNode*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&no_comma_328, 0, sizeof(_Bool));
memset(&right_value546, 0, sizeof(void*));
memset(&node2_329, 0, sizeof(struct sNode*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value553, 0, sizeof(void*));
    if(_if_conditional270=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+2)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+3)==10,    __freed_obj__ = 0, 
    _if_conditional270) {
        ((struct sInfo*)come_null_check(info, "06str.c", 1554))->p+=4;
        __freed_obj__ = 0;
        sline_251=((struct sInfo*)come_null_check(info, "06str.c", 1556))->sline;
        __freed_obj__ = 0;
        exps_252=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value455=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value454=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1558))))))));
        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        value_253=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value457=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value456=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1559))))))));
        if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        head_of_last_line_254=((void*)0);
        __freed_obj__ = 0;
        while(_while_condtional13=1,        __freed_obj__ = 0, 
        _while_condtional13) {
            if(_if_conditional271=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+2)==34,            __freed_obj__ = 0, 
            _if_conditional271) {
                if(_if_conditional272=head_of_last_line_254,                __freed_obj__ = 0, 
                _if_conditional272) {
                    buffer_trim(((struct buffer*)come_null_check(value_253, "06str.c", 1566)),((struct sInfo*)come_null_check(info, "06str.c", 1566))->p-head_of_last_line_254);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "06str.c", 1569))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional273=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==37,                __freed_obj__ = 0, 
                _if_conditional273) {
                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1575)),37);
                    __freed_obj__ = 0;
                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1576)),37);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "06str.c", 1577))->p++;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional274=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional274) {
                        buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1580)),92);
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1581)),34);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1582))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional275=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional275) {
                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1596)),92);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1597))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional276=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p),                            __freed_obj__ = 0, 
                            _if_conditional276) {
                                len_255=0;
                                __freed_obj__ = 0;
                                while(_while_condtional14=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1606))->p)&&len_255<3,                                __freed_obj__ = 0, 
                                _while_condtional14) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1602)),*((struct sInfo*)come_null_check(info, "06str.c", 1602))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1603))->p++;
                                    __freed_obj__ = 0;
                                    len_255++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional277=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==88,                                __freed_obj__ = 0, 
                                _if_conditional277) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1608)),*((struct sInfo*)come_null_check(info, "06str.c", 1608))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1609))->p++;
                                    __freed_obj__ = 0;
                                    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional15) {
                                        buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1612)),*((struct sInfo*)come_null_check(info, "06str.c", 1612))->p);
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1613))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional278=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==123,                                    __freed_obj__ = 0, 
                                    _if_conditional278) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1617))->p++;
                                        __freed_obj__ = 0;
                                        exp_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=expression_v13(info))));
                                        if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_252, "06str.c", 1621)),(struct sNode*)come_increment_ref_count(exp_256));
                                        __freed_obj__ = 0;
                                        if(_if_conditional279=*((struct sInfo*)come_null_check(info, "06str.c", 1627))->p==125,                                        __freed_obj__ = 0, 
                                        _if_conditional279) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1624))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(value_253, "06str.c", 1627)),"%s");
                                        __freed_obj__ = 0;
                                        if(exp_256 && !__freed_obj__) { exp_256 = come_decrement_ref_count(exp_256, ((struct sNode*)exp_256)->finalize, ((struct sNode*)exp_256)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*((struct sInfo*)come_null_check(info, "06str.c", 1681))->p) {
                                            case 48:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1632)),*((struct sInfo*)come_null_check(info, "06str.c", 1632))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1633))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 110:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1637)),*((struct sInfo*)come_null_check(info, "06str.c", 1637))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1638))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 116:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1642)),*((struct sInfo*)come_null_check(info, "06str.c", 1642))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1643))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 114:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1647)),*((struct sInfo*)come_null_check(info, "06str.c", 1647))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1648))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 118:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1652)),*((struct sInfo*)come_null_check(info, "06str.c", 1652))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1653))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 102:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1657)),*((struct sInfo*)come_null_check(info, "06str.c", 1657))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1658))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 97:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1662)),*((struct sInfo*)come_null_check(info, "06str.c", 1662))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1663))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 98:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1667)),*((struct sInfo*)come_null_check(info, "06str.c", 1667))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1668))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 92:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1672)),*((struct sInfo*)come_null_check(info, "06str.c", 1672))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1673))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            default:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1677)),*((struct sInfo*)come_null_check(info, "06str.c", 1677))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1678))->p++;
                                            __freed_obj__ = 0;
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
                        else {
                            if(_if_conditional280=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                sline2_257=((struct sInfo*)come_null_check(info, "06str.c", 1684))->sline;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1685))->sline=sline_251;
                                __freed_obj__ = 0;
                                err_msg(info,"close \" to make embbeded string value");
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional281=*((struct sInfo*)come_null_check(info, "06str.c", 1702))->p==10,                                __freed_obj__ = 0, 
                                _if_conditional281) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1691)),92);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1692)),110);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1693))->p++;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1694))->sline++;
                                    __freed_obj__ = 0;
                                    head_of_last_line_254=((struct sInfo*)come_null_check(info, "06str.c", 1696))->p;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    buffer_append_char(((struct buffer*)come_null_check(value_253, "06str.c", 1699)),*((struct sInfo*)come_null_check(info, "06str.c", 1699))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1700))->p++;
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
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1707);
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value461=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value459=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1707)))),(char*)come_increment_ref_count(((char*)(right_value460=buffer_to_string(((struct buffer*)come_null_check(value_253, "06str.c", 1707)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_252),sline_251,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result169__ = __result_obj__ = ((struct sNode*)(right_value466=_inf_value3));
        if(exps_252 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_252, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { right_value460 = come_decrement_ref_count(right_value460, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result169__;
        __freed_obj__ = 0;
        if(exps_252 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_252, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional290=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==34,        __freed_obj__ = 0, 
        _if_conditional290) {
            ((struct sInfo*)come_null_check(info, "06str.c", 1711))->p++;
            __freed_obj__ = 0;
            sline_259=((struct sInfo*)come_null_check(info, "06str.c", 1713))->sline;
            __freed_obj__ = 0;
            value_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value468=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1715))))))));
            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional16=1,            __freed_obj__ = 0, 
            _while_condtional16) {
                if(_if_conditional291=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==34,                __freed_obj__ = 0, 
                _if_conditional291) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1719))->p++;
                    __freed_obj__ = 0;
                    p_261=((struct sInfo*)come_null_check(info, "06str.c", 1721))->p;
                    __freed_obj__ = 0;
                    sline_262=((struct sInfo*)come_null_check(info, "06str.c", 1722))->sline;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional292=*((struct sInfo*)come_null_check(info, "06str.c", 1736))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional292) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1729))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1732))->p=p_261;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1733))->sline=sline_262;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional293=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        buffer_append_char(((struct buffer*)come_null_check(value_260, "06str.c", 1738)),92);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1739))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional294=*((struct sInfo*)come_null_check(info, "06str.c", 1749))->p==34,                        __freed_obj__ = 0, 
                        _if_conditional294) {
                            buffer_append_char(((struct buffer*)come_null_check(value_260, "06str.c", 1742)),34);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1743))->p++;
                            __freed_obj__ = 0;
                        }
                        else {
                            buffer_append_char(((struct buffer*)come_null_check(value_260, "06str.c", 1746)),*((struct sInfo*)come_null_check(info, "06str.c", 1746))->p);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1747))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional295=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional295) {
                            sline2_263=((struct sInfo*)come_null_check(info, "06str.c", 1751))->sline;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1752))->sline=sline_259;
                            __freed_obj__ = 0;
                            err_msg(info,"close \" to make c string value");
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1754))->sline=sline2_263;
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional296=*((struct sInfo*)come_null_check(info, "06str.c", 1758))->p==10,                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 1758))->sline++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            buffer_append_char(((struct buffer*)come_null_check(value_260, "06str.c", 1760)),*((struct sInfo*)come_null_check(info, "06str.c", 1760))->p);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1761))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1767);
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value471=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value469=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1767)))),(char*)come_increment_ref_count(((char*)(right_value470=buffer_to_string(((struct buffer*)come_null_check(value_260, "06str.c", 1767)))))),sline_259,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result172__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value4));
            if(value_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_260, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result172__;
            __freed_obj__ = 0;
            if(value_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_260, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional303=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==47,            __freed_obj__ = 0, 
            _if_conditional303) {
                ((struct sInfo*)come_null_check(info, "06str.c", 1770))->p++;
                __freed_obj__ = 0;
                sline_265=((struct sInfo*)come_null_check(info, "06str.c", 1772))->sline;
                __freed_obj__ = 0;
                buf_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value477=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value476=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1774))))))));
                if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional17) {
                    if(_if_conditional304=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==92&&*(((struct sInfo*)come_null_check(info, "06str.c", 1793))->p+1)==47,                    __freed_obj__ = 0, 
                    _if_conditional304) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1777))->p++;
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(buf_266, "06str.c", 1778)),*((struct sInfo*)come_null_check(info, "06str.c", 1778))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1779))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional305=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==47,                        __freed_obj__ = 0, 
                        _if_conditional305) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1782))->p++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional306=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional306) {
                                err_msg(info,"require closing / for regex");
                                __freed_obj__ = 0;
                                exit(5);
                                __freed_obj__ = 0;
                            }
                            else {
                                buffer_append_char(((struct buffer*)come_null_check(buf_266, "06str.c", 1790)),*((struct sInfo*)come_null_check(info, "06str.c", 1790))->p);
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1791))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                global_267=(_Bool)0;
                __freed_obj__ = 0;
                ignore_case_268=(_Bool)0;
                __freed_obj__ = 0;
                while(_while_condtional18=*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==103||*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==105,                __freed_obj__ = 0, 
                _while_condtional18) {
                    if(_if_conditional307=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==103,                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1799))->p++;
                        __freed_obj__ = 0;
                        global_267=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional308=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==105,                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1803))->p++;
                            __freed_obj__ = 0;
                            ignore_case_268=(_Bool)1;
                            __freed_obj__ = 0;
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
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1813);
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value480=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value478=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1813)))),(char*)come_increment_ref_count(((char*)(right_value479=buffer_to_string(((struct buffer*)come_null_check(buf_266, "06str.c", 1813)))))),global_267,ignore_case_268,sline_265,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result175__ = __result_obj__ = ((struct sNode*)(right_value484=_inf_value5));
                if(buf_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { right_value479 = come_decrement_ref_count(right_value479, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result175__;
                __freed_obj__ = 0;
                if(buf_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional317=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==39,                __freed_obj__ = 0, 
                _if_conditional317) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1816))->p++;
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    if(_if_conditional318=*((struct sInfo*)come_null_check(info, "06str.c", 1922))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1821))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional319=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1916))->p),                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            n_271=0;
                            __freed_obj__ = 0;
                            while(_while_condtional19=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1830))->p),                            __freed_obj__ = 0, 
                            _while_condtional19) {
                                n_271=n_271*8+*((struct sInfo*)come_null_check(info, "06str.c", 1826))->p-48;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1827))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            c_270=n_271;
                            __freed_obj__ = 0;
                        }
                        else {
                            switch (*((struct sInfo*)come_null_check(info, "06str.c", 1915))->p) {
                                case 110:
                                __freed_obj__ = 0;
                                c_270=10;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1836))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 116:
                                __freed_obj__ = 0;
                                c_270=9;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1841))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 114:
                                __freed_obj__ = 0;
                                c_270=13;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1846))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 97:
                                __freed_obj__ = 0;
                                c_270=7;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1851))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 102:
                                __freed_obj__ = 0;
                                c_270=12;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1856))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 118:
                                __freed_obj__ = 0;
                                c_270=11;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1861))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 98:
                                __freed_obj__ = 0;
                                c_270=8;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1866))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 92:
                                __freed_obj__ = 0;
                                c_270=92;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1871))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 48:
                                __freed_obj__ = 0;
                                c_270=0;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1876))->p++;
                                __freed_obj__ = 0;
                                if(_if_conditional320=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1888))->p),                                __freed_obj__ = 0, 
                                _if_conditional320) {
                                    n_272=0;
                                    __freed_obj__ = 0;
                                    while(_while_condtional20=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1886))->p),                                    __freed_obj__ = 0, 
                                    _while_condtional20) {
                                        n_272=n_272*8+*((struct sInfo*)come_null_check(info, "06str.c", 1881))->p-48;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1882))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    c_270=n_272;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 120:
                                __freed_obj__ = 0;
                                case 88:
                                __freed_obj__ = 0;
                                {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1892))->p++;
                                    __freed_obj__ = 0;
                                    char buf_273[128];
                                    memset(&buf_273, 0, sizeof(char)                                    *(128)                                    );
                                    __freed_obj__ = 0;
                                    strncpy(buf_273,"0x",128);
                                    __freed_obj__ = 0;
                                    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional21) {
                                        char buf2_274[2];
                                        memset(&buf2_274, 0, sizeof(char)                                        *(2)                                        );
                                        __freed_obj__ = 0;
                                        buf2_274[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1898))->p;
                                        __freed_obj__ = 0;
                                        buf2_274[1]=0;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1900))->p++;
                                        __freed_obj__ = 0;
                                        strncat(buf_273,buf2_274,128);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    n_275=strtoll(buf_273,((void*)0),0);
                                    __freed_obj__ = 0;
                                    c_270=n_275;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                default:
                                __freed_obj__ = 0;
                                c_270=*((struct sInfo*)come_null_check(info, "06str.c", 1911))->p;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1912))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        c_270=*((struct sInfo*)come_null_check(info, "06str.c", 1918))->p;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1919))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional321=*((struct sInfo*)come_null_check(info, "06str.c", 1932))->p!=39,                    __freed_obj__ = 0, 
                    _if_conditional321) {
                        err_msg(info,"close \' to make character value");
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1926))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1930);
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value486=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value485=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1930)))),c_270,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result178__ = __result_obj__ = ((struct sNode*)(right_value489=_inf_value6));
                        if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result178__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional327=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==39,                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1935))->p+=2;
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        if(_if_conditional328=*((struct sInfo*)come_null_check(info, "06str.c", 2057))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional328) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1940))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional329=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2021))->p),                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                n_278=0;
                                __freed_obj__ = 0;
                                while(_while_condtional22=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1949))->p),                                __freed_obj__ = 0, 
                                _while_condtional22) {
                                    n_278=n_278*8+*((struct sInfo*)come_null_check(info, "06str.c", 1945))->p-48;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1946))->p++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                c_277=n_278;
                                __freed_obj__ = 0;
                            }
                            else {
                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2020))->p) {
                                    case 110:
                                    __freed_obj__ = 0;
                                    c_277=10;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1955))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 116:
                                    __freed_obj__ = 0;
                                    c_277=9;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1960))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 114:
                                    __freed_obj__ = 0;
                                    c_277=13;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1965))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 97:
                                    __freed_obj__ = 0;
                                    c_277=7;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1970))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 92:
                                    __freed_obj__ = 0;
                                    c_277=92;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1975))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 48:
                                    __freed_obj__ = 0;
                                    c_277=0;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1981))->p++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional330=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1993))->p),                                    __freed_obj__ = 0, 
                                    _if_conditional330) {
                                        n_279=0;
                                        __freed_obj__ = 0;
                                        while(_while_condtional23=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1991))->p),                                        __freed_obj__ = 0, 
                                        _while_condtional23) {
                                            n_279=n_279*8+*((struct sInfo*)come_null_check(info, "06str.c", 1986))->p-48;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1987))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        c_277=n_279;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 120:
                                    __freed_obj__ = 0;
                                    case 88:
                                    __freed_obj__ = 0;
                                    {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1997))->p++;
                                        __freed_obj__ = 0;
                                        char buf_280[128];
                                        memset(&buf_280, 0, sizeof(char)                                        *(128)                                        );
                                        __freed_obj__ = 0;
                                        strncpy(buf_280,"0x",128);
                                        __freed_obj__ = 0;
                                        while(_while_condtional24=*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=70,                                        __freed_obj__ = 0, 
                                        _while_condtional24) {
                                            char buf2_281[2];
                                            memset(&buf2_281, 0, sizeof(char)                                            *(2)                                            );
                                            __freed_obj__ = 0;
                                            buf2_281[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2003))->p;
                                            __freed_obj__ = 0;
                                            buf2_281[1]=0;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2005))->p++;
                                            __freed_obj__ = 0;
                                            strncat(buf_280,buf2_281,128);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        n_282=strtoll(buf_280,((void*)0),0);
                                        __freed_obj__ = 0;
                                        c_277=n_282;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    default:
                                    __freed_obj__ = 0;
                                    c_277=*((struct sInfo*)come_null_check(info, "06str.c", 2016))->p;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2017))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            p2_283=*(unsigned char*)((struct sInfo*)come_null_check(info, "06str.c", 2023))->p;
                            __freed_obj__ = 0;
                            if(_if_conditional331=p2_283>127,                            __freed_obj__ = 0, 
                            _if_conditional331) {
                                __freed_obj__ = 0;
                                char str_285[16+1];
                                memset(&str_285, 0, sizeof(char)                                *(16+1)                                );
                                __freed_obj__ = 0;
                                size_284=((p2_283&128)>>7)+((p2_283&64)>>6)+((p2_283&32)>>5)+((p2_283&16)>>4);
                                __freed_obj__ = 0;
                                if(_if_conditional332=size_284>16,                                __freed_obj__ = 0, 
                                _if_conditional332) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2034))->err_num++;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    memcpy(str_285,((struct sInfo*)come_null_check(info, "06str.c", 2037))->p,size_284);
                                    __freed_obj__ = 0;
                                    str_285[size_284]=0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional333=mbtowc(&c_277,str_285,size_284)<0,                                    __freed_obj__ = 0, 
                                    _if_conditional333) {
                                        perror("mbtowc");
                                        __freed_obj__ = 0;
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2043))->err_num++;
                                        __freed_obj__ = 0;
                                        c_277=0;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2047))->p+=size_284;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                c_277=*((struct sInfo*)come_null_check(info, "06str.c", 2052))->p;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 2053))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional334=*((struct sInfo*)come_null_check(info, "06str.c", 2068))->p!=39,                        __freed_obj__ = 0, 
                        _if_conditional334) {
                            err_msg(info,"close \' to make character value");
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 2059))->err_num++;
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "06str.c", 2062))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2066);
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value491=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value490=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2066)))),c_277,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result181__ = __result_obj__ = ((struct sNode*)(right_value494=_inf_value7));
                            if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result181__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional340=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34,                        __freed_obj__ = 0, 
                        _if_conditional340) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 2071))->p+=2;
                            __freed_obj__ = 0;
                            sline_287=((struct sInfo*)come_null_check(info, "06str.c", 2073))->sline;
                            __freed_obj__ = 0;
                            value_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value496=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value495=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2075))))))));
                            if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            __freed_obj__ = 0, 
                            _while_condtional25) {
                                if(_if_conditional341=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==34,                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2079))->p++;
                                    __freed_obj__ = 0;
                                    p_289=((struct sInfo*)come_null_check(info, "06str.c", 2081))->p;
                                    __freed_obj__ = 0;
                                    sline_290=((struct sInfo*)come_null_check(info, "06str.c", 2082))->sline;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    if(_if_conditional342=*((struct sInfo*)come_null_check(info, "06str.c", 2094))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional342) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2087))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2090))->p=p_289;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2091))->sline=sline_290;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional343=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==92,                                    __freed_obj__ = 0, 
                                    _if_conditional343) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2096))->p++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional344=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p),                                        __freed_obj__ = 0, 
                                        _if_conditional344) {
                                            len_291=0;
                                            __freed_obj__ = 0;
                                            n_292=0;
                                            __freed_obj__ = 0;
                                            while(_while_condtional26=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2107))->p)&&len_291<3,                                            __freed_obj__ = 0, 
                                            _while_condtional26) {
                                                n_292=n_292*8+*((struct sInfo*)come_null_check(info, "06str.c", 2102))->p-48;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2103))->p++;
                                                __freed_obj__ = 0;
                                                len_291++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2107)),n_292);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional345=*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==88,                                            __freed_obj__ = 0, 
                                            _if_conditional345) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2110))->p++;
                                                __freed_obj__ = 0;
                                                char buf_293[128];
                                                memset(&buf_293, 0, sizeof(char)                                                *(128)                                                );
                                                __freed_obj__ = 0;
                                                strncpy(buf_293,"0x",128);
                                                __freed_obj__ = 0;
                                                while(_while_condtional27=*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=70,                                                __freed_obj__ = 0, 
                                                _while_condtional27) {
                                                    char buf2_294[2];
                                                    memset(&buf2_294, 0, sizeof(char)                                                    *(2)                                                    );
                                                    __freed_obj__ = 0;
                                                    buf2_294[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2116))->p;
                                                    __freed_obj__ = 0;
                                                    buf2_294[1]=0;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2118))->p++;
                                                    __freed_obj__ = 0;
                                                    strncat(buf_293,buf2_294,128);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                n_296=strtoll(buf_293,((void*)0),0);
                                                __freed_obj__ = 0;
                                                buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2124)),(char)n_296);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2178))->p) {
                                                    case 48:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2129)),0);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2130))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 110:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2134)),10);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2135))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 116:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2139)),9);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2140))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 114:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2144)),13);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2145))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 118:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2149)),11);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2150))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 102:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2154)),12);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2155))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 97:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2159)),7);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2160))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 98:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2164)),8);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2165))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 92:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2169)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2170))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    default:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2174)),*((struct sInfo*)come_null_check(info, "06str.c", 2174))->p);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2175))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional346=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional346) {
                                            sline2_297=((struct sInfo*)come_null_check(info, "06str.c", 2181))->sline;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2182))->sline=sline_287;
                                            __freed_obj__ = 0;
                                            err_msg(info,"close \" to make c string value");
                                            __freed_obj__ = 0;
                                            exit(2);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional347=*((struct sInfo*)come_null_check(info, "06str.c", 2187))->p==10,                                            __freed_obj__ = 0, 
                                            _if_conditional347) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2187))->sline++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_288, "06str.c", 2189)),*((struct sInfo*)come_null_check(info, "06str.c", 2189))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2190))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            len_298=((struct buffer*)come_null_check(value_288, "06str.c", 2196))->len;
                            __freed_obj__ = 0;
                            wstr_299=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value497=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_298+1)), "06str.c", 2198))));
                            if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            str_300=((struct buffer*)come_null_check(value_288, "06str.c", 2200))->buf;
                            __freed_obj__ = 0;
                            if(_if_conditional348=mbstowcs(wstr_299,str_300,len_298+1)<0,                            __freed_obj__ = 0, 
                            _if_conditional348) {
                                perror("mbstowcs");
                                __freed_obj__ = 0;
                                exit(1);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            wstr_299[len_298]=0;
                            __freed_obj__ = 0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2209);
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value499=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value498=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2209)))),(unsigned int*)come_increment_ref_count(wstr_299),sline_287,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result184__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value8));
                            if(value_288 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_299 && !__freed_obj__) { wstr_299 = come_decrement_ref_count(wstr_299, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result184__;
                            __freed_obj__ = 0;
                            if(value_288 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_299 && !__freed_obj__) { wstr_299 = come_decrement_ref_count(wstr_299, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional355=(*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==115||*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==83)&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34,                            __freed_obj__ = 0, 
                            _if_conditional355) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 2213))->p+=2;
                                __freed_obj__ = 0;
                                sline_302=((struct sInfo*)come_null_check(info, "06str.c", 2215))->sline;
                                __freed_obj__ = 0;
                                exps_303=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value505=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value504=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2217))))))));
                                if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                value_304=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value507=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value506=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2218))))))));
                                if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                __freed_obj__ = 0, 
                                _while_condtional28) {
                                    if(_if_conditional356=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional356) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2222))->p++;
                                        __freed_obj__ = 0;
                                        p_305=((struct sInfo*)come_null_check(info, "06str.c", 2224))->p;
                                        __freed_obj__ = 0;
                                        sline_306=((struct sInfo*)come_null_check(info, "06str.c", 2225))->sline;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        if(_if_conditional357=*((struct sInfo*)come_null_check(info, "06str.c", 2237))->p==34,                                        __freed_obj__ = 0, 
                                        _if_conditional357) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2230))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2233))->p=p_305;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2234))->sline=sline_306;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional358=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==37,                                        __freed_obj__ = 0, 
                                        _if_conditional358) {
                                            buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2239)),37);
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2240)),37);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2241))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional359=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==36,                                            __freed_obj__ = 0, 
                                            _if_conditional359) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2244))->p++;
                                                __freed_obj__ = 0;
                                                exp_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=expression_v13(info))));
                                                if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_303, "06str.c", 2248)),(struct sNode*)come_increment_ref_count(exp_307));
                                                __freed_obj__ = 0;
                                                buffer_append_str(((struct buffer*)come_null_check(value_304, "06str.c", 2250)),"%s");
                                                __freed_obj__ = 0;
                                                if(exp_307 && !__freed_obj__) { exp_307 = come_decrement_ref_count(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional360=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==92,                                                __freed_obj__ = 0, 
                                                _if_conditional360) {
                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2253)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2254))->p++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional361=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p),                                                    __freed_obj__ = 0, 
                                                    _if_conditional361) {
                                                        len_308=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional29=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2263))->p)&&len_308<3,                                                        __freed_obj__ = 0, 
                                                        _while_condtional29) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2259)),*((struct sInfo*)come_null_check(info, "06str.c", 2259))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2260))->p++;
                                                            __freed_obj__ = 0;
                                                            len_308++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional362=*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==88,                                                        __freed_obj__ = 0, 
                                                        _if_conditional362) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2265)),*((struct sInfo*)come_null_check(info, "06str.c", 2265))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2266))->p++;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional30=*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=70,                                                            __freed_obj__ = 0, 
                                                            _while_condtional30) {
                                                                buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2269)),*((struct sInfo*)come_null_check(info, "06str.c", 2269))->p);
                                                                __freed_obj__ = 0;
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2270))->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional363=*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional363) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2274))->p++;
                                                                __freed_obj__ = 0;
                                                                exp_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=expression_v13(info))));
                                                                if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_303, "06str.c", 2278)),(struct sNode*)come_increment_ref_count(exp_309));
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional364=*((struct sInfo*)come_null_check(info, "06str.c", 2284))->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional364) {
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2281))->p++;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                buffer_append_str(((struct buffer*)come_null_check(value_304, "06str.c", 2284)),"%s");
                                                                __freed_obj__ = 0;
                                                                if(exp_309 && !__freed_obj__) { exp_309 = come_decrement_ref_count(exp_309, ((struct sNode*)exp_309)->finalize, ((struct sNode*)exp_309)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2338))->p) {
                                                                    case 48:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2289)),*((struct sInfo*)come_null_check(info, "06str.c", 2289))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2290))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 110:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2294)),*((struct sInfo*)come_null_check(info, "06str.c", 2294))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2295))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 116:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2299)),*((struct sInfo*)come_null_check(info, "06str.c", 2299))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2300))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 114:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2304)),*((struct sInfo*)come_null_check(info, "06str.c", 2304))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2305))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 118:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2309)),*((struct sInfo*)come_null_check(info, "06str.c", 2309))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2310))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 102:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2314)),*((struct sInfo*)come_null_check(info, "06str.c", 2314))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2315))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 97:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2319)),*((struct sInfo*)come_null_check(info, "06str.c", 2319))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2320))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 98:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2324)),*((struct sInfo*)come_null_check(info, "06str.c", 2324))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2325))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 92:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2329)),*((struct sInfo*)come_null_check(info, "06str.c", 2329))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2330))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    default:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2334)),*((struct sInfo*)come_null_check(info, "06str.c", 2334))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2335))->p++;
                                                                    __freed_obj__ = 0;
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
                                                else {
                                                    if(_if_conditional365=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional365) {
                                                        sline2_310=((struct sInfo*)come_null_check(info, "06str.c", 2341))->sline;
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2342))->sline=sline_302;
                                                        __freed_obj__ = 0;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional366=*((struct sInfo*)come_null_check(info, "06str.c", 2347))->p==10,                                                        __freed_obj__ = 0, 
                                                        _if_conditional366) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2347))->sline++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        buffer_append_char(((struct buffer*)come_null_check(value_304, "06str.c", 2349)),*((struct sInfo*)come_null_check(info, "06str.c", 2349))->p);
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2350))->p++;
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
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2356);
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value512=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value510=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2356)))),(char*)come_increment_ref_count(((char*)(right_value511=buffer_to_string(((struct buffer*)come_null_check(value_304, "06str.c", 2356)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_303),sline_302,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result187__ = __result_obj__ = ((struct sNode*)(right_value517=_inf_value9));
                                if(exps_303 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_303, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_304 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result187__;
                                __freed_obj__ = 0;
                                if(exps_303 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_303, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_304 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional375=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==91,                                __freed_obj__ = 0, 
                                _if_conditional375) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2359))->p++;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    p_312=((struct sInfo*)come_null_check(info, "06str.c", 2362))->p;
                                    __freed_obj__ = 0;
                                    no_comma_313=((struct sInfo*)come_null_check(info, "06str.c", 2364))->no_comma;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2365))->no_comma=(_Bool)1;
                                    __freed_obj__ = 0;
                                    node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=expression_v13(info))));
                                    if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2369))->no_comma=no_comma_313;
                                    __freed_obj__ = 0;
                                    p2_315=((struct sInfo*)come_null_check(info, "06str.c", 2371))->p;
                                    __freed_obj__ = 0;
                                    first_element_source_316=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value520=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value519=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2373))))))));
                                    if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    buffer_append(((struct buffer*)come_null_check(first_element_source_316, "06str.c", 2375)),p_312,p2_315-p_312);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(first_element_source_316, "06str.c", 2376)),0);
                                    __freed_obj__ = 0;
                                    list_elements_317=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value522=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value521=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2378))))))));
                                    if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    map_keys_318=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value524=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value523=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2380))))))));
                                    if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    map_elements_319=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value526=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value525=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2381))))))));
                                    if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional376=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==58,                                    __freed_obj__ = 0, 
                                    _if_conditional376) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2385))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_318, "06str.c", 2388)),(struct sNode*)come_increment_ref_count(node_314));
                                        __freed_obj__ = 0;
                                        no_comma_320=((struct sInfo*)come_null_check(info, "06str.c", 2390))->no_comma;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2391))->no_comma=(_Bool)1;
                                        __freed_obj__ = 0;
                                        node2_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=expression_v13(info))));
                                        if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2395))->no_comma=no_comma_320;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_319, "06str.c", 2397)),(struct sNode*)come_increment_ref_count(node2_321));
                                        __freed_obj__ = 0;
                                        if(_if_conditional377=*((struct sInfo*)come_null_check(info, "06str.c", 2450))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional377) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2400))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2403);
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value529=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value528=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2403)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_318),(struct list$1sNodeph*)come_increment_ref_count(map_elements_319),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result190__ = __result_obj__ = ((struct sNode*)(right_value534=_inf_value10));
                                            if(node2_321 && !__freed_obj__) { node2_321 = come_decrement_ref_count(node2_321, ((struct sNode*)node2_321)->finalize, ((struct sNode*)node2_321)->_protocol_obj, 0, 0, 0); } 
                                            if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_316, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_317 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result190__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            come_clear_stackframe();
                                            optional$2intbool_value((come_push_stackframe("06str.c", 2406),((struct optional$2intbool*)(right_value535=expected_next_character(44,info)))));
                                            come_pop_stackframe();
                                            if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            while(_while_condtional31=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional31) {
                                                no_comma_324=((struct sInfo*)come_null_check(info, "06str.c", 2409))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2410))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node2_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=expression_v13(info))));
                                                if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { right_value536 = come_decrement_ref_count(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2414))->no_comma=no_comma_324;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_318, "06str.c", 2416)),(struct sNode*)come_increment_ref_count(node2_325));
                                                __freed_obj__ = 0;
                                                come_clear_stackframe();
                                                optional$2intbool_value((come_push_stackframe("06str.c", 2418),((struct optional$2intbool*)(right_value537=expected_next_character(58,info)))));
                                                if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                no_comma_324=((struct sInfo*)come_null_check(info, "06str.c", 2420))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2421))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node3_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value538=expression_v13(info))));
                                                if(right_value538 && right_value538 != __result_obj__ && !__freed_obj__) { right_value538 = come_decrement_ref_count(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2425))->no_comma=no_comma_324;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_319, "06str.c", 2427)),(struct sNode*)come_increment_ref_count(node3_326));
                                                __freed_obj__ = 0;
                                                if(_if_conditional387=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==0,                                                __freed_obj__ = 0, 
                                                _if_conditional387) {
                                                    err_msg(info,"invalid source end");
                                                    __freed_obj__ = 0;
                                                    exit(2);
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional388=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==44,                                                    __freed_obj__ = 0, 
                                                    _if_conditional388) {
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2434))->p++;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional389=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==93,                                                        __freed_obj__ = 0, 
                                                        _if_conditional389) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2438))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            if(node2_325 && !__freed_obj__) { node2_325 = come_decrement_ref_count(node2_325, ((struct sNode*)node2_325)->finalize, ((struct sNode*)node2_325)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_326 && !__freed_obj__) { node3_326 = come_decrement_ref_count(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*((struct sInfo*)come_null_check(info, "06str.c", 2443))->p);
                                                            __freed_obj__ = 0;
                                                            exit(2);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(node2_325 && !__freed_obj__) { node2_325 = come_decrement_ref_count(node2_325, ((struct sNode*)node2_325)->finalize, ((struct sNode*)node2_325)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_326 && !__freed_obj__) { node3_326 = come_decrement_ref_count(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            __freed_obj__ = 0;
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2448);
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value540=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value539=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2448)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_318),(struct list$1sNodeph*)come_increment_ref_count(map_elements_319),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result195__ = __result_obj__ = ((struct sNode*)(right_value545=_inf_value11));
                                            if(node2_321 && !__freed_obj__) { node2_321 = come_decrement_ref_count(node2_321, ((struct sNode*)node2_321)->finalize, ((struct sNode*)node2_321)->_protocol_obj, 0, 0, 0); } 
                                            if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_316, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_317 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result195__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(node2_321 && !__freed_obj__) { node2_321 = come_decrement_ref_count(node2_321, ((struct sNode*)node2_321)->finalize, ((struct sNode*)node2_321)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional398=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional398) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2453))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_317, "06str.c", 2456)),(struct sNode*)come_increment_ref_count(node_314));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional399=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==44,                                            __freed_obj__ = 0, 
                                            _if_conditional399) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2459))->p++;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_317, "06str.c", 2462)),(struct sNode*)come_increment_ref_count(node_314));
                                                __freed_obj__ = 0;
                                                while(_while_condtional32=(_Bool)1,                                                __freed_obj__ = 0, 
                                                _while_condtional32) {
                                                    no_comma_328=((struct sInfo*)come_null_check(info, "06str.c", 2465))->no_comma;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2466))->no_comma=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    node2_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=expression_v13(info))));
                                                    if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { right_value546 = come_decrement_ref_count(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2470))->no_comma=no_comma_328;
                                                    __freed_obj__ = 0;
                                                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_317, "06str.c", 2472)),(struct sNode*)come_increment_ref_count(node2_329));
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional400=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional400) {
                                                        err_msg(info,"invalid source end");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional401=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==44,                                                        __freed_obj__ = 0, 
                                                        _if_conditional401) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2479))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional402=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==93,                                                            __freed_obj__ = 0, 
                                                            _if_conditional402) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2483))->p++;
                                                                __freed_obj__ = 0;
                                                                skip_spaces_and_lf(info);
                                                                __freed_obj__ = 0;
                                                                if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*((struct sInfo*)come_null_check(info, "06str.c", 2488))->p);
                                                                __freed_obj__ = 0;
                                                                exit(2);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*((struct sInfo*)come_null_check(info, "06str.c", 2494))->p);
                                                __freed_obj__ = 0;
                                                exit(2);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional403=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(list_elements_317, "06str.c", 2503)))>0,                                    __freed_obj__ = 0, 
                                    _if_conditional403) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2499);
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value548=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value547=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2499)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_317),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result198__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value12));
                                        if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_316, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_317 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result198__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                    }
                                    __freed_obj__ = 0;
                                    if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_316, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_317 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    ((struct sNode*)(right_value553=expression_node_v1(info)));
                                    if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { right_value553 = come_decrement_ref_count(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0); } 
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
    __result199__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result199__;
    __freed_obj__ = 0;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional297=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional297) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional298=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional298) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional299;
struct sStrNode* __result170__;
void* right_value472;
struct sStrNode* result_264;
_Bool _if_conditional300;
void* right_value473;
char* __dec_obj173;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value474;
char* __dec_obj174;
struct sStrNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value472, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sStrNode*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
                if(_if_conditional299=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional299) {
                    __result170__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result170__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_264=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value472=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional300=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional300) {
                    __dec_obj173=((struct sStrNode*)come_null_check(result_264, "sStrNode_clone", 4))->value;
                    ((struct sStrNode*)come_null_check(result_264, "sStrNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4))->value))));
                    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                    if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { right_value473 = come_decrement_ref_count(right_value473, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional301=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional301) {
                    ((struct sStrNode*)come_null_check(result_264, "sStrNode_clone", 5))->sline=((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional302=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional302) {
                    __dec_obj174=((struct sStrNode*)come_null_check(result_264, "sStrNode_clone", 6))->sname;
                    ((struct sStrNode*)come_null_check(result_264, "sStrNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value474=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6))->sname))));
                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                    if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result171__ = __result_obj__ = result_264;
                if(result_264 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result171__;
                __freed_obj__ = 0;
                if(result_264 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional309=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional309) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional310=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional310) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional311;
struct sRegexNode* __result173__;
void* right_value481;
struct sRegexNode* result_269;
_Bool _if_conditional312;
void* right_value482;
char* __dec_obj175;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value483;
char* __dec_obj176;
struct sRegexNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value481, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sRegexNode*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
                    if(_if_conditional311=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        __result173__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result173__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_269=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value481=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional312=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        __dec_obj175=((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 4))->str;
                        ((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 4))->str=(char*)come_increment_ref_count(((char*)(right_value482=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4))->str))));
                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0,0); }
                        if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional313=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        ((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 5))->global=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->global;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional314=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        ((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 6))->ignore_case=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6))->ignore_case;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional315=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional315) {
                        ((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 7))->sline=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional316=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional316) {
                        __dec_obj176=((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 8))->sname;
                        ((struct sRegexNode*)come_null_check(result_269, "sRegexNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8))->sname))));
                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0,0); }
                        if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result174__ = __result_obj__ = result_269;
                    if(result_269 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result174__;
                    __freed_obj__ = 0;
                    if(result_269 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional322=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 1))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional322) {
                                if(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional323;
struct sCharNode* __result176__;
void* right_value487;
struct sCharNode* result_276;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value488;
char* __dec_obj177;
struct sCharNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value487, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sCharNode*));
memset(&right_value488, 0, sizeof(void*));
                            if(_if_conditional323=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional323) {
                                __result176__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result176__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_276=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value487=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional324=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional324) {
                                ((struct sCharNode*)come_null_check(result_276, "sCharNode_clone", 4))->value=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 4))->value;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional325=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional325) {
                                ((struct sCharNode*)come_null_check(result_276, "sCharNode_clone", 5))->sline=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional326=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional326) {
                                __dec_obj177=((struct sCharNode*)come_null_check(result_276, "sCharNode_clone", 6))->sname;
                                ((struct sCharNode*)come_null_check(result_276, "sCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value488=string_clone(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6))->sname))));
                                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result177__ = __result_obj__ = result_276;
                            if(result_276 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result177__;
                            __freed_obj__ = 0;
                            if(result_276 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional335=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 1))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional335) {
                                    if(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional336;
struct sWCharNode* __result179__;
void* right_value492;
struct sWCharNode* result_286;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value493;
char* __dec_obj178;
struct sWCharNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value492, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sWCharNode*));
memset(&right_value493, 0, sizeof(void*));
                                if(_if_conditional336=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional336) {
                                    __result179__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result179__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_286=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value492=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional337=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional337) {
                                    ((struct sWCharNode*)come_null_check(result_286, "sWCharNode_clone", 4))->value=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 4))->value;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional338=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional338) {
                                    ((struct sWCharNode*)come_null_check(result_286, "sWCharNode_clone", 5))->sline=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional339=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    __dec_obj178=((struct sWCharNode*)come_null_check(result_286, "sWCharNode_clone", 6))->sname;
                                    ((struct sWCharNode*)come_null_check(result_286, "sWCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value493=string_clone(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6))->sname))));
                                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result180__ = __result_obj__ = result_286;
                                if(result_286 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result180__;
                                __freed_obj__ = 0;
                                if(result_286 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional349=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional349) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional350=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 2))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional350) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional351;
struct sWStringNode* __result182__;
void* right_value500;
struct sWStringNode* result_301;
_Bool _if_conditional352;
void* right_value501;
unsigned int* __dec_obj179;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value502;
char* __dec_obj180;
struct sWStringNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value500, 0, sizeof(void*));
memset(&result_301, 0, sizeof(struct sWStringNode*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
                                if(_if_conditional351=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional351) {
                                    __result182__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result182__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_301=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value500=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional352=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional352) {
                                    __dec_obj179=((struct sWStringNode*)come_null_check(result_301, "sWStringNode_clone", 4))->value;
                                    ((struct sWStringNode*)come_null_check(result_301, "sWStringNode_clone", 4))->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value501=(unsigned int*)come_memdup(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4))->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { right_value501 = come_decrement_ref_count(right_value501, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional353=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional353) {
                                    ((struct sWStringNode*)come_null_check(result_301, "sWStringNode_clone", 5))->sline=((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional354=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional354) {
                                    __dec_obj180=((struct sWStringNode*)come_null_check(result_301, "sWStringNode_clone", 6))->sname;
                                    ((struct sWStringNode*)come_null_check(result_301, "sWStringNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value502=string_clone(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6))->sname))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result183__ = __result_obj__ = result_301;
                                if(result_301 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result183__;
                                __freed_obj__ = 0;
                                if(result_301 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional367=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional367) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional368=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional368) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional369=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional369) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional370;
struct sSStringNode* __result185__;
void* right_value513;
struct sSStringNode* result_311;
_Bool _if_conditional371;
void* right_value514;
char* __dec_obj181;
_Bool _if_conditional372;
void* right_value515;
struct list$1sNodeph* __dec_obj182;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value516;
char* __dec_obj183;
struct sSStringNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value513, 0, sizeof(void*));
memset(&result_311, 0, sizeof(struct sSStringNode*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
                                    if(_if_conditional370=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional370) {
                                        __result185__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result185__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_311=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value513=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional371=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional371) {
                                        __dec_obj181=((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 4))->value;
                                        ((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value514=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4))->value))));
                                        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional372=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional372) {
                                        __dec_obj182=((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 5))->exps;
                                        ((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 5))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value515=list$1sNodephp_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->exps))));
                                        if(__dec_obj182) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj182, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional373=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional373) {
                                        ((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 6))->sline=((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional374=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 8))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional374) {
                                        __dec_obj183=((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 7))->sname;
                                        ((struct sSStringNode*)come_null_check(result_311, "sSStringNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value516=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7))->sname))));
                                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result186__ = __result_obj__ = result_311;
                                    if(result_311 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_311, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result186__;
                                    __freed_obj__ = 0;
                                    if(result_311 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_311, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional386;
int default_value_323;
int __result191__;
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_323, 0, sizeof(int));
                                                if(_if_conditional386=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional386) {
                                                    __freed_obj__ = 0;
                                                    memset(&default_value_323,0,sizeof(int));
                                                    __freed_obj__ = 0;
                                                    __result191__ = default_value_323;
                                                    __freed_obj__ = 0;
                                                    return __result191__;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    __result192__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                    __freed_obj__ = 0;
                                                    return __result192__;
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

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional390=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional390) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional391=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional391) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional392=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 3))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional392) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional393;
struct sMapNode* __result193__;
void* right_value541;
struct sMapNode* result_327;
_Bool _if_conditional394;
void* right_value542;
struct list$1sNodeph* __dec_obj187;
_Bool _if_conditional395;
void* right_value543;
struct list$1sNodeph* __dec_obj188;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value544;
char* __dec_obj189;
struct sMapNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value541, 0, sizeof(void*));
memset(&result_327, 0, sizeof(struct sMapNode*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
                                                if(_if_conditional393=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional393) {
                                                    __result193__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result193__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_327=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value541=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                if(_if_conditional394=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional394) {
                                                    __dec_obj187=((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 4))->map_key_elements;
                                                    ((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 4))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value542=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4))->map_key_elements))));
                                                    if(__dec_obj187) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional395=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional395) {
                                                    __dec_obj188=((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 5))->map_elements;
                                                    ((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 5))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value543=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_elements))));
                                                    if(__dec_obj188) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj188, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional396=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional396) {
                                                    ((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 6))->sline=((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional397=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 8))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional397) {
                                                    __dec_obj189=((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 7))->sname;
                                                    ((struct sMapNode*)come_null_check(result_327, "sMapNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value544=string_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7))->sname))));
                                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                                                    if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { right_value544 = come_decrement_ref_count(right_value544, (void*)0, (void*)0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result194__ = __result_obj__ = result_327;
                                                if(result_327 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result194__;
                                                __freed_obj__ = 0;
                                                if(result_327 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional404;
_Bool _if_conditional405;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional404=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional404) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional405=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 2))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional405) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname && !__freed_obj__) { ((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname = come_decrement_ref_count(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional406;
struct sListNode* __result196__;
void* right_value549;
struct sListNode* result_330;
_Bool _if_conditional407;
void* right_value550;
struct list$1sNodeph* __dec_obj190;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value551;
char* __dec_obj191;
struct sListNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value549, 0, sizeof(void*));
memset(&result_330, 0, sizeof(struct sListNode*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
                                            if(_if_conditional406=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional406) {
                                                __result196__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result196__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_330=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value549=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional407=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional407) {
                                                __dec_obj190=((struct sListNode*)come_null_check(result_330, "sListNode_clone", 4))->list_elements;
                                                ((struct sListNode*)come_null_check(result_330, "sListNode_clone", 4))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value550=list$1sNodephp_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 4))->list_elements))));
                                                if(__dec_obj190) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional408=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional408) {
                                                ((struct sListNode*)come_null_check(result_330, "sListNode_clone", 5))->sline=((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional409=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 7))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional409) {
                                                __dec_obj191=((struct sListNode*)come_null_check(result_330, "sListNode_clone", 6))->sname;
                                                ((struct sListNode*)come_null_check(result_330, "sListNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value551=string_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 6))->sname))));
                                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { right_value551 = come_decrement_ref_count(right_value551, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result197__ = __result_obj__ = result_330;
                                            if(result_330 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result197__;
                                            __freed_obj__ = 0;
                                            if(result_330 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value554;
void* right_value555;
struct list$1sNodeph* tuple_elements_331;
_Bool _while_condtional33;
char* p_332;
_Bool no_comma_333;
void* right_value556;
struct sNode* node_334;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value557;
void* right_value558;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value562;
struct sNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&tuple_elements_331, 0, sizeof(struct list$1sNodeph*));
memset(&p_332, 0, sizeof(char*));
memset(&no_comma_333, 0, sizeof(_Bool));
memset(&right_value556, 0, sizeof(void*));
memset(&node_334, 0, sizeof(struct sNode*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
    tuple_elements_331=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value555=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value554=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2513))))))));
    if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional33=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional33) {
        p_332=((struct sInfo*)come_null_check(info, "06str.c", 2515))->p;
        __freed_obj__ = 0;
        no_comma_333=((struct sInfo*)come_null_check(info, "06str.c", 2517))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2518))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=expression_v13(info))));
        if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2522))->no_comma=no_comma_333;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(tuple_elements_331, "06str.c", 2524)),(struct sNode*)come_increment_ref_count(node_334));
        __freed_obj__ = 0;
        if(_if_conditional410=*((struct sInfo*)come_null_check(info, "06str.c", 2539))->p==44,        __freed_obj__ = 0, 
        _if_conditional410) {
            ((struct sInfo*)come_null_check(info, "06str.c", 2527))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional411=*((struct sInfo*)come_null_check(info, "06str.c", 2539))->p==41,            __freed_obj__ = 0, 
            _if_conditional411) {
                ((struct sInfo*)come_null_check(info, "06str.c", 2531))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0); } 
                break;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*((struct sInfo*)come_null_check(info, "06str.c", 2536))->p);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2541);
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value558=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value557=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2541)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_331),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result202__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value13));
    if(tuple_elements_331 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_331, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result202__;
    __freed_obj__ = 0;
    if(tuple_elements_331 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_331, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional412=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional412) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional413=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional413) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname && !__freed_obj__) { ((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname = come_decrement_ref_count(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional414;
struct sTupleNode* __result200__;
void* right_value559;
struct sTupleNode* result_335;
_Bool _if_conditional415;
void* right_value560;
struct list$1sNodeph* __dec_obj192;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value561;
char* __dec_obj193;
struct sTupleNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value559, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sTupleNode*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
        if(_if_conditional414=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional414) {
            __result200__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result200__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_335=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value559=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional415=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional415) {
            __dec_obj192=((struct sTupleNode*)come_null_check(result_335, "sTupleNode_clone", 4))->tuple_elements;
            ((struct sTupleNode*)come_null_check(result_335, "sTupleNode_clone", 4))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value560=list$1sNodephp_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4))->tuple_elements))));
            if(__dec_obj192) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional416=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional416) {
            ((struct sTupleNode*)come_null_check(result_335, "sTupleNode_clone", 5))->sline=((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            __dec_obj193=((struct sTupleNode*)come_null_check(result_335, "sTupleNode_clone", 6))->sname;
            ((struct sTupleNode*)come_null_check(result_335, "sTupleNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6))->sname))));
            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
            if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result201__ = __result_obj__ = result_335;
        if(result_335 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result201__;
        __freed_obj__ = 0;
        if(result_335 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0); }
}

