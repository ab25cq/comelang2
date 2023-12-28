// source head
typedef long int ptrdiff_t;
typedef long int size_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    long long __clang_max_align_nonce1;
    long double __clang_max_align_nonce2;
};
typedef struct anonymous_typeX1 max_align_t;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long int __uint64_t;
typedef long __intptr_t;
typedef unsigned long int __uintptr_t;
typedef char int8_t;
typedef unsigned char uint8_t;
typedef short short int16_t;
typedef unsigned short int uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long int64_t;
typedef unsigned long int uint64_t;
typedef long intptr_t;
typedef unsigned long int uintptr_t;
typedef char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short short int_least16_t;
typedef unsigned short int uint_least16_t;
typedef int int_least32_t;
typedef unsigned int uint_least32_t;
typedef long int_least64_t;
typedef unsigned long int uint_least64_t;
typedef char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef long int_fast64_t;
typedef unsigned long int uint_fast64_t;
typedef long int_fast16_t;
typedef unsigned long int uint_fast16_t;
typedef long int_fast32_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uintmax_t;
typedef long intmax_t;
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX2
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX2 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short int __kernel_old_uid_t;
typedef unsigned short int __kernel_old_gid_t;
typedef long __kernel_long_t;
typedef unsigned long int __kernel_ulong_t;
typedef unsigned long int __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned int __kernel_old_dev_t;
typedef unsigned long int __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct anonymous_typeX3
{
    int val[2];
};
typedef struct anonymous_typeX3 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short int __kernel_uid16_t;
typedef unsigned short int __kernel_gid16_t;
typedef unsigned short int __le16;
typedef unsigned short int __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short int __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct anonymous_typeX4
{
    unsigned int flags;
    void* stack_base;
    long int stack_size;
    long int guard_size;
    int sched_policy;
    int sched_priority;
    char __reserved[16];
};
typedef struct anonymous_typeX4 pthread_attr_t;
struct anonymous_typeX5
{
    long __private[4];
};
typedef struct anonymous_typeX5 pthread_barrier_t;
typedef int pthread_barrierattr_t;
struct anonymous_typeX6
{
    int __private[12];
};
typedef struct anonymous_typeX6 pthread_cond_t;
typedef long pthread_condattr_t;
typedef int pthread_key_t;
struct anonymous_typeX7
{
    int __private[10];
};
typedef struct anonymous_typeX7 pthread_mutex_t;
typedef long pthread_mutexattr_t;
typedef int pthread_once_t;
struct anonymous_typeX8
{
    int __private[14];
};
typedef struct anonymous_typeX8 pthread_rwlock_t;
typedef long pthread_rwlockattr_t;
struct anonymous_typeX9
{
    long __private;
};
typedef struct anonymous_typeX9 pthread_spinlock_t;
typedef long pthread_t;
typedef unsigned int __gid_t;
typedef unsigned int gid_t;
typedef unsigned int __uid_t;
typedef unsigned int uid_t;
typedef int __pid_t;
typedef int pid_t;
typedef unsigned int __id_t;
typedef unsigned int id_t;
typedef unsigned long int blkcnt_t;
typedef unsigned long int blksize_t;
typedef char* caddr_t;
typedef long clock_t;
typedef int __clockid_t;
typedef int clockid_t;
typedef int daddr_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef unsigned int __mode_t;
typedef unsigned int mode_t;
typedef int __key_t;
typedef int key_t;
typedef unsigned long int __ino_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned int __nlink_t;
typedef unsigned int nlink_t;
typedef void* __timer_t;
typedef void* timer_t;
typedef long __suseconds_t;
typedef long suseconds_t;
typedef unsigned int __useconds_t;
typedef unsigned int useconds_t;
typedef unsigned long int dev_t;
typedef long __time_t;
typedef long time_t;
typedef long off_t;
typedef long loff_t;
typedef long off64_t;
typedef unsigned int __socklen_t;
typedef unsigned int socklen_t;
typedef __builtin_va_list __va_list;
typedef long ssize_t;
typedef unsigned int uint_t;
typedef unsigned int uint;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef unsigned int u_int32_t;
typedef unsigned short int u_int16_t;
typedef unsigned char u_int8_t;
typedef unsigned long int u_int64_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __builtin_va_list va_list;
struct __locale_t;
typedef struct __locale_t* locale_t;
struct flock
{
    short short l_type;
    short short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};
struct flock64
{
    short short l_type;
    short short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};
struct f_owner_ex
{
    int type;
    int pid;
};
typedef long fpos_t;
typedef long fpos64_t;
struct __sFILE;
typedef struct __sFILE FILE;
extern struct __sFILE* stdin;
extern struct __sFILE* stdout;
extern struct __sFILE* stderr;
struct mallinfo
{
    long int arena;
    long int ordblks;
    long int smblks;
    long int hblks;
    long int hblkhd;
    long int usmblks;
    long int fsmblks;
    long int uordblks;
    long int fordblks;
    long int keepcost;
};
struct mallinfo2
{
    long int arena;
    long int ordblks;
    long int smblks;
    long int hblks;
    long int hblkhd;
    long int usmblks;
    long int fsmblks;
    long int uordblks;
    long int fordblks;
    long int keepcost;
};
enum HeapTaggingLevel { M_HEAP_TAGGING_LEVEL_NONE=0,
M_HEAP_TAGGING_LEVEL_TBI=1,
M_HEAP_TAGGING_LEVEL_ASYNC=2,
M_HEAP_TAGGING_LEVEL_SYNC=3
};
struct anonymous_typeX10
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX10 div_t;
struct anonymous_typeX11
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX11 ldiv_t;
struct anonymous_typeX12
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX12 lldiv_t;
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
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
struct __kernel_timespec
{
    long long tv_sec;
    long long tv_nsec;
};
struct __kernel_itimerspec
{
    struct __kernel_timespec it_interval;
    struct __kernel_timespec it_value;
};
struct __kernel_old_timespec
{
    long tv_sec;
    long tv_nsec;
};
struct __kernel_sock_timeval
{
    long long tv_sec;
    long long tv_usec;
};
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};
struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};
struct sigcontext
{
    unsigned long long fault_address;
    unsigned long long regs[31];
    unsigned long long sp;
    unsigned long long pc;
    unsigned long long pstate;
    unsigned char __reserved[4096];
};
struct _aarch64_ctx
{
    unsigned int magic;
    unsigned int size;
};
struct fpsimd_context
{
    struct _aarch64_ctx head;
    unsigned int fpsr;
    unsigned int fpcr;
    __uint128_t vregs[32];
};
struct esr_context
{
    struct _aarch64_ctx head;
    unsigned long long esr;
};
struct extra_context
{
    struct _aarch64_ctx head;
    unsigned long long datap;
    unsigned int size;
    unsigned int __reserved[3];
};
struct sve_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int flags;
    unsigned short int __reserved[2];
};
struct tpidr2_context
{
    struct _aarch64_ctx head;
    unsigned long long tpidr2;
};
struct za_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int __reserved[3];
};
struct zt_context
{
    struct _aarch64_ctx head;
    unsigned short int nregs;
    unsigned short int __reserved[3];
};
struct anonymous_typeX13
{
    unsigned long int sig[(64/64)];
};
typedef struct anonymous_typeX13 sigset_t;
typedef unsigned long int old_sigset_t;
typedef void (*__signalfn_t)(int);
typedef void (*__sighandler_t)(int);
typedef void (*__restorefn_t)();
typedef void (*__sigrestore_t)();
struct __kernel_sigaction
{
    void (*sa_handler)(int);
    unsigned long int sa_flags;
    void (*sa_restorer)();
    struct anonymous_typeX13 sa_mask;
};
struct sigaltstack
{
    void* ss_sp;
    int ss_flags;
    unsigned long int ss_size;
};
typedef struct sigaltstack stack_t;
union sigval
{
int sival_int;
void* sival_ptr;
};
typedef union sigval sigval_t;
struct anonymous_typeX14
{
    int _pid;
    unsigned int _uid;
};
struct anonymous_typeX15
{
    int _tid;
    int _overrun;
    union sigval _sigval;
    int _sys_private;
};
struct anonymous_typeX16
{
    int _pid;
    unsigned int _uid;
    union sigval _sigval;
};
struct anonymous_typeX17
{
    int _pid;
    unsigned int _uid;
    int _status;
    long _utime;
    long _stime;
};
struct anonymous_typeX20
{
};
struct anonymous_typeX21
{
};
struct anonymous_typeX22
{
};
struct anonymous_typeX24
{
    char _dummy_bnd[(__alignof__(void*)<sizeof(short short)?sizeof(short short):__alignof__(void*))];
    void* _lower;
    void* _upper;
};
struct anonymous_typeX25
{
    char _dummy_pkey[(__alignof__(void*)<sizeof(short short)?sizeof(short short):__alignof__(void*))];
    unsigned int _pkey;
};
struct anonymous_typeX26
{
    unsigned long int _data;
    unsigned int _type;
    unsigned int _flags;
};
union anonymous_typeZ23
{
int _trapno;
short short _addr_lsb;
struct anonymous_typeX24 _addr_bnd;
struct anonymous_typeX25 _addr_pkey;
struct anonymous_typeX26 _perf;
};
struct anonymous_typeX18
{
    void* _addr;
    union anonymous_typeZ23 anonymous_var_nameY2;
};
struct anonymous_typeX27
{
    long _band;
    int _fd;
};
struct anonymous_typeX28
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};
union __sifields
{
struct anonymous_typeX14 _kill;
struct anonymous_typeX15 _timer;
struct anonymous_typeX16 _rt;
struct anonymous_typeX17 _sigchld;
struct anonymous_typeX18 _sigfault;
struct anonymous_typeX27 _sigpoll;
struct anonymous_typeX28 _sigsys;
};
struct anonymous_typeX30
{
};
struct anonymous_typeX32
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};
union anonymous_typeZ31
{
struct anonymous_typeX32 anonymous_var_nameXYZ2;
int _si_pad[128/sizeof(int)];
};
struct siginfo
{
    union anonymous_typeZ31 anonymous_var_nameY4;
};
typedef struct siginfo siginfo_t;
struct anonymous_typeX34
{
};
struct anonymous_typeX36
{
    void (*_function)(union sigval);
    void* _attribute;
};
union anonymous_typeZ35
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX36 _sigev_thread;
};
struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ35 _sigev_un;
};
typedef struct sigevent sigevent_t;
typedef int sig_atomic_t;
typedef void (*sig_t)(int);
typedef void (*sighandler_t)(int);
typedef struct anonymous_typeX13 sigset64_t;
union anonymous_typeZ38
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};
struct sigaction
{
    int sa_flags;
    union anonymous_typeZ38 anonymous_var_nameY6;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};
union anonymous_typeZ40
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};
struct sigaction64
{
    int sa_flags;
    union anonymous_typeZ40 anonymous_var_nameY8;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};
struct user_regs_struct
{
    unsigned long int regs[31];
    unsigned long int sp;
    unsigned long int pc;
    unsigned long int pstate;
};
struct user_fpsimd_struct
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};
typedef unsigned long int greg_t;
typedef unsigned long int gregset_t[34];
typedef struct user_fpsimd_struct fpregset_t;
typedef struct sigcontext mcontext_t;
union anonymous_typeZ42
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};
struct ucontext
{
    unsigned long int uc_flags;
    struct ucontext* uc_link;
    struct sigaltstack uc_stack;
    union anonymous_typeZ42 anonymous_var_nameY10;
    char __padding[128-sizeof(struct anonymous_typeX13)];
    struct sigcontext uc_mcontext;
};
typedef struct ucontext ucontext_t;
extern const char* sys_siglist[(64+1)];
extern const char* sys_signame[(64+1)];
typedef unsigned long int fd_mask;
struct anonymous_typeX43
{
    unsigned long int fds_bits[1024/(8*sizeof(unsigned long int))];
};
typedef struct anonymous_typeX43 fd_set;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern char** environ;
struct _termios
{
    unsigned int c_iflag;
    unsigned int c_oflag;
    unsigned int c_cflag;
    unsigned int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[19];
};
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short int stx_mode;
    unsigned short int __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned int stx_dio_mem_align;
    unsigned int stx_dio_offset_align;
    unsigned long long __spare3[12];
};
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused4;
    unsigned int __unused5;
};
struct stat64
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long st_size;
    int st_blksize;
    int __pad2;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned int __unused4;
    unsigned int __unused5;
};
_Bool gComeDebug=(_Bool)0;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    int* n_20;
    char** msg2_18;
    struct sInfo** info;
    char** msg;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct __current_stack2__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    struct sInfo* info_284;
    struct buffer** clang_option_270;
    struct buffer** cpp_option_271;
    struct list$1charph** files_272;
    struct list$1charph** object_files_273;
    _Bool* output_object_file_274;
    _Bool* output_cpp_file_275;
    _Bool* output_source_file_flag_276;
    char** output_file_name_277;
    _Bool* verbose_278;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(_Bool self);

void come_heap_final(int check_mem_leak);

int android_get_application_target_sdk_version();

int __system_property_get(const char* __name, char* __value);

int strcasecmp(const char* __s1, const char* __s2);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_t* __l);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_t* __l);

void* memccpy(void* __dst, const void* __src, int __stop_char, long int __n);

void* memchr(const void* __s, int __ch, long int __n);

void* memrchr(const void* __s, int __ch, long int __n);

int memcmp(const void* __lhs, const void* __rhs, long int __n);

void* memcpy(void* anonymous_var_nameX2, const void* anonymous_var_nameX3, long int anonymous_var_nameX4);

void* mempcpy(void* __dst, const void* __src, long int __n);

void* memmove(void* __dst, const void* __src, long int __n);

void* memset(void* __dst, int __ch, long int __n);

void* memmem(const void* __haystack, long int __haystack_size, const void* __needle, long int __needle_size);

char* strchr(const char* __s, int __ch);

char* __strchr_chk(const char* __s, int __ch, long int __n);

char* strchrnul(const char* __s, int __ch);

char* strrchr(const char* __s, int __ch);

char* __strrchr_chk(const char* __s, int __ch, long int __n);

long int strlen(const char* __s);

long int __strlen_chk(const char* __s, long int __n);

int strcmp(const char* __lhs, const char* __rhs);

char* stpcpy(char* __dst, const char* __src);

char* strcpy(char* __dst, const char* __src);

char* strcat(char* __dst, const char* __src);

char* strdup(const char* __s);

char* strstr(const char* __haystack, const char* __needle);

char* strcasestr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delimiter);

char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);

char* strerror(int __errno_value);

char* strerror_l(int __errno_value, struct __locale_t* __l);

char* __gnu_strerror_r(int __errno_value, char* __buf, long int __n);

long int strnlen(const char* __s, long int __n);

char* strncat(char* __dst, const char* __src, long int __n);

char* strndup(const char* __s, long int __n);

int strncmp(const char* __lhs, const char* __rhs, long int __n);

char* stpncpy(char* __dst, const char* __src, long int __n);

char* strncpy(char* __dst, const char* __src, long int __n);

long int strlcat(char* __dst, const char* __src, long int __n);

long int strlcpy(char* __dst, const char* __src, long int __n);

long int strcspn(const char* __s, const char* __reject);

char* strpbrk(const char* __s, const char* __accept);

char* strsep(char** __s_ptr, const char* __delimiter);

long int strspn(const char* __s, const char* __accept);

char* strsignal(int __signal);

int strcoll(const char* __lhs, const char* __rhs);

long int strxfrm(char* __dst, const char* __src, long int __n);

int strcoll_l(const char* __lhs, const char* __rhs, struct __locale_t* __l);

long int strxfrm_l(char* __dst, const char* __src, long int __n, struct __locale_t* __l);

char* __gnu_basename(const char* __path);

void clearerr(struct __sFILE* __fp);

int fclose(struct __sFILE* __fp);

int feof(struct __sFILE* __fp);

int ferror(struct __sFILE* __fp);

int fflush(struct __sFILE* __fp);

int fgetc(struct __sFILE* __fp);

char* fgets(char* __buf, int __size, struct __sFILE* __fp);

int fprintf(struct __sFILE* __fp, const char* __fmt, ...);

int fputc(int __ch, struct __sFILE* __fp);

int fputs(const char* __s, struct __sFILE* __fp);

long int fread(void* __buf, long int __size, long int __count, struct __sFILE* __fp);

int fscanf(struct __sFILE* __fp, const char* __fmt, ...);

long int fwrite(const void* __buf, long int __size, long int __count, struct __sFILE* __fp);

int getc(struct __sFILE* __fp);

int getchar();

long getdelim(char** __line_ptr, long int* __line_length_ptr, int __delimiter, struct __sFILE* __fp);

long getline(char** __line_ptr, long int* __line_length_ptr, struct __sFILE* __fp);

void perror(const char* __msg);

int printf(const char* __fmt, ...);

int putc(int __ch, struct __sFILE* __fp);

int putchar(int __ch);

int puts(const char* __s);

int remove(const char* __path);

void rewind(struct __sFILE* __fp);

int scanf(const char* __fmt, ...);

void setbuf(struct __sFILE* __fp, char* __buf);

int setvbuf(struct __sFILE* __fp, char* __buf, int __mode, long int __size);

int sscanf(const char* __s, const char* __fmt, ...);

int ungetc(int __ch, struct __sFILE* __fp);

int vfprintf(struct __sFILE* __fp, const char* __fmt, va_list __args);

int vprintf(const char* __fp, va_list __args);

int dprintf(int __fd, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __args);

int sprintf(char* __s, const char* __fmt, ...);

int vsprintf(char* __s, const char* __fmt, va_list __args);

char* tmpnam(char* __s);

char* tempnam(const char* __dir, const char* __prefix);

int rename(const char* __old_path, const char* __new_path);

int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);

int fseek(struct __sFILE* __fp, long __offset, int __whence);

long ftell(struct __sFILE* __fp);

int fgetpos(struct __sFILE* __fp, long* __pos);

int fsetpos(struct __sFILE* __fp, const long* __pos);

int fseeko(struct __sFILE* __fp, long __offset, int __whence);

long ftello(struct __sFILE* __fp);

struct __sFILE* funopen(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));

int fgetpos64(struct __sFILE* __fp, long* __pos);

int fsetpos64(struct __sFILE* __fp, const long* __pos);

int fseeko64(struct __sFILE* __fp, long __offset, int __whence);

long ftello64(struct __sFILE* __fp);

struct __sFILE* funopen64(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));

struct __sFILE* fopen(const char* __path, const char* __mode);

struct __sFILE* fopen64(const char* __path, const char* __mode);

struct __sFILE* freopen(const char* __path, const char* __mode, struct __sFILE* __fp);

struct __sFILE* freopen64(const char* __path, const char* __mode, struct __sFILE* __fp);

struct __sFILE* tmpfile64();

int snprintf(char* __buf, long int __size, const char* __fmt, ...);

int vfscanf(struct __sFILE* __fp, const char* __fmt, va_list __args);

int vscanf(const char* __fmt, va_list __args);

int vsnprintf(char* __buf, long int __size, const char* __fmt, va_list __args);

int vsscanf(const char* __s, const char* __fmt, va_list __args);

struct __sFILE* fdopen(int __fd, const char* __mode);

int fileno(struct __sFILE* __fp);

int pclose(struct __sFILE* __fp);

struct __sFILE* popen(const char* __command, const char* __mode);

void flockfile(struct __sFILE* __fp);

int ftrylockfile(struct __sFILE* __fp);

void funlockfile(struct __sFILE* __fp);

int getc_unlocked(struct __sFILE* __fp);

int getchar_unlocked();

int putc_unlocked(int __ch, struct __sFILE* __fp);

int putchar_unlocked(int __ch);

struct __sFILE* fmemopen(void* __buf, long int __size, const char* __mode);

struct __sFILE* open_memstream(char** __ptr, long int* __size_ptr);

int asprintf(char** __s_ptr, const char* __fmt, ...);

char* fgetln(struct __sFILE* __fp, long int* __length_ptr);

int fpurge(struct __sFILE* __fp);

void setbuffer(struct __sFILE* __fp, char* __buf, int __size);

int setlinebuf(struct __sFILE* __fp);

int vasprintf(char** __s_ptr, const char* __fmt, va_list __args);

void clearerr_unlocked(struct __sFILE* __fp);

int feof_unlocked(struct __sFILE* __fp);

int ferror_unlocked(struct __sFILE* __fp);

int fileno_unlocked(struct __sFILE* __fp);

int open(const char* anonymous_var_nameX28, int anonymous_var_nameX29, ...);

void* malloc(long int __byte_count);

void* calloc(long int __item_count, long int __item_size);

void* realloc(void* __ptr, long int __byte_count);

void free(void* __ptr);

void* memalign(long int __alignment, long int __byte_count);

long int malloc_usable_size(const void* __ptr);

struct mallinfo2 mallinfo();

int malloc_info(int __must_be_zero, struct __sFILE* __fp);

void abort();

void exit(int __status);

void _Exit(int __status);

int atexit(void (*__fn)());

int at_quick_exit(void (*__fn)());

void quick_exit(int __status);

char* getenv(const char* __name);

int putenv(char* __assignment);

int setenv(const char* __name, const char* __value, int __overwrite);

int unsetenv(const char* __name);

int clearenv();

char* mkdtemp(char* __template);

char* mktemp(char* __template);

int mkostemp64(char* __template, int __flags);

int mkostemp(char* __template, int __flags);

int mkostemps64(char* __template, int __suffix_length, int __flags);

int mkostemps(char* __template, int __suffix_length, int __flags);

int mkstemp64(char* __template);

int mkstemp(char* __template);

int mkstemps64(char* __template, int __flags);

int mkstemps(char* __template, int __flags);

long strtol(const char* __s, char** __end_ptr, int __base);

long long strtoll(const char* __s, char** __end_ptr, int __base);

unsigned long int strtoul(const char* __s, char** __end_ptr, int __base);

unsigned long long strtoull(const char* __s, char** __end_ptr, int __base);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

double strtod(const char* __s, char** __end_ptr);

long double strtold(const char* __s, char** __end_ptr);

int atoi(const char* __s);

long atol(const char* __s);

long long atoll(const char* __s);

char* realpath(const char* __path, char* __resolved);

int system(const char* __command);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__comparator)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__comparator)(const void*,const void*));

unsigned int arc4random();

unsigned int arc4random_uniform(unsigned int __upper_bound);

void arc4random_buf(void* __buf, long int __n);

int rand_r(unsigned int* __seed_ptr);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long jrand48(unsigned short int __xsubi[3]);

void lcong48(unsigned short int __param[7]);

long lrand48();

long mrand48();

long nrand48(unsigned short int __xsubi[3]);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void srand48(long __seed);

char* initstate(unsigned int __seed, char* __state, long int __n);

char* setstate(char* __state);

int getpt();

int posix_openpt(int __flags);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __n);

int unlockpt(int __fd);

struct anonymous_typeX10 div(int __numerator, int __denominator);

struct anonymous_typeX11 ldiv(long __numerator, long __denominator);

struct anonymous_typeX12 lldiv(long long __numerator, long long __denominator);

const char* getprogname();

void setprogname(const char* __name);

int mblen(const char* __s, long int __n);

long int mbstowcs(unsigned int* __dst, const char* __src, long int __n);

int mbtowc(unsigned int* __wc_ptr, const char* __s, long int __n);

int wctomb(char* __dst, unsigned int __wc);

long int wcstombs(char* __dst, const unsigned int* __src, long int __n);

int abs(int __x);

long labs(long __x);

long long llabs(long long __x);

float strtof(const char* __s, char** __end_ptr);

double atof(const char* __s);

int rand();

void srand(unsigned int __seed);

long random();

void srandom(unsigned int __seed);

int grantpt(int __fd);

long long strtoll_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);

unsigned long long strtoull_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);

long double strtold_l(const char* __s, char** __end_ptr, struct __locale_t* __l);

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

struct optional$2intbool* FILE_write(struct __sFILE* f, char* str);

struct optional$2charphbool* FILE_read(struct __sFILE* f);

struct optional$2intbool* FILE_fclose(struct __sFILE* f);

struct optional$2intpbool* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct __sFILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

int __libc_current_sigrtmin();

int __libc_current_sigrtmax();

int sigaction(int __signal, const struct sigaction* __new_action, struct sigaction* __old_action);

int siginterrupt(int __signal, int __flag);

void (*signal(int __signal, void (*__handler)(int)))(int);

int sigaddset(struct anonymous_typeX13* __set, int __signal);

int sigdelset(struct anonymous_typeX13* __set, int __signal);

int sigemptyset(struct anonymous_typeX13* __set);

int sigfillset(struct anonymous_typeX13* __set);

int sigismember(const struct anonymous_typeX13* __set, int __signal);

int sigpending(struct anonymous_typeX13* __set);

int sigprocmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);

int sigsuspend(const struct anonymous_typeX13* __mask);

int sigwait(const struct anonymous_typeX13* __set, int* __signal);

int raise(int __signal);

int kill(int __pid, int __signal);

int killpg(int __pgrp, int __signal);

int tgkill(int __tgid, int __tid, int __signal);

int sigaltstack(const struct sigaltstack* __new_signal_stack, struct sigaltstack* __old_signal_stack);

void psiginfo(const struct siginfo* __info, const char* __msg);

void psignal(int __signal, const char* __msg);

int pthread_kill(long __pthread, int __signal);

int pthread_sigmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);

int sigqueue(int __pid, int __signal, const union sigval __value);

int sigtimedwait(const struct anonymous_typeX13* __set, struct siginfo* __info, const struct timespec* __timeout);

int sigwaitinfo(const struct anonymous_typeX13* __set, struct siginfo* __info);

void __FD_CLR_chk(int anonymous_var_nameX76, struct anonymous_typeX43* anonymous_var_nameX77, long int anonymous_var_nameX78);

void __FD_SET_chk(int anonymous_var_nameX79, struct anonymous_typeX43* anonymous_var_nameX80, long int anonymous_var_nameX81);

int __FD_ISSET_chk(int anonymous_var_nameX82, const struct anonymous_typeX43* anonymous_var_nameX83, long int anonymous_var_nameX84);

int select(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, struct timeval* __timeout);

int pselect(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, const struct timespec* __timeout, const struct anonymous_typeX13* __mask);

int fcntl(int __fd, int __cmd, ...);

int getopt(int __argc, char** __argv, const char* __options);

int ioctl(int __fd, unsigned int __request, ...);

int lockf(int __fd, int __cmd, long __length);

int lockf64(int __fd, int __cmd, long __length);

long sysconf(int __name);

void _exit(int __status);

int fork();

int vfork();

int getpid();

int gettid();

int getpgid(int __pid);

int setpgid(int __pid, int __pgid);

int getppid();

int getpgrp();

int setpgrp();

int getsid(int __pid);

int setsid();

int execv(const char* __path, char** __argv);

int execvp(const char* __file, char** __argv);

int execvpe(const char* __file, char** __argv, char** __envp);

int execve(const char* __file, char** __argv, char** __envp);

int execl(const char* __path, const char* __arg0, ...);

int execlp(const char* __file, const char* __arg0, ...);

int execle(const char* __path, const char* __arg0, ...);

int nice(int __incr);

int setegid(unsigned int __gid);

int seteuid(unsigned int __uid);

int setgid(unsigned int __gid);

int setregid(unsigned int __rgid, unsigned int __egid);

int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);

int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);

int setreuid(unsigned int __ruid, unsigned int __euid);

int setuid(unsigned int __uid);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int __size, unsigned int* __list);

int setgroups(long int __size, const unsigned int* __list);

int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);

int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);

char* getlogin();

long fpathconf(int __fd, int __name);

long pathconf(const char* __path, int __name);

int access(const char* __path, int __mode);

int faccessat(int __dirfd, const char* __path, int __mode, int __flags);

int link(const char* __old_path, const char* __new_path);

int linkat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path, int __flags);

int unlink(const char* __path);

int unlinkat(int __dirfd, const char* __path, int __flags);

int chdir(const char* __path);

int fchdir(int __fd);

int rmdir(const char* __path);

int pipe(int __fds[2]);

int pipe2(int __fds[2], int __flags);

int chroot(const char* __path);

int symlink(const char* __old_path, const char* __new_path);

int symlinkat(const char* __old_path, int __new_dir_fd, const char* __new_path);

long readlink(const char* __path, char* __buf, long int __buf_size);

long readlinkat(int __dir_fd, const char* __path, char* __buf, long int __buf_size);

int chown(const char* __path, unsigned int __owner, unsigned int __group);

int fchown(int __fd, unsigned int __owner, unsigned int __group);

int fchownat(int __dir_fd, const char* __path, unsigned int __owner, unsigned int __group, int __flags);

int lchown(const char* __path, unsigned int __owner, unsigned int __group);

char* getcwd(char* __buf, long int __size);

void sync();

int close(int __fd);

long read(int __fd, void* __buf, long int __count);

long write(int __fd, const void* __buf, long int __count);

int dup(int __old_fd);

int dup2(int __old_fd, int __new_fd);

int dup3(int __old_fd, int __new_fd, int __flags);

int fsync(int __fd);

int fdatasync(int __fd);

int truncate(const char* __path, long __length);

long lseek(int __fd, long __offset, int __whence);

long pread(int __fd, void* __buf, long int __count, long __offset);

long pwrite(int __fd, const void* __buf, long int __count, long __offset);

int ftruncate(int __fd, long __length);

int truncate64(const char* __path, long __length);

long lseek64(int __fd, long __offset, int __whence);

long pread64(int __fd, void* __buf, long int __count, long __offset);

long pwrite64(int __fd, const void* __buf, long int __count, long __offset);

int ftruncate64(int __fd, long __length);

int pause();

unsigned int alarm(unsigned int __seconds);

unsigned int sleep(unsigned int __seconds);

int usleep(unsigned int __microseconds);

int gethostname(char* _buf, long int __buf_size);

int sethostname(const char* __name, long int __n);

int brk(void* __addr);

void* sbrk(long int __increment);

int isatty(int __fd);

char* ttyname(int __fd);

int ttyname_r(int __fd, char* __buf, long int __buf_size);

int acct(const char* __path);

int getpagesize();

long syscall(long __number, ...);

int daemon(int __no_chdir, int __no_close);

int tcgetpgrp(int __fd);

int tcsetpgrp(int __fd, int __pid);

int chmod(const char* __path, unsigned int __mode);

int fchmod(int __fd, unsigned int __mode);

int mkdir(const char* __path, unsigned int __mode);

int fstat(int __fd, struct stat* __buf);

int fstat64(int __fd, struct stat64* __buf);

int fstatat(int __dir_fd, const char* __path, struct stat* __buf, int __flags);

int fstatat64(int __dir_fd, const char* __path, struct stat64* __buf, int __flags);

int lstat(const char* __path, struct stat* __buf);

int lstat64(const char* __path, struct stat64* __buf);

int stat(const char* __path, struct stat* __buf);

int stat64(const char* __path, struct stat64* __buf);

int mknod(const char* __path, unsigned int __mode, unsigned long int __dev);

unsigned int umask(unsigned int __mask);

int mkfifo(const char* __path, unsigned int __mode);

int mkfifoat(int __dir_fd, const char* __path, unsigned int __mode);

int fchmodat(int __dir_fd, const char* __path, unsigned int __mode, int __flags);

int mkdirat(int __dir_fd, const char* __path, unsigned int __mode);

int mknodat(int __dir_fd, const char* __path, unsigned int __mode, unsigned long int __dev);

int utimensat(int __dir_fd, const char* __path, const struct timespec __times[2], int __flags);

int futimens(int __fd, const struct timespec __times[2]);

int* __errno();

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*));
static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item);
void* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1voidp_join(struct list$1voidp* self, char* sep);
static void* list$1voidp_begin(struct list$1voidp* self);
static _Bool list$1voidp_end(struct list$1voidp* self);
static void* list$1voidp_next(struct list$1voidp* self);
static int list$1voidp_length(struct list$1voidp* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
void init_module(struct sInfo* info);

_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

int come_main_v2(int argc, char** argv);

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static void sInfo_finalize(struct sInfo* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
void method_block2_02transpilec(struct __current_stack2__* parent);

// inline function
static inline int android_get_device_api_level(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
int __result1__;
int api_level_1;
int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&api_level_1, 0, sizeof(int));
    char value_0[92]={ 0 };
    __freed_obj__ = 0;
    if(_if_conditional1=__system_property_get("ro.build.version.sdk",value_0)<1,    __freed_obj__ = 0, 
    _if_conditional1) {
        __result1__ = -1;
        __freed_obj__ = 0;
        return __result1__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    api_level_1=atoi(value_0);
    __freed_obj__ = 0;
    __result2__ = (api_level_1>0)?api_level_1:-1;
    __freed_obj__ = 0;
    return __result2__;
    __freed_obj__ = 0;
}
static inline void __bionic_bcopy(const void* b1, void* b2, long int len){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memmove(b2,b1,len);
    __freed_obj__ = 0;
}
static inline void __bionic_bzero(void* b, long int len){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memset(b,0,len);
    __freed_obj__ = 0;
}
static inline int ffs(int __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result3__ = __builtin_ffs(__n);
    __freed_obj__ = 0;
    return __result3__;
    __freed_obj__ = 0;
}
static inline int ffsl(long __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result4__ = __builtin_ffsl(__n);
    __freed_obj__ = 0;
    return __result4__;
    __freed_obj__ = 0;
}
static inline int ffsll(long long __n){
void* __result_obj__;
_Bool __freed_obj__;
int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result5__ = __builtin_ffsll(__n);
    __freed_obj__ = 0;
    return __result5__;
    __freed_obj__ = 0;
}
static inline char* ctermid(char* s){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
char* __result6__;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional2=s==0,    __freed_obj__ = 0, 
    _if_conditional2) {
        __result6__ = __result_obj__ = (char*)"/dev/tty";
        __freed_obj__ = 0;
        return __result6__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    strcpy(s,"/dev/tty");
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = s;
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
}
static inline struct __sFILE* tmpfile(){
void* __result_obj__;
_Bool __freed_obj__;
int p_2;
char* path_3;
int i_4;
_Bool _for_condtionalA1;
unsigned int r_5;
_Bool _if_conditional3;
struct __sFILE* __result8__;
int fd_6;
_Bool _if_conditional4;
struct __sFILE* result_7;
struct __sFILE* __result9__;
struct __sFILE* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_2, 0, sizeof(int));
memset(&path_3, 0, sizeof(char*));
memset(&i_4, 0, sizeof(int));
memset(&r_5, 0, sizeof(unsigned int));
memset(&fd_6, 0, sizeof(int));
memset(&result_7, 0, sizeof(struct __sFILE*));
    p_2=getpid();
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_4=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    i_4<100 ,    __freed_obj__ = 0, 
    _for_condtionalA1;    i_4++ ,    __freed_obj__ = 0, 
    0    ){
        r_5=arc4random();
        __freed_obj__ = 0;
        if(_if_conditional3=asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1,        __freed_obj__ = 0, 
        _if_conditional3) {
            __result8__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result8__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fd_6=open(path_3,2|64|128|131072,384);
        __freed_obj__ = 0;
        if(_if_conditional4=fd_6>=0,        __freed_obj__ = 0, 
        _if_conditional4) {
            result_7=fdopen(fd_6,"w+");
            __freed_obj__ = 0;
            unlink(path_3);
            __freed_obj__ = 0;
            free(path_3);
            __freed_obj__ = 0;
            __result9__ = __result_obj__ = result_7;
            __freed_obj__ = 0;
            return __result9__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(path_3);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}
static inline double strtod_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
double __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result11__ = strtod(__s,__end_ptr);
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}
static inline float strtof_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
float __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = strtof(__s,__end_ptr);
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
}
static inline long strtol_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l){
void* __result_obj__;
_Bool __freed_obj__;
long __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result13__ = strtol(__s,__end_ptr,__base);
    __freed_obj__ = 0;
    return __result13__;
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
static inline char* getpass(const char* prompt){
void* __result_obj__;
_Bool __freed_obj__;
struct _termios term_old_8;
struct _termios term_new_9;
int len_11;
int tty_changed_12;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
char chr_13;
_Bool _while_condtional2;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&term_old_8, 0, sizeof(struct _termios));
memset(&term_new_9, 0, sizeof(struct _termios));
memset(&len_11, 0, sizeof(int));
memset(&tty_changed_12, 0, sizeof(int));
memset(&chr_13, 0, sizeof(char));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    char password_10[513]={ 0 };
    __freed_obj__ = 0;
    len_11=0;
    tty_changed_12=0;
    __freed_obj__ = 0;
    while(_while_condtional1=*prompt,    __freed_obj__ = 0, 
    _while_condtional1) {
        write(1,prompt,1);
        __freed_obj__ = 0;
        prompt++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional5=ioctl(0,21505,&term_old_8)==0,    __freed_obj__ = 0, 
    _if_conditional5) {
        term_new_9=term_old_8;
        __freed_obj__ = 0;
        term_new_9.c_lflag&=~8;
        __freed_obj__ = 0;
        if(_if_conditional6=ioctl(0,21506+0,&term_new_9)==0,        __freed_obj__ = 0, 
        _if_conditional6) {
            tty_changed_12=1;
            __freed_obj__ = 0;
        }
        else {
            tty_changed_12=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    while(_while_condtional2=read(0,&chr_13,sizeof(char))>0,    __freed_obj__ = 0, 
    _while_condtional2) {
        if(_if_conditional7=chr_13==13||chr_13==10||chr_13==0,        __freed_obj__ = 0, 
        _if_conditional7) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional8=len_11==sizeof(password_10)-1,        __freed_obj__ = 0, 
        _if_conditional8) {
            continue;
            __freed_obj__ = 0;
        }
        else {
            password_10[len_11++]=chr_13;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    password_10[len_11]=0;
    __freed_obj__ = 0;
    if(_if_conditional9=tty_changed_12,    __freed_obj__ = 0, 
    _if_conditional9) {
        ioctl(0,21506+0,&term_old_8);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    write(1,"\n",1);
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = password_10;
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}
static inline void swab(const void* __void_src, void* __void_dst, long __byte_count){
void* __result_obj__;
_Bool __freed_obj__;
const unsigned char* __src_14=((const unsigned char*)(__void_src));
unsigned char* __dst_15;
_Bool _while_condtional3;
unsigned char x_16;
unsigned char y_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&__dst_15, 0, sizeof(unsigned char*));
memset(&x_16, 0, sizeof(unsigned char));
memset(&y_17, 0, sizeof(unsigned char));
    __freed_obj__ = 0;
    __dst_15=((unsigned char*)(__void_dst));
    __freed_obj__ = 0;
    while(_while_condtional3=__byte_count>1,    __freed_obj__ = 0, 
    _while_condtional3) {
        x_16=*__src_14++;
        __freed_obj__ = 0;
        y_17=*__src_14++;
        __freed_obj__ = 0;
        *__dst_15++=y_17;
        __freed_obj__ = 0;
        *__dst_15++=x_16;
        __freed_obj__ = 0;
        __byte_count-=2;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

// body function














void come_init_v2(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v2(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional10;
char* msg2_18;
va_list args_19;
_Bool _if_conditional11;
int n_20;
void* right_value0;
void* right_value1;
void* right_value7;
struct __current_stack1__ __current_stack1__;
void* right_value14;
void* right_value18;
void* right_value19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_18, 0, sizeof(char*));
memset(&args_19, 0, sizeof(va_list));
memset(&n_20, 0, sizeof(int));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    if(_if_conditional10=!((struct sInfo*)come_null_check(info, "02transpile.c", 44))->no_output_err,    __freed_obj__ = 0, 
    _if_conditional10) {
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        __builtin_va_start(args_19,msg);
        __freed_obj__ = 0;
        vasprintf(&msg2_18,msg,args_19);
        __freed_obj__ = 0;
        __builtin_va_end(args_19);
        __freed_obj__ = 0;
        printf("%s %d: %s\n",((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 34))->sline,msg2_18);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "02transpile.c", 35))->err_num++;
        __freed_obj__ = 0;
        if(_if_conditional11=((struct sInfo*)come_null_check(info, "02transpile.c", 42))->come_fun,        __freed_obj__ = 0, 
        _if_conditional11) {
            n_20=((struct sInfo*)come_null_check(info, "02transpile.c", 38))->sline-5;
            __freed_obj__ = 0;
            __current_stack1__.n_20 = &n_20;
            __current_stack1__.msg2_18 = &msg2_18;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            come_clear_stackframe();
            optional$2charphbool_value((come_push_stackframe("02transpile.c", 39),((struct optional$2charphbool*)(right_value19=string_puts(((char*)come_null_check(((char*)(right_value18=list$1voidp_join(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value14=list$1charph_map(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value7=list$1charph_sublist(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value1=string_split_char(((char*)come_null_check(((char*)(right_value0=buffer_to_string(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 39))->original_source, "02transpile.c", 39))))), "02transpile.c", 39)),10))), "02transpile.c", 39)),n_20,n_20+10))), "02transpile.c", 39)),&__current_stack1__,(void*)method_block1_02transpilec))), "02transpile.c", 39)),"\n"))), "02transpile.c", 39)))))));
            come_pop_stackframe();
                                if(__current_stack1__.__method_block_result_kind__ == 4)
                    {
                        return;
                    }
            if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free(msg2_18);
        __freed_obj__ = 0;
        if((&args_19) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_19), (void*)0, (void*)0, 1, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
void* right_value3;
struct list$1charph* result_23;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
struct list_item$1charph* it_24;
int i_25;
_Bool _while_condtional5;
_Bool _if_conditional17;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1charph*));
memset(&it_24, 0, sizeof(struct list_item$1charph*));
memset(&i_25, 0, sizeof(int));
                result_23=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value3=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value2=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 689))), "./comelang2.h", 689)))))));
                if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional13=begin<0,                __freed_obj__ = 0, 
                _if_conditional13) {
                    begin+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 692))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=tail<0,                __freed_obj__ = 0, 
                _if_conditional14) {
                    tail+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 696))->len+1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional15=begin<0,                __freed_obj__ = 0, 
                _if_conditional15) {
                    begin=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=tail>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->len,                __freed_obj__ = 0, 
                _if_conditional16) {
                    tail=((struct list$1charph*)come_null_check(self, "./comelang2.h", 704))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_24=((struct list$1charph*)come_null_check(self, "./comelang2.h", 707))->head;
                __freed_obj__ = 0;
                i_25=0;
                __freed_obj__ = 0;
                while(_while_condtional5=it_24!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    if(_if_conditional17=i_25>=begin&&i_25<tail,                    __freed_obj__ = 0, 
                    _if_conditional17) {
                        list$1charph_push_back(((struct list$1charph*)come_null_check(result_23, "./comelang2.h", 711)),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_24, "./comelang2.h", 711))->item));
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_24=((struct list_item$1charph*)come_null_check(it_24, "./comelang2.h", 713))->next;
                    __freed_obj__ = 0;
                    i_25++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result17__ = __result_obj__ = result_23;
                if(result_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
                if(result_23 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_21;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_21, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1charph*));
                        it_21=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_21!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
                            prev_it_22=it_21;
                            __freed_obj__ = 0;
                            it_21=((struct list_item$1charph*)come_null_check(it_21, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_22 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                if(_if_conditional12=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional12) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional18;
void* right_value4;
struct list_item$1charph* litem_26;
char* __dec_obj1;
_Bool _if_conditional19;
void* right_value5;
struct list_item$1charph* litem_27;
char* __dec_obj2;
void* right_value6;
struct list_item$1charph* litem_28;
char* __dec_obj3;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional18=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional18) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value4=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 274))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 275))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj1=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 276))->item;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_26;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_26;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional19=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional19) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value5=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                                    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 285))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj2=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 286))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_27;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_27;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value6=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                                    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 295))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj3=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 296))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_28;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_28;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                            __freed_obj__ = 0;
                            __result16__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result16__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct list$1voidp* list$1charph_map(struct list$1charph* self, void* parent, void* (*block)(void*,char*)){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value8;
void* right_value9;
struct list$1voidp* result_31;
struct list_item$1charph* it_32;
_Bool _while_condtional7;
_Bool _if_conditional22;
struct list$1voidp* __result20__;
struct list$1voidp* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1voidp*));
memset(&it_32, 0, sizeof(struct list_item$1charph*));
                result_31=(struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)(right_value9=list$1voidp_initialize((struct list$1voidp*)come_increment_ref_count(((struct list$1voidp*)come_null_check(((struct list$1voidp*)(right_value8=(struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang2.h", 979))), "./comelang2.h", 979)))))));
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_32=((struct list$1charph*)come_null_check(self, "./comelang2.h", 981))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_32!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    list$1voidp_push_back(((struct list$1voidp*)come_null_check(result_31, "./comelang2.h", 983)),block(parent,((struct list_item$1charph*)come_null_check(it_32, "./comelang2.h", 983))->item));
                    __freed_obj__ = 0;
                    if(_if_conditional22=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 989))->__method_block_result_kind__!=0,                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        __result20__ = __result_obj__ = result_31;
                        if(result_31 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result20__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_32=((struct list_item$1charph*)come_null_check(it_32, "./comelang2.h", 989))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result21__ = __result_obj__ = result_31;
                if(result_31 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result21__;
                __freed_obj__ = 0;
                if(result_31 && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1voidp* list$1voidp_initialize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1voidp* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result18__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1voidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1voidpp_finalize(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1voidp* it_29;
_Bool _while_condtional6;
struct list_item$1voidp* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_29, 0, sizeof(struct list_item$1voidp*));
memset(&prev_it_30, 0, sizeof(struct list_item$1voidp*));
                        it_29=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional6=it_29!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional6) {
                            prev_it_30=it_29;
                            __freed_obj__ = 0;
                            it_29=((struct list_item$1voidp*)come_null_check(it_29, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_30 && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1voidp* list$1voidp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
void* right_value10;
struct list_item$1voidp* litem_33;
_Bool _if_conditional21;
void* right_value11;
struct list_item$1voidp* litem_34;
void* right_value12;
struct list_item$1voidp* litem_35;
struct list$1voidp* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1voidp*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1voidp*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1voidp*));
                        if(_if_conditional20=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional20) {
                            litem_33=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value10=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 272))));
                            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_33, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_33, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1voidp*)come_null_check(litem_33, "./comelang2.h", 276))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_33;
                            __freed_obj__ = 0;
                            ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 279))->head=litem_33;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional21=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional21) {
                                litem_34=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value11=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 282))));
                                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_34, "./comelang2.h", 284))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_34, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_34, "./comelang2.h", 286))->item=item;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_34;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_34;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_35=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(right_value12=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang2.h", 292))));
                                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1voidpp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_35, "./comelang2.h", 294))->prev=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_35, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(litem_35, "./comelang2.h", 296))->item=item;
                                __freed_obj__ = 0;
                                ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_35;
                                __freed_obj__ = 0;
                                ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_35;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result19__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result19__;
                        __freed_obj__ = 0;
}

void* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
void* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
                __result22__ = __result_obj__ = ((char*)(right_value13=xsprintf("%d %s",++(*(parent->n_20)),it)));
                __freed_obj__ = 0;
                return __result22__;
                __freed_obj__ = 0;
}

static char* list$1voidp_join(struct list$1voidp* self, char* sep){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
void* right_value16;
struct buffer* buf_36;
int n_37;
void* it_40;
_Bool _for_condtionalA2;
_Bool _if_conditional27;
void* right_value17;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_36, 0, sizeof(struct buffer*));
memset(&n_37, 0, sizeof(int));
memset(&it_40, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
                buf_36=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1082))))))));
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                n_37=0;
                __freed_obj__ = 0;
                for(
                it_40=list$1voidp_begin(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA2=                !list$1voidp_end(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                _for_condtionalA2;                it_40=list$1voidp_next(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1095))) ,                __freed_obj__ = 0, 
                0                ){
                    buffer_append_str(((struct buffer*)come_null_check(buf_36, "./comelang2.h", 1086)),it_40);
                    __freed_obj__ = 0;
                    if(_if_conditional27=n_37<list$1voidp_length(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 1092)))-1,                    __freed_obj__ = 0, 
                    _if_conditional27) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_36, "./comelang2.h", 1089)),sep);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    n_37++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result31__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(((struct buffer*)come_null_check(buf_36, "./comelang2.h", 1095)))));
                if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result31__;
                __freed_obj__ = 0;
                if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void* list$1voidp_begin(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional23;
void* result_38;
void* __result23__;
_Bool _if_conditional24;
void* __result24__;
void* result_39;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_38, 0, sizeof(void*));
memset(&result_39, 0, sizeof(void*));
                    if(_if_conditional23=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional23) {
                        __freed_obj__ = 0;
                        memset(&result_38,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result23__ = __result_obj__ = result_38;
                        __freed_obj__ = 0;
                        return __result23__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional24=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 342))->it,                    __freed_obj__ = 0, 
                    _if_conditional24) {
                        __result24__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_39,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result25__ = __result_obj__ = result_39;
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
}

static _Bool list$1voidp_end(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result26__ = self==((void*)0)||((struct list$1voidp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
}

static void* list$1voidp_next(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional25;
void* result_41;
void* __result27__;
_Bool _if_conditional26;
void* __result28__;
void* result_42;
void* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_41, 0, sizeof(void*));
memset(&result_42, 0, sizeof(void*));
                    if(_if_conditional25=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        __freed_obj__ = 0;
                        memset(&result_41,0,sizeof(void*));
                        __freed_obj__ = 0;
                        __result27__ = __result_obj__ = result_41;
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional26=((struct list$1voidp*)come_null_check(self, "./comelang2.h", 360))->it,                    __freed_obj__ = 0, 
                    _if_conditional26) {
                        __result28__ = __result_obj__ = ((struct list_item$1voidp*)come_null_check(((struct list$1voidp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_42,0,sizeof(void*));
                    __freed_obj__ = 0;
                    __result29__ = __result_obj__ = result_42;
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
}

static int list$1voidp_length(struct list$1voidp* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result30__ = ((struct list$1voidp*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result30__;
                        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
char* default_value_43;
char* __result32__;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_43, 0, sizeof(char*));
                if(_if_conditional28=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional28) {
                    __freed_obj__ = 0;
                    memset(&default_value_43,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result32__ = __result_obj__ = default_value_43;
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                }
                else {
                    __result33__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional29=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional29) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result34__ = 0;
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value20;
char* output_file_name_44;
void* right_value21;
void* right_value22;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&output_file_name_44, 0, sizeof(char*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
    output_file_name_44=(char*)come_increment_ref_count(((char*)(right_value20=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "02transpile.c", 53))->sname))));
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 57),((struct optional$2intbool*)(right_value22=string_write(((char*)come_null_check(((char*)(right_value21=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))), "02transpile.c", 57)),output_file_name_44,(_Bool)0)))));
    come_pop_stackframe();
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result37__ = (_Bool)1;
    if(output_file_name_44 && !__freed_obj__) { output_file_name_44 = come_decrement_ref_count(output_file_name_44, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
    if(output_file_name_44 && !__freed_obj__) { output_file_name_44 = come_decrement_ref_count(output_file_name_44, (void*)0, (void*)0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
int default_value_45;
int __result35__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_45, 0, sizeof(int));
        if(_if_conditional30=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            __freed_obj__ = 0;
            memset(&default_value_45,0,sizeof(int));
            __freed_obj__ = 0;
            __result35__ = default_value_45;
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
        }
        else {
            __result36__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result36__;
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

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* input_file_name_46;
char* output_file_name_47;
_Bool _if_conditional31;
void* right_value23;
char* __dec_obj4;
void* right_value24;
char* __dec_obj5;
void* right_value25;
char* cmd_48;
_Bool exist_common_h_49;
struct __sFILE* f_50;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
int rc_51;
_Bool _if_conditional36;
void* right_value26;
void* right_value27;
char* cmd2_52;
_Bool _if_conditional37;
int rc_53;
_Bool _if_conditional38;
void* right_value28;
void* right_value29;
char* cmd3_54;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value30;
void* right_value31;
char* cmd4_55;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&input_file_name_46, 0, sizeof(char*));
memset(&output_file_name_47, 0, sizeof(char*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&cmd_48, 0, sizeof(char*));
memset(&exist_common_h_49, 0, sizeof(_Bool));
memset(&f_50, 0, sizeof(struct __sFILE*));
memset(&rc_51, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&cmd2_52, 0, sizeof(char*));
memset(&rc_53, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&cmd3_54, 0, sizeof(char*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&cmd4_55, 0, sizeof(char*));
    input_file_name_46=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "02transpile.c", 64))->sname);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional31=!((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_header_file&&((struct sInfo*)come_null_check(info, "02transpile.c", 74))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional31) {
        __dec_obj4=output_file_name_47;
        output_file_name_47=(char*)come_increment_ref_count(((char*)(right_value23=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 68))->output_file_name,".i"))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj5=output_file_name_47;
        output_file_name_47=(char*)come_increment_ref_count(((char*)(right_value24=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 71))->sname,".i"))));
        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    cmd_48=(char*)come_increment_ref_count(((char*)(right_value25=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    exist_common_h_49=(_Bool)0;
    __freed_obj__ = 0;
    {
        f_50=fopen("common.h","r");
        __freed_obj__ = 0;
        if(_if_conditional32=f_50,        __freed_obj__ = 0, 
        _if_conditional32) {
            exist_common_h_49=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=string_operator_equals(((struct sInfo*)come_null_check(info, "02transpile.c", 85))->output_file_name,"common.h"),        __freed_obj__ = 0, 
        _if_conditional33) {
            exist_common_h_49=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional34=f_50,        __freed_obj__ = 0, 
        _if_conditional34) {
            fclose(f_50);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional35=!gCommonHeader,    __freed_obj__ = 0, 
    _if_conditional35) {
        exist_common_h_49=(_Bool)0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_51=system(cmd_48);
    __freed_obj__ = 0;
    if(_if_conditional36=rc_51==0,    __freed_obj__ = 0, 
    _if_conditional36) {
        cmd2_52=(char*)come_increment_ref_count(((char*)(right_value27=xsprintf("/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -U__GNUC__ %s %s > %s",((struct sInfo*)come_null_check(info, "02transpile.c", 97))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_49?((char*)(right_value26=__builtin_string(" -include common.h "))):"",input_file_name_46,output_file_name_47))));
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional37=((struct sInfo*)come_null_check(info, "02transpile.c", 98))->verbose,        __freed_obj__ = 0, 
        _if_conditional37) {
            puts(cmd2_52);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_53=system(cmd2_52);
        __freed_obj__ = 0;
        if(_if_conditional38=rc_53!=0,        __freed_obj__ = 0, 
        _if_conditional38) {
            printf("failed to cpp(2) (%s)\n",cmd2_52);
            __freed_obj__ = 0;
            exit(5);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(cmd2_52 && !__freed_obj__) { cmd2_52 = come_decrement_ref_count(cmd2_52, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        cmd3_54=(char*)come_increment_ref_count(((char*)(right_value29=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 109))->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_49?((char*)(right_value28=__builtin_string(" -include common.h "))):"",input_file_name_46,output_file_name_47))));
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional39=((struct sInfo*)come_null_check(info, "02transpile.c", 111))->verbose,        __freed_obj__ = 0, 
        _if_conditional39) {
            puts(cmd3_54);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        rc_51=system(cmd3_54);
        __freed_obj__ = 0;
        if(_if_conditional40=rc_51!=0,        __freed_obj__ = 0, 
        _if_conditional40) {
            cmd4_55=(char*)come_increment_ref_count(((char*)(right_value31=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 115))->cpp_option,"/usr/local/","/usr/local/",exist_common_h_49?((char*)(right_value30=__builtin_string(" -include common.h "))):"",input_file_name_46,output_file_name_47))));
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional41=((struct sInfo*)come_null_check(info, "02transpile.c", 117))->verbose,            __freed_obj__ = 0, 
            _if_conditional41) {
                puts(cmd4_55);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            rc_51=system(cmd4_55);
            __freed_obj__ = 0;
            if(_if_conditional42=rc_51!=0,            __freed_obj__ = 0, 
            _if_conditional42) {
                printf("failed to cpp(2) (%s)\n",cmd4_55);
                __freed_obj__ = 0;
                exit(5);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(cmd4_55 && !__freed_obj__) { cmd4_55 = come_decrement_ref_count(cmd4_55, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(cmd3_54 && !__freed_obj__) { cmd3_54 = come_decrement_ref_count(cmd3_54, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result38__ = (_Bool)1;
    if(input_file_name_46 && !__freed_obj__) { input_file_name_46 = come_decrement_ref_count(input_file_name_46, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_47 && !__freed_obj__) { output_file_name_47 = come_decrement_ref_count(output_file_name_47, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_48 && !__freed_obj__) { cmd_48 = come_decrement_ref_count(cmd_48, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
    if(input_file_name_46 && !__freed_obj__) { input_file_name_46 = come_decrement_ref_count(input_file_name_46, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_47 && !__freed_obj__) { output_file_name_47 = come_decrement_ref_count(output_file_name_47, (void*)0, (void*)0, 0, 0, 0); }
    if(cmd_48 && !__freed_obj__) { cmd_48 = come_decrement_ref_count(cmd_48, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value32;
char* input_file_name_56;
char* output_file_name_57;
_Bool _if_conditional43;
void* right_value33;
char* __dec_obj6;
void* right_value34;
char* __dec_obj7;
void* right_value35;
char* command_58;
_Bool _if_conditional44;
int rc_59;
void* right_value36;
char* command2_60;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool __result39__;
_Bool _if_conditional47;
void* right_value37;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&input_file_name_56, 0, sizeof(char*));
memset(&output_file_name_57, 0, sizeof(char*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&command_58, 0, sizeof(char*));
memset(&rc_59, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&command2_60, 0, sizeof(char*));
memset(&right_value37, 0, sizeof(void*));
    input_file_name_56=(char*)come_increment_ref_count(((char*)(right_value32=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 132))->sname,".c"))));
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    output_file_name_57=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional43=((struct sInfo*)come_null_check(info, "02transpile.c", 142))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional43) {
        __dec_obj6=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 136))->output_file_name))));
        if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj7=output_file_name_57;
        output_file_name_57=(char*)come_increment_ref_count(((char*)(right_value34=string_operator_add(((struct sInfo*)come_null_check(info, "02transpile.c", 139))->sname,".o"))));
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_58=(char*)come_increment_ref_count(((char*)(right_value35=xsprintf("clang -o %s -c %s %s > %s.out 2>&1",output_file_name_57,input_file_name_56,((struct sInfo*)come_null_check(info, "02transpile.c", 142))->clang_option,input_file_name_56))));
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional44=((struct sInfo*)come_null_check(info, "02transpile.c", 144))->verbose,    __freed_obj__ = 0, 
    _if_conditional44) {
        puts(command_58);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_59=system(command_58);
    __freed_obj__ = 0;
    command2_60=(char*)come_increment_ref_count(((char*)(right_value36=xsprintf("grep error\\: %s.out",input_file_name_56))));
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional45=((struct sInfo*)come_null_check(info, "02transpile.c", 149))->verbose,    __freed_obj__ = 0, 
    _if_conditional45) {
        puts(command2_60);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (void)system(command2_60);
    __freed_obj__ = 0;
    if(_if_conditional46=rc_59!=0,    __freed_obj__ = 0, 
    _if_conditional46) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 153))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 153))->sline);
        __freed_obj__ = 0;
        __result39__ = (_Bool)0;
        if(input_file_name_56 && !__freed_obj__) { input_file_name_56 = come_decrement_ref_count(input_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
        if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
        if(command_58 && !__freed_obj__) { command_58 = come_decrement_ref_count(command_58, (void*)0, (void*)0, 0, 0, 0); }
        if(command2_60 && !__freed_obj__) { command2_60 = come_decrement_ref_count(command2_60, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result39__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional47=!output_object_file,    __freed_obj__ = 0, 
    _if_conditional47) {
        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files, "02transpile.c", 158)),(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(output_file_name_57)))));
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result40__ = (_Bool)1;
    if(input_file_name_56 && !__freed_obj__) { input_file_name_56 = come_decrement_ref_count(input_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
    if(command_58 && !__freed_obj__) { command_58 = come_decrement_ref_count(command_58, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_60 && !__freed_obj__) { command2_60 = come_decrement_ref_count(command2_60, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
    if(input_file_name_56 && !__freed_obj__) { input_file_name_56 = come_decrement_ref_count(input_file_name_56, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_57 && !__freed_obj__) { output_file_name_57 = come_decrement_ref_count(output_file_name_57, (void*)0, (void*)0, 0, 0, 0); }
    if(command_58 && !__freed_obj__) { command_58 = come_decrement_ref_count(command_58, (void*)0, (void*)0, 0, 0, 0); }
    if(command2_60 && !__freed_obj__) { command2_60 = come_decrement_ref_count(command2_60, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
_Bool __freed_obj__;
char* output_file_name_61;
_Bool _if_conditional48;
void* right_value38;
char* __dec_obj8;
void* right_value39;
char* __dec_obj9;
void* right_value40;
void* right_value41;
struct buffer* command_62;
void* right_value42;
struct list$1charph* o2_saved_63;
char* it_66;
_Bool _for_condtionalA3;
void* right_value43;
void* right_value44;
char* cmd_69;
int rc_70;
_Bool _if_conditional53;
void* right_value45;
_Bool _if_conditional54;
void* right_value46;
_Bool _if_conditional55;
void* right_value47;
void* right_value48;
_Bool _if_conditional56;
_Bool __result48__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_61, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&command_62, 0, sizeof(struct buffer*));
memset(&right_value42, 0, sizeof(void*));
memset(&o2_saved_63, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(char*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&cmd_69, 0, sizeof(char*));
memset(&rc_70, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    output_file_name_61=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional48=((struct sInfo*)come_null_check(info, "02transpile.c", 174))->output_file_name,    __freed_obj__ = 0, 
    _if_conditional48) {
        __dec_obj8=output_file_name_61;
        output_file_name_61=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 168))->output_file_name))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj9=output_file_name_61;
        output_file_name_61=(char*)come_increment_ref_count(((char*)(right_value39=xnoextname(((struct sInfo*)come_null_check(info, "02transpile.c", 171))->sname))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    command_62=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value41=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 174))))))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 176)),((char*)(right_value42=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_61,getenv("HOME"),"/usr/local/"))));
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_63=(object_files),it_66=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_63), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_63), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_66=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_63), "02transpile.c", 183))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 179)),((char*)(right_value43=xsprintf("%s ",it_66))));
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 183)),"-L/usr/local/lib -lcomelang2 ");
    __freed_obj__ = 0;
    cmd_69=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    rc_70=system(cmd_69);
    __freed_obj__ = 0;
    if(_if_conditional53=rc_70==0,    __freed_obj__ = 0, 
    _if_conditional53) {
        buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 189))," -L/opt/homebrew/opt/pcre/lib ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 191)),((char*)(right_value45=xsprintf(" %s ",((struct sInfo*)come_null_check(info, "02transpile.c", 191))->clang_option))));
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional54=gComeGC,    __freed_obj__ = 0, 
    _if_conditional54) {
        buffer_append_str(((struct buffer*)come_null_check(command_62, "02transpile.c", 194)),((char*)(right_value46=xsprintf(" -lgc "))));
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional55=((struct sInfo*)come_null_check(info, "02transpile.c", 197))->verbose,    __freed_obj__ = 0, 
    _if_conditional55) {
        puts(((char*)(right_value47=buffer_to_string(((struct buffer*)come_null_check(command_62, "02transpile.c", 197))))));
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    rc_70=system(((char*)(right_value48=buffer_to_string(((struct buffer*)come_null_check(command_62, "02transpile.c", 198))))));
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional56=rc_70!=0,    __freed_obj__ = 0, 
    _if_conditional56) {
        printf("%s %d: clang is faild\n",((struct sInfo*)come_null_check(info, "02transpile.c", 201))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 201))->sline);
        __freed_obj__ = 0;
        __result48__ = (_Bool)0;
        if(output_file_name_61 && !__freed_obj__) { output_file_name_61 = come_decrement_ref_count(output_file_name_61, (void*)0, (void*)0, 0, 0, 0); }
        if(command_62 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cmd_69 && !__freed_obj__) { cmd_69 = come_decrement_ref_count(cmd_69, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result48__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result49__ = (_Bool)1;
    if(output_file_name_61 && !__freed_obj__) { output_file_name_61 = come_decrement_ref_count(output_file_name_61, (void*)0, (void*)0, 0, 0, 0); }
    if(command_62 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_69 && !__freed_obj__) { cmd_69 = come_decrement_ref_count(cmd_69, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
    if(output_file_name_61 && !__freed_obj__) { output_file_name_61 = come_decrement_ref_count(output_file_name_61, (void*)0, (void*)0, 0, 0, 0); }
    if(command_62 && !__freed_obj__) { come_call_finalizer(buffer_finalize,command_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(cmd_69 && !__freed_obj__) { cmd_69 = come_decrement_ref_count(cmd_69, (void*)0, (void*)0, 0, 0, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional49;
char* result_64;
char* __result41__;
_Bool _if_conditional50;
char* __result42__;
char* result_65;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_64, 0, sizeof(char*));
memset(&result_65, 0, sizeof(char*));
        if(_if_conditional49=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            __freed_obj__ = 0;
            memset(&result_64,0,sizeof(char*));
            __freed_obj__ = 0;
            __result41__ = __result_obj__ = result_64;
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional50) {
            __result42__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_65,0,sizeof(char*));
        __freed_obj__ = 0;
        __result43__ = __result_obj__ = result_65;
        __freed_obj__ = 0;
        return __result43__;
        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result44__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional51;
char* result_67;
char* __result45__;
_Bool _if_conditional52;
char* __result46__;
char* result_68;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_67, 0, sizeof(char*));
memset(&result_68, 0, sizeof(char*));
        if(_if_conditional51=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            __freed_obj__ = 0;
            memset(&result_67,0,sizeof(char*));
            __freed_obj__ = 0;
            __result45__ = __result_obj__ = result_67;
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional52=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional52) {
            __result46__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result46__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_68,0,sizeof(char*));
        __freed_obj__ = 0;
        __result47__ = __result_obj__ = result_68;
        __freed_obj__ = 0;
        return __result47__;
        __freed_obj__ = 0;
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
void* right_value50;
struct buffer* __dec_obj10;
void* right_value51;
void* right_value52;
struct buffer* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
struct sModule* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
    __dec_obj10=((struct sModule*)come_null_check(self, "02transpile.c", 210))->mSourceHead;
    ((struct sModule*)come_null_check(self, "02transpile.c", 210))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 210))))))));
    if(__dec_obj10) { come_call_finalizer(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj11=((struct sModule*)come_null_check(self, "02transpile.c", 211))->mSource;
    ((struct sModule*)come_null_check(self, "02transpile.c", 211))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 211))))))));
    if(__dec_obj11) { come_call_finalizer(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj12=((struct sModule*)come_null_check(self, "02transpile.c", 212))->mLastCode;
    ((struct sModule*)come_null_check(self, "02transpile.c", 212))->mLastCode=((void*)0);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj13=((struct sModule*)come_null_check(self, "02transpile.c", 213))->mLastCode2;
    ((struct sModule*)come_null_check(self, "02transpile.c", 213))->mLastCode2=((void*)0);
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional57=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 0))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sModule*)come_null_check(self, "sModule_finalize", 1))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 2))->mLastCode, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 3))->mLastCode2, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0)&&((struct sModule*)come_null_check(self, "sModule_finalize", 5))->mLastCode3!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            if(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 && !__freed_obj__) { ((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3 = come_decrement_ref_count(((struct sModule*)come_null_check(self, "sModule_finalize", 4))->mLastCode3, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value53;
void* right_value59;
struct map$2charphsVarph* __dec_obj15;
static int id_80=0;
struct sVarTable* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
    __dec_obj15=((struct sVarTable*)come_null_check(self, "02transpile.c", 220))->mVars;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 220))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value59=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value53=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02transpile.c", 220))))))));
    if(__dec_obj15) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 221))->mGlobal=global;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 222))->mParent=parent;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    ((struct sVarTable*)come_null_check(self, "02transpile.c", 224))->mID=++id_80;
    __freed_obj__ = 0;
    __result53__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value54;
void* right_value55;
void* right_value56;
int i_75;
_Bool _for_condtionalA4;
void* right_value57;
void* right_value58;
struct list$1charp* __dec_obj14;
struct map$2charphsVarph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&i_75, 0, sizeof(int));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value54=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value55=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1123))));
        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value56=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        i_75=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        i_75<1024 ,        __freed_obj__ = 0, 
        _for_condtionalA4;        i_75++ ,        __freed_obj__ = 0, 
        0        ){
            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_75]=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
        __freed_obj__ = 0;
        __dec_obj14=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value58=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value57=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
        if(__dec_obj14) { come_call_finalizer(list$1charp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
        __freed_obj__ = 0;
        __result52__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result52__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional62=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional65;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional65) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional67=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional67) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional68) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional69) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional71) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional73) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional74) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional75) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional76) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional77) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional78) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional79) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional66=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional66) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_71;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_71, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sTypeph*));
                            it_71=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional8=it_71!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional8) {
                                prev_it_72=it_71;
                                __freed_obj__ = 0;
                                it_71=((struct list_item$1sTypeph*)come_null_check(it_71, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_72 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional70=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional70) {
                                        if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sNodeph*));
                            it_73=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional9=it_73!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional9) {
                                prev_it_74=it_73;
                                __freed_obj__ = 0;
                                it_73=((struct list_item$1sNodeph*)come_null_check(it_73, "./comelang2.h", 172))->next;
                                __freed_obj__ = 0;
                                if(prev_it_74 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional72=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional72) {
                                        if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charp* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_76;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_76, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charp*));
                it_76=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional10=it_76!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    prev_it_77=it_76;
                    __freed_obj__ = 0;
                    it_76=((struct list_item$1charp*)come_null_check(it_76, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_77 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_78;
_Bool _for_condtionalA5;
_Bool _if_conditional81;
_Bool _if_conditional82;
int i_79;
_Bool _for_condtionalA6;
_Bool _if_conditional83;
_Bool _if_conditional84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_78, 0, sizeof(int));
memset(&i_79, 0, sizeof(int));
            for(
            i_78=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_78<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_78++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional81=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_78],                __freed_obj__ = 0, 
                _if_conditional81) {
                    if(_if_conditional82=1,                    __freed_obj__ = 0, 
                    _if_conditional82) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_78] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_78], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->items);
            __freed_obj__ = 0;
            for(
            i_79=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA6=            i_79<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            __freed_obj__ = 0, 
            _for_condtionalA6;            i_79++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional83=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_79],                __freed_obj__ = 0, 
                _if_conditional83) {
                    if(_if_conditional84=1,                    __freed_obj__ = 0, 
                    _if_conditional84) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_79] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_79] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_79], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->keys);
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional85=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 1))->key_list!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(((struct sVarTable*)come_null_check(self, "02transpile.c", 231))->mVars && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,((struct sVarTable*)come_null_check(self, "02transpile.c", 231))->mVars, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int pointer_num_81;
char* p_82;
_Bool _while_condtional11;
_Bool _if_conditional86;
_Bool _while_condtional12;
void* right_value60;
void* right_value61;
char* name2_83;
void* right_value71;
struct sClass* klass_89;
void* right_value72;
struct sClass* generics_class_90;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value73;
struct sClass* klass2_91;
void* right_value74;
char* __dec_obj16;
void* right_value75;
char* __dec_obj17;
void* right_value88;
void* right_value89;
void* right_value90;
void* right_value91;
void* right_value131;
struct tuple1$1sTypeph* __dec_obj43;
void* right_value132;
void* right_value133;
struct tuple1$1sTypeph* __dec_obj44;
void* right_value134;
void* right_value135;
struct list$1sTypeph* __dec_obj45;
void* right_value136;
void* right_value137;
struct list$1sNodeph* __dec_obj46;
void* right_value138;
void* right_value139;
struct list$1sTypeph* __dec_obj47;
void* right_value140;
void* right_value141;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj50;
void* right_value142;
char* __dec_obj51;
struct sType* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&pointer_num_81, 0, sizeof(int));
memset(&p_82, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&name2_83, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&klass_89, 0, sizeof(struct sClass*));
memset(&right_value72, 0, sizeof(void*));
memset(&generics_class_90, 0, sizeof(struct sClass*));
memset(&right_value73, 0, sizeof(void*));
memset(&klass2_91, 0, sizeof(struct sClass*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    pointer_num_81=0;
    __freed_obj__ = 0;
    p_82=name;
    __freed_obj__ = 0;
    while(_while_condtional11=*p_82,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional86=xisalpha(*p_82),        __freed_obj__ = 0, 
        _if_conditional86) {
            p_82++;
            __freed_obj__ = 0;
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional12=*p_82==42,    __freed_obj__ = 0, 
    _while_condtional12) {
        pointer_num_81++;
        __freed_obj__ = 0;
        p_82++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    name2_83=(char*)come_increment_ref_count(((char*)(right_value61=string_substring(((char*)come_null_check(((char*)(right_value60=__builtin_string(name))), "02transpile.c", 251)),0,-pointer_num_81-1))));
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_89=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 253),((struct optional$2sClasspbool*)(right_value71=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 253))->classes,name2_83)))));
    come_pop_stackframe();
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    generics_class_90=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 254),((struct optional$2sClasspbool*)(right_value72=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 254))->generics_classes,name2_83)))));
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional93=klass_89==((void*)0)&&generics_class_90==((void*)0),    __freed_obj__ = 0, 
    _if_conditional93) {
        printf("%s %d: class not found(%s)(1)\n",((struct sInfo*)come_null_check(info, "02transpile.c", 257))->sname,((struct sInfo*)come_null_check(info, "02transpile.c", 257))->sline,name2_83);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional94=klass_89,    __freed_obj__ = 0, 
    _if_conditional94) {
        ((struct sType*)come_null_check(self, "02transpile.c", 260))->mClass=klass_89;
        __freed_obj__ = 0;
    }
    else {
        klass2_91=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value73=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 263))));
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj16=((struct sClass*)come_null_check(klass2_91, "02transpile.c", 264))->mName;
        ((struct sClass*)come_null_check(klass2_91, "02transpile.c", 264))->mName=(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string(name))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj17=((struct sClass*)come_null_check(klass2_91, "02transpile.c", 265))->mDeclareSName;
        ((struct sClass*)come_null_check(klass2_91, "02transpile.c", 265))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 265))->sname))));
        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 267))->classes, "02transpile.c", 267)),(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_91));
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        ((struct sType*)come_null_check(self, "02transpile.c", 269))->mClass=optional$2sClasspbool_value((come_push_stackframe("02transpile.c", 269),((struct optional$2sClasspbool*)(right_value90=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "02transpile.c", 269))->classes,((char*)(right_value89=__builtin_string(name))))))));
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(klass2_91 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass2_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj43=((struct sType*)come_null_check(self, "02transpile.c", 272))->mNoSolvedGenericsType;
    ((struct sType*)come_null_check(self, "02transpile.c", 272))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value131=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 272)))),((void*)0)))));
    if(__dec_obj43) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj44=((struct sType*)come_null_check(self, "02transpile.c", 273))->mOriginalLoadVarType;
    ((struct sType*)come_null_check(self, "02transpile.c", 273))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value133=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value132=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 273)))),((void*)0)))));
    if(__dec_obj44) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj45=((struct sType*)come_null_check(self, "02transpile.c", 274))->mGenericsTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 274))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value135=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 274))))))));
    if(__dec_obj45) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj46=((struct sType*)come_null_check(self, "02transpile.c", 275))->mArrayNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 275))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value136=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02transpile.c", 275))))))));
    if(__dec_obj46) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 276))->mOmitArrayNum=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj47=((struct sType*)come_null_check(self, "02transpile.c", 277))->mParamTypes;
    ((struct sType*)come_null_check(self, "02transpile.c", 277))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value139=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value138=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02transpile.c", 277))))))));
    if(__dec_obj47) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sType*)come_null_check(self, "02transpile.c", 278))->mParamNames;
    ((struct sType*)come_null_check(self, "02transpile.c", 278))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value140=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 278))))))));
    if(__dec_obj48) { come_call_finalizer(list$1charph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 279))->mVarArgs=(_Bool)0;
    __freed_obj__ = 0;
    __dec_obj49=((struct sType*)come_null_check(self, "02transpile.c", 280))->mResultType;
    ((struct sType*)come_null_check(self, "02transpile.c", 280))->mResultType=((void*)0);
    if(__dec_obj49) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 281))->mUnsigned=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 282))->mConstant=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 283))->mRegister=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 284))->mVolatile=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 285))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 286))->mRestrict=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 287))->mImmutable=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 288))->mLongLong=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 289))->mHeap=heap;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 290))->mDummyHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 291))->mNoHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 292))->mRefference=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 294))->mPointerNum=pointer_num_81;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 295))->mNoArrayPointerNum=0;
    __freed_obj__ = 0;
    __dec_obj50=((struct sType*)come_null_check(self, "02transpile.c", 296))->mSizeNum;
    ((struct sType*)come_null_check(self, "02transpile.c", 296))->mSizeNum=((void*)0);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 298))->mDynamicArrayNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 299))->mTypeOfExpression=0;
    __freed_obj__ = 0;
    __dec_obj51=((struct sType*)come_null_check(self, "02transpile.c", 301))->mOriginalTypeName;
    ((struct sType*)come_null_check(self, "02transpile.c", 301))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(""))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 302))->mOriginalPointerNum=0;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(self, "02transpile.c", 304))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_83 && !__freed_obj__) { name2_83 = come_decrement_ref_count(name2_83, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name2_83 && !__freed_obj__) { name2_83 = come_decrement_ref_count(name2_83, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_84;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional13;
_Bool _if_conditional87;
void* right_value62;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional89;
void* right_value63;
void* right_value64;
struct optional$2sClasspbool* __result57__;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value65;
void* right_value66;
struct optional$2sClasspbool* __result58__;
void* right_value67;
void* right_value68;
struct optional$2sClasspbool* __result59__;
void* right_value69;
void* right_value70;
struct optional$2sClasspbool* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_84, 0, sizeof(struct sClass*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_84,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_85=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
        __freed_obj__ = 0;
        it_86=hash_85;
        __freed_obj__ = 0;
        while(_while_condtional13=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional13) {
            if(_if_conditional87=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_86],            __freed_obj__ = 0, 
            _if_conditional87) {
                if(_if_conditional89=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value62=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_86], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                (right_value62 && right_value62 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional89) {
                    __result57__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value64=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value63=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_86],(_Bool)1)));
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result57__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_86++;
                __freed_obj__ = 0;
                if(_if_conditional90=it_86>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                __freed_obj__ = 0, 
                _if_conditional90) {
                    it_86=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional91=it_86==hash_85,                    __freed_obj__ = 0, 
                    _if_conditional91) {
                        __result58__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value66=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value65=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_84,(_Bool)0))));
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result58__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result59__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value68=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value67=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_84,(_Bool)0))));
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result59__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result60__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value70=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value69=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_84,(_Bool)0))));
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result60__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional88;
_Bool default_value_87;
_Bool __result54__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_87, 0, sizeof(_Bool));
                    if(_if_conditional88=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional88) {
                        __freed_obj__ = 0;
                        memset(&default_value_87,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result54__ = default_value_87;
                        __freed_obj__ = 0;
                        return __result54__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result55__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result55__;
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

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
struct sClass* default_value_88;
struct sClass* __result61__;
struct sClass* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_88, 0, sizeof(struct sClass*));
        if(_if_conditional92=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional92) {
            __freed_obj__ = 0;
            memset(&default_value_88,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result61__ = __result_obj__ = default_value_88;
            __freed_obj__ = 0;
            return __result61__;
            __freed_obj__ = 0;
        }
        else {
            __result62__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result62__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional95=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_92;
_Bool _while_condtional14;
struct list_item$1tuple2$2charphsTypephph* prev_it_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_92, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_93, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_92=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional14=it_92!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        prev_it_93=it_92;
                        __freed_obj__ = 0;
                        it_92=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_92, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_93 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional97) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional98;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional98=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional98) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional99=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional99) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional101;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional17;
_Bool _if_conditional113;
void* right_value82;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool same_key_exist_129;
char* it2_132;
_Bool _for_condtionalA8;
void* right_value84;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct map$2charphsClassph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
memset(&right_value82, 0, sizeof(void*));
memset(&same_key_exist_129, 0, sizeof(_Bool));
memset(&it2_132, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
            if(_if_conditional101=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional101) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_111=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_112=hash_111;
            __freed_obj__ = 0;
            while(_while_condtional17=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional17) {
                if(_if_conditional113=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_112],                __freed_obj__ = 0, 
                _if_conditional113) {
                    if(_if_conditional114=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value82=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_112], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                    (right_value82 && right_value82 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        if(_if_conditional115=1,                        __freed_obj__ = 0, 
                        _if_conditional115) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_112]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_112] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_112] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_112], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_112]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_112]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_112]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional135=1,                        __freed_obj__ = 0, 
                        _if_conditional135) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_112] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_112], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_112]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_112]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_112++;
                    __freed_obj__ = 0;
                    if(_if_conditional136=it_112>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        it_112=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional137=it_112==hash_111,                        __freed_obj__ = 0, 
                        _if_conditional137) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_112]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional138=1,                    __freed_obj__ = 0, 
                    _if_conditional138) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_112]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_112]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional139=1,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_112]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_112]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_129=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_132=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA8=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA8;            it2_132=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional144=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value84=string_equals(((char*)come_null_check(it2_132, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value84 && right_value84 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional144) {
                    same_key_exist_129=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional145=!same_key_exist_129,            __freed_obj__ = 0, 
            _if_conditional145) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result86__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result86__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_94;
void* right_value76;
char** keys_95;
void* right_value77;
struct sClass** items_96;
void* right_value78;
_Bool* item_existance_97;
int len_98;
char* it_101;
_Bool _for_condtionalA7;
struct sClass* default_value_104;
void* right_value80;
struct sClass* it2_107;
unsigned int hash_108;
int n_109;
_Bool _while_condtional16;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sClass* default_value_110;
void* right_value81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_94, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
memset(&keys_95, 0, sizeof(char**));
memset(&right_value77, 0, sizeof(void*));
memset(&items_96, 0, sizeof(struct sClass**));
memset(&right_value78, 0, sizeof(void*));
memset(&item_existance_97, 0, sizeof(_Bool*));
memset(&len_98, 0, sizeof(int));
memset(&it_101, 0, sizeof(char*));
memset(&default_value_104, 0, sizeof(struct sClass*));
memset(&right_value80, 0, sizeof(void*));
memset(&it2_107, 0, sizeof(struct sClass*));
memset(&hash_108, 0, sizeof(unsigned int));
memset(&n_109, 0, sizeof(int));
memset(&default_value_110, 0, sizeof(struct sClass*));
memset(&right_value81, 0, sizeof(void*));
                    size_94=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_95=(char**)come_increment_ref_count(((char**)(right_value76=(char**)come_calloc(1, sizeof(char*)*(1*(size_94)), "./comelang2.h", 1370))));
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_96=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value77=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_94)), "./comelang2.h", 1371))));
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_97=(_Bool*)come_increment_ref_count(((_Bool*)(right_value78=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_94)), "./comelang2.h", 1372))));
                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_98=0;
                    __freed_obj__ = 0;
                    for(
                    it_101=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA7=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA7;                    it_101=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_104,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_107=((struct sClass*)(right_value80=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_101,default_value_104)));
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_108=string_get_hash_key(((char*)come_null_check(it_101, "./comelang2.h", 1380)))%size_94;
                        __freed_obj__ = 0;
                        n_109=hash_108;
                        __freed_obj__ = 0;
                        while(_while_condtional16=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional16) {
                            if(_if_conditional110=item_existance_97[n_109],                            __freed_obj__ = 0, 
                            _if_conditional110) {
                                n_109++;
                                __freed_obj__ = 0;
                                if(_if_conditional111=n_109>=size_94,                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    n_109=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional112=n_109==hash_108,                                    __freed_obj__ = 0, 
                                    _if_conditional112) {
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
                                item_existance_97[n_109]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_95[n_109]=it_101;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_96[n_109]=((struct sClass*)(right_value81=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_101,default_value_110)));
                                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_98++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_95;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_96;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_97;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_94;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_98;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional102;
char* result_99;
char* __result63__;
_Bool _if_conditional103;
char* __result64__;
char* result_100;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __freed_obj__ = 0;
                            memset(&result_99,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result63__ = __result_obj__ = result_99;
                            __freed_obj__ = 0;
                            return __result63__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional103=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional103) {
                            __result64__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_100,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result65__ = __result_obj__ = result_100;
                        __freed_obj__ = 0;
                        return __result65__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result66__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result66__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
char* result_102;
char* __result67__;
_Bool _if_conditional105;
char* __result68__;
char* result_103;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_102, 0, sizeof(char*));
memset(&result_103, 0, sizeof(char*));
                        if(_if_conditional104=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional104) {
                            __freed_obj__ = 0;
                            memset(&result_102,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result67__ = __result_obj__ = result_102;
                            __freed_obj__ = 0;
                            return __result67__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional105=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional105) {
                            __result68__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result68__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_103,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result69__ = __result_obj__ = result_103;
                        __freed_obj__ = 0;
                        return __result69__;
                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_105;
unsigned int it_106;
_Bool _while_condtional15;
_Bool _if_conditional106;
void* right_value79;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional107;
struct sClass* __result70__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sClass* __result71__;
struct sClass* __result72__;
struct sClass* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_105, 0, sizeof(unsigned int));
memset(&it_106, 0, sizeof(unsigned int));
memset(&right_value79, 0, sizeof(void*));
                            hash_105=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_106=hash_105;
                            __freed_obj__ = 0;
                            while(_while_condtional15=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional15) {
                                if(_if_conditional106=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_106],                                __freed_obj__ = 0, 
                                _if_conditional106) {
                                    if(_if_conditional107=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value79=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_106], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                    (right_value79 && right_value79 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional107) {
                                        __result70__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_106];
                                        __freed_obj__ = 0;
                                        return __result70__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_106++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional108=it_106>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional108) {
                                        it_106=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional109=it_106==hash_105,                                        __freed_obj__ = 0, 
                                        _if_conditional109) {
                                            __result71__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result71__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result72__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result72__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result73__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result73__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_113;
struct list_item$1charp* it_114;
_Bool _while_condtional18;
void* right_value83;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional116;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_113, 0, sizeof(int));
memset(&it_114, 0, sizeof(struct list_item$1charp*));
memset(&right_value83, 0, sizeof(void*));
                                it2_113=0;
                                __freed_obj__ = 0;
                                it_114=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_114!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional116=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value83=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_114, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                    (right_value83 && right_value83 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional116) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_113,it2_113+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_113++;
                                    __freed_obj__ = 0;
                                    it_114=((struct list_item$1charp*)come_null_check(it_114, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result77__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result77__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int tmp_115;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list$1charp* __result74__;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list_item$1charp* it_118;
int i_119;
_Bool _while_condtional20;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_120;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct list_item$1charp* it_121;
int i_122;
_Bool _while_condtional21;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list_item$1charp* prev_it_123;
struct list_item$1charp* it_124;
struct list_item$1charp* head_prev_it_125;
struct list_item$1charp* tail_it_126;
int i_127;
_Bool _while_condtional22;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct list_item$1charp* prev_it_128;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list$1charp* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_115, 0, sizeof(int));
memset(&it_118, 0, sizeof(struct list_item$1charp*));
memset(&i_119, 0, sizeof(int));
memset(&prev_it_120, 0, sizeof(struct list_item$1charp*));
memset(&it_121, 0, sizeof(struct list_item$1charp*));
memset(&i_122, 0, sizeof(int));
memset(&prev_it_123, 0, sizeof(struct list_item$1charp*));
memset(&it_124, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_125, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_126, 0, sizeof(struct list_item$1charp*));
memset(&i_127, 0, sizeof(int));
memset(&prev_it_128, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional117=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional117) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional118=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional118) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional119=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional119) {
                                                tmp_115=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_115;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional120=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional120) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional121=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional121) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional122=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional122) {
                                                __result74__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result74__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional123=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional123) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional124=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional124) {
                                                    it_118=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_119=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional20=it_118!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional20) {
                                                        if(_if_conditional125=i_119<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional125) {
                                                            prev_it_120=it_118;
                                                            __freed_obj__ = 0;
                                                            it_118=((struct list_item$1charp*)come_null_check(it_118, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_119++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_120 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional126=i_119==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional126) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_118;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_118=((struct list_item$1charp*)come_null_check(it_118, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_119++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional127=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional127) {
                                                        it_121=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_122=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional21=it_121!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional21) {
                                                            if(_if_conditional128=i_122==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional128) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_121, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional129=i_122>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional129) {
                                                                prev_it_123=it_121;
                                                                __freed_obj__ = 0;
                                                                it_121=((struct list_item$1charp*)come_null_check(it_121, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_122++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_123 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_121=((struct list_item$1charp*)come_null_check(it_121, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_122++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_124=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_125=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_126=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_127=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional22=it_124!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional22) {
                                                            if(_if_conditional130=i_127==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional130) {
                                                                head_prev_it_125=((struct list_item$1charp*)come_null_check(it_124, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional131=i_127==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional131) {
                                                                tail_it_126=it_124;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional132=i_127>=head&&i_127<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional132) {
                                                                prev_it_128=it_124;
                                                                __freed_obj__ = 0;
                                                                it_124=((struct list_item$1charp*)come_null_check(it_124, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_127++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_128 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_128, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_124=((struct list_item$1charp*)come_null_check(it_124, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_127++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional133=head_prev_it_125!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional133) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_125, "./comelang2.h", 620))->next=tail_it_126;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional134=tail_it_126!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional134) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_126, "./comelang2.h", 623))->prev=head_prev_it_125;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result76__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result76__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_116;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_117;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_116, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_117, 0, sizeof(struct list_item$1charp*));
                                                    it_116=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_116!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        prev_it_117=it_116;
                                                        __freed_obj__ = 0;
                                                        it_116=((struct list_item$1charp*)come_null_check(it_116, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_117 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result75__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result75__;
                                                    __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional140;
char* result_130;
char* __result78__;
_Bool _if_conditional141;
char* __result79__;
char* result_131;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_130, 0, sizeof(char*));
memset(&result_131, 0, sizeof(char*));
                if(_if_conditional140=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional140) {
                    __freed_obj__ = 0;
                    memset(&result_130,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result78__ = __result_obj__ = result_130;
                    __freed_obj__ = 0;
                    return __result78__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional141=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional141) {
                    __result79__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_131,0,sizeof(char*));
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = result_131;
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result81__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional142;
char* result_133;
char* __result82__;
_Bool _if_conditional143;
char* __result83__;
char* result_134;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_133, 0, sizeof(char*));
memset(&result_134, 0, sizeof(char*));
                if(_if_conditional142=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional142) {
                    __freed_obj__ = 0;
                    memset(&result_133,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result82__ = __result_obj__ = result_133;
                    __freed_obj__ = 0;
                    return __result82__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional143=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional143) {
                    __result83__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_134,0,sizeof(char*));
                __freed_obj__ = 0;
                __result84__ = __result_obj__ = result_134;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional146;
void* right_value85;
struct list_item$1charp* litem_135;
_Bool _if_conditional147;
void* right_value86;
struct list_item$1charp* litem_136;
void* right_value87;
struct list_item$1charp* litem_137;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&litem_135, 0, sizeof(struct list_item$1charp*));
memset(&right_value86, 0, sizeof(void*));
memset(&litem_136, 0, sizeof(struct list_item$1charp*));
memset(&right_value87, 0, sizeof(void*));
memset(&litem_137, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional146=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional146) {
                        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value85=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_135, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_135, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_135, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_135;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_135;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional147=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional147) {
                            litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value86=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_136, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_136, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_136, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_136;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_136;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value87=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_137, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_137, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_137, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_137;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_137;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result85__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result85__;
                    __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value130;
struct sType* __dec_obj42;
struct tuple1$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
        __dec_obj42=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(v1))));
        if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result108__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional148;
struct sType* __result87__;
void* right_value92;
struct sType* result_138;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional154;
void* right_value98;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional157;
void* right_value99;
char* __dec_obj22;
_Bool _if_conditional158;
void* right_value106;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional162;
void* right_value114;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value115;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional177;
void* right_value122;
struct list$1charph* __dec_obj35;
_Bool _if_conditional181;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value126;
struct sNode* __dec_obj38;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value127;
struct sNode* __dec_obj39;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value128;
char* __dec_obj40;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value129;
char* __dec_obj41;
struct sType* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
memset(&result_138, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
            if(_if_conditional148=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional148) {
                __result87__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional149=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional149) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional150) {
                __dec_obj19=((struct sType*)come_null_check(result_138, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_138, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional154) {
                __dec_obj21=((struct sType*)come_null_check(result_138, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_138, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value98=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj21) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional157) {
                __dec_obj22=((struct sType*)come_null_check(result_138, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_138, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional158=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional158) {
                __dec_obj26=((struct sType*)come_null_check(result_138, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_138, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj26) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional162=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional162) {
                __dec_obj30=((struct sType*)come_null_check(result_138, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_138, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional175=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional176=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional176) {
                __dec_obj31=((struct sType*)come_null_check(result_138, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_138, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional177=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional177) {
                __dec_obj35=((struct sType*)come_null_check(result_138, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_138, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional181=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional181) {
                __dec_obj37=((struct sType*)come_null_check(result_138, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_138, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj37) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional184=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional184) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional185=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional185) {
                __dec_obj38=((struct sType*)come_null_check(result_138, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_138, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional186=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional186) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional187=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional187) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional188=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional189) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional190=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional190) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional191=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional192=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional192) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional193=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional193) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional194=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional194) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional197=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional197) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional198=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional199=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional200=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional200) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional201=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional201) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional202=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional202) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional203=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional203) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional204=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional204) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional205=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional205) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional206=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional207=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional207) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional208=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional208) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional209=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                __dec_obj39=((struct sType*)come_null_check(result_138, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_138, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional210=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional211=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional211) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional212=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional212) {
                __dec_obj40=((struct sType*)come_null_check(result_138, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_138, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional213=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional214=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                ((struct sType*)come_null_check(result_138, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                __dec_obj41=((struct sType*)come_null_check(result_138, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_138, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result107__ = __result_obj__ = result_138;
            if(result_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_138, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
            if(result_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_138, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional152=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional152) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional159;
struct list$1sTypeph* __result92__;
void* right_value100;
void* right_value101;
struct list$1sTypeph* result_141;
struct list_item$1sTypeph* it_142;
_Bool _while_condtional23;
void* right_value105;
struct list$1sTypeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&result_141, 0, sizeof(struct list$1sTypeph*));
memset(&it_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value105, 0, sizeof(void*));
                    if(_if_conditional159=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional159) {
                        __result92__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result92__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_141=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value100=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_142=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional23=it_142!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional23) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_141, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_142, "./comelang2.h", 192))->item)))));
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_142=((struct list_item$1sTypeph*)come_null_check(it_142, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result95__ = __result_obj__ = result_141;
                    if(result_141 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result95__;
                    __freed_obj__ = 0;
                    if(result_141 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional160;
void* right_value102;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj23;
_Bool _if_conditional161;
void* right_value103;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj24;
void* right_value104;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj25;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional160=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional160) {
                                litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_143, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_143, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_143, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_143, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_143;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_143;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional161=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional161) {
                                    litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj24=((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_144;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_144;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj25=((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_145;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_145;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result94__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result94__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional163;
struct list$1sNodeph* __result96__;
void* right_value107;
void* right_value108;
struct list$1sNodeph* result_146;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional24;
void* right_value113;
struct list$1sNodeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct list$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value113, 0, sizeof(void*));
                    if(_if_conditional163=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional163) {
                        __result96__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result96__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_146=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value107=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_147=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional24=it_147!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional24) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_146, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_147, "./comelang2.h", 192))->item)))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        it_147=((struct list_item$1sNodeph*)come_null_check(it_147, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result101__ = __result_obj__ = result_146;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result101__;
                    __freed_obj__ = 0;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result97__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result97__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional164;
void* right_value109;
struct list_item$1sNodeph* litem_148;
struct sNode* __dec_obj27;
_Bool _if_conditional165;
void* right_value110;
struct list_item$1sNodeph* litem_149;
struct sNode* __dec_obj28;
void* right_value111;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj29;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value110, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional164=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional164) {
                                litem_148=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_148, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_148, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj27=((struct list_item$1sNodeph*)come_null_check(litem_148, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_148, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_148;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_148;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional165=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional165) {
                                    litem_149=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value110=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_149, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_149, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj28=((struct list_item$1sNodeph*)come_null_check(litem_149, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_149, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_149;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_149;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value111=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_150, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_150, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj29=((struct list_item$1sNodeph*)come_null_check(litem_150, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_150, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_150;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_150;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result98__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result98__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional166;
struct sNode* __result99__;
void* right_value112;
struct sNode* result_151;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct sNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&result_151, 0, sizeof(struct sNode*));
                            if(_if_conditional166=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional166) {
                                __result99__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result99__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            if(_if_conditional167=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional167) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional168=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional168) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional169=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional169) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional170=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional170) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional171=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional171) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional172=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional172) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional173=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional173) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional174=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional174) {
                                ((struct sNode*)come_null_check(result_151, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result100__ = __result_obj__ = result_151;
                            if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, ((struct sNode*)result_151)->finalize, ((struct sNode*)result_151)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result100__;
                            __freed_obj__ = 0;
                            if(result_151 && !__freed_obj__) { result_151 = come_decrement_ref_count(result_151, ((struct sNode*)result_151)->finalize, ((struct sNode*)result_151)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional178;
struct list$1charph* __result102__;
void* right_value116;
void* right_value117;
struct list$1charph* result_152;
struct list_item$1charph* it_153;
_Bool _while_condtional25;
void* right_value121;
struct list$1charph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct list$1charph*));
memset(&it_153, 0, sizeof(struct list_item$1charph*));
memset(&right_value121, 0, sizeof(void*));
                    if(_if_conditional178=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional178) {
                        __result102__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result102__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value116=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_153=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional25=it_153!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional25) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_152, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value121=string_clone(((struct list_item$1charph*)come_null_check(it_153, "./comelang2.h", 192))->item)))));
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_153=((struct list_item$1charph*)come_null_check(it_153, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result104__ = __result_obj__ = result_152;
                    if(result_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result104__;
                    __freed_obj__ = 0;
                    if(result_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional179;
void* right_value118;
struct list_item$1charph* litem_154;
char* __dec_obj32;
_Bool _if_conditional180;
void* right_value119;
struct list_item$1charph* litem_155;
char* __dec_obj33;
void* right_value120;
struct list_item$1charph* litem_156;
char* __dec_obj34;
struct list$1charph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
memset(&right_value119, 0, sizeof(void*));
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
memset(&right_value120, 0, sizeof(void*));
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional179=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional179) {
                                litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj32=((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_154;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_154;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional180=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional180) {
                                    litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj33=((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_155;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_155;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_156, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_156, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj34=((struct list_item$1charph*)come_null_check(litem_156, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_156, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_156;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_156;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result103__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result103__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
struct tuple1$1sTypeph* __result105__;
void* right_value123;
struct tuple1$1sTypeph* result_157;
_Bool _if_conditional183;
void* right_value124;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&result_157, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value124, 0, sizeof(void*));
                    if(_if_conditional182=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                        __result105__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result105__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_157=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional183=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional183) {
                        __dec_obj36=((struct tuple1$1sTypeph*)come_null_check(result_157, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_157, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result106__ = __result_obj__ = result_157;
                    if(result_157 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_157, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result106__;
                    __freed_obj__ = 0;
                    if(result_157 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_157, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value143;
char* __dec_obj52;
void* right_value144;
void* right_value145;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
void* right_value146;
char* __dec_obj54;
struct sClass* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    ((struct sClass*)come_null_check(self, "02transpile.c", 311))->mNumber=number;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 312))->mStruct=struct_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 313))->mUnion=union_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 314))->mGenerics=generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 315))->mMethodGenerics=method_generics;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 316))->mEnum=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 317))->mProtocol=protocol_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 318))->mFloat=float_;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 319))->mEnum=enum_;
    __freed_obj__ = 0;
    __dec_obj52=((struct sClass*)come_null_check(self, "02transpile.c", 321))->mName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 321))->mName=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(name))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 323))->mGenericsNum=generics_num;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(self, "02transpile.c", 324))->mMethodGenericsNum=method_generics_num;
    __freed_obj__ = 0;
    __dec_obj53=((struct sClass*)come_null_check(self, "02transpile.c", 326))->mFields;
    ((struct sClass*)come_null_check(self, "02transpile.c", 326))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value145=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value144=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02transpile.c", 326))))))));
    if(__dec_obj53) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct sClass*)come_null_check(self, "02transpile.c", 328))->mDeclareSName;
    ((struct sClass*)come_null_check(self, "02transpile.c", 328))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(((struct sInfo*)come_null_check(info, "02transpile.c", 328))->sname))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsTypephph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result110__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj55;
struct sType* __dec_obj56;
struct list$1sTypeph* __dec_obj57;
struct list$1charph* __dec_obj58;
struct list$1charph* __dec_obj59;
void* right_value147;
void* right_value148;
struct sType* __dec_obj60;
struct list$1sTypeph* o2_saved_158;
struct sType* it_161;
_Bool _for_condtionalA9;
void* right_value152;
struct list$1charph* o2_saved_167;
char* it_168;
_Bool _for_condtionalA10;
void* right_value153;
void* right_value154;
void* right_value155;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value156;
void* right_value157;
struct buffer* __dec_obj65;
void* right_value158;
void* right_value159;
struct buffer* __dec_obj66;
void* right_value160;
void* right_value161;
struct buffer* __dec_obj67;
void* right_value162;
void* right_value163;
struct buffer* __dec_obj68;
void* right_value189;
struct sBlock* __dec_obj76;
char* __dec_obj77;
void* right_value190;
char* __dec_obj78;
struct sFun* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&o2_saved_158, 0, sizeof(struct list$1sTypeph*));
memset(&it_161, 0, sizeof(struct sType*));
memset(&right_value152, 0, sizeof(void*));
memset(&o2_saved_167, 0, sizeof(struct list$1charph*));
memset(&it_168, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
    __dec_obj55=((struct sFun*)come_null_check(self, "02transpile.c", 335))->mName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 335))->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj56=((struct sFun*)come_null_check(self, "02transpile.c", 336))->mResultType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 336))->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj57=((struct sFun*)come_null_check(self, "02transpile.c", 337))->mParamTypes;
    ((struct sFun*)come_null_check(self, "02transpile.c", 337))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj57) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj58=((struct sFun*)come_null_check(self, "02transpile.c", 338))->mParamNames;
    ((struct sFun*)come_null_check(self, "02transpile.c", 338))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj58) { come_call_finalizer(list$1charph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj59=((struct sFun*)come_null_check(self, "02transpile.c", 339))->mParamDefaultParametors;
    ((struct sFun*)come_null_check(self, "02transpile.c", 339))->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj59) { come_call_finalizer(list$1charph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 340))->mExternal=external;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 341))->mVarArgs=var_args;
    __freed_obj__ = 0;
    ((struct sFun*)come_null_check(self, "02transpile.c", 342))->mStatic=static_;
    __freed_obj__ = 0;
    __dec_obj60=((struct sFun*)come_null_check(self, "02transpile.c", 344))->mLambdaType;
    ((struct sFun*)come_null_check(self, "02transpile.c", 344))->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 344)))),"lambda",(_Bool)0,info))));
    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_158=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_161=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_158), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_158), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    _for_condtionalA9;    it_161=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_158), "02transpile.c", 350))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 347))->mLambdaType, "02transpile.c", 347))->mParamTypes, "02transpile.c", 347)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(it_161)))));
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_158 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_167=(struct list$1charph*)come_increment_ref_count((param_names)),it_168=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_167), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA10=    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_167), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    _for_condtionalA10;    it_168=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_167), "02transpile.c", 354))) ,    __freed_obj__ = 0, 
    0    ){
        list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 351))->mLambdaType, "02transpile.c", 351))->mParamNames, "02transpile.c", 351)),(char*)come_increment_ref_count(((char*)(right_value153=string_clone(it_168)))));
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_167 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_167, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj64=((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 354))->mLambdaType, "02transpile.c", 354))->mResultType;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 354))->mLambdaType, "02transpile.c", 354))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value155=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02transpile.c", 354)))),(struct sType*)come_increment_ref_count(result_type)))));
    if(__dec_obj64) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct sFun*)come_null_check(self, "02transpile.c", 355))->mLambdaType, "02transpile.c", 355))->mVarArgs=var_args;
    __freed_obj__ = 0;
    __dec_obj65=((struct sFun*)come_null_check(self, "02transpile.c", 357))->mSource;
    ((struct sFun*)come_null_check(self, "02transpile.c", 357))->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value157=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value156=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 357))))))));
    if(__dec_obj65) { come_call_finalizer(buffer_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj66=((struct sFun*)come_null_check(self, "02transpile.c", 358))->mSourceHead;
    ((struct sFun*)come_null_check(self, "02transpile.c", 358))->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 358))))))));
    if(__dec_obj66) { come_call_finalizer(buffer_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj67=((struct sFun*)come_null_check(self, "02transpile.c", 359))->mSourceHead2;
    ((struct sFun*)come_null_check(self, "02transpile.c", 359))->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 359))))))));
    if(__dec_obj67) { come_call_finalizer(buffer_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj68=((struct sFun*)come_null_check(self, "02transpile.c", 360))->mSourceDefer;
    ((struct sFun*)come_null_check(self, "02transpile.c", 360))->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value163=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value162=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 360))))))));
    if(__dec_obj68) { come_call_finalizer(buffer_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj76=((struct sFun*)come_null_check(self, "02transpile.c", 362))->mBlock;
    ((struct sFun*)come_null_check(self, "02transpile.c", 362))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value189=sBlock_clone(block))));
    if(__dec_obj76) { come_call_finalizer(sBlock_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj77=((struct sFun*)come_null_check(self, "02transpile.c", 364))->mComeHeader;
    ((struct sFun*)come_null_check(self, "02transpile.c", 364))->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj78=((struct sFun*)come_null_check(self, "02transpile.c", 366))->mDeclareSName;
    ((struct sFun*)come_null_check(self, "02transpile.c", 366))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(declare_sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result142__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(param_default_parametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(block && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(come_header && !__freed_obj__) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1, 0); }
    if(declare_sname && !__freed_obj__) { declare_sname = come_decrement_ref_count(declare_sname, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional222;
struct sType* result_159;
struct sType* __result112__;
_Bool _if_conditional223;
struct sType* __result113__;
struct sType* result_160;
struct sType* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(struct sType*));
memset(&result_160, 0, sizeof(struct sType*));
        if(_if_conditional222=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional222) {
            __freed_obj__ = 0;
            memset(&result_159,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = result_159;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional223=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional223) {
            __result113__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_160,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result114__ = __result_obj__ = result_160;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result115__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional224;
struct sType* result_162;
struct sType* __result116__;
_Bool _if_conditional225;
struct sType* __result117__;
struct sType* result_163;
struct sType* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(struct sType*));
memset(&result_163, 0, sizeof(struct sType*));
        if(_if_conditional224=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional224) {
            __freed_obj__ = 0;
            memset(&result_162,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result116__ = __result_obj__ = result_162;
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional225=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional225) {
            __result117__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_163,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result118__ = __result_obj__ = result_163;
        __freed_obj__ = 0;
        return __result118__;
        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional226;
void* right_value149;
struct list_item$1sTypeph* litem_164;
struct sType* __dec_obj61;
_Bool _if_conditional227;
void* right_value150;
struct list_item$1sTypeph* litem_165;
struct sType* __dec_obj62;
void* right_value151;
struct list_item$1sTypeph* litem_166;
struct sType* __dec_obj63;
struct list$1sTypeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&litem_164, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value150, 0, sizeof(void*));
memset(&litem_165, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value151, 0, sizeof(void*));
memset(&litem_166, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional226=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional226) {
                litem_164=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_164, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_164, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_164, "./comelang2.h", 276))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_164, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_164;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_164;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional227=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional227) {
                    litem_165=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_165, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_165, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj62=((struct list_item$1sTypeph*)come_null_check(litem_165, "./comelang2.h", 286))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_165, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_165;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_165;
                    __freed_obj__ = 0;
                }
                else {
                    litem_166=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value151=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_166, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_166, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj63=((struct list_item$1sTypeph*)come_null_check(litem_166, "./comelang2.h", 296))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_166, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_166;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_166;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result119__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional228;
struct sBlock* __result120__;
void* right_value164;
struct sBlock* result_169;
_Bool _if_conditional231;
void* right_value168;
struct list$1sNodeph* __dec_obj69;
_Bool _if_conditional233;
void* right_value188;
struct sVarTable* __dec_obj75;
struct sBlock* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sBlock*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
        if(_if_conditional228=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional228) {
            __result120__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result120__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_169=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value164=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional231=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mNodes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            __dec_obj69=((struct sBlock*)come_null_check(result_169, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_169, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value168=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj69) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional233=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 6))->mVarTable!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional233) {
            __dec_obj75=((struct sBlock*)come_null_check(result_169, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_169, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value188=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj75) { come_call_finalizer(sVarTable_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result141__ = __result_obj__ = result_169;
        if(result_169 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result141__;
        __freed_obj__ = 0;
        if(result_169 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional229=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional230=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional232;
struct list$1sNodeph* __result121__;
void* right_value165;
void* right_value166;
struct list$1sNodeph* result_170;
struct list_item$1sNodeph* it_171;
_Bool _while_condtional26;
void* right_value167;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&result_170, 0, sizeof(struct list$1sNodeph*));
memset(&it_171, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value167, 0, sizeof(void*));
                if(_if_conditional232=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional232) {
                    __result121__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result121__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_170=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value166=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value165=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_171=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional26=it_171!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional26) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_170, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_171, "./comelang2.h", 192))->item)))));
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    it_171=((struct list_item$1sNodeph*)come_null_check(it_171, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result122__ = __result_obj__ = result_170;
                if(result_170 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result122__;
                __freed_obj__ = 0;
                if(result_170 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional234;
struct sVarTable* __result123__;
void* right_value169;
struct sVarTable* result_172;
_Bool _if_conditional235;
void* right_value187;
struct map$2charphsVarph* __dec_obj74;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
struct sVarTable* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct sVarTable*));
memset(&right_value187, 0, sizeof(void*));
                if(_if_conditional234=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional234) {
                    __result123__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result123__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_172=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value169=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional235=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mVars!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional235) {
                    __dec_obj74=((struct sVarTable*)come_null_check(result_172, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_172, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value187=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj74) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional269=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional269) {
                    ((struct sVarTable*)come_null_check(result_172, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional270=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional270) {
                    ((struct sVarTable*)come_null_check(result_172, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional271=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional271) {
                    ((struct sVarTable*)come_null_check(result_172, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result140__ = __result_obj__ = result_172;
                if(result_172 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_172, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
                if(result_172 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_172, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional236;
struct map$2charphsVarph* __result124__;
void* right_value170;
void* right_value171;
struct map$2charphsVarph* result_173;
char* it_176;
_Bool _for_condtionalA11;
struct sVar* default_value_179;
void* right_value173;
struct sVar* it2_182;
void* right_value186;
struct map$2charphsVarph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&result_173, 0, sizeof(struct map$2charphsVarph*));
memset(&it_176, 0, sizeof(char*));
memset(&default_value_179, 0, sizeof(struct sVar*));
memset(&right_value173, 0, sizeof(void*));
memset(&it2_182, 0, sizeof(struct sVar*));
memset(&right_value186, 0, sizeof(void*));
                        if(_if_conditional236=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            __result124__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result124__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_173=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value171=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value170=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1215))))))));
                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        for(
                        it_176=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA11=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA11;                        it_176=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_179,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_182=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value173=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1221)),it_176,default_value_179))));
                            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_173, "./comelang2.h", 1223)),it_176,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value186=sVar_clone(it2_182)))));
                            if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(it2_182 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        __result139__ = __result_obj__ = result_173;
                        if(result_173 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result139__;
                        __freed_obj__ = 0;
                        if(result_173 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional237;
char* result_174;
char* __result125__;
_Bool _if_conditional238;
char* __result126__;
char* result_175;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_174, 0, sizeof(char*));
memset(&result_175, 0, sizeof(char*));
                            if(_if_conditional237=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional237) {
                                __freed_obj__ = 0;
                                memset(&result_174,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result125__ = __result_obj__ = result_174;
                                __freed_obj__ = 0;
                                return __result125__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional238=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                            __freed_obj__ = 0, 
                            _if_conditional238) {
                                __result126__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                __freed_obj__ = 0;
                                return __result126__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_175,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result127__ = __result_obj__ = result_175;
                            __freed_obj__ = 0;
                            return __result127__;
                            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result128__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result128__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional239;
char* result_177;
char* __result129__;
_Bool _if_conditional240;
char* __result130__;
char* result_178;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_177, 0, sizeof(char*));
memset(&result_178, 0, sizeof(char*));
                            if(_if_conditional239=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional239) {
                                __freed_obj__ = 0;
                                memset(&result_177,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result129__ = __result_obj__ = result_177;
                                __freed_obj__ = 0;
                                return __result129__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional240=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                            __freed_obj__ = 0, 
                            _if_conditional240) {
                                __result130__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                __freed_obj__ = 0;
                                return __result130__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_178,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result131__ = __result_obj__ = result_178;
                            __freed_obj__ = 0;
                            return __result131__;
                            __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_180;
unsigned int it_181;
_Bool _while_condtional27;
_Bool _if_conditional241;
void* right_value172;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional242;
struct sVar* __result132__;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct sVar* __result133__;
struct sVar* __result134__;
struct sVar* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&it_181, 0, sizeof(unsigned int));
memset(&right_value172, 0, sizeof(void*));
                                hash_180=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                __freed_obj__ = 0;
                                it_181=hash_180;
                                __freed_obj__ = 0;
                                while(_while_condtional27=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional27) {
                                    if(_if_conditional241=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_181],                                    __freed_obj__ = 0, 
                                    _if_conditional241) {
                                        if(_if_conditional242=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value172=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_181], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                        (right_value172 && right_value172 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional242) {
                                            __result132__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_181];
                                            __freed_obj__ = 0;
                                            return __result132__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_181++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional243=it_181>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional243) {
                                            it_181=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional244=it_181==hash_180,                                            __freed_obj__ = 0, 
                                            _if_conditional244) {
                                                __result133__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result133__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result134__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result134__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result135__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result135__;
                                __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional245;
unsigned int hash_194;
int it_195;
_Bool _while_condtional29;
_Bool _if_conditional249;
void* right_value179;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool same_key_exist_196;
char* it2_197;
_Bool _for_condtionalA13;
void* right_value180;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct map$2charphsVarph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_194, 0, sizeof(unsigned int));
memset(&it_195, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&same_key_exist_196, 0, sizeof(_Bool));
memset(&it2_197, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
                                if(_if_conditional245=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size,                                __freed_obj__ = 0, 
                                _if_conditional245) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1498)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_194=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1500)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size;
                                __freed_obj__ = 0;
                                it_195=hash_194;
                                __freed_obj__ = 0;
                                while(_while_condtional29=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional29) {
                                    if(_if_conditional249=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1556))->item_existance[it_195],                                    __freed_obj__ = 0, 
                                    _if_conditional249) {
                                        if(_if_conditional250=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1527),__exception_result_var_a6=((struct optional$2boolbool*)(right_value179=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->keys[it_195], "./comelang2.h", 1527)),key))), come_pop_stackframe(), __exception_result_var_a6)),                                        (right_value179 && right_value179 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional250) {
                                            if(_if_conditional251=1,                                            __freed_obj__ = 0, 
                                            _if_conditional251) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_195] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_195] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_195], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->key_list, "./comelang2.h", 1510)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->keys[it_195]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->keys[it_195]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->key_list, "./comelang2.h", 1514)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_195]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_195]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional252=1,                                            __freed_obj__ = 0, 
                                            _if_conditional252) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_195] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_195], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->items[it_195]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->items[it_195]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_195++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional253=it_195>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1536))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional253) {
                                            it_195=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional254=it_195==hash_194,                                            __freed_obj__ = 0, 
                                            _if_conditional254) {
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1538))->item_existance[it_195]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional255=1,                                        __freed_obj__ = 0, 
                                        _if_conditional255) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->keys[it_195]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->keys[it_195]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional256=1,                                        __freed_obj__ = 0, 
                                        _if_conditional256) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1546))->items[it_195]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1549))->items[it_195]=item;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1552))->len++;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                same_key_exist_196=(_Bool)0;
                                __freed_obj__ = 0;
                                for(
                                it2_197=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA13=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA13;                                it2_197=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional257=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1564),__exception_result_var_a7=((struct optional$2boolbool*)(right_value180=string_equals(((char*)come_null_check(it2_197, "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_a7)),                                    (right_value180 && right_value180 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional257) {
                                        same_key_exist_196=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional258=!same_key_exist_196,                                __freed_obj__ = 0, 
                                _if_conditional258) {
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1567))->key_list, "./comelang2.h", 1567)),key);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result136__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result136__;
                                __freed_obj__ = 0;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_183;
void* right_value174;
char** keys_184;
void* right_value175;
struct sVar** items_185;
void* right_value176;
_Bool* item_existance_186;
int len_187;
char* it_188;
_Bool _for_condtionalA12;
struct sVar* default_value_189;
void* right_value177;
struct sVar* it2_190;
unsigned int hash_191;
int n_192;
_Bool _while_condtional28;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sVar* default_value_193;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_183, 0, sizeof(int));
memset(&right_value174, 0, sizeof(void*));
memset(&keys_184, 0, sizeof(char**));
memset(&right_value175, 0, sizeof(void*));
memset(&items_185, 0, sizeof(struct sVar**));
memset(&right_value176, 0, sizeof(void*));
memset(&item_existance_186, 0, sizeof(_Bool*));
memset(&len_187, 0, sizeof(int));
memset(&it_188, 0, sizeof(char*));
memset(&default_value_189, 0, sizeof(struct sVar*));
memset(&right_value177, 0, sizeof(void*));
memset(&it2_190, 0, sizeof(struct sVar*));
memset(&hash_191, 0, sizeof(unsigned int));
memset(&n_192, 0, sizeof(int));
memset(&default_value_193, 0, sizeof(struct sVar*));
memset(&right_value178, 0, sizeof(void*));
                                        size_183=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                        __freed_obj__ = 0;
                                        keys_184=(char**)come_increment_ref_count(((char**)(right_value174=(char**)come_calloc(1, sizeof(char*)*(1*(size_183)), "./comelang2.h", 1370))));
                                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        items_185=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value175=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_183)), "./comelang2.h", 1371))));
                                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        item_existance_186=(_Bool*)come_increment_ref_count(((_Bool*)(right_value176=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_183)), "./comelang2.h", 1372))));
                                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        len_187=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_188=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA12=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA12;                                        it_188=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_189,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_190=((struct sVar*)(right_value177=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_188,default_value_189)));
                                            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            hash_191=string_get_hash_key(((char*)come_null_check(it_188, "./comelang2.h", 1380)))%size_183;
                                            __freed_obj__ = 0;
                                            n_192=hash_191;
                                            __freed_obj__ = 0;
                                            while(_while_condtional28=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional28) {
                                                if(_if_conditional246=item_existance_186[n_192],                                                __freed_obj__ = 0, 
                                                _if_conditional246) {
                                                    n_192++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional247=n_192>=size_183,                                                    __freed_obj__ = 0, 
                                                    _if_conditional247) {
                                                        n_192=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional248=n_192==hash_191,                                                        __freed_obj__ = 0, 
                                                        _if_conditional248) {
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
                                                    item_existance_186[n_192]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    keys_184[n_192]=it_188;
                                                    __freed_obj__ = 0;
                                                    __freed_obj__ = 0;
                                                    items_185[n_192]=((struct sVar*)(right_value178=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_188,default_value_193)));
                                                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    len_187++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))->items);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_184;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_185;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_186;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_183;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_187;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional259;
struct sVar* __result137__;
void* right_value181;
struct sVar* result_198;
_Bool _if_conditional260;
void* right_value182;
char* __dec_obj70;
_Bool _if_conditional261;
void* right_value183;
char* __dec_obj71;
_Bool _if_conditional262;
void* right_value184;
struct sType* __dec_obj72;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value185;
char* __dec_obj73;
struct sVar* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
memset(&result_198, 0, sizeof(struct sVar*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
                                if(_if_conditional259=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional259) {
                                    __result137__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result137__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_198=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value181=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3))));
                                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional260=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 5))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional260) {
                                    __dec_obj70=((struct sVar*)come_null_check(result_198, "sVar_clone", 4))->mName;
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value182=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 4))->mName))));
                                    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional261=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 6))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional261) {
                                    __dec_obj71=((struct sVar*)come_null_check(result_198, "sVar_clone", 5))->mCValueName;
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 5))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 5))->mCValueName))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional262=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 7))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional262) {
                                    __dec_obj72=((struct sVar*)come_null_check(result_198, "sVar_clone", 6))->mType;
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 6))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(((struct sVar*)come_null_check(self, "sVar_clone", 6))->mType))));
                                    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional263=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional263) {
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 7))->mBlockLevel=((struct sVar*)come_null_check(self, "sVar_clone", 7))->mBlockLevel;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional264=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional264) {
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 8))->mGlobal=((struct sVar*)come_null_check(self, "sVar_clone", 8))->mGlobal;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional265=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional265) {
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 9))->mAllocaValue=((struct sVar*)come_null_check(self, "sVar_clone", 9))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional266=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional266) {
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 10))->mFunctionParam=((struct sVar*)come_null_check(self, "sVar_clone", 10))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional267=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional267) {
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 11))->mNoFree=((struct sVar*)come_null_check(self, "sVar_clone", 11))->mNoFree;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional268=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 13))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional268) {
                                    __dec_obj73=((struct sVar*)come_null_check(result_198, "sVar_clone", 12))->mFunName;
                                    ((struct sVar*)come_null_check(result_198, "sVar_clone", 12))->mFunName=(char*)come_increment_ref_count(((char*)(right_value185=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 12))->mFunName))));
                                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result138__ = __result_obj__ = result_198;
                                if(result_198 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_198, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result138__;
                                __freed_obj__ = 0;
                                if(result_198 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_198, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional272=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional276=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional276) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional277=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional277) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional278=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional278) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional279=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional279) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional280=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional280) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional281=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional281) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional282=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional282) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional283=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional283) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional284=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional284) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void init_classes(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
int i_199;
_Bool _for_condtionalA14;
void* right_value224;
char* generics_type_200;
void* right_value225;
void* right_value226;
int rc_202;
_Bool _if_conditional285;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
char* type_name_203;
void* right_value231;
void* right_value232;
struct sType* type_204;
void* right_value233;
char* __dec_obj79;
void* right_value242;
void* right_value243;
void* right_value244;
struct sClass* klass_226;
void* right_value248;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
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
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&i_199, 0, sizeof(int));
memset(&right_value224, 0, sizeof(void*));
memset(&generics_type_200, 0, sizeof(char*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&rc_202, 0, sizeof(int));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&type_name_203, 0, sizeof(char*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&type_204, 0, sizeof(struct sType*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&klass_226, 0, sizeof(struct sClass*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 373))->classes, "02transpile.c", 373)),(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 373)))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 374))->classes, "02transpile.c", 374)),(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 374)))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 375))->classes, "02transpile.c", 375)),(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value198=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 375)))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 376))->classes, "02transpile.c", 376)),(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 376)))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 377))->classes, "02transpile.c", 377)),(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value204=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 377)))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 378))->classes, "02transpile.c", 378)),(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 378)))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 379))->classes, "02transpile.c", 379)),(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 379)))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 380))->classes, "02transpile.c", 380)),(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value213=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 380)))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 381))->classes, "02transpile.c", 381)),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 381)))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 382))->classes, "02transpile.c", 382)),(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value219=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 382)))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 383))->classes, "02transpile.c", 383)),(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 383)))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    i_199=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    i_199<12 ,    __freed_obj__ = 0, 
    _for_condtionalA14;    i_199++ ,    __freed_obj__ = 0, 
    0    ){
        generics_type_200=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("generics_type%d",i_199))));
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 386))->classes, "02transpile.c", 386)),(char*)come_increment_ref_count(generics_type_200),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value225=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 386)))),generics_type_200,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_199,-1,(_Bool)0,info)))));
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(generics_type_200 && !__freed_obj__) { generics_type_200 = come_decrement_ref_count(generics_type_200, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    char cmd_201[1024];
    memset(&cmd_201, 0, sizeof(char)    *(1024)    );
    __freed_obj__ = 0;
    snprintf(cmd_201,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    __freed_obj__ = 0;
    rc_202=system(cmd_201);
    __freed_obj__ = 0;
    if(_if_conditional285=rc_202==0,    __freed_obj__ = 0, 
    _if_conditional285) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 394))->classes, "02transpile.c", 394)),(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value228=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 394)))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_name_203=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("__builtin_va_list"))));
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 398)))),"__builtin_va_list",(_Bool)0,info))));
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj79=((struct sType*)come_null_check(type_204, "02transpile.c", 399))->mOriginalTypeName;
        ((struct sType*)come_null_check(type_204, "02transpile.c", 399))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string("__builtin_va_list"))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 401))->types, "02transpile.c", 401)),(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(type_name_203)))),(struct sType*)come_increment_ref_count(type_204));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(type_name_203 && !__freed_obj__) { type_name_203 = come_decrement_ref_count(type_name_203, (void*)0, (void*)0, 0, 0, 0); }
        if(type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        klass_226=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value243=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 406)))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_226, "02transpile.c", 408))->mFields, "02transpile.c", 408)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value254=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value248=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 408)))),(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 408)))),"char*",(_Bool)0,info)))))))));
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_226, "02transpile.c", 409))->mFields, "02transpile.c", 409)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value259=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 409)))),(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 409)))),"char*",(_Bool)0,info)))))))));
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_226, "02transpile.c", 410))->mFields, "02transpile.c", 410)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value264=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 410)))),(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 410)))),"char*",(_Bool)0,info)))))))));
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_226, "02transpile.c", 411))->mFields, "02transpile.c", 411)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 411)))),(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 411)))),"int",(_Bool)0,info)))))))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_226, "02transpile.c", 412))->mFields, "02transpile.c", 412)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value270=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 412)))),(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 412)))),"int",(_Bool)0,info)))))))));
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "02transpile.c", 414))->classes, "02transpile.c", 414)),(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(klass_226));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(klass_226 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional286;
unsigned int hash_222;
unsigned int it_223;
_Bool _while_condtional32;
_Bool _if_conditional298;
void* right_value240;
struct optional$2boolbool* __exception_result_var_a9;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool same_key_exist_224;
char* it2_225;
_Bool _for_condtionalA16;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a10;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct map$2charphsTypeph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_222, 0, sizeof(unsigned int));
memset(&it_223, 0, sizeof(unsigned int));
memset(&right_value240, 0, sizeof(void*));
memset(&same_key_exist_224, 0, sizeof(_Bool));
memset(&it2_225, 0, sizeof(char*));
memset(&right_value241, 0, sizeof(void*));
            if(_if_conditional286=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional286) {
                map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_222=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_223=hash_222;
            __freed_obj__ = 0;
            while(_while_condtional32=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional32) {
                if(_if_conditional298=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_223],                __freed_obj__ = 0, 
                _if_conditional298) {
                    if(_if_conditional299=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a9=((struct optional$2boolbool*)(right_value240=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_223], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a9)),                    (right_value240 && right_value240 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        if(_if_conditional300=1,                        __freed_obj__ = 0, 
                        _if_conditional300) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_223]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_223] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_223] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_223], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_223]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_223]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_223]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional301=1,                        __freed_obj__ = 0, 
                        _if_conditional301) {
                            if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_223] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_223], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->items[it_223]=(struct sType*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->items[it_223]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_223++;
                    __freed_obj__ = 0;
                    if(_if_conditional302=it_223>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional302) {
                        it_223=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional303=it_223==hash_222,                        __freed_obj__ = 0, 
                        _if_conditional303) {
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
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_223]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional304=1,                    __freed_obj__ = 0, 
                    _if_conditional304) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_223]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_223]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional305=1,                    __freed_obj__ = 0, 
                    _if_conditional305) {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1470))->items[it_223]=(struct sType*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->items[it_223]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            same_key_exist_224=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_225=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA16=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA16;            it2_225=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional306=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a10=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(it2_225, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a10)),                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional306) {
                    same_key_exist_224=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional307=!same_key_exist_224,            __freed_obj__ = 0, 
            _if_conditional307) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result154__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result154__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_205;
void* right_value234;
char** keys_206;
void* right_value235;
struct sType** items_207;
void* right_value236;
_Bool* item_existance_208;
int len_209;
char* it_212;
_Bool _for_condtionalA15;
struct sType* default_value_215;
void* right_value238;
struct sType* it2_218;
unsigned int hash_219;
int n_220;
_Bool _while_condtional31;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct sType* default_value_221;
void* right_value239;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_205, 0, sizeof(int));
memset(&right_value234, 0, sizeof(void*));
memset(&keys_206, 0, sizeof(char**));
memset(&right_value235, 0, sizeof(void*));
memset(&items_207, 0, sizeof(struct sType**));
memset(&right_value236, 0, sizeof(void*));
memset(&item_existance_208, 0, sizeof(_Bool*));
memset(&len_209, 0, sizeof(int));
memset(&it_212, 0, sizeof(char*));
memset(&default_value_215, 0, sizeof(struct sType*));
memset(&right_value238, 0, sizeof(void*));
memset(&it2_218, 0, sizeof(struct sType*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&n_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct sType*));
memset(&right_value239, 0, sizeof(void*));
                    size_205=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_206=(char**)come_increment_ref_count(((char**)(right_value234=(char**)come_calloc(1, sizeof(char*)*(1*(size_205)), "./comelang2.h", 1370))));
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    items_207=(struct sType**)come_increment_ref_count(((struct sType**)(right_value235=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_205)), "./comelang2.h", 1371))));
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    item_existance_208=(_Bool*)come_increment_ref_count(((_Bool*)(right_value236=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_205)), "./comelang2.h", 1372))));
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    len_209=0;
                    __freed_obj__ = 0;
                    for(
                    it_212=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA15=                    !map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA15;                    it_212=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_215,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        it2_218=((struct sType*)(right_value238=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1379)),it_212,default_value_215)));
                        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        hash_219=string_get_hash_key(((char*)come_null_check(it_212, "./comelang2.h", 1380)))%size_205;
                        __freed_obj__ = 0;
                        n_220=hash_219;
                        __freed_obj__ = 0;
                        while(_while_condtional31=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional31) {
                            if(_if_conditional295=item_existance_208[n_220],                            __freed_obj__ = 0, 
                            _if_conditional295) {
                                n_220++;
                                __freed_obj__ = 0;
                                if(_if_conditional296=n_220>=size_205,                                __freed_obj__ = 0, 
                                _if_conditional296) {
                                    n_220=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional297=n_220==hash_219,                                    __freed_obj__ = 0, 
                                    _if_conditional297) {
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
                                item_existance_208[n_220]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_206[n_220]=it_212;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_207[n_220]=((struct sType*)(right_value239=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1400)),it_212,default_value_221)));
                                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_209++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))->items);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_206;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1413))->items=items_207;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_208;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->size=size_205;
                    __freed_obj__ = 0;
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->len=len_209;
                    __freed_obj__ = 0;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional287;
char* result_210;
char* __result143__;
_Bool _if_conditional288;
char* __result144__;
char* result_211;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                        if(_if_conditional287=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            __freed_obj__ = 0;
                            memset(&result_210,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result143__ = __result_obj__ = result_210;
                            __freed_obj__ = 0;
                            return __result143__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional288=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            __result144__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result144__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_211,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result145__ = __result_obj__ = result_211;
                        __freed_obj__ = 0;
                        return __result145__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result146__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result146__;
                        __freed_obj__ = 0;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional289;
char* result_213;
char* __result147__;
_Bool _if_conditional290;
char* __result148__;
char* result_214;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_213, 0, sizeof(char*));
memset(&result_214, 0, sizeof(char*));
                        if(_if_conditional289=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional289) {
                            __freed_obj__ = 0;
                            memset(&result_213,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result147__ = __result_obj__ = result_213;
                            __freed_obj__ = 0;
                            return __result147__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional290=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional290) {
                            __result148__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result148__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_214,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result149__ = __result_obj__ = result_214;
                        __freed_obj__ = 0;
                        return __result149__;
                        __freed_obj__ = 0;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_216;
unsigned int it_217;
_Bool _while_condtional30;
_Bool _if_conditional291;
void* right_value237;
struct optional$2boolbool* __exception_result_var_a8;
_Bool _if_conditional292;
struct sType* __result150__;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct sType* __result151__;
struct sType* __result152__;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_216, 0, sizeof(unsigned int));
memset(&it_217, 0, sizeof(unsigned int));
memset(&right_value237, 0, sizeof(void*));
                            hash_216=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_217=hash_216;
                            __freed_obj__ = 0;
                            while(_while_condtional30=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional30) {
                                if(_if_conditional291=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_217],                                __freed_obj__ = 0, 
                                _if_conditional291) {
                                    if(_if_conditional292=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a8=((struct optional$2boolbool*)(right_value237=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_217], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a8)),                                    (right_value237 && right_value237 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional292) {
                                        __result150__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1266))->items[it_217];
                                        __freed_obj__ = 0;
                                        return __result150__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_217++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional293=it_217>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional293) {
                                        it_217=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional294=it_217==hash_216,                                        __freed_obj__ = 0, 
                                        _if_conditional294) {
                                            __result151__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result151__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result152__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result152__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result153__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result153__;
                            __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional308;
void* right_value245;
struct list_item$1tuple2$2charphsTypephph* litem_227;
struct tuple2$2charphsTypeph* __dec_obj80;
_Bool _if_conditional311;
void* right_value246;
struct list_item$1tuple2$2charphsTypephph* litem_228;
struct tuple2$2charphsTypeph* __dec_obj81;
void* right_value247;
struct list_item$1tuple2$2charphsTypephph* litem_229;
struct tuple2$2charphsTypeph* __dec_obj82;
struct list$1tuple2$2charphsTypephph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value245, 0, sizeof(void*));
memset(&litem_227, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value246, 0, sizeof(void*));
memset(&litem_228, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value247, 0, sizeof(void*));
memset(&litem_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional308=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional308) {
                litem_227=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value245=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_227, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_227, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj80=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_227, "./comelang2.h", 276))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_227, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj80) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_227;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_227;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional311=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional311) {
                    litem_228=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value246=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_228, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_228, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj81=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_228, "./comelang2.h", 286))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_228, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj81) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_228;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_228;
                    __freed_obj__ = 0;
                }
                else {
                    litem_229=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_229, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_229, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj82=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_229, "./comelang2.h", 296))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_229, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj82) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_229;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_229;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result155__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result155__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional309=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional309) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional310=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional310) {
                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value249;
char* __dec_obj83;
void* right_value250;
struct sType* __dec_obj84;
struct tuple2$2charphsTypeph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
            __dec_obj83=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value249=string_clone(v1))));
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj84=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(v2))));
            if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result156__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result156__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void init_module(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value276;
char* project_name_230;
void* right_value277;
char* cc_231;
void* right_value278;
char* install_232;
void* right_value279;
char* libs_233;
void* right_value280;
char* os_234;
void* right_value281;
char* prefix_235;
void* right_value282;
char* cflags_236;
_Bool _or_conditional1;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&project_name_230, 0, sizeof(char*));
memset(&right_value277, 0, sizeof(void*));
memset(&cc_231, 0, sizeof(char*));
memset(&right_value278, 0, sizeof(void*));
memset(&install_232, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&libs_233, 0, sizeof(char*));
memset(&right_value280, 0, sizeof(void*));
memset(&os_234, 0, sizeof(char*));
memset(&right_value281, 0, sizeof(void*));
memset(&prefix_235, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&cflags_236, 0, sizeof(char*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
    project_name_230=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(argv[2]))));
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    cc_231=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("comelang2"))));
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    install_232=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("install"))));
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    libs_233=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("-lpcre"))));
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    os_234=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("linux"))));
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    prefix_235=(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string("/usr/local/"))));
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    cflags_236=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(" -common-header "))));
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_or_conditional1=mkdir(project_name_230,448|56|4|1),    __freed_obj__ = 0, 
    _or_conditional1 != 0) {
        die("mkdir error");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("02transpile.c", 515),((struct optional$2intbool*)(right_value307=charp_write(((char*)come_null_check(((char*)(right_value304=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nTARGET=\%s\n\n\#########################################\n\# main\n\#########################################\nall: common.h \%s\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n%%.o: %%.c header\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader:\n\tcomelang2 header $(SINGLE_SRCS)\n\n\n\ncommon.h: *.c\n\tbash -c 'shopt -s extglob; comelang2 header !(*.c).c'\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s\n\ndistclean: clean\n\trm -fR config.h Makefile autom4te.cache\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\t./\%s\n",((char*)(right_value283=string_to_string(prefix_235))),((char*)(right_value284=string_to_string(project_name_230))),((char*)(right_value285=string_to_string(project_name_230))),((char*)(right_value286=string_to_string(project_name_230))),((char*)(right_value287=string_to_string(project_name_230))),((char*)(right_value288=string_to_string(cc_231))),((char*)(right_value289=string_to_string(install_232))),((char*)(right_value290=string_to_string(cflags_236))),((char*)(right_value291=string_to_string(libs_233))),((char*)(right_value292=string_to_string(os_234))),((char*)(right_value293=string_to_string(prefix_235))),((char*)(right_value294=string_to_string(project_name_230))),((char*)(right_value295=string_to_string(project_name_230))),((char*)(right_value296=string_to_string(project_name_230))),((char*)(right_value297=string_to_string(project_name_230))),((char*)(right_value298=string_to_string(project_name_230))),((char*)(right_value299=string_to_string(project_name_230))),((char*)(right_value300=string_to_string(project_name_230))),((char*)(right_value301=string_to_string(project_name_230))),((char*)(right_value302=string_to_string(project_name_230))),((char*)(right_value303=string_to_string(project_name_230)))))), "02transpile.c", 515)),((char*)(right_value306=xsprintf("\%s/Makefile",((char*)(right_value305=string_to_string(project_name_230)))))),(_Bool)0)))));
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result157__ = (_Bool)1;
    if(project_name_230 && !__freed_obj__) { project_name_230 = come_decrement_ref_count(project_name_230, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_231 && !__freed_obj__) { cc_231 = come_decrement_ref_count(cc_231, (void*)0, (void*)0, 0, 0, 0); }
    if(install_232 && !__freed_obj__) { install_232 = come_decrement_ref_count(install_232, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_233 && !__freed_obj__) { libs_233 = come_decrement_ref_count(libs_233, (void*)0, (void*)0, 0, 0, 0); }
    if(os_234 && !__freed_obj__) { os_234 = come_decrement_ref_count(os_234, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_235 && !__freed_obj__) { prefix_235 = come_decrement_ref_count(prefix_235, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_236 && !__freed_obj__) { cflags_236 = come_decrement_ref_count(cflags_236, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
    if(project_name_230 && !__freed_obj__) { project_name_230 = come_decrement_ref_count(project_name_230, (void*)0, (void*)0, 0, 0, 0); }
    if(cc_231 && !__freed_obj__) { cc_231 = come_decrement_ref_count(cc_231, (void*)0, (void*)0, 0, 0, 0); }
    if(install_232 && !__freed_obj__) { install_232 = come_decrement_ref_count(install_232, (void*)0, (void*)0, 0, 0, 0); }
    if(libs_233 && !__freed_obj__) { libs_233 = come_decrement_ref_count(libs_233, (void*)0, (void*)0, 0, 0, 0); }
    if(os_234 && !__freed_obj__) { os_234 = come_decrement_ref_count(os_234, (void*)0, (void*)0, 0, 0, 0); }
    if(prefix_235 && !__freed_obj__) { prefix_235 = come_decrement_ref_count(prefix_235, (void*)0, (void*)0, 0, 0, 0); }
    if(cflags_236 && !__freed_obj__) { cflags_236 = come_decrement_ref_count(cflags_236, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _or_conditional2;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_or_conditional2=system("make run"),    __freed_obj__ = 0, 
    _or_conditional2 != 0) {
        die("system");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result158__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional312;
void* right_value308;
void* right_value309;
struct buffer* clang_option_237;
void* right_value310;
void* right_value311;
struct buffer* cpp_option_238;
void* right_value312;
void* right_value313;
struct list$1charph* files_239;
void* right_value314;
void* right_value315;
struct list$1charph* object_files_240;
_Bool output_object_file_241;
_Bool output_cpp_file_242;
_Bool output_source_file_flag_243;
void* right_value316;
char* output_file_name_244;
_Bool verbose_245;
_Bool prohibit_common_header_246;
int i_247;
_Bool _for_condtionalA17;
_Bool _if_conditional313;
void* right_value317;
char* __dec_obj85;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value318;
void* right_value319;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value320;
_Bool _if_conditional325;
void* right_value321;
void* right_value322;
struct __sFILE* f_248;
_Bool _and_conditional1;
_Bool _or_conditional3;
struct list$1charph* o2_saved_249;
char* it_250;
_Bool _for_condtionalA18;
struct sInfo info_251;
void* right_value323;
char* __dec_obj86;
void* right_value324;
char* __dec_obj87;
void* right_value325;
char* __dec_obj88;
void* right_value326;
char* __dec_obj89;
void* right_value327;
void* right_value333;
struct map$2charphsFunph* __dec_obj91;
void* right_value334;
void* right_value340;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value341;
void* right_value347;
struct map$2charphsClassph* __dec_obj95;
void* right_value348;
void* right_value354;
struct map$2charphsTypeph* __dec_obj97;
void* right_value355;
void* right_value356;
struct sModule* __dec_obj98;
void* right_value357;
void* right_value358;
struct list$1sRightValueObjectph* __dec_obj99;
void* right_value359;
void* right_value360;
struct list$1CVALUEph* __dec_obj100;
void* right_value361;
void* right_value362;
struct sVarTable* __dec_obj101;
void* right_value363;
void* right_value364;
struct sVarTable* lv_table_268;
void* right_value365;
void* right_value366;
struct list$1charph* __dec_obj102;
void* right_value367;
void* right_value368;
struct map$2charphsClassph* __dec_obj103;
static int n_269=0;
void* right_value369;
char* __dec_obj104;
_Bool _if_conditional362;
void* right_value370;
void* right_value371;
void* right_value372;
struct buffer* __dec_obj105;
void* right_value373;
void* right_value374;
void* right_value375;
struct buffer* __dec_obj106;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional388;
_Bool _if_conditional389;
int __result166__;
_Bool _if_conditional390;
_Bool _if_conditional391;
int __result167__;
void* right_value376;
void* right_value377;
struct buffer* clang_option_270;
void* right_value378;
void* right_value379;
struct buffer* cpp_option_271;
void* right_value380;
void* right_value381;
struct list$1charph* files_272;
void* right_value382;
void* right_value383;
struct list$1charph* object_files_273;
_Bool output_object_file_274;
_Bool output_cpp_file_275;
_Bool output_source_file_flag_276;
char* output_file_name_277;
_Bool verbose_278;
int i_279;
_Bool _for_condtionalA31;
_Bool _if_conditional392;
void* right_value384;
char* __dec_obj107;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value385;
void* right_value386;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value387;
_Bool _if_conditional404;
void* right_value388;
void* right_value389;
void* right_value390;
struct list$1charph* o2_saved_280;
char* it_281;
_Bool _for_condtionalA32;
struct sInfo info_282;
void* right_value391;
char* __dec_obj108;
void* right_value392;
char* __dec_obj109;
void* right_value393;
char* __dec_obj110;
void* right_value394;
void* right_value395;
struct map$2charphsFunph* __dec_obj111;
void* right_value396;
void* right_value397;
struct map$2charphsGenericsFunph* __dec_obj112;
void* right_value398;
void* right_value399;
struct map$2charphsClassph* __dec_obj113;
void* right_value400;
void* right_value401;
struct map$2charphsTypeph* __dec_obj114;
void* right_value402;
void* right_value403;
struct sModule* __dec_obj115;
void* right_value404;
void* right_value405;
struct list$1sRightValueObjectph* __dec_obj116;
void* right_value406;
void* right_value407;
struct list$1CVALUEph* __dec_obj117;
void* right_value408;
void* right_value409;
struct sVarTable* __dec_obj118;
void* right_value410;
void* right_value411;
struct sVarTable* lv_table_283;
void* right_value412;
void* right_value413;
struct list$1charph* __dec_obj119;
void* right_value414;
void* right_value415;
struct map$2charphsClassph* __dec_obj120;
_Bool _if_conditional405;
void* right_value416;
void* right_value417;
void* right_value418;
struct buffer* __dec_obj121;
void* right_value419;
void* right_value420;
void* right_value421;
struct buffer* __dec_obj122;
_Bool _if_conditional406;
void* right_value422;
char* __dec_obj123;
char* __dec_obj124;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sInfo info_284;
void* right_value427;
void* right_value428;
char* __dec_obj126;
void* right_value429;
char* __dec_obj127;
_Bool _if_conditional414;
void* right_value430;
char* __dec_obj128;
char* __dec_obj129;
struct __current_stack2__ __current_stack2__;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&clang_option_237, 0, sizeof(struct buffer*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&cpp_option_238, 0, sizeof(struct buffer*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&files_239, 0, sizeof(struct list$1charph*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&object_files_240, 0, sizeof(struct list$1charph*));
memset(&output_object_file_241, 0, sizeof(_Bool));
memset(&output_cpp_file_242, 0, sizeof(_Bool));
memset(&output_source_file_flag_243, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&output_file_name_244, 0, sizeof(char*));
memset(&verbose_245, 0, sizeof(_Bool));
memset(&prohibit_common_header_246, 0, sizeof(_Bool));
memset(&i_247, 0, sizeof(int));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&f_248, 0, sizeof(struct __sFILE*));
memset(&o2_saved_249, 0, sizeof(struct list$1charph*));
memset(&it_250, 0, sizeof(char*));
memset(&info_251, 0, sizeof(struct sInfo));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&lv_table_268, 0, sizeof(struct sVarTable*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&clang_option_270, 0, sizeof(struct buffer*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&cpp_option_271, 0, sizeof(struct buffer*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&files_272, 0, sizeof(struct list$1charph*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&object_files_273, 0, sizeof(struct list$1charph*));
memset(&output_object_file_274, 0, sizeof(_Bool));
memset(&output_cpp_file_275, 0, sizeof(_Bool));
memset(&output_source_file_flag_276, 0, sizeof(_Bool));
memset(&output_file_name_277, 0, sizeof(char*));
memset(&verbose_278, 0, sizeof(_Bool));
memset(&i_279, 0, sizeof(int));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&o2_saved_280, 0, sizeof(struct list$1charph*));
memset(&it_281, 0, sizeof(char*));
memset(&info_282, 0, sizeof(struct sInfo));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&lv_table_283, 0, sizeof(struct sVarTable*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&info_284, 0, sizeof(struct sInfo));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional312=charp_operator_equals(argv[1],"header")&&argc>=3,    __freed_obj__ = 0, 
    _if_conditional312) {
        gProgramName=argv[0];
        __freed_obj__ = 0;
        clang_option_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 532))))))));
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        cpp_option_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 533))))))));
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        files_239=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value313=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value312=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 534))))))));
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        object_files_240=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value315=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value314=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 535))))))));
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        output_object_file_241=(_Bool)0;
        __freed_obj__ = 0;
        output_cpp_file_242=(_Bool)0;
        __freed_obj__ = 0;
        output_source_file_flag_243=(_Bool)0;
        __freed_obj__ = 0;
        output_file_name_244=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string("common.h"))));
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        verbose_245=(_Bool)0;
        __freed_obj__ = 0;
        prohibit_common_header_246=(_Bool)0;
        __freed_obj__ = 0;
        for(
        i_247=2 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        i_247<argc ,        __freed_obj__ = 0, 
        _for_condtionalA17;        i_247++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional313=charp_operator_equals(argv[i_247],"-o")&&i_247+1<argc,            __freed_obj__ = 0, 
            _if_conditional313) {
                __dec_obj85=output_file_name_244;
                output_file_name_244=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(argv[i_247+1]))));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                i_247++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional314=charp_operator_equals(argv[i_247],"-str"),                __freed_obj__ = 0, 
                _if_conditional314) {
                    buffer_append_str(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 548))," -lcomelang2-str -lpcre ");
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=charp_operator_equals(argv[i_247],"-g"),                    __freed_obj__ = 0, 
                    _if_conditional315) {
                        buffer_append_str(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 551)),"-g ");
                        __freed_obj__ = 0;
                        gComeDebug=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional316=charp_operator_equals(argv[i_247],"-common-header"),                        __freed_obj__ = 0, 
                        _if_conditional316) {
                            gCommonHeader=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional317=charp_operator_equals(argv[i_247],"-v"),                            __freed_obj__ = 0, 
                            _if_conditional317) {
                                buffer_append_str(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 558)),"-v ");
                                __freed_obj__ = 0;
                                verbose_245=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional318=memcmp(argv[i_247],"-I",strlen("-I"))==0,                                __freed_obj__ = 0, 
                                _if_conditional318) {
                                    buffer_append_str(((struct buffer*)come_null_check(cpp_option_238, "02transpile.c", 562)),((char*)(right_value319=charp_operator_add(" ",((char*)(right_value318=charp_operator_add(argv[i_247]," ")))))));
                                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional319=charp_operator_equals(argv[i_247],"-gdwarf-4"),                                    __freed_obj__ = 0, 
                                    _if_conditional319) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 565)),"-gdwarf-4 ");
                                        __freed_obj__ = 0;
                                        gComeDebug=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional320=charp_operator_equals(argv[i_247],"-gc"),                                        __freed_obj__ = 0, 
                                        _if_conditional320) {
                                            gComeGC=(_Bool)1;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional321=charp_operator_equals(argv[i_247],"-s")||charp_operator_equals(argv[i_247],"-S"),                                            __freed_obj__ = 0, 
                                            _if_conditional321) {
                                                output_source_file_flag_243=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional322=charp_operator_equals(argv[i_247],"-c"),                                                __freed_obj__ = 0, 
                                                _if_conditional322) {
                                                    output_object_file_241=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional323=charp_operator_equals(argv[i_247],"-E"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional323) {
                                                        output_cpp_file_242=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional324=argv[i_247][0]==45,                                                        __freed_obj__ = 0, 
                                                        _if_conditional324) {
                                                            buffer_append_str(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 581)),((char*)(right_value320=charp_operator_add(argv[i_247]," "))));
                                                            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional325=memcmp(argv[i_247]+strlen(argv[i_247])-2,".o",2)==0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional325) {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_240, "02transpile.c", 584)),(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string(argv[i_247])))));
                                                                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                list$1charph_push_back(((struct list$1charph*)come_null_check(files_239, "02transpile.c", 587)),(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(argv[i_247])))));
                                                                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
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
        if(_and_conditional1=f_248=fopen(output_file_name_244,"w"),        __freed_obj__ = 0, 
        _and_conditional1 == 0) {
            die("fopen");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fclose(f_248);
        __freed_obj__ = 0;
        if(_or_conditional3=truncate(output_file_name_244,0),        __freed_obj__ = 0, 
        _or_conditional3 != 0) {
            die("truncate");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_init_v5();
        __freed_obj__ = 0;
        for(
        o2_saved_249=(struct list$1charph*)come_increment_ref_count((files_239)),it_250=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_249), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_249), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        _for_condtionalA18;        it_250=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_249), "02transpile.c", 654))) ,        __freed_obj__ = 0, 
        0        ){
            __freed_obj__ = 0;
            memset(&info_251,0,sizeof(struct sInfo));
            __freed_obj__ = 0;
            __dec_obj86=info_251.base_sname;
            info_251.base_sname=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string(it_250))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj87=info_251.sname;
            info_251.sname=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(it_250))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
            if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_251.sline=1;
            __freed_obj__ = 0;
            info_251.err_num=0;
            __freed_obj__ = 0;
            __dec_obj88=info_251.clang_option;
            info_251.clang_option=(char*)come_increment_ref_count(((char*)(right_value325=buffer_to_string(((struct buffer*)come_null_check(clang_option_237, "02transpile.c", 607))))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
            if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj89=info_251.cpp_option;
            info_251.cpp_option=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(((struct buffer*)come_null_check(cpp_option_238, "02transpile.c", 608))))));
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
            if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_251.no_output_err=(_Bool)0;
            __freed_obj__ = 0;
            __dec_obj91=info_251.funcs;
            info_251.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value333=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value327=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 610))))))));
            if(__dec_obj91) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj93=info_251.generics_funcs;
            info_251.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value340=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value334=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 611))))))));
            if(__dec_obj93) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj95=info_251.classes;
            info_251.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value347=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value341=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 612))))))));
            if(__dec_obj95) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj97=info_251.types;
            info_251.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value354=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value348=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 613))))))));
            if(__dec_obj97) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj98=info_251.module;
            info_251.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value356=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value355=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 614))))))));
            if(__dec_obj98) { come_call_finalizer(sModule_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj99=info_251.right_value_objects;
            info_251.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value358=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value357=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 615))))))));
            if(__dec_obj99) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj100=info_251.stack;
            info_251.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value360=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value359=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 616))))))));
            if(__dec_obj100) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj101=info_251.gv_table;
            info_251.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value362=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value361=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 617)))),(_Bool)1,((void*)0)))));
            if(__dec_obj101) { come_call_finalizer(sVarTable_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            lv_table_268=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value364=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value363=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 618)))),(_Bool)0,((void*)0)))));
            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_251.lv_table=lv_table_268;
            __freed_obj__ = 0;
            __dec_obj102=info_251.generics_type_names;
            info_251.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 620))))))));
            if(__dec_obj102) { come_call_finalizer(list$1charph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj103=info_251.generics_classes;
            info_251.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value368=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value367=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 621))))))));
            if(__dec_obj103) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_251.verbose=verbose_245;
            __freed_obj__ = 0;
            info_251.output_header_file=(_Bool)1;
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            info_251.num_source_files=n_269++;
            __freed_obj__ = 0;
            info_251.max_source_files=list$1charph_length(((struct list$1charph*)come_null_check(files_239, "02transpile.c", 627)));
            __freed_obj__ = 0;
            __dec_obj104=info_251.output_file_name;
            info_251.output_file_name=(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string(output_file_name_244))));
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            init_classes(&info_251);
            __freed_obj__ = 0;
            init_module(&info_251);
            __freed_obj__ = 0;
            if(_if_conditional362=!cpp(&info_251),            __freed_obj__ = 0, 
            _if_conditional362) {
                printf("%s %d: transpile failed\n",info_251.sname,info_251.sline);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj105=info_251.original_source;
            info_251.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value372=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 639),((struct optional$2charphbool*)(right_value371=string_read(((char*)come_null_check(((char*)(right_value370=xsprintf("%s",it_250))), "02transpile.c", 639))))))), "02transpile.c", 639))))));
            if(__dec_obj105) { come_call_finalizer(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj106=info_251.source;
            info_251.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value375=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 640),((struct optional$2charphbool*)(right_value374=string_read(((char*)come_null_check(((char*)(right_value373=xsprintf("%s.i",it_250))), "02transpile.c", 640))))))), "02transpile.c", 640))))));
            if(__dec_obj106) { come_call_finalizer(buffer_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            info_251.p=((struct buffer*)come_null_check(info_251.source, "02transpile.c", 641))->buf;
            __freed_obj__ = 0;
            info_251.head=((struct buffer*)come_null_check(info_251.source, "02transpile.c", 642))->buf;
            __freed_obj__ = 0;
            if(_if_conditional363=!output_cpp_file_242,            __freed_obj__ = 0, 
            _if_conditional363) {
                transpile_v5(&info_251);
                __freed_obj__ = 0;
                if(_if_conditional364=!output_header_file(&info_251),                __freed_obj__ = 0, 
                _if_conditional364) {
                    printf("%s %d: output source file faield\n",info_251.sname,info_251.sline);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if((&info_251) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_251), (void*)0, (void*)0, 1, 0, 0, 0); }
            if(lv_table_268 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_268, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_249 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_249, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_final_v5();
        __freed_obj__ = 0;
        if(clang_option_237 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_237, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cpp_option_238 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(files_239 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_239, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(object_files_240 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_240, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(output_file_name_244 && !__freed_obj__) { output_file_name_244 = come_decrement_ref_count(output_file_name_244, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional388=charp_operator_equals(argv[1],"new")&&argc==3,        __freed_obj__ = 0, 
        _if_conditional388) {
            if(_if_conditional389=!new_project(argc,argv),            __freed_obj__ = 0, 
            _if_conditional389) {
                __result166__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result166__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional390=charp_operator_equals(argv[1],"run")&&argc==2,            __freed_obj__ = 0, 
            _if_conditional390) {
                if(_if_conditional391=!run_project(argc,argv),                __freed_obj__ = 0, 
                _if_conditional391) {
                    __result167__ = (_Bool)0;
                    __freed_obj__ = 0;
                    return __result167__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                gProgramName=argv[0];
                __freed_obj__ = 0;
                clang_option_270=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 669))))))));
                if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                cpp_option_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value379=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 670))))))));
                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                files_272=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value381=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value380=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 671))))))));
                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                object_files_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value383=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value382=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 672))))))));
                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                output_object_file_274=(_Bool)0;
                __freed_obj__ = 0;
                output_cpp_file_275=(_Bool)0;
                __freed_obj__ = 0;
                output_source_file_flag_276=(_Bool)0;
                __freed_obj__ = 0;
                output_file_name_277=((void*)0);
                __freed_obj__ = 0;
                verbose_278=(_Bool)0;
                __freed_obj__ = 0;
                for(
                i_279=1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA31=                i_279<argc ,                __freed_obj__ = 0, 
                _for_condtionalA31;                i_279++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional392=charp_operator_equals(argv[i_279],"-o")&&i_279+1<argc,                    __freed_obj__ = 0, 
                    _if_conditional392) {
                        __dec_obj107=output_file_name_277;
                        output_file_name_277=(char*)come_increment_ref_count(((char*)(right_value384=__builtin_string(argv[i_279+1]))));
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        i_279++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional393=charp_operator_equals(argv[i_279],"-str"),                        __freed_obj__ = 0, 
                        _if_conditional393) {
                            buffer_append_str(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 684))," -lcomelang2-str -lpcre ");
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional394=charp_operator_equals(argv[i_279],"-common-header"),                            __freed_obj__ = 0, 
                            _if_conditional394) {
                                gCommonHeader=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional395=charp_operator_equals(argv[i_279],"-g"),                                __freed_obj__ = 0, 
                                _if_conditional395) {
                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 690)),"-g ");
                                    __freed_obj__ = 0;
                                    gComeDebug=(_Bool)1;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional396=charp_operator_equals(argv[i_279],"-v"),                                    __freed_obj__ = 0, 
                                    _if_conditional396) {
                                        buffer_append_str(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 694)),"-v ");
                                        __freed_obj__ = 0;
                                        verbose_278=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional397=memcmp(argv[i_279],"-I",strlen("-I"))==0,                                        __freed_obj__ = 0, 
                                        _if_conditional397) {
                                            buffer_append_str(((struct buffer*)come_null_check(cpp_option_271, "02transpile.c", 698)),((char*)(right_value386=charp_operator_add(" ",((char*)(right_value385=charp_operator_add(argv[i_279]," ")))))));
                                            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                                            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional398=charp_operator_equals(argv[i_279],"-gdwarf-4"),                                            __freed_obj__ = 0, 
                                            _if_conditional398) {
                                                buffer_append_str(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 701)),"-gdwarf-4 ");
                                                __freed_obj__ = 0;
                                                gComeDebug=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional399=charp_operator_equals(argv[i_279],"-gc"),                                                __freed_obj__ = 0, 
                                                _if_conditional399) {
                                                    gComeGC=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional400=charp_operator_equals(argv[i_279],"-s")||charp_operator_equals(argv[i_279],"-S"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional400) {
                                                        output_source_file_flag_276=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional401=charp_operator_equals(argv[i_279],"-c"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional401) {
                                                            output_object_file_274=(_Bool)1;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional402=charp_operator_equals(argv[i_279],"-E"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional402) {
                                                                output_cpp_file_275=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional403=argv[i_279][0]==45,                                                                __freed_obj__ = 0, 
                                                                _if_conditional403) {
                                                                    buffer_append_str(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 717)),((char*)(right_value387=charp_operator_add(argv[i_279]," "))));
                                                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional404=memcmp(argv[i_279]+strlen(argv[i_279])-2,".o",2)==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional404) {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(object_files_273, "02transpile.c", 720)),(char*)come_increment_ref_count(((char*)(right_value388=__builtin_string(argv[i_279])))));
                                                                        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        list$1charph_push_back(((struct list$1charph*)come_null_check(files_272, "02transpile.c", 723)),(char*)come_increment_ref_count(((char*)(right_value390=string_clone(((char*)(right_value389=__builtin_string(argv[i_279]))))))));
                                                                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                                                        if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
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
                come_init_v5();
                __freed_obj__ = 0;
                for(
                o2_saved_280=(struct list$1charph*)come_increment_ref_count((files_272)),it_281=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_280), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA32=                !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_280), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                _for_condtionalA32;                it_281=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_280), "02transpile.c", 798))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&info_282,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    __dec_obj108=info_282.sname;
                    info_282.sname=(char*)come_increment_ref_count(((char*)(right_value391=__builtin_string(it_281))));
                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_282.sline=1;
                    __freed_obj__ = 0;
                    info_282.err_num=0;
                    __freed_obj__ = 0;
                    __dec_obj109=info_282.clang_option;
                    info_282.clang_option=(char*)come_increment_ref_count(((char*)(right_value392=buffer_to_string(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 737))))));
                    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj110=info_282.cpp_option;
                    info_282.cpp_option=(char*)come_increment_ref_count(((char*)(right_value393=buffer_to_string(((struct buffer*)come_null_check(cpp_option_271, "02transpile.c", 738))))));
                    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_282.no_output_err=(_Bool)0;
                    __freed_obj__ = 0;
                    __dec_obj111=info_282.funcs;
                    info_282.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value395=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value394=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 740))))))));
                    if(__dec_obj111) { come_call_finalizer(map$2charphsFunph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj112=info_282.generics_funcs;
                    info_282.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value397=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value396=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 741))))))));
                    if(__dec_obj112) { come_call_finalizer(map$2charphsGenericsFunph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj113=info_282.classes;
                    info_282.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value399=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value398=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 742))))))));
                    if(__dec_obj113) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj114=info_282.types;
                    info_282.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value401=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value400=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 743))))))));
                    if(__dec_obj114) { come_call_finalizer(map$2charphsTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj115=info_282.module;
                    info_282.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value403=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value402=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 744))))))));
                    if(__dec_obj115) { come_call_finalizer(sModule_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModule_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj116=info_282.right_value_objects;
                    info_282.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value405=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value404=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 745))))))));
                    if(__dec_obj116) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj117=info_282.stack;
                    info_282.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value407=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value406=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 746))))))));
                    if(__dec_obj117) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj118=info_282.gv_table;
                    info_282.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value409=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value408=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 747)))),(_Bool)1,((void*)0)))));
                    if(__dec_obj118) { come_call_finalizer(sVarTable_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    lv_table_283=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value411=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value410=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 748)))),(_Bool)0,((void*)0)))));
                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_282.lv_table=lv_table_283;
                    __freed_obj__ = 0;
                    __dec_obj119=info_282.generics_type_names;
                    info_282.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value413=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value412=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 750))))))));
                    if(__dec_obj119) { come_call_finalizer(list$1charph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj120=info_282.generics_classes;
                    info_282.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value415=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value414=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 751))))))));
                    if(__dec_obj120) { come_call_finalizer(map$2charphsClassph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_282.verbose=verbose_278;
                    __freed_obj__ = 0;
                    init_classes(&info_282);
                    __freed_obj__ = 0;
                    init_module(&info_282);
                    __freed_obj__ = 0;
                    if(_if_conditional405=!cpp(&info_282),                    __freed_obj__ = 0, 
                    _if_conditional405) {
                        printf("%s %d: transpile failed\n",info_282.sname,info_282.sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj121=info_282.original_source;
                    info_282.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 762),((struct optional$2charphbool*)(right_value417=string_read(((char*)come_null_check(((char*)(right_value416=xsprintf("%s",it_281))), "02transpile.c", 762))))))), "02transpile.c", 762))))));
                    if(__dec_obj121) { come_call_finalizer(buffer_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj122=info_282.source;
                    info_282.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value421=string_to_buffer(((char*)come_null_check(optional$2charphbool_value((come_push_stackframe("02transpile.c", 763),((struct optional$2charphbool*)(right_value420=string_read(((char*)come_null_check(((char*)(right_value419=xsprintf("%s.i",it_281))), "02transpile.c", 763))))))), "02transpile.c", 763))))));
                    if(__dec_obj122) { come_call_finalizer(buffer_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_282.p=((struct buffer*)come_null_check(info_282.source, "02transpile.c", 764))->buf;
                    __freed_obj__ = 0;
                    info_282.head=((struct buffer*)come_null_check(info_282.source, "02transpile.c", 765))->buf;
                    __freed_obj__ = 0;
                    if(_if_conditional406=output_file_name_277,                    __freed_obj__ = 0, 
                    _if_conditional406) {
                        __dec_obj123=info_282.output_file_name;
                        info_282.output_file_name=(char*)come_increment_ref_count(((char*)(right_value422=__builtin_string(output_file_name_277))));
                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj124=info_282.output_file_name;
                        info_282.output_file_name=((void*)0);
                        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional407=!output_cpp_file_275,                    __freed_obj__ = 0, 
                    _if_conditional407) {
                        transpile_v5(&info_282);
                        __freed_obj__ = 0;
                        if(_if_conditional408=!output_source_file_v3(&info_282),                        __freed_obj__ = 0, 
                        _if_conditional408) {
                            printf("%s %d: output source file faield\n",info_282.sname,info_282.sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional409=info_282.err_num>0,                        __freed_obj__ = 0, 
                        _if_conditional409) {
                            printf("transpile error. err num %d\n",info_282.err_num);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional410=!compile(&info_282,output_object_file_274,object_files_273),                            __freed_obj__ = 0, 
                            _if_conditional410) {
                                printf("%s %d: compile faield\n",info_282.sname,info_282.sline);
                                __freed_obj__ = 0;
                                exit(27);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if((&info_282) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_282), (void*)0, (void*)0, 1, 0, 0, 0); }
                    if(lv_table_283 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,lv_table_283, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_280 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_280, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional411=!output_object_file_274&&!output_cpp_file_275&&(list$1charph_length(((struct list$1charph*)come_null_check(files_272, "02transpile.c", 820)))>0||list$1charph_length(((struct list$1charph*)come_null_check(object_files_273, "02transpile.c", 820)))>0),                __freed_obj__ = 0, 
                _if_conditional411) {
                    __freed_obj__ = 0;
                    memset(&info_284,0,sizeof(struct sInfo));
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    __dec_obj126=info_284.sname;
                    info_284.sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(optional$2charphbool_value((come_push_stackframe("02transpile.c", 803),((struct optional$2charphbool*)(right_value427=list$1charphp_operator_load_element(files_272,0)))))))));
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj127=info_284.clang_option;
                    info_284.clang_option=(char*)come_increment_ref_count(((char*)(right_value429=buffer_to_string(((struct buffer*)come_null_check(clang_option_270, "02transpile.c", 804))))));
                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    info_284.verbose=verbose_278;
                    __freed_obj__ = 0;
                    if(_if_conditional414=output_file_name_277,                    __freed_obj__ = 0, 
                    _if_conditional414) {
                        __dec_obj128=info_284.output_file_name;
                        info_284.output_file_name=(char*)come_increment_ref_count(((char*)(right_value430=__builtin_string(output_file_name_277))));
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj129=info_284.output_file_name;
                        info_284.output_file_name=((void*)0);
                        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __current_stack2__.info_284 = &info_284;
                    __current_stack2__.clang_option_270 = &clang_option_270;
                    __current_stack2__.cpp_option_271 = &cpp_option_271;
                    __current_stack2__.files_272 = &files_272;
                    __current_stack2__.object_files_273 = &object_files_273;
                    __current_stack2__.output_object_file_274 = &output_object_file_274;
                    __current_stack2__.output_cpp_file_275 = &output_cpp_file_275;
                    __current_stack2__.output_source_file_flag_276 = &output_source_file_flag_276;
                    __current_stack2__.output_file_name_277 = &output_file_name_277;
                    __current_stack2__.verbose_278 = &verbose_278;
                    __current_stack2__.argc = &argc;
                    __current_stack2__.argv = &argv;
                    bool_expect(linker(&info_284,object_files_273),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(__current_stack2__.__method_block_result_kind__ == 3)
                    {
                        return (int)__current_stack2__.__method_block_return_value__;
                    }
                    __freed_obj__ = 0;
                    if((&info_284) && !__freed_obj__) { come_call_finalizer(sInfo_finalize,(&info_284), (void*)0, (void*)0, 1, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_final_v5();
                __freed_obj__ = 0;
                if(clang_option_270 && !__freed_obj__) { come_call_finalizer(buffer_finalize,clang_option_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(cpp_option_271 && !__freed_obj__) { come_call_finalizer(buffer_finalize,cpp_option_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(files_272 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,files_272, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(object_files_273 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,object_files_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(output_file_name_277 && !__freed_obj__) { output_file_name_277 = come_decrement_ref_count(output_file_name_277, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result171__ = 0;
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value328;
void* right_value329;
void* right_value330;
int i_252;
_Bool _for_condtionalA19;
void* right_value331;
void* right_value332;
struct list$1charp* __dec_obj90;
struct map$2charphsFunph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&i_252, 0, sizeof(int));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value329=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_252=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA19=                i_252<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA19;                i_252++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_252]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj90=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value332=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value331=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj90) { come_call_finalizer(list$1charp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result159__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result159__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_253;
_Bool _for_condtionalA20;
_Bool _if_conditional326;
_Bool _if_conditional327;
int i_254;
_Bool _for_condtionalA21;
_Bool _if_conditional328;
_Bool _if_conditional329;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
                    for(
                    i_253=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA20=                    i_253<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA20;                    i_253++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional326=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_253],                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            if(_if_conditional327=1,                            __freed_obj__ = 0, 
                            _if_conditional327) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_253] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_253], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_254=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA21=                    i_254<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA21;                    i_254++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional328=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_254],                        __freed_obj__ = 0, 
                        _if_conditional328) {
                            if(_if_conditional329=1,                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_254], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional330=self!=((void*)0)&&((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional330) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "map$2charphsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value335;
void* right_value336;
void* right_value337;
int i_255;
_Bool _for_condtionalA22;
void* right_value338;
void* right_value339;
struct list$1charp* __dec_obj92;
struct map$2charphsGenericsFunph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&i_255, 0, sizeof(int));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value336=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_255=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA22=                i_255<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA22;                i_255++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_255]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj92=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value339=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value338=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj92) { come_call_finalizer(list$1charp_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result160__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result160__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional331=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional331) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional332=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional333=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional333) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional334=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional334) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional335=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional335) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional336=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional336) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional337=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional337) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional338=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional338) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional339=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional339) {
                        if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_256;
_Bool _for_condtionalA23;
_Bool _if_conditional340;
_Bool _if_conditional341;
int i_257;
_Bool _for_condtionalA24;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_256, 0, sizeof(int));
memset(&i_257, 0, sizeof(int));
                    for(
                    i_256=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA23=                    i_256<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA23;                    i_256++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional340=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_256],                        __freed_obj__ = 0, 
                        _if_conditional340) {
                            if(_if_conditional341=1,                            __freed_obj__ = 0, 
                            _if_conditional341) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_256] && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_256], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_257=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA24=                    i_257<((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA24;                    i_257++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional342=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_257],                        __freed_obj__ = 0, 
                        _if_conditional342) {
                            if(_if_conditional343=1,                            __freed_obj__ = 0, 
                            _if_conditional343) {
                                if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_257] && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_257] = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_257], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional344=self!=((void*)0)&&((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional344) {
                    if(((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsGenericsFunph*)come_null_check(self, "map$2charphsGenericsFunph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value342;
void* right_value343;
void* right_value344;
int i_258;
_Bool _for_condtionalA25;
void* right_value345;
void* right_value346;
struct list$1charp* __dec_obj94;
struct map$2charphsClassph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&i_258, 0, sizeof(int));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value342=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value343=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value344=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_258=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA25=                i_258<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA25;                i_258++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_258]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj94=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value346=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value345=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj94) { come_call_finalizer(list$1charp_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result161__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result161__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_259;
_Bool _for_condtionalA26;
_Bool _if_conditional345;
_Bool _if_conditional346;
int i_260;
_Bool _for_condtionalA27;
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_259, 0, sizeof(int));
memset(&i_260, 0, sizeof(int));
                    for(
                    i_259=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA26=                    i_259<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA26;                    i_259++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional345=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_259],                        __freed_obj__ = 0, 
                        _if_conditional345) {
                            if(_if_conditional346=1,                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_259] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1168))->items[i_259], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_260=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA27=                    i_260<((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA27;                    i_260++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional347=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_260],                        __freed_obj__ = 0, 
                        _if_conditional347) {
                            if(_if_conditional348=1,                            __freed_obj__ = 0, 
                            _if_conditional348) {
                                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_260] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_260] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_260], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional349;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional349=self!=((void*)0)&&((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional349) {
                    if(((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsClassph*)come_null_check(self, "map$2charphsClassph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value349;
void* right_value350;
void* right_value351;
int i_261;
_Bool _for_condtionalA28;
void* right_value352;
void* right_value353;
struct list$1charp* __dec_obj96;
struct map$2charphsTypeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&i_261, 0, sizeof(int));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value349=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value350=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(1024)), "./comelang2.h", 1123))));
                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value351=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                for(
                i_261=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA28=                i_261<1024 ,                __freed_obj__ = 0, 
                _for_condtionalA28;                i_261++ ,                __freed_obj__ = 0, 
                0                ){
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_261]=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                __freed_obj__ = 0;
                __dec_obj96=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value353=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value352=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                if(__dec_obj96) { come_call_finalizer(list$1charp_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                __freed_obj__ = 0;
                __result162__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result162__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_262;
_Bool _for_condtionalA29;
_Bool _if_conditional350;
_Bool _if_conditional351;
int i_263;
_Bool _for_condtionalA30;
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
                    for(
                    i_262=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA29=                    i_262<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA29;                    i_262++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional350=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_262],                        __freed_obj__ = 0, 
                        _if_conditional350) {
                            if(_if_conditional351=1,                            __freed_obj__ = 0, 
                            _if_conditional351) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_262] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1168))->items[i_262], (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1172))->items);
                    __freed_obj__ = 0;
                    for(
                    i_263=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA30=                    i_263<((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->size ,                    __freed_obj__ = 0, 
                    _for_condtionalA30;                    i_263++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional352=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_263],                        __freed_obj__ = 0, 
                        _if_conditional352) {
                            if(_if_conditional353=1,                            __freed_obj__ = 0, 
                            _if_conditional353) {
                                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_263] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_263] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_263], (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional354=self!=((void*)0)&&((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 1))->key_list!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional354) {
                    if(((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsTypeph*)come_null_check(self, "map$2charphsTypeph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sRightValueObjectph* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result163__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result163__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_264;
_Bool _while_condtional33;
struct list_item$1sRightValueObjectph* prev_it_265;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_264, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_265, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_264=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional33=it_264!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional33) {
                        prev_it_265=it_264;
                        __freed_obj__ = 0;
                        it_264=((struct list_item$1sRightValueObjectph*)come_null_check(it_264, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_265 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional355=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional355) {
                                if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional356=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional356) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional357=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional357) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional358=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional358) {
                                        if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result164__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result164__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_266;
_Bool _while_condtional34;
struct list_item$1CVALUEph* prev_it_267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_266, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_267, 0, sizeof(struct list_item$1CVALUEph*));
                    it_266=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional34=it_266!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional34) {
                        prev_it_267=it_266;
                        __freed_obj__ = 0;
                        it_266=((struct list_item$1CVALUEph*)come_null_check(it_266, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_267 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional359=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional359) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional360=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional360) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional361=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional361) {
                                        if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result165__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result165__;
                __freed_obj__ = 0;
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional365=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->original_source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional365) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 0))->original_source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional366=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->source!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional366) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 1))->source, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional367=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional367) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional368=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->base_sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional368) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 3))->base_sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional369=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->err_line!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional369) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 4))->err_line, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional370=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->clang_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional370) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 5))->clang_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional371=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->cpp_option!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional371) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 6))->cpp_option, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional372=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional372) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 7))->funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional373=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->generics_funcs!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional373) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs && !__freed_obj__) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 8))->generics_funcs, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional374=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional374) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 9))->classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional375=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional375) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types && !__freed_obj__) { come_call_finalizer(map$2charphsTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 10))->types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional376=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->generics_classes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional376) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes && !__freed_obj__) { come_call_finalizer(map$2charphsClassphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 11))->generics_classes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional377=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->module!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional377) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module && !__freed_obj__) { come_call_finalizer(sModule_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 12))->module, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional378=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional378) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 13))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional379=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->right_value_objects!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional379) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 14))->right_value_objects, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional380=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->generics_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional380) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 15))->generics_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional381=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->method_generics_types!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional381) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 16))->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional382=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->stack!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional382) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 17))->stack, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional383=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->come_function_result_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional383) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 18))->come_function_result_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional384=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->gv_table!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional384) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 19))->gv_table, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional385=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->generics_type_names!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional385) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 20))->generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional386=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->impl_type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional386) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sInfo*)come_null_check(self, "sInfo_finalize", 21))->impl_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional387=self!=((void*)0)&&((struct sInfo*)come_null_check(self, "sInfo_finalize", 23))->output_file_name!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional387) {
                    if(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name && !__freed_obj__) { ((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name = come_decrement_ref_count(((struct sInfo*)come_null_check(self, "sInfo_finalize", 22))->output_file_name, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional412;
struct list_item$1charph* it_285;
int i_286;
_Bool _while_condtional35;
_Bool _if_conditional413;
void* right_value423;
void* right_value424;
struct optional$2charphbool* __result169__;
char* default_value_287;
void* right_value425;
void* right_value426;
struct optional$2charphbool* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_285, 0, sizeof(struct list_item$1charph*));
memset(&i_286, 0, sizeof(int));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&default_value_287, 0, sizeof(char*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
                        if(_if_conditional412=position<0,                        __freed_obj__ = 0, 
                        _if_conditional412) {
                            position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_285=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                        __freed_obj__ = 0;
                        i_286=0;
                        __freed_obj__ = 0;
                        while(_while_condtional35=it_285!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional35) {
                            if(_if_conditional413=position==i_286,                            __freed_obj__ = 0, 
                            _if_conditional413) {
                                __result169__ = __result_obj__ = ((struct optional$2charphbool*)(right_value424=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value423=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_285, "./comelang2.h", 742))->item),(_Bool)1)));
                                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result169__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_285=((struct list_item$1charph*)come_null_check(it_285, "./comelang2.h", 744))->next;
                            __freed_obj__ = 0;
                            i_286++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&default_value_287,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result170__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value426=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value425=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_287),(_Bool)0))));
                        if(default_value_287 && !__freed_obj__) { default_value_287 = come_decrement_ref_count(default_value_287, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result170__;
                        __freed_obj__ = 0;
                        if(default_value_287 && !__freed_obj__) { default_value_287 = come_decrement_ref_count(default_value_287, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj125;
struct optional$2charphbool* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __dec_obj125=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                                    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result168__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result168__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        printf("%s %d: linker faield\n",(*(parent->info_284)).sname,(*(parent->info_284)).sline);
                        __freed_obj__ = 0;
                        exit(13);
                        __freed_obj__ = 0;
}

