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

int getpid();

int unlink(const char* anonymous_var_nameX30);

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
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_13opc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
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

// body function












_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* generics_type_32;
_Bool _if_conditional91;
struct sType* __dec_obj23;
_Bool _if_conditional92;
struct sClass* klass_33;
char* class_name_34;
struct sFun* operator_fun_35;
char* fun_name2_36;
_Bool _if_conditional93;
void* right_value35;
char* none_generics_name_37;
void* right_value36;
struct sType* obj_type_38;
void* right_value37;
char* __dec_obj24;
void* right_value38;
char* fun_name3_39;
void* right_value40;
struct sGenericsFun* generics_fun_43;
_Bool _if_conditional108;
void* right_value41;
_Bool _if_conditional109;
_Bool __result39__;
void* right_value51;
_Bool _if_conditional115;
void* right_value52;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_48;
char* fun_name_49;
void* right_value53;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun2_50;
char* fun_name2_51;
_Bool _if_conditional117;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assgin_var3;
struct sFun* fun_52;
char* fun_name_53;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun2_54;
char* fun_name2_55;
void* right_value56;
void* right_value57;
char* __dec_obj25;
int i_56;
_Bool _for_condtionalA2;
void* right_value58;
char* new_fun_name_57;
void* right_value59;
_Bool _if_conditional118;
void* right_value60;
char* __dec_obj26;
_Bool _if_conditional119;
void* right_value61;
_Bool result_58;
_Bool _if_conditional120;
void* right_value62;
struct CVALUE* come_value_59;
char* left_value2_60;
void* right_value63;
void* right_value64;
void* right_value69;
void* right_value70;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __dec_obj28;
_Bool _if_conditional130;
void* right_value71;
char* __dec_obj29;
_Bool _if_conditional131;
void* right_value72;
char* __dec_obj30;
void* right_value73;
char* __dec_obj31;
_Bool _if_conditional132;
void* right_value74;
char* __dec_obj32;
void* right_value75;
char* __dec_obj33;
void* right_value76;
char* __dec_obj34;
char* right_value2_65;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
char* __dec_obj35;
_Bool _if_conditional136;
void* right_value81;
char* __dec_obj36;
_Bool _if_conditional137;
void* right_value82;
char* __dec_obj37;
void* right_value83;
char* __dec_obj38;
_Bool _if_conditional138;
void* right_value84;
char* __dec_obj39;
void* right_value85;
char* __dec_obj40;
void* right_value86;
char* __dec_obj41;
void* right_value87;
char* __dec_obj42;
void* right_value88;
struct sType* type2_66;
void* right_value89;
struct sType* type3_67;
void* right_value90;
struct sType* __dec_obj43;
_Bool _if_conditional139;
void* right_value91;
char* __dec_obj44;
_Bool _if_conditional140;
void* right_value92;
char* __dec_obj45;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&generics_type_32, 0, sizeof(struct sType*));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&class_name_34, 0, sizeof(char*));
memset(&operator_fun_35, 0, sizeof(struct sFun*));
memset(&fun_name2_36, 0, sizeof(char*));
memset(&right_value35, 0, sizeof(void*));
memset(&none_generics_name_37, 0, sizeof(char*));
memset(&right_value36, 0, sizeof(void*));
memset(&obj_type_38, 0, sizeof(struct sType*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&fun_name3_39, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&generics_fun_43, 0, sizeof(struct sGenericsFun*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&fun_52, 0, sizeof(struct sFun*));
memset(&fun_name_53, 0, sizeof(char*));
memset(&fun_52, 0, sizeof(struct sFun*));
memset(&fun_name_53, 0, sizeof(char*));
memset(&right_value55, 0, sizeof(void*));
memset(&fun2_54, 0, sizeof(struct sFun*));
memset(&fun_name2_55, 0, sizeof(char*));
memset(&fun2_54, 0, sizeof(struct sFun*));
memset(&fun_name2_55, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&i_56, 0, sizeof(int));
memset(&right_value58, 0, sizeof(void*));
memset(&new_fun_name_57, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_58, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&left_value2_60, 0, sizeof(char*));
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
memset(&right_value2_65, 0, sizeof(char*));
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
memset(&type2_66, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&type3_67, 0, sizeof(struct sType*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    generics_type_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional91=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_32, "13op.c", 10))->mNoSolvedGenericsType, "13op.c", 10))->v1,    __freed_obj__ = 0, 
    _if_conditional91) {
        __dec_obj23=generics_type_32;
        generics_type_32=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_32, "13op.c", 7))->mNoSolvedGenericsType, "13op.c", 7))->v1);
        if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional92=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 13))->mNoSolvedGenericsType, "13op.c", 13))->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 11))->mNoSolvedGenericsType, "13op.c", 11))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_33=((struct sType*)come_null_check(type, "13op.c", 13))->mClass;
    __freed_obj__ = 0;
    class_name_34=((struct sClass*)come_null_check(klass_33, "13op.c", 14))->mName;
    __freed_obj__ = 0;
    operator_fun_35=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional93=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 74))->mGenericsTypes, "13op.c", 74)))>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_37=(char*)come_increment_ref_count(((char*)(right_value35=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 20))->mClass, "13op.c", 20))->mName))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(type,((struct sInfo*)come_null_check(info, "13op.c", 22))->generics_type,info))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=fun_name2_36;
        fun_name2_36=(char*)come_increment_ref_count(((char*)(right_value37=create_method_name(obj_type_38,(_Bool)0,fun_name,info))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_39=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("%s_%s",none_generics_name_37,fun_name))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_43=((struct sGenericsFun*)(right_value40=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 27))->generics_funcs, "13op.c", 27)),fun_name3_39,((void*)0))));
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_43,        __freed_obj__ = 0, 
        _if_conditional108) {
            if(_if_conditional109=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(fun_name2_36)))),generics_fun_43,obj_type_38,info),            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional109) {
                __result39__ = (_Bool)0;
                if(none_generics_name_37 && !__freed_obj__) { none_generics_name_37 = come_decrement_ref_count(none_generics_name_37, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_39 && !__freed_obj__) { fun_name3_39 = come_decrement_ref_count(fun_name3_39, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_36 && !__freed_obj__) { fun_name2_36 = come_decrement_ref_count(fun_name2_36, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_35=optional$2sFunpbool_value((come_push_stackframe("13op.c", 35),((struct optional$2sFunpbool*)(right_value51=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 35))->funcs,fun_name2_36)))));
            come_pop_stackframe();
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional115=charp_operator_equals(fun_name,"operator_equals"),            __freed_obj__ = 0, 
            _if_conditional115) {
                multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value52=create_equals_automatically(obj_type_38,"equals",info)));
                fun_48=multiple_assgin_var1->v1;
                fun_name_49=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value53=create_operator_equals_automatically(obj_type_38,"operator_equals",info)));
                fun2_50=multiple_assgin_var2->v1;
                fun_name2_51=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                operator_fun_35=fun2_50;
                __freed_obj__ = 0;
                if(fun_name_49 && !__freed_obj__) { fun_name_49 = come_decrement_ref_count(fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_51 && !__freed_obj__) { fun_name2_51 = come_decrement_ref_count(fun_name2_51, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional117=charp_operator_equals(fun_name,"operator_not_equals"),                __freed_obj__ = 0, 
                _if_conditional117) {
                    multiple_assgin_var3=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_38,"not_equals",info)));
                    fun_52=multiple_assgin_var3->v1;
                    fun_name_53=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    multiple_assgin_var4=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_not_equals_automatically(obj_type_38,"operator_not_equals",info)));
                    fun2_54=multiple_assgin_var4->v1;
                    fun_name2_55=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    operator_fun_35=fun2_54;
                    __freed_obj__ = 0;
                    if(fun_name_53 && !__freed_obj__) { fun_name_53 = come_decrement_ref_count(fun_name_53, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_55 && !__freed_obj__) { fun_name2_55 = come_decrement_ref_count(fun_name2_55, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    come_clear_stackframe();
                    operator_fun_35=optional$2sFunpbool_value((come_push_stackframe("13op.c", 51),((struct optional$2sFunpbool*)(right_value56=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 51))->funcs,fun_name2_36)))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(none_generics_name_37 && !__freed_obj__) { none_generics_name_37 = come_decrement_ref_count(none_generics_name_37, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_39 && !__freed_obj__) { fun_name3_39 = come_decrement_ref_count(fun_name3_39, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj25=fun_name2_36;
        fun_name2_36=(char*)come_increment_ref_count(((char*)(right_value57=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_56=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_56>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_56-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_57=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("%s_v%d",fun_name2_36,i_56))));
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_35=optional$2sFunpbool_value((come_push_stackframe("13op.c", 61),((struct optional$2sFunpbool*)(right_value59=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 61))->funcs,new_fun_name_57)))));
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional118=operator_fun_35,            __freed_obj__ = 0, 
            _if_conditional118) {
                __dec_obj26=fun_name2_36;
                fun_name2_36=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_57))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_57 && !__freed_obj__) { new_fun_name_57 = come_decrement_ref_count(new_fun_name_57, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_57 && !__freed_obj__) { new_fun_name_57 = come_decrement_ref_count(new_fun_name_57, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional119=operator_fun_35==((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            come_clear_stackframe();
            operator_fun_35=optional$2sFunpbool_value((come_push_stackframe("13op.c", 70),((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 70))->funcs,fun_name2_36)))));
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_58=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional120=operator_fun_35&&(list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 170))->mGenericsTypes, "13op.c", 170)))>0||(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 170))->type, "13op.c", 170))->mClass, "13op.c", 170))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 170))->type, "13op.c", 170))->mClass, "13op.c", 170))->mName)&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 170))->type, "13op.c", 170))->mPointerNum==((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 170))->type, "13op.c", 170))->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    __freed_obj__ = 0, 
    _if_conditional120) {
        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77))));
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value64=xsprintf("\%s is assigned to",((char*)(right_value63=string_to_string(fun_name2_36)))))),optional$2sTypephbool_value((come_push_stackframe("13op.c", 79),((struct optional$2sTypephbool*)(right_value69=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 79))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "13op.c", 79))->type,left_value,(_Bool)0,info);
        come_pop_stackframe();
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional127=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("13op.c", 111),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value70=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 111))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "13op.c", 111))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 111))->type, "13op.c", 111))->mHeap,        (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional127) {
            if(_if_conditional128=((struct CVALUE*)come_null_check(left_value, "13op.c", 106))->var,            __freed_obj__ = 0, 
            _if_conditional128) {
                if(_if_conditional129=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                    __dec_obj28=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 83))->var, "13op.c", 83))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 83))->var, "13op.c", 83))->mCValueName=((void*)0);
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional130=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __dec_obj29=((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value=(char*)come_increment_ref_count(((char*)(right_value71=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->type,((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value,info))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional131=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional131) {
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
                if(_if_conditional132=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 105))->type, "13op.c", 105))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
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
            __dec_obj33=left_value2_60;
            left_value2_60=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "13op.c", 106))->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_60;
            left_value2_60=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(((struct CVALUE*)come_null_check(left_value, "13op.c", 109))->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value78=xsprintf("\%s is assigned to",((char*)(right_value77=string_to_string(fun_name2_36)))))),optional$2sTypephbool_value((come_push_stackframe("13op.c", 112),((struct optional$2sTypephbool*)(right_value79=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 112))->mParamTypes,1))))),((struct CVALUE*)come_null_check(right_value, "13op.c", 112))->type,right_value,(_Bool)0,info);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional133=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("13op.c", 145),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value80=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 145))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "13op.c", 145))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 145))->type, "13op.c", 145))->mHeap,        (right_value80 && right_value80 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional133) {
            if(_if_conditional134=((struct CVALUE*)come_null_check(right_value, "13op.c", 139))->var,            __freed_obj__ = 0, 
            _if_conditional134) {
                if(_if_conditional135=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional135) {
                    __dec_obj35=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 116))->var, "13op.c", 116))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 116))->var, "13op.c", 116))->mCValueName=((void*)0);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional136=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        __dec_obj36=((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value=(char*)come_increment_ref_count(((char*)(right_value81=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->type,((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value,info))));
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional137=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional137) {
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
                if(_if_conditional138=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 138))->type, "13op.c", 138))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional138) {
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
            __dec_obj40=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "13op.c", 139))->c_value))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj41=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(((struct CVALUE*)come_null_check(right_value, "13op.c", 142))->c_value))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj42=((struct CVALUE*)come_null_check(come_value_59, "13op.c", 145))->c_value;
        ((struct CVALUE*)come_null_check(come_value_59, "13op.c", 145))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("%s(%s,%s)",fun_name2_36,left_value2_60,right_value2_65))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 147))->mResultType))));
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=solve_generics(type2_66,generics_type_32,info))));
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj43=((struct CVALUE*)come_null_check(come_value_59, "13op.c", 151))->type;
        ((struct CVALUE*)come_null_check(come_value_59, "13op.c", 151))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type3_67))));
        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_59, "13op.c", 152))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional139=((struct sType*)come_null_check(type3_67, "13op.c", 158))->mHeap,        __freed_obj__ = 0, 
        _if_conditional139) {
            __dec_obj44=((struct CVALUE*)come_null_check(come_value_59, "13op.c", 155))->c_value;
            ((struct CVALUE*)come_null_check(come_value_59, "13op.c", 155))->c_value=(char*)come_increment_ref_count(((char*)(right_value91=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_59, "13op.c", 155))->c_value,(struct sType*)come_increment_ref_count(type3_67),info))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional140=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_35, "13op.c", 162))->mResultType, "13op.c", 162))->mException,        __freed_obj__ = 0, 
        _if_conditional140) {
            __dec_obj45=((struct CVALUE*)come_null_check(come_value_59, "13op.c", 159))->c_value;
            ((struct CVALUE*)come_null_check(come_value_59, "13op.c", 159))->c_value=(char*)come_increment_ref_count(((char*)(right_value92=append_exception_value(((struct CVALUE*)come_null_check(come_value_59, "13op.c", 159))->c_value,((struct CVALUE*)come_null_check(come_value_59, "13op.c", 159))->type,info))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_59, "13op.c", 162))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 164))->stack, "13op.c", 164)),(struct CVALUE*)come_increment_ref_count(come_value_59));
        __freed_obj__ = 0;
        result_58=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_60 && !__freed_obj__) { left_value2_60 = come_decrement_ref_count(left_value2_60, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_65 && !__freed_obj__) { right_value2_65 = come_decrement_ref_count(right_value2_65, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result53__ = result_58;
    if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_36 && !__freed_obj__) { fun_name2_36 = come_decrement_ref_count(fun_name2_36, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_36 && !__freed_obj__) { fun_name2_36 = come_decrement_ref_count(fun_name2_36, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional5;
struct sType* __result14__;
void* right_value0;
struct sType* result_8;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value3;
struct tuple1$1sTypeph* __dec_obj2;
_Bool _if_conditional27;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional28;
void* right_value5;
char* __dec_obj4;
_Bool _if_conditional29;
void* right_value12;
struct list$1sTypeph* __dec_obj8;
_Bool _if_conditional33;
void* right_value20;
struct list$1sNodeph* __dec_obj12;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional48;
void* right_value28;
struct list$1charph* __dec_obj17;
_Bool _if_conditional52;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value30;
struct sNode* __dec_obj19;
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
void* right_value31;
struct sNode* __dec_obj20;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value32;
char* __dec_obj21;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value33;
char* __dec_obj22;
struct sType* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sType*));
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
        if(_if_conditional5=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional5) {
            __result14__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result14__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_8=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional22) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj2=((struct sType*)come_null_check(result_8, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_8, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            __dec_obj3=((struct sType*)come_null_check(result_8, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_8, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            __dec_obj4=((struct sType*)come_null_check(result_8, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_8, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj8=((struct sType*)come_null_check(result_8, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_8, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            __dec_obj12=((struct sType*)come_null_check(result_8, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_8, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional46=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional46) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional47) {
            __dec_obj13=((struct sType*)come_null_check(result_8, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_8, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj17=((struct sType*)come_null_check(result_8, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_8, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            __dec_obj18=((struct sType*)come_null_check(result_8, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_8, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            __dec_obj19=((struct sType*)come_null_check(result_8, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_8, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj20=((struct sType*)come_null_check(result_8, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_8, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            __dec_obj21=((struct sType*)come_null_check(result_8, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_8, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional88=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional89) {
            ((struct sType*)come_null_check(result_8, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            __dec_obj22=((struct sType*)come_null_check(result_8, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_8, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result31__ = __result_obj__ = result_8;
        if(result_8 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result31__;
        __freed_obj__ = 0;
        if(result_8 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional19) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
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
                    if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                    it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_9!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_10=it_9;
                        __freed_obj__ = 0;
                        it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                            if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional11) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_11;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                    it_11=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_11!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_12=it_11;
                        __freed_obj__ = 0;
                        it_11=((struct list_item$1sNodeph*)come_null_check(it_11, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                            if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_13;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                    it_13=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_13!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_14=it_13;
                        __freed_obj__ = 0;
                        it_13=((struct list_item$1charph*)come_null_check(it_13, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result15__;
void* right_value1;
struct tuple1$1sTypeph* result_15;
_Bool _if_conditional26;
void* right_value2;
struct sType* __dec_obj1;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(_if_conditional24=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional24) {
                    __result15__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_15=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __dec_obj1=((struct tuple1$1sTypeph*)come_null_check(result_15, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_15, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result16__ = __result_obj__ = result_15;
                if(result_15 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result16__;
                __freed_obj__ = 0;
                if(result_15 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional25=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result17__;
void* right_value6;
void* right_value7;
struct list$1sTypeph* result_16;
struct list_item$1sTypeph* it_17;
_Bool _while_condtional4;
void* right_value11;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_17, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result17__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result17__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_16=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value6=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_17=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_17!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_16, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_17, "./comelang2.h", 192))->item)))));
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_17=((struct list_item$1sTypeph*)come_null_check(it_17, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result20__ = __result_obj__ = result_16;
                if(result_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result20__;
                __freed_obj__ = 0;
                if(result_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result18__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional31;
void* right_value8;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj5;
_Bool _if_conditional32;
void* right_value9;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj6;
void* right_value10;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj7;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_18;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_18;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_19;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_19;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_20;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_20;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result19__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result19__;
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
_Bool _if_conditional34;
struct list$1sNodeph* __result21__;
void* right_value13;
void* right_value14;
struct list$1sNodeph* result_21;
struct list_item$1sNodeph* it_22;
_Bool _while_condtional5;
void* right_value19;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional34=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    __result21__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value13=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_22=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_22!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_21, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_22, "./comelang2.h", 192))->item)))));
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    it_22=((struct list_item$1sNodeph*)come_null_check(it_22, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result26__ = __result_obj__ = result_21;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
                if(result_21 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result22__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result22__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional35;
void* right_value15;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj9;
_Bool _if_conditional36;
void* right_value16;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj10;
void* right_value17;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_23;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_23;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_24;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_24;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_25;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_25;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result23__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result23__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional37;
struct sNode* __result24__;
void* right_value18;
struct sNode* result_26;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            __result24__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result24__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional42=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional42) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional43=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional43) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional44=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional44) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional45=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            ((struct sNode*)come_null_check(result_26, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result25__ = __result_obj__ = result_26;
                        if(result_26 && !__freed_obj__) { result_26 = come_decrement_ref_count(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result25__;
                        __freed_obj__ = 0;
                        if(result_26 && !__freed_obj__) { result_26 = come_decrement_ref_count(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional49;
struct list$1charph* __result27__;
void* right_value22;
void* right_value23;
struct list$1charph* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional6;
void* right_value27;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
                if(_if_conditional49=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional49) {
                    __result27__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_28=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_28!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_27, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct list_item$1charph*)come_null_check(it_28, "./comelang2.h", 192))->item)))));
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_28=((struct list_item$1charph*)come_null_check(it_28, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result30__ = __result_obj__ = result_27;
                if(result_27 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
                if(result_27 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result28__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result28__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional50;
void* right_value24;
struct list_item$1charph* litem_29;
char* __dec_obj14;
_Bool _if_conditional51;
void* right_value25;
struct list_item$1charph* litem_30;
char* __dec_obj15;
void* right_value26;
struct list_item$1charph* litem_31;
char* __dec_obj16;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional50) {
                            litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_29;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_29;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_30;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_30;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_31;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_31;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result29__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result29__;
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
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result32__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_40;
unsigned int it_41;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional96;
struct sGenericsFun* __result35__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result36__;
struct sGenericsFun* __result37__;
struct sGenericsFun* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_40, 0, sizeof(unsigned int));
memset(&it_41, 0, sizeof(unsigned int));
memset(&right_value39, 0, sizeof(void*));
            hash_40=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_41=hash_40;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional94=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_41],                __freed_obj__ = 0, 
                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_41], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result35__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_41];
                        __freed_obj__ = 0;
                        return __result35__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_41++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_41>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional97) {
                        it_41=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional98=it_41==hash_40,                        __freed_obj__ = 0, 
                        _if_conditional98) {
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
_Bool _if_conditional95;
_Bool default_value_42;
_Bool __result33__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_42, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional95) {
                            __freed_obj__ = 0;
                            memset(&default_value_42,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result33__ = default_value_42;
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

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
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
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional104=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional104) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional105=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional107) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_44;
unsigned int hash_45;
unsigned int it_46;
_Bool _while_condtional8;
_Bool _if_conditional110;
void* right_value42;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional111;
void* right_value43;
void* right_value44;
struct optional$2sFunpbool* __result41__;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value45;
void* right_value46;
struct optional$2sFunpbool* __result42__;
void* right_value47;
void* right_value48;
struct optional$2sFunpbool* __result43__;
void* right_value49;
void* right_value50;
struct optional$2sFunpbool* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(struct sFun*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(unsigned int));
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
                memset(&default_value_44,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_45=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_46=hash_45;
                __freed_obj__ = 0;
                while(_while_condtional8=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional8) {
                    if(_if_conditional110=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_46],                    __freed_obj__ = 0, 
                    _if_conditional110) {
                        if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value42=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_46], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        (right_value42 && right_value42 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional111) {
                            __result41__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value44=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value43=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_46],(_Bool)1)));
                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_46++;
                        __freed_obj__ = 0;
                        if(_if_conditional112=it_46>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional112) {
                            it_46=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional113=it_46==hash_45,                            __freed_obj__ = 0, 
                            _if_conditional113) {
                                __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value46=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value45=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_44,(_Bool)0))));
                                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result42__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result43__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value48=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value47=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_44,(_Bool)0))));
                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result43__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result44__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value50=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value49=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_44,(_Bool)0))));
                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result40__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result40__;
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
_Bool _if_conditional114;
struct sFun* default_value_47;
struct sFun* __result45__;
struct sFun* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_47, 0, sizeof(struct sFun*));
                if(_if_conditional114=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional114) {
                    __freed_obj__ = 0;
                    memset(&default_value_47,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result45__ = __result_obj__ = default_value_47;
                    __freed_obj__ = 0;
                    return __result45__;
                    __freed_obj__ = 0;
                }
                else {
                    __result46__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional116=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional116) {
                        if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional121=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional122=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional122) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
struct list_item$1sTypeph* it_61;
int i_62;
_Bool _while_condtional9;
_Bool _if_conditional124;
void* right_value65;
void* right_value66;
struct optional$2sTypephbool* __result48__;
struct sType* default_value_63;
void* right_value67;
void* right_value68;
struct optional$2sTypephbool* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_61, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_62, 0, sizeof(int));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&default_value_63, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
            if(_if_conditional123=position<0,            __freed_obj__ = 0, 
            _if_conditional123) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_61=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_62=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_61!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional124=position==i_62,                __freed_obj__ = 0, 
                _if_conditional124) {
                    __result48__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value66=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value65=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_61, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_61=((struct list_item$1sTypeph*)come_null_check(it_61, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_62++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_63,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result49__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value68=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value67=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_63),(_Bool)0))));
            if(default_value_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result49__;
            __freed_obj__ = 0;
            if(default_value_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj27;
struct optional$2sTypephbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj27=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result47__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result47__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional125=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional125) {
                                if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional126;
struct sType* default_value_64;
struct sType* __result50__;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_64, 0, sizeof(struct sType*));
            if(_if_conditional126=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional126) {
                __freed_obj__ = 0;
                memset(&default_value_64,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result50__ = __result_obj__ = default_value_64;
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
            }
            else {
                __result51__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result51__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
void* right_value93;
struct list_item$1CVALUEph* litem_68;
struct CVALUE* __dec_obj46;
_Bool _if_conditional143;
void* right_value94;
struct list_item$1CVALUEph* litem_69;
struct CVALUE* __dec_obj47;
void* right_value95;
struct list_item$1CVALUEph* litem_70;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional141=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional141) {
                litem_68=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_68, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_68, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj46=((struct list_item$1CVALUEph*)come_null_check(litem_68, "./comelang2.h", 276))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_68, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_68;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_68;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional143=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional143) {
                    litem_69=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value94=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_69, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_69, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj47=((struct list_item$1CVALUEph*)come_null_check(litem_69, "./comelang2.h", 286))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_69, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_69;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_69;
                    __freed_obj__ = 0;
                }
                else {
                    litem_70=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value95=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_70, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_70, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj48=((struct list_item$1CVALUEph*)come_null_check(litem_70, "./comelang2.h", 296))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_70, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_70;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_70;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result52__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result52__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional142=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional142) {
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
struct sNullNode* __result54__;
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
    __result54__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result55__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

char* sNullNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value97;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sNullNode")));
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value98;
struct CVALUE* come_value_71;
void* right_value99;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __dec_obj51;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&come_value_71, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 200))));
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_71, "13op.c", 202))->c_value;
    ((struct CVALUE*)come_null_check(come_value_71, "13op.c", 202))->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("((void*)0)"))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_71, "13op.c", 203))->type;
    ((struct CVALUE*)come_null_check(come_value_71, "13op.c", 203))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 203)))),"void*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_71, "13op.c", 204))->type, "13op.c", 204))->mNullValue=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_71, "13op.c", 205))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_71, "13op.c", 207))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 209))->stack, "13op.c", 209)),(struct CVALUE*)come_increment_ref_count(come_value_71));
    __freed_obj__ = 0;
    __result57__ = (_Bool)1;
    if(come_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
    if(come_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result58__ = ((struct sNullNode*)come_null_check(self, "13op.c", 216))->sline;
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value102;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result59__ = __result_obj__ = ((char*)(right_value102=__builtin_string(((struct sNullNode*)come_null_check(self, "13op.c", 221))->sname)));
    __freed_obj__ = 0;
    return __result59__;
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
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 226);
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value104=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value103=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 226)))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result62__ = __result_obj__ = ((struct sNode*)(right_value107=_inf_value1));
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value108;
char* __dec_obj53;
void* right_value109;
struct sNode* __dec_obj54;
void* right_value110;
struct sNode* __dec_obj55;
struct sAddNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
    ((struct sAddNode*)come_null_check(self, "13op.c", 243))->sline=((struct sInfo*)come_null_check(info, "13op.c", 243))->sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sAddNode*)come_null_check(self, "13op.c", 244))->sname;
    ((struct sAddNode*)come_null_check(self, "13op.c", 244))->sname=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 244))->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct sAddNode*)come_null_check(self, "13op.c", 246))->mLeft;
    ((struct sAddNode*)come_null_check(self, "13op.c", 246))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj55=((struct sAddNode*)come_null_check(self, "13op.c", 247))->mRight;
    ((struct sAddNode*)come_null_check(self, "13op.c", 247))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sAddNode*)come_null_check(self, "13op.c", 248))->mQuote=quote;
    __freed_obj__ = 0;
    __result63__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result64__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

char* sAddNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value111;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
    __result65__ = __result_obj__ = ((char*)(right_value111=__builtin_string("sAddNode")));
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_73;
_Bool _if_conditional152;
_Bool __result66__;
void* right_value112;
struct CVALUE* left_value_74;
struct sNode* right_node_75;
_Bool _if_conditional153;
_Bool __result67__;
void* right_value113;
struct CVALUE* right_value_76;
struct sType* type_77;
char* fun_name_78;
_Bool calling_fun_79;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value114;
struct CVALUE* come_value_80;
void* right_value115;
char* __dec_obj56;
void* right_value116;
struct sType* __dec_obj57;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_73, 0, sizeof(struct sNode*));
memset(&right_value112, 0, sizeof(void*));
memset(&left_value_74, 0, sizeof(struct CVALUE*));
memset(&right_node_75, 0, sizeof(struct sNode*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value_76, 0, sizeof(struct CVALUE*));
memset(&type_77, 0, sizeof(struct sType*));
memset(&fun_name_78, 0, sizeof(char*));
memset(&calling_fun_79, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
    left_node_73=((struct sAddNode*)come_null_check(self, "13op.c", 266))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional152=!((struct sNode*)come_null_check(left_node_73, "13op.c", 272))->compile(((struct sNode*)come_null_check(left_node_73, "13op.c", 272))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result66__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_75=((struct sAddNode*)come_null_check(self, "13op.c", 275))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional153=!((struct sNode*)come_null_check(right_node_75, "13op.c", 281))->compile(((struct sNode*)come_null_check(right_node_75, "13op.c", 281))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional153) {
        __result67__ = (_Bool)0;
        if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value113=get_value_from_stack(-1,info))));
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_77=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_74, "13op.c", 284))->type);
    __freed_obj__ = 0;
    fun_name_78="operator_add";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional154=((struct sAddNode*)come_null_check(self, "13op.c", 295))->mQuote,    __freed_obj__ = 0, 
    _if_conditional154) {
        calling_fun_79=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_79=operator_overload_fun(type_77,fun_name_78,left_value_74,right_value_76,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional155=!calling_fun_79,    __freed_obj__ = 0, 
    _if_conditional155) {
        come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 296))));
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj56=((struct CVALUE*)come_null_check(come_value_80, "13op.c", 298))->c_value;
        ((struct CVALUE*)come_null_check(come_value_80, "13op.c", 298))->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s+%s",((struct CVALUE*)come_null_check(left_value_74, "13op.c", 298))->c_value,((struct CVALUE*)come_null_check(right_value_76, "13op.c", 298))->c_value))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj57=((struct CVALUE*)come_null_check(come_value_80, "13op.c", 299))->type;
        ((struct CVALUE*)come_null_check(come_value_80, "13op.c", 299))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(((struct CVALUE*)come_null_check(left_value_74, "13op.c", 299))->type))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_80, "13op.c", 300))->type, "13op.c", 300))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_80, "13op.c", 301))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_80, "13op.c", 303))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 305))->stack, "13op.c", 305)),(struct CVALUE*)come_increment_ref_count(come_value_80));
        __freed_obj__ = 0;
        if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result68__ = (_Bool)1;
    if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
    if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = ((struct sAddNode*)come_null_check(self, "13op.c", 313))->sline;
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value117;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __result70__ = __result_obj__ = ((char*)(right_value117=__builtin_string(((struct sAddNode*)come_null_check(self, "13op.c", 318))->sname)));
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value118;
char* __dec_obj58;
void* right_value119;
struct sNode* __dec_obj59;
void* right_value120;
struct sNode* __dec_obj60;
struct sSubNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    ((struct sSubNode*)come_null_check(self, "13op.c", 334))->sline=((struct sInfo*)come_null_check(info, "13op.c", 334))->sline;
    __freed_obj__ = 0;
    __dec_obj58=((struct sSubNode*)come_null_check(self, "13op.c", 335))->sname;
    ((struct sSubNode*)come_null_check(self, "13op.c", 335))->sname=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 335))->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj59=((struct sSubNode*)come_null_check(self, "13op.c", 337))->mLeft;
    ((struct sSubNode*)come_null_check(self, "13op.c", 337))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(left))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj60=((struct sSubNode*)come_null_check(self, "13op.c", 338))->mRight;
    ((struct sSubNode*)come_null_check(self, "13op.c", 338))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(right))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sSubNode*)come_null_check(self, "13op.c", 339))->mQuote=quote;
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

char* sSubNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value121;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    __result73__ = __result_obj__ = ((char*)(right_value121=__builtin_string("sSubNode")));
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_81;
_Bool _if_conditional159;
_Bool __result74__;
void* right_value122;
struct CVALUE* left_value_82;
struct sNode* right_node_83;
_Bool _if_conditional160;
_Bool __result75__;
void* right_value123;
struct CVALUE* right_value_84;
struct sType* type_85;
char* fun_name_86;
_Bool calling_fun_87;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value124;
struct CVALUE* come_value_88;
void* right_value125;
char* __dec_obj61;
void* right_value126;
struct sType* __dec_obj62;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_81, 0, sizeof(struct sNode*));
memset(&right_value122, 0, sizeof(void*));
memset(&left_value_82, 0, sizeof(struct CVALUE*));
memset(&right_node_83, 0, sizeof(struct sNode*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value_84, 0, sizeof(struct CVALUE*));
memset(&type_85, 0, sizeof(struct sType*));
memset(&fun_name_86, 0, sizeof(char*));
memset(&calling_fun_87, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&come_value_88, 0, sizeof(struct CVALUE*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
    left_node_81=((struct sSubNode*)come_null_check(self, "13op.c", 357))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional159=!((struct sNode*)come_null_check(left_node_81, "13op.c", 363))->compile(((struct sNode*)come_null_check(left_node_81, "13op.c", 363))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional159) {
        __result74__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result74__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_83=((struct sSubNode*)come_null_check(self, "13op.c", 366))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional160=!((struct sNode*)come_null_check(right_node_83, "13op.c", 372))->compile(((struct sNode*)come_null_check(right_node_83, "13op.c", 372))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional160) {
        __result75__ = (_Bool)0;
        if(left_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result75__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=get_value_from_stack(-1,info))));
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_85=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_82, "13op.c", 375))->type);
    __freed_obj__ = 0;
    fun_name_86="operator_sub";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional161=((struct sSubNode*)come_null_check(self, "13op.c", 386))->mQuote,    __freed_obj__ = 0, 
    _if_conditional161) {
        calling_fun_87=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_87=operator_overload_fun(type_85,fun_name_86,left_value_82,right_value_84,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional162=!calling_fun_87,    __freed_obj__ = 0, 
    _if_conditional162) {
        come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 387))));
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj61=((struct CVALUE*)come_null_check(come_value_88, "13op.c", 389))->c_value;
        ((struct CVALUE*)come_null_check(come_value_88, "13op.c", 389))->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s-%s",((struct CVALUE*)come_null_check(left_value_82, "13op.c", 389))->c_value,((struct CVALUE*)come_null_check(right_value_84, "13op.c", 389))->c_value))));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj62=((struct CVALUE*)come_null_check(come_value_88, "13op.c", 390))->type;
        ((struct CVALUE*)come_null_check(come_value_88, "13op.c", 390))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(((struct CVALUE*)come_null_check(left_value_82, "13op.c", 390))->type))));
        if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "13op.c", 391))->type, "13op.c", 391))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_88, "13op.c", 392))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_88, "13op.c", 394))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 396))->stack, "13op.c", 396)),(struct CVALUE*)come_increment_ref_count(come_value_88));
        __freed_obj__ = 0;
        if(come_value_88 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result76__ = (_Bool)1;
    if(left_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(left_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_85 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = ((struct sSubNode*)come_null_check(self, "13op.c", 404))->sline;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value127;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value127=__builtin_string(((struct sSubNode*)come_null_check(self, "13op.c", 409))->sname)));
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value128;
char* __dec_obj63;
void* right_value129;
struct sNode* __dec_obj64;
void* right_value130;
struct sNode* __dec_obj65;
struct sMultNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    ((struct sMultNode*)come_null_check(self, "13op.c", 425))->sline=((struct sInfo*)come_null_check(info, "13op.c", 425))->sline;
    __freed_obj__ = 0;
    __dec_obj63=((struct sMultNode*)come_null_check(self, "13op.c", 426))->sname;
    ((struct sMultNode*)come_null_check(self, "13op.c", 426))->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 426))->sname))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMultNode*)come_null_check(self, "13op.c", 428))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj64=((struct sMultNode*)come_null_check(self, "13op.c", 429))->mLeft;
    ((struct sMultNode*)come_null_check(self, "13op.c", 429))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj65=((struct sMultNode*)come_null_check(self, "13op.c", 430))->mRight;
    ((struct sMultNode*)come_null_check(self, "13op.c", 430))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNode_clone(right))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0); }
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultNode_terminated(){
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

char* sMultNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value131;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value131=__builtin_string("sMultNode")));
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_89;
_Bool _if_conditional166;
_Bool __result82__;
void* right_value132;
struct CVALUE* left_value_90;
struct sNode* right_node_91;
_Bool _if_conditional167;
_Bool __result83__;
void* right_value133;
struct CVALUE* right_value_92;
struct sType* type_93;
char* fun_name_94;
_Bool calling_fun_95;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value134;
struct CVALUE* come_value_96;
void* right_value135;
char* __dec_obj66;
void* right_value136;
struct sType* __dec_obj67;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_89, 0, sizeof(struct sNode*));
memset(&right_value132, 0, sizeof(void*));
memset(&left_value_90, 0, sizeof(struct CVALUE*));
memset(&right_node_91, 0, sizeof(struct sNode*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value_92, 0, sizeof(struct CVALUE*));
memset(&type_93, 0, sizeof(struct sType*));
memset(&fun_name_94, 0, sizeof(char*));
memset(&calling_fun_95, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&come_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
    left_node_89=((struct sMultNode*)come_null_check(self, "13op.c", 448))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional166=!((struct sNode*)come_null_check(left_node_89, "13op.c", 454))->compile(((struct sNode*)come_null_check(left_node_89, "13op.c", 454))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional166) {
        __result82__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=get_value_from_stack(-1,info))));
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_91=((struct sMultNode*)come_null_check(self, "13op.c", 457))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional167=!((struct sNode*)come_null_check(right_node_91, "13op.c", 463))->compile(((struct sNode*)come_null_check(right_node_91, "13op.c", 463))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional167) {
        __result83__ = (_Bool)0;
        if(left_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result83__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))));
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_93=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_90, "13op.c", 466))->type);
    __freed_obj__ = 0;
    fun_name_94="operator_mult";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional168=((struct sMultNode*)come_null_check(self, "13op.c", 477))->mQuote,    __freed_obj__ = 0, 
    _if_conditional168) {
        calling_fun_95=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_95=operator_overload_fun(type_93,fun_name_94,left_value_90,right_value_92,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional169=!calling_fun_95,    __freed_obj__ = 0, 
    _if_conditional169) {
        come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 478))));
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj66=((struct CVALUE*)come_null_check(come_value_96, "13op.c", 480))->c_value;
        ((struct CVALUE*)come_null_check(come_value_96, "13op.c", 480))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s*%s",((struct CVALUE*)come_null_check(left_value_90, "13op.c", 480))->c_value,((struct CVALUE*)come_null_check(right_value_92, "13op.c", 480))->c_value))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj67=((struct CVALUE*)come_null_check(come_value_96, "13op.c", 481))->type;
        ((struct CVALUE*)come_null_check(come_value_96, "13op.c", 481))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(((struct CVALUE*)come_null_check(left_value_90, "13op.c", 481))->type))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "13op.c", 482))->type, "13op.c", 482))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_96, "13op.c", 483))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_96, "13op.c", 485))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 487))->stack, "13op.c", 487)),(struct CVALUE*)come_increment_ref_count(come_value_96));
        __freed_obj__ = 0;
        if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result84__ = (_Bool)1;
    if(left_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
    if(left_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = ((struct sMultNode*)come_null_check(self, "13op.c", 495))->sline;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value137;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value137=__builtin_string(((struct sMultNode*)come_null_check(self, "13op.c", 500))->sname)));
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value138;
char* __dec_obj68;
void* right_value139;
struct sNode* __dec_obj69;
void* right_value140;
struct sNode* __dec_obj70;
struct sDivNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    ((struct sDivNode*)come_null_check(self, "13op.c", 516))->sline=((struct sInfo*)come_null_check(info, "13op.c", 516))->sline;
    __freed_obj__ = 0;
    __dec_obj68=((struct sDivNode*)come_null_check(self, "13op.c", 517))->sname;
    ((struct sDivNode*)come_null_check(self, "13op.c", 517))->sname=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 517))->sname))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sDivNode*)come_null_check(self, "13op.c", 519))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj69=((struct sDivNode*)come_null_check(self, "13op.c", 520))->mLeft;
    ((struct sDivNode*)come_null_check(self, "13op.c", 520))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=sNode_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj70=((struct sDivNode*)come_null_check(self, "13op.c", 521))->mRight;
    ((struct sDivNode*)come_null_check(self, "13op.c", 521))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=sNode_clone(right))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result87__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

char* sDivNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value141;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value141, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(right_value141=__builtin_string("sDivNode")));
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_97;
_Bool _if_conditional173;
_Bool __result90__;
void* right_value142;
struct CVALUE* left_value_98;
struct sNode* right_node_99;
_Bool _if_conditional174;
_Bool __result91__;
void* right_value143;
struct CVALUE* right_value_100;
struct sType* type_101;
char* fun_name_102;
_Bool calling_fun_103;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value144;
struct CVALUE* come_value_104;
void* right_value145;
char* __dec_obj71;
void* right_value146;
struct sType* __dec_obj72;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_97, 0, sizeof(struct sNode*));
memset(&right_value142, 0, sizeof(void*));
memset(&left_value_98, 0, sizeof(struct CVALUE*));
memset(&right_node_99, 0, sizeof(struct sNode*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value_100, 0, sizeof(struct CVALUE*));
memset(&type_101, 0, sizeof(struct sType*));
memset(&fun_name_102, 0, sizeof(char*));
memset(&calling_fun_103, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
memset(&come_value_104, 0, sizeof(struct CVALUE*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    left_node_97=((struct sDivNode*)come_null_check(self, "13op.c", 539))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional173=!((struct sNode*)come_null_check(left_node_97, "13op.c", 545))->compile(((struct sNode*)come_null_check(left_node_97, "13op.c", 545))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional173) {
        __result90__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_99=((struct sDivNode*)come_null_check(self, "13op.c", 548))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional174=!((struct sNode*)come_null_check(right_node_99, "13op.c", 554))->compile(((struct sNode*)come_null_check(right_node_99, "13op.c", 554))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional174) {
        __result91__ = (_Bool)0;
        if(left_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result91__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=get_value_from_stack(-1,info))));
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_101=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_98, "13op.c", 557))->type);
    __freed_obj__ = 0;
    fun_name_102="operator_div";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional175=((struct sDivNode*)come_null_check(self, "13op.c", 568))->mQuote,    __freed_obj__ = 0, 
    _if_conditional175) {
        calling_fun_103=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_103=operator_overload_fun(type_101,fun_name_102,left_value_98,right_value_100,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional176=!calling_fun_103,    __freed_obj__ = 0, 
    _if_conditional176) {
        come_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 569))));
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj71=((struct CVALUE*)come_null_check(come_value_104, "13op.c", 571))->c_value;
        ((struct CVALUE*)come_null_check(come_value_104, "13op.c", 571))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s/%s",((struct CVALUE*)come_null_check(left_value_98, "13op.c", 571))->c_value,((struct CVALUE*)come_null_check(right_value_100, "13op.c", 571))->c_value))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj72=((struct CVALUE*)come_null_check(come_value_104, "13op.c", 572))->type;
        ((struct CVALUE*)come_null_check(come_value_104, "13op.c", 572))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(((struct CVALUE*)come_null_check(left_value_98, "13op.c", 572))->type))));
        if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_104, "13op.c", 573))->type, "13op.c", 573))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_104, "13op.c", 574))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_104, "13op.c", 576))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 578))->stack, "13op.c", 578)),(struct CVALUE*)come_increment_ref_count(come_value_104));
        __freed_obj__ = 0;
        if(come_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result92__ = (_Bool)1;
    if(left_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(left_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = ((struct sDivNode*)come_null_check(self, "13op.c", 586))->sline;
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value147;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value147=__builtin_string(((struct sDivNode*)come_null_check(self, "13op.c", 591))->sname)));
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value148;
char* __dec_obj73;
void* right_value149;
struct sNode* __dec_obj74;
void* right_value150;
struct sNode* __dec_obj75;
struct sModNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    ((struct sModNode*)come_null_check(self, "13op.c", 607))->sline=((struct sInfo*)come_null_check(info, "13op.c", 607))->sline;
    __freed_obj__ = 0;
    __dec_obj73=((struct sModNode*)come_null_check(self, "13op.c", 608))->sname;
    ((struct sModNode*)come_null_check(self, "13op.c", 608))->sname=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 608))->sname))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sModNode*)come_null_check(self, "13op.c", 610))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj74=((struct sModNode*)come_null_check(self, "13op.c", 611))->mLeft;
    ((struct sModNode*)come_null_check(self, "13op.c", 611))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=sNode_clone(left))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj75=((struct sModNode*)come_null_check(self, "13op.c", 612))->mRight;
    ((struct sModNode*)come_null_check(self, "13op.c", 612))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNode_clone(right))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0); }
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sModNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value151;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sModNode")));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_105;
_Bool _if_conditional180;
_Bool __result98__;
void* right_value152;
struct CVALUE* left_value_106;
struct sNode* right_node_107;
_Bool _if_conditional181;
_Bool __result99__;
void* right_value153;
struct CVALUE* right_value_108;
struct sType* type_109;
char* fun_name_110;
_Bool calling_fun_111;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value154;
struct CVALUE* come_value_112;
void* right_value155;
char* __dec_obj76;
void* right_value156;
struct sType* __dec_obj77;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_105, 0, sizeof(struct sNode*));
memset(&right_value152, 0, sizeof(void*));
memset(&left_value_106, 0, sizeof(struct CVALUE*));
memset(&right_node_107, 0, sizeof(struct sNode*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value_108, 0, sizeof(struct CVALUE*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&fun_name_110, 0, sizeof(char*));
memset(&calling_fun_111, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&come_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
    left_node_105=((struct sModNode*)come_null_check(self, "13op.c", 630))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional180=!((struct sNode*)come_null_check(left_node_105, "13op.c", 636))->compile(((struct sNode*)come_null_check(left_node_105, "13op.c", 636))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional180) {
        __result98__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_107=((struct sModNode*)come_null_check(self, "13op.c", 639))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional181=!((struct sNode*)come_null_check(right_node_107, "13op.c", 645))->compile(((struct sNode*)come_null_check(right_node_107, "13op.c", 645))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional181) {
        __result99__ = (_Bool)0;
        if(left_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=get_value_from_stack(-1,info))));
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_109=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_106, "13op.c", 648))->type);
    __freed_obj__ = 0;
    fun_name_110="operator_mod";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional182=((struct sModNode*)come_null_check(self, "13op.c", 659))->mQuote,    __freed_obj__ = 0, 
    _if_conditional182) {
        calling_fun_111=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_111=operator_overload_fun(type_109,fun_name_110,left_value_106,right_value_108,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional183=!calling_fun_111,    __freed_obj__ = 0, 
    _if_conditional183) {
        come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 660))));
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj76=((struct CVALUE*)come_null_check(come_value_112, "13op.c", 662))->c_value;
        ((struct CVALUE*)come_null_check(come_value_112, "13op.c", 662))->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s%%%s",((struct CVALUE*)come_null_check(left_value_106, "13op.c", 662))->c_value,((struct CVALUE*)come_null_check(right_value_108, "13op.c", 662))->c_value))));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj77=((struct CVALUE*)come_null_check(come_value_112, "13op.c", 663))->type;
        ((struct CVALUE*)come_null_check(come_value_112, "13op.c", 663))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(((struct CVALUE*)come_null_check(left_value_106, "13op.c", 663))->type))));
        if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_112, "13op.c", 664))->type, "13op.c", 664))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_112, "13op.c", 665))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_112, "13op.c", 667))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 669))->stack, "13op.c", 669)),(struct CVALUE*)come_increment_ref_count(come_value_112));
        __freed_obj__ = 0;
        if(come_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result100__ = (_Bool)1;
    if(left_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(left_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = ((struct sModNode*)come_null_check(self, "13op.c", 677))->sline;
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value157;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value157=__builtin_string(((struct sModNode*)come_null_check(self, "13op.c", 682))->sname)));
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value158;
char* __dec_obj78;
void* right_value159;
struct sNode* __dec_obj79;
void* right_value160;
struct sNode* __dec_obj80;
struct sLShiftNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 698))->sline=((struct sInfo*)come_null_check(info, "13op.c", 698))->sline;
    __freed_obj__ = 0;
    __dec_obj78=((struct sLShiftNode*)come_null_check(self, "13op.c", 699))->sname;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 699))->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 699))->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 700))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj79=((struct sLShiftNode*)come_null_check(self, "13op.c", 702))->mLeft;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 702))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(left))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj80=((struct sLShiftNode*)come_null_check(self, "13op.c", 703))->mRight;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 703))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(right))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0); }
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

char* sLShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value161;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value161=__builtin_string("sLShiftNode")));
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_113;
_Bool _if_conditional187;
_Bool __result106__;
void* right_value162;
struct CVALUE* left_value_114;
struct sNode* right_node_115;
_Bool _if_conditional188;
_Bool __result107__;
void* right_value163;
struct CVALUE* right_value_116;
struct sType* type_117;
char* fun_name_118;
_Bool calling_fun_119;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value164;
struct CVALUE* come_value_120;
void* right_value165;
char* __dec_obj81;
void* right_value166;
struct sType* __dec_obj82;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_113, 0, sizeof(struct sNode*));
memset(&right_value162, 0, sizeof(void*));
memset(&left_value_114, 0, sizeof(struct CVALUE*));
memset(&right_node_115, 0, sizeof(struct sNode*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value_116, 0, sizeof(struct CVALUE*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&fun_name_118, 0, sizeof(char*));
memset(&calling_fun_119, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
memset(&come_value_120, 0, sizeof(struct CVALUE*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    left_node_113=((struct sLShiftNode*)come_null_check(self, "13op.c", 721))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional187=!((struct sNode*)come_null_check(left_node_113, "13op.c", 727))->compile(((struct sNode*)come_null_check(left_node_113, "13op.c", 727))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional187) {
        __result106__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_115=((struct sLShiftNode*)come_null_check(self, "13op.c", 730))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional188=!((struct sNode*)come_null_check(right_node_115, "13op.c", 736))->compile(((struct sNode*)come_null_check(right_node_115, "13op.c", 736))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional188) {
        __result107__ = (_Bool)0;
        if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=get_value_from_stack(-1,info))));
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_117=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_114, "13op.c", 739))->type);
    __freed_obj__ = 0;
    fun_name_118="operator_lshift";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional189=((struct sLShiftNode*)come_null_check(self, "13op.c", 750))->mQuote,    __freed_obj__ = 0, 
    _if_conditional189) {
        calling_fun_119=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_119=operator_overload_fun(type_117,fun_name_118,left_value_114,right_value_116,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional190=!calling_fun_119,    __freed_obj__ = 0, 
    _if_conditional190) {
        come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 751))));
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj81=((struct CVALUE*)come_null_check(come_value_120, "13op.c", 753))->c_value;
        ((struct CVALUE*)come_null_check(come_value_120, "13op.c", 753))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("%s<<%s",((struct CVALUE*)come_null_check(left_value_114, "13op.c", 753))->c_value,((struct CVALUE*)come_null_check(right_value_116, "13op.c", 753))->c_value))));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj82=((struct CVALUE*)come_null_check(come_value_120, "13op.c", 754))->type;
        ((struct CVALUE*)come_null_check(come_value_120, "13op.c", 754))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(((struct CVALUE*)come_null_check(left_value_114, "13op.c", 754))->type))));
        if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_120, "13op.c", 755))->type, "13op.c", 755))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_120, "13op.c", 756))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_120, "13op.c", 758))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 760))->stack, "13op.c", 760)),(struct CVALUE*)come_increment_ref_count(come_value_120));
        __freed_obj__ = 0;
        if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result108__ = (_Bool)1;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = ((struct sLShiftNode*)come_null_check(self, "13op.c", 768))->sline;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value167;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value167=__builtin_string(((struct sLShiftNode*)come_null_check(self, "13op.c", 773))->sname)));
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value168;
char* __dec_obj83;
void* right_value169;
struct sNode* __dec_obj84;
void* right_value170;
struct sNode* __dec_obj85;
struct sRShiftNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 789))->sline=((struct sInfo*)come_null_check(info, "13op.c", 789))->sline;
    __freed_obj__ = 0;
    __dec_obj83=((struct sRShiftNode*)come_null_check(self, "13op.c", 790))->sname;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 790))->sname=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 790))->sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 792))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj84=((struct sRShiftNode*)come_null_check(self, "13op.c", 793))->mLeft;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 793))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj85=((struct sRShiftNode*)come_null_check(self, "13op.c", 794))->mRight;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 794))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=sNode_clone(right))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result111__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftNode_terminated(){
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

char* sRShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value171;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
    __result113__ = __result_obj__ = ((char*)(right_value171=__builtin_string("sRShiftNode")));
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_121;
_Bool _if_conditional194;
_Bool __result114__;
void* right_value172;
struct CVALUE* left_value_122;
struct sNode* right_node_123;
_Bool _if_conditional195;
_Bool __result115__;
void* right_value173;
struct CVALUE* right_value_124;
struct sType* type_125;
char* fun_name_126;
_Bool calling_fun_127;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value174;
struct CVALUE* come_value_128;
void* right_value175;
char* __dec_obj86;
void* right_value176;
struct sType* __dec_obj87;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_121, 0, sizeof(struct sNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&left_value_122, 0, sizeof(struct CVALUE*));
memset(&right_node_123, 0, sizeof(struct sNode*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value_124, 0, sizeof(struct CVALUE*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&fun_name_126, 0, sizeof(char*));
memset(&calling_fun_127, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_128, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
    left_node_121=((struct sRShiftNode*)come_null_check(self, "13op.c", 812))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional194=!((struct sNode*)come_null_check(left_node_121, "13op.c", 818))->compile(((struct sNode*)come_null_check(left_node_121, "13op.c", 818))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional194) {
        __result114__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))));
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_123=((struct sRShiftNode*)come_null_check(self, "13op.c", 821))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional195=!((struct sNode*)come_null_check(right_node_123, "13op.c", 827))->compile(((struct sNode*)come_null_check(right_node_123, "13op.c", 827))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional195) {
        __result115__ = (_Bool)0;
        if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=get_value_from_stack(-1,info))));
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_125=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_122, "13op.c", 830))->type);
    __freed_obj__ = 0;
    fun_name_126="operator_rshift";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional196=((struct sRShiftNode*)come_null_check(self, "13op.c", 841))->mQuote,    __freed_obj__ = 0, 
    _if_conditional196) {
        calling_fun_127=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_127=operator_overload_fun(type_125,fun_name_126,left_value_122,right_value_124,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional197=!calling_fun_127,    __freed_obj__ = 0, 
    _if_conditional197) {
        come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 842))));
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj86=((struct CVALUE*)come_null_check(come_value_128, "13op.c", 844))->c_value;
        ((struct CVALUE*)come_null_check(come_value_128, "13op.c", 844))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s>>%s",((struct CVALUE*)come_null_check(left_value_122, "13op.c", 844))->c_value,((struct CVALUE*)come_null_check(right_value_124, "13op.c", 844))->c_value))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj87=((struct CVALUE*)come_null_check(come_value_128, "13op.c", 845))->type;
        ((struct CVALUE*)come_null_check(come_value_128, "13op.c", 845))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(((struct CVALUE*)come_null_check(left_value_122, "13op.c", 845))->type))));
        if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_128, "13op.c", 846))->type, "13op.c", 846))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_128, "13op.c", 847))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_128, "13op.c", 849))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 851))->stack, "13op.c", 851)),(struct CVALUE*)come_increment_ref_count(come_value_128));
        __freed_obj__ = 0;
        if(come_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result116__ = (_Bool)1;
    if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
    if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = ((struct sRShiftNode*)come_null_check(self, "13op.c", 859))->sline;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value177;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value177=__builtin_string(((struct sLShiftNode*)come_null_check(self, "13op.c", 864))->sname)));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value178;
char* __dec_obj88;
void* right_value179;
struct sNode* __dec_obj89;
void* right_value180;
struct sNode* __dec_obj90;
struct sGtEqNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 880))->sline=((struct sInfo*)come_null_check(info, "13op.c", 880))->sline;
    __freed_obj__ = 0;
    __dec_obj88=((struct sGtEqNode*)come_null_check(self, "13op.c", 881))->sname;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 881))->sname=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 881))->sname))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 883))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj89=((struct sGtEqNode*)come_null_check(self, "13op.c", 884))->mLeft;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 884))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(left))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj90=((struct sGtEqNode*)come_null_check(self, "13op.c", 885))->mRight;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 885))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(right))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result119__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

char* sGtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value181;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result121__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sGtEqNode")));
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_129;
_Bool _if_conditional201;
_Bool __result122__;
void* right_value182;
struct CVALUE* left_value_130;
struct sNode* right_node_131;
_Bool _if_conditional202;
_Bool __result123__;
void* right_value183;
struct CVALUE* right_value_132;
struct sType* type_133;
char* fun_name_134;
_Bool calling_fun_135;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value184;
struct CVALUE* come_value_136;
void* right_value185;
char* __dec_obj91;
void* right_value186;
struct sType* __dec_obj92;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_129, 0, sizeof(struct sNode*));
memset(&right_value182, 0, sizeof(void*));
memset(&left_value_130, 0, sizeof(struct CVALUE*));
memset(&right_node_131, 0, sizeof(struct sNode*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value_132, 0, sizeof(struct CVALUE*));
memset(&type_133, 0, sizeof(struct sType*));
memset(&fun_name_134, 0, sizeof(char*));
memset(&calling_fun_135, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&come_value_136, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
    left_node_129=((struct sGtEqNode*)come_null_check(self, "13op.c", 903))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional201=!((struct sNode*)come_null_check(left_node_129, "13op.c", 909))->compile(((struct sNode*)come_null_check(left_node_129, "13op.c", 909))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional201) {
        __result122__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_131=((struct sGtEqNode*)come_null_check(self, "13op.c", 912))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional202=!((struct sNode*)come_null_check(right_node_131, "13op.c", 918))->compile(((struct sNode*)come_null_check(right_node_131, "13op.c", 918))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional202) {
        __result123__ = (_Bool)0;
        if(left_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=get_value_from_stack(-1,info))));
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_133=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_130, "13op.c", 921))->type);
    __freed_obj__ = 0;
    fun_name_134="operator_gteq";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional203=((struct sGtEqNode*)come_null_check(self, "13op.c", 932))->mQuote,    __freed_obj__ = 0, 
    _if_conditional203) {
        calling_fun_135=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_135=operator_overload_fun(type_133,fun_name_134,left_value_130,right_value_132,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional204=!calling_fun_135,    __freed_obj__ = 0, 
    _if_conditional204) {
        come_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 933))));
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj91=((struct CVALUE*)come_null_check(come_value_136, "13op.c", 935))->c_value;
        ((struct CVALUE*)come_null_check(come_value_136, "13op.c", 935))->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s>=%s",((struct CVALUE*)come_null_check(left_value_130, "13op.c", 935))->c_value,((struct CVALUE*)come_null_check(right_value_132, "13op.c", 935))->c_value))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj92=((struct CVALUE*)come_null_check(come_value_136, "13op.c", 936))->type;
        ((struct CVALUE*)come_null_check(come_value_136, "13op.c", 936))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(((struct CVALUE*)come_null_check(left_value_130, "13op.c", 936))->type))));
        if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "13op.c", 937))->type, "13op.c", 937))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_136, "13op.c", 938))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_136, "13op.c", 940))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 942))->stack, "13op.c", 942)),(struct CVALUE*)come_increment_ref_count(come_value_136));
        __freed_obj__ = 0;
        if(come_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result124__ = (_Bool)1;
    if(left_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
    if(left_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_133, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = ((struct sGtEqNode*)come_null_check(self, "13op.c", 950))->sline;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value187;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value187, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value187=__builtin_string(((struct sGtEqNode*)come_null_check(self, "13op.c", 955))->sname)));
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value188;
char* __dec_obj93;
void* right_value189;
struct sNode* __dec_obj94;
void* right_value190;
struct sNode* __dec_obj95;
struct sLtEqNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 971))->sline=((struct sInfo*)come_null_check(info, "13op.c", 971))->sline;
    __freed_obj__ = 0;
    __dec_obj93=((struct sLtEqNode*)come_null_check(self, "13op.c", 972))->sname;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 972))->sname=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 972))->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 974))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj94=((struct sLtEqNode*)come_null_check(self, "13op.c", 975))->mLeft;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 975))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj95=((struct sLtEqNode*)come_null_check(self, "13op.c", 976))->mRight;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 976))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(right))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result127__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

char* sLtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value191;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(right_value191=__builtin_string("sLtEqNode")));
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_137;
_Bool _if_conditional208;
_Bool __result130__;
void* right_value192;
struct CVALUE* left_value_138;
struct sNode* right_node_139;
_Bool _if_conditional209;
_Bool __result131__;
void* right_value193;
struct CVALUE* right_value_140;
struct sType* type_141;
char* fun_name_142;
_Bool calling_fun_143;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value194;
struct CVALUE* come_value_144;
void* right_value195;
char* __dec_obj96;
void* right_value196;
struct sType* __dec_obj97;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_137, 0, sizeof(struct sNode*));
memset(&right_value192, 0, sizeof(void*));
memset(&left_value_138, 0, sizeof(struct CVALUE*));
memset(&right_node_139, 0, sizeof(struct sNode*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value_140, 0, sizeof(struct CVALUE*));
memset(&type_141, 0, sizeof(struct sType*));
memset(&fun_name_142, 0, sizeof(char*));
memset(&calling_fun_143, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&come_value_144, 0, sizeof(struct CVALUE*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    left_node_137=((struct sLtEqNode*)come_null_check(self, "13op.c", 994))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional208=!((struct sNode*)come_null_check(left_node_137, "13op.c", 1000))->compile(((struct sNode*)come_null_check(left_node_137, "13op.c", 1000))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional208) {
        __result130__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_139=((struct sLtEqNode*)come_null_check(self, "13op.c", 1003))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional209=!((struct sNode*)come_null_check(right_node_139, "13op.c", 1009))->compile(((struct sNode*)come_null_check(right_node_139, "13op.c", 1009))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional209) {
        __result131__ = (_Bool)0;
        if(left_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result131__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=get_value_from_stack(-1,info))));
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_141=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_138, "13op.c", 1012))->type);
    __freed_obj__ = 0;
    fun_name_142="operator_lteq";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional210=((struct sLtEqNode*)come_null_check(self, "13op.c", 1023))->mQuote,    __freed_obj__ = 0, 
    _if_conditional210) {
        calling_fun_143=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_143=operator_overload_fun(type_141,fun_name_142,left_value_138,right_value_140,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional211=!calling_fun_143,    __freed_obj__ = 0, 
    _if_conditional211) {
        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1024))));
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1026))->c_value;
        ((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1026))->c_value=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("%s<=%s",((struct CVALUE*)come_null_check(left_value_138, "13op.c", 1026))->c_value,((struct CVALUE*)come_null_check(right_value_140, "13op.c", 1026))->c_value))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj97=((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1027))->type;
        ((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1027))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(((struct CVALUE*)come_null_check(left_value_138, "13op.c", 1027))->type))));
        if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1028))->type, "13op.c", 1028))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1029))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_144, "13op.c", 1031))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1033))->stack, "13op.c", 1033)),(struct CVALUE*)come_increment_ref_count(come_value_144));
        __freed_obj__ = 0;
        if(come_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result132__ = (_Bool)1;
    if(left_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
    if(left_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_141, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = ((struct sLtEqNode*)come_null_check(self, "13op.c", 1041))->sline;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value197;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value197=__builtin_string(((struct sLtEqNode*)come_null_check(self, "13op.c", 1046))->sname)));
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value198;
char* __dec_obj98;
void* right_value199;
struct sNode* __dec_obj99;
void* right_value200;
struct sNode* __dec_obj100;
struct sLtNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
    ((struct sLtNode*)come_null_check(self, "13op.c", 1062))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1062))->sline;
    __freed_obj__ = 0;
    __dec_obj98=((struct sLtNode*)come_null_check(self, "13op.c", 1063))->sname;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1063))->sname=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1063))->sname))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1065))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj99=((struct sLtNode*)come_null_check(self, "13op.c", 1066))->mLeft;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1066))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(left))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj100=((struct sLtNode*)come_null_check(self, "13op.c", 1067))->mRight;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1067))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(right))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0); }
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result135__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

char* sLtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value201;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
    __result137__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sLtNode")));
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_145;
_Bool _if_conditional215;
_Bool __result138__;
void* right_value202;
struct CVALUE* left_value_146;
struct sNode* right_node_147;
_Bool _if_conditional216;
_Bool __result139__;
void* right_value203;
struct CVALUE* right_value_148;
struct sType* type_149;
char* fun_name_150;
_Bool calling_fun_151;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value204;
struct CVALUE* come_value_152;
void* right_value205;
char* __dec_obj101;
void* right_value206;
struct sType* __dec_obj102;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_145, 0, sizeof(struct sNode*));
memset(&right_value202, 0, sizeof(void*));
memset(&left_value_146, 0, sizeof(struct CVALUE*));
memset(&right_node_147, 0, sizeof(struct sNode*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value_148, 0, sizeof(struct CVALUE*));
memset(&type_149, 0, sizeof(struct sType*));
memset(&fun_name_150, 0, sizeof(char*));
memset(&calling_fun_151, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&come_value_152, 0, sizeof(struct CVALUE*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    left_node_145=((struct sLtNode*)come_null_check(self, "13op.c", 1085))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional215=!((struct sNode*)come_null_check(left_node_145, "13op.c", 1091))->compile(((struct sNode*)come_null_check(left_node_145, "13op.c", 1091))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional215) {
        __result138__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result138__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))));
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_147=((struct sLtNode*)come_null_check(self, "13op.c", 1094))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional216=!((struct sNode*)come_null_check(right_node_147, "13op.c", 1100))->compile(((struct sNode*)come_null_check(right_node_147, "13op.c", 1100))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional216) {
        __result139__ = (_Bool)0;
        if(left_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result139__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_149=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_146, "13op.c", 1103))->type);
    __freed_obj__ = 0;
    fun_name_150="operator_lt";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional217=((struct sLtNode*)come_null_check(self, "13op.c", 1114))->mQuote,    __freed_obj__ = 0, 
    _if_conditional217) {
        calling_fun_151=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_151=operator_overload_fun(type_149,fun_name_150,left_value_146,right_value_148,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional218=!calling_fun_151,    __freed_obj__ = 0, 
    _if_conditional218) {
        come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1115))));
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj101=((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1117))->c_value;
        ((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1117))->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s<%s",((struct CVALUE*)come_null_check(left_value_146, "13op.c", 1117))->c_value,((struct CVALUE*)come_null_check(right_value_148, "13op.c", 1117))->c_value))));
        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj102=((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1118))->type;
        ((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1118))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(((struct CVALUE*)come_null_check(left_value_146, "13op.c", 1118))->type))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1119))->type, "13op.c", 1119))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1120))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_152, "13op.c", 1122))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1124))->stack, "13op.c", 1124)),(struct CVALUE*)come_increment_ref_count(come_value_152));
        __freed_obj__ = 0;
        if(come_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result140__ = (_Bool)1;
    if(left_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_149 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
    if(left_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_149 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = ((struct sLtNode*)come_null_check(self, "13op.c", 1132))->sline;
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value207;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result142__ = __result_obj__ = ((char*)(right_value207=__builtin_string(((struct sLtNode*)come_null_check(self, "13op.c", 1137))->sname)));
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value208;
char* __dec_obj103;
void* right_value209;
struct sNode* __dec_obj104;
void* right_value210;
struct sNode* __dec_obj105;
struct sGtNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
    ((struct sGtNode*)come_null_check(self, "13op.c", 1153))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1153))->sline;
    __freed_obj__ = 0;
    __dec_obj103=((struct sGtNode*)come_null_check(self, "13op.c", 1154))->sname;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1154))->sname=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1154))->sname))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1156))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj104=((struct sGtNode*)come_null_check(self, "13op.c", 1157))->mLeft;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1157))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(left))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj105=((struct sGtNode*)come_null_check(self, "13op.c", 1158))->mRight;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1158))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNode_clone(right))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result143__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

char* sGtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value211;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value211, 0, sizeof(void*));
    __result145__ = __result_obj__ = ((char*)(right_value211=__builtin_string("sGtNode")));
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_153;
_Bool _if_conditional222;
_Bool __result146__;
void* right_value212;
struct CVALUE* left_value_154;
struct sNode* right_node_155;
_Bool _if_conditional223;
_Bool __result147__;
void* right_value213;
struct CVALUE* right_value_156;
struct sType* type_157;
char* fun_name_158;
_Bool calling_fun_159;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value214;
struct CVALUE* come_value_160;
void* right_value215;
char* __dec_obj106;
void* right_value216;
struct sType* __dec_obj107;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_153, 0, sizeof(struct sNode*));
memset(&right_value212, 0, sizeof(void*));
memset(&left_value_154, 0, sizeof(struct CVALUE*));
memset(&right_node_155, 0, sizeof(struct sNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value_156, 0, sizeof(struct CVALUE*));
memset(&type_157, 0, sizeof(struct sType*));
memset(&fun_name_158, 0, sizeof(char*));
memset(&calling_fun_159, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&come_value_160, 0, sizeof(struct CVALUE*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
    left_node_153=((struct sGtNode*)come_null_check(self, "13op.c", 1176))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional222=!((struct sNode*)come_null_check(left_node_153, "13op.c", 1182))->compile(((struct sNode*)come_null_check(left_node_153, "13op.c", 1182))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional222) {
        __result146__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result146__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_155=((struct sGtNode*)come_null_check(self, "13op.c", 1185))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional223=!((struct sNode*)come_null_check(right_node_155, "13op.c", 1191))->compile(((struct sNode*)come_null_check(right_node_155, "13op.c", 1191))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional223) {
        __result147__ = (_Bool)0;
        if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result147__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_157=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_154, "13op.c", 1194))->type);
    __freed_obj__ = 0;
    fun_name_158="operator_gt";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional224=((struct sGtNode*)come_null_check(self, "13op.c", 1205))->mQuote,    __freed_obj__ = 0, 
    _if_conditional224) {
        calling_fun_159=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_159=operator_overload_fun(type_157,fun_name_158,left_value_154,right_value_156,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional225=!calling_fun_159,    __freed_obj__ = 0, 
    _if_conditional225) {
        come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1206))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj106=((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1208))->c_value;
        ((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1208))->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s>%s",((struct CVALUE*)come_null_check(left_value_154, "13op.c", 1208))->c_value,((struct CVALUE*)come_null_check(right_value_156, "13op.c", 1208))->c_value))));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj107=((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1209))->type;
        ((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1209))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(((struct CVALUE*)come_null_check(left_value_154, "13op.c", 1209))->type))));
        if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1210))->type, "13op.c", 1210))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1211))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_160, "13op.c", 1213))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1215))->stack, "13op.c", 1215)),(struct CVALUE*)come_increment_ref_count(come_value_160));
        __freed_obj__ = 0;
        if(come_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result148__ = (_Bool)1;
    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_157 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_157 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_157, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = ((struct sGtNode*)come_null_check(self, "13op.c", 1223))->sline;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value217;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(right_value217=__builtin_string(((struct sGtNode*)come_null_check(self, "13op.c", 1228))->sname)));
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value218;
char* __dec_obj108;
void* right_value219;
struct sNode* __dec_obj109;
void* right_value220;
struct sNode* __dec_obj110;
struct sEqNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
    ((struct sEqNode*)come_null_check(self, "13op.c", 1244))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1244))->sline;
    __freed_obj__ = 0;
    __dec_obj108=((struct sEqNode*)come_null_check(self, "13op.c", 1245))->sname;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1245))->sname=(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1245))->sname))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1247))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj109=((struct sEqNode*)come_null_check(self, "13op.c", 1248))->mLeft;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1248))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(left))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj110=((struct sEqNode*)come_null_check(self, "13op.c", 1249))->mRight;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1249))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=sNode_clone(right))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result151__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result152__ = ((struct sEqNode*)come_null_check(self, "13op.c", 1256))->sline;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value221;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value221, 0, sizeof(void*));
    __result153__ = __result_obj__ = ((char*)(right_value221=__builtin_string(((struct sEqNode*)come_null_check(self, "13op.c", 1261))->sname)));
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

_Bool sEqNode_terminated(){
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

char* sEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value222;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
    __result155__ = __result_obj__ = ((char*)(right_value222=__builtin_string("sEqNode")));
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_161;
_Bool _if_conditional229;
_Bool __result156__;
void* right_value223;
struct CVALUE* left_value_162;
struct sNode* right_node_163;
_Bool _if_conditional230;
_Bool __result157__;
void* right_value224;
struct CVALUE* right_value_164;
void* right_value225;
struct CVALUE* come_value_165;
void* right_value226;
char* __dec_obj111;
void* right_value227;
struct sType* __dec_obj112;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_161, 0, sizeof(struct sNode*));
memset(&right_value223, 0, sizeof(void*));
memset(&left_value_162, 0, sizeof(struct CVALUE*));
memset(&right_node_163, 0, sizeof(struct sNode*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value_164, 0, sizeof(struct CVALUE*));
memset(&right_value225, 0, sizeof(void*));
memset(&come_value_165, 0, sizeof(struct CVALUE*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    left_node_161=((struct sEqNode*)come_null_check(self, "13op.c", 1277))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional229=!((struct sNode*)come_null_check(left_node_161, "13op.c", 1283))->compile(((struct sNode*)come_null_check(left_node_161, "13op.c", 1283))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional229) {
        __result156__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result156__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_163=((struct sEqNode*)come_null_check(self, "13op.c", 1286))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional230=!((struct sNode*)come_null_check(right_node_163, "13op.c", 1292))->compile(((struct sNode*)come_null_check(right_node_163, "13op.c", 1292))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional230) {
        __result157__ = (_Bool)0;
        if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result157__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1295))));
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj111=((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1297))->c_value;
    ((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1297))->c_value=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("%s==%s",((struct CVALUE*)come_null_check(left_value_162, "13op.c", 1297))->c_value,((struct CVALUE*)come_null_check(right_value_164, "13op.c", 1297))->c_value))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj112=((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1298))->type;
    ((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1298))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(((struct CVALUE*)come_null_check(left_value_162, "13op.c", 1298))->type))));
    if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1299))->type, "13op.c", 1299))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1300))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_165, "13op.c", 1302))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1304))->stack, "13op.c", 1304)),(struct CVALUE*)come_increment_ref_count(come_value_165));
    __freed_obj__ = 0;
    __result158__ = (_Bool)1;
    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value228;
char* __dec_obj113;
void* right_value229;
struct sNode* __dec_obj114;
void* right_value230;
struct sNode* __dec_obj115;
struct sNotEqNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1322))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1322))->sline;
    __freed_obj__ = 0;
    __dec_obj113=((struct sNotEqNode*)come_null_check(self, "13op.c", 1323))->sname;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1323))->sname=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1323))->sname))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1325))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj114=((struct sNotEqNode*)come_null_check(self, "13op.c", 1326))->mLeft;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1326))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj115=((struct sNotEqNode*)come_null_check(self, "13op.c", 1327))->mRight;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1327))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0); }
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result159__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

char* sNotEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value231;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value231, 0, sizeof(void*));
    __result161__ = __result_obj__ = ((char*)(right_value231=__builtin_string("sNotEqNode")));
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_166;
_Bool _if_conditional234;
_Bool __result162__;
void* right_value232;
struct CVALUE* left_value_167;
struct sNode* right_node_168;
_Bool _if_conditional235;
_Bool __result163__;
void* right_value233;
struct CVALUE* right_value_169;
void* right_value234;
struct CVALUE* come_value_170;
void* right_value235;
char* __dec_obj116;
void* right_value236;
struct sType* __dec_obj117;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_166, 0, sizeof(struct sNode*));
memset(&right_value232, 0, sizeof(void*));
memset(&left_value_167, 0, sizeof(struct CVALUE*));
memset(&right_node_168, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value_169, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&come_value_170, 0, sizeof(struct CVALUE*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
    left_node_166=((struct sNotEqNode*)come_null_check(self, "13op.c", 1345))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional234=!((struct sNode*)come_null_check(left_node_166, "13op.c", 1351))->compile(((struct sNode*)come_null_check(left_node_166, "13op.c", 1351))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional234) {
        __result162__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result162__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=get_value_from_stack(-1,info))));
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_168=((struct sNotEqNode*)come_null_check(self, "13op.c", 1354))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional235=!((struct sNode*)come_null_check(right_node_168, "13op.c", 1360))->compile(((struct sNode*)come_null_check(right_node_168, "13op.c", 1360))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional235) {
        __result163__ = (_Bool)0;
        if(left_value_167 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result163__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1363))));
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj116=((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1365))->c_value;
    ((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1365))->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s!=%s",((struct CVALUE*)come_null_check(left_value_167, "13op.c", 1365))->c_value,((struct CVALUE*)come_null_check(right_value_169, "13op.c", 1365))->c_value))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj117=((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1366))->type;
    ((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1366))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(((struct CVALUE*)come_null_check(left_value_167, "13op.c", 1366))->type))));
    if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1367))->type, "13op.c", 1367))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1368))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_170, "13op.c", 1370))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1372))->stack, "13op.c", 1372)),(struct CVALUE*)come_increment_ref_count(come_value_170));
    __freed_obj__ = 0;
    __result164__ = (_Bool)1;
    if(left_value_167 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
    if(left_value_167 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = ((struct sNotEqNode*)come_null_check(self, "13op.c", 1379))->sline;
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value237;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value237, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(right_value237=__builtin_string(((struct sNotEqNode*)come_null_check(self, "13op.c", 1384))->sname)));
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value238;
char* __dec_obj118;
void* right_value239;
struct sNode* __dec_obj119;
void* right_value240;
struct sNode* __dec_obj120;
struct sEq2Node* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1400))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1400))->sline;
    __freed_obj__ = 0;
    __dec_obj118=((struct sEq2Node*)come_null_check(self, "13op.c", 1401))->sname;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1401))->sname=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1401))->sname))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1403))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj119=((struct sEq2Node*)come_null_check(self, "13op.c", 1404))->mLeft;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1404))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=sNode_clone(left))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj120=((struct sEq2Node*)come_null_check(self, "13op.c", 1405))->mRight;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1405))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(right))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0); }
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result168__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
}

char* sEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value241;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
    __result169__ = __result_obj__ = ((char*)(right_value241=__builtin_string("sEq2Node")));
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_171;
_Bool _if_conditional239;
_Bool __result170__;
void* right_value242;
struct CVALUE* left_value_172;
struct sNode* right_node_173;
_Bool _if_conditional240;
_Bool __result171__;
void* right_value243;
struct CVALUE* right_value_174;
struct sType* type_175;
char* fun_name_176;
_Bool calling_fun_177;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value244;
struct CVALUE* come_value_178;
void* right_value245;
char* __dec_obj121;
void* right_value246;
struct sType* __dec_obj122;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_171, 0, sizeof(struct sNode*));
memset(&right_value242, 0, sizeof(void*));
memset(&left_value_172, 0, sizeof(struct CVALUE*));
memset(&right_node_173, 0, sizeof(struct sNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value_174, 0, sizeof(struct CVALUE*));
memset(&type_175, 0, sizeof(struct sType*));
memset(&fun_name_176, 0, sizeof(char*));
memset(&calling_fun_177, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&come_value_178, 0, sizeof(struct CVALUE*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
    left_node_171=((struct sEqNode*)come_null_check(self, "13op.c", 1424))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional239=!((struct sNode*)come_null_check(left_node_171, "13op.c", 1430))->compile(((struct sNode*)come_null_check(left_node_171, "13op.c", 1430))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional239) {
        __result170__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result170__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_173=((struct sEqNode*)come_null_check(self, "13op.c", 1433))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional240=!((struct sNode*)come_null_check(right_node_173, "13op.c", 1439))->compile(((struct sNode*)come_null_check(right_node_173, "13op.c", 1439))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional240) {
        __result171__ = (_Bool)0;
        if(left_value_172 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))));
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_175=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_172, "13op.c", 1442))->type);
    __freed_obj__ = 0;
    fun_name_176="operator_equals";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional241=((struct sEqNode*)come_null_check(self, "13op.c", 1453))->mQuote,    __freed_obj__ = 0, 
    _if_conditional241) {
        calling_fun_177=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_177=operator_overload_fun(type_175,fun_name_176,left_value_172,right_value_174,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional242=!calling_fun_177,    __freed_obj__ = 0, 
    _if_conditional242) {
        come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1454))));
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj121=((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1456))->c_value;
        ((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1456))->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s==%s",((struct CVALUE*)come_null_check(left_value_172, "13op.c", 1456))->c_value,((struct CVALUE*)come_null_check(right_value_174, "13op.c", 1456))->c_value))));
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj122=((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1457))->type;
        ((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1457))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(((struct CVALUE*)come_null_check(left_value_172, "13op.c", 1457))->type))));
        if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1458))->type, "13op.c", 1458))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1459))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_178, "13op.c", 1461))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1463))->stack, "13op.c", 1463)),(struct CVALUE*)come_increment_ref_count(come_value_178));
        __freed_obj__ = 0;
        if(come_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result172__ = (_Bool)1;
    if(left_value_172 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_175 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
    if(left_value_172 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_175 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result173__ = ((struct sEq2Node*)come_null_check(self, "13op.c", 1471))->sline;
    __freed_obj__ = 0;
    return __result173__;
    __freed_obj__ = 0;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value247;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
    __result174__ = __result_obj__ = ((char*)(right_value247=__builtin_string(((struct sEq2Node*)come_null_check(self, "13op.c", 1476))->sname)));
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value248;
char* __dec_obj123;
void* right_value249;
struct sNode* __dec_obj124;
void* right_value250;
struct sNode* __dec_obj125;
struct sNotEq2Node* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1492))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1492))->sline;
    __freed_obj__ = 0;
    __dec_obj123=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1493))->sname;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1493))->sname=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1493))->sname))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1495))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj124=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1496))->mLeft;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1496))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(left))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj125=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1497))->mRight;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1497))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=sNode_clone(right))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0); }
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result175__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result175__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result176__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result176__;
    __freed_obj__ = 0;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value251;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
    __result177__ = __result_obj__ = ((char*)(right_value251=__builtin_string("sNotEq2Node")));
    __freed_obj__ = 0;
    return __result177__;
    __freed_obj__ = 0;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_179;
_Bool _if_conditional246;
_Bool __result178__;
void* right_value252;
struct CVALUE* left_value_180;
struct sNode* right_node_181;
_Bool _if_conditional247;
_Bool __result179__;
void* right_value253;
struct CVALUE* right_value_182;
struct sType* type_183;
char* fun_name_184;
_Bool calling_fun_185;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value254;
struct CVALUE* come_value_186;
void* right_value255;
char* __dec_obj126;
void* right_value256;
struct sType* __dec_obj127;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_179, 0, sizeof(struct sNode*));
memset(&right_value252, 0, sizeof(void*));
memset(&left_value_180, 0, sizeof(struct CVALUE*));
memset(&right_node_181, 0, sizeof(struct sNode*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value_182, 0, sizeof(struct CVALUE*));
memset(&type_183, 0, sizeof(struct sType*));
memset(&fun_name_184, 0, sizeof(char*));
memset(&calling_fun_185, 0, sizeof(_Bool));
memset(&right_value254, 0, sizeof(void*));
memset(&come_value_186, 0, sizeof(struct CVALUE*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    left_node_179=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1515))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional246=!((struct sNode*)come_null_check(left_node_179, "13op.c", 1521))->compile(((struct sNode*)come_null_check(left_node_179, "13op.c", 1521))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional246) {
        __result178__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result178__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_181=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1524))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional247=!((struct sNode*)come_null_check(right_node_181, "13op.c", 1530))->compile(((struct sNode*)come_null_check(right_node_181, "13op.c", 1530))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional247) {
        __result179__ = (_Bool)0;
        if(left_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result179__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=get_value_from_stack(-1,info))));
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_183=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_180, "13op.c", 1533))->type);
    __freed_obj__ = 0;
    fun_name_184="operator_not_equals";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional248=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1544))->mQuote,    __freed_obj__ = 0, 
    _if_conditional248) {
        calling_fun_185=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_185=operator_overload_fun(type_183,fun_name_184,left_value_180,right_value_182,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional249=!calling_fun_185,    __freed_obj__ = 0, 
    _if_conditional249) {
        come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1545))));
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj126=((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1547))->c_value;
        ((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1547))->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s!=%s",((struct CVALUE*)come_null_check(left_value_180, "13op.c", 1547))->c_value,((struct CVALUE*)come_null_check(right_value_182, "13op.c", 1547))->c_value))));
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj127=((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1548))->type;
        ((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1548))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(((struct CVALUE*)come_null_check(left_value_180, "13op.c", 1548))->type))));
        if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1549))->type, "13op.c", 1549))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1550))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_186, "13op.c", 1552))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1554))->stack, "13op.c", 1554)),(struct CVALUE*)come_increment_ref_count(come_value_186));
        __freed_obj__ = 0;
        if(come_value_186 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_186, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result180__ = (_Bool)1;
    if(left_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result180__;
    __freed_obj__ = 0;
    if(left_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result181__ = ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1562))->sline;
    __freed_obj__ = 0;
    return __result181__;
    __freed_obj__ = 0;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value257;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
    __result182__ = __result_obj__ = ((char*)(right_value257=__builtin_string(((struct sNotEq2Node*)come_null_check(self, "13op.c", 1567))->sname)));
    __freed_obj__ = 0;
    return __result182__;
    __freed_obj__ = 0;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value258;
char* __dec_obj128;
void* right_value259;
struct sNode* __dec_obj129;
void* right_value260;
struct sNode* __dec_obj130;
struct sAndNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    ((struct sAndNode*)come_null_check(self, "13op.c", 1583))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1583))->sline;
    __freed_obj__ = 0;
    __dec_obj128=((struct sAndNode*)come_null_check(self, "13op.c", 1584))->sname;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1584))->sname=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1584))->sname))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1586))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj129=((struct sAndNode*)come_null_check(self, "13op.c", 1587))->mLeft;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1587))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=sNode_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj130=((struct sAndNode*)come_null_check(self, "13op.c", 1588))->mRight;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1588))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=sNode_clone(right))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result183__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result183__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result184__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
}

char* sAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value261;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value261, 0, sizeof(void*));
    __result185__ = __result_obj__ = ((char*)(right_value261=__builtin_string("sAndNode")));
    __freed_obj__ = 0;
    return __result185__;
    __freed_obj__ = 0;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_187;
_Bool _if_conditional253;
_Bool __result186__;
void* right_value262;
struct CVALUE* left_value_188;
struct sNode* right_node_189;
_Bool _if_conditional254;
_Bool __result187__;
void* right_value263;
struct CVALUE* right_value_190;
struct sType* type_191;
char* fun_name_192;
_Bool calling_fun_193;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value264;
struct CVALUE* come_value_194;
void* right_value265;
char* __dec_obj131;
void* right_value266;
struct sType* __dec_obj132;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_187, 0, sizeof(struct sNode*));
memset(&right_value262, 0, sizeof(void*));
memset(&left_value_188, 0, sizeof(struct CVALUE*));
memset(&right_node_189, 0, sizeof(struct sNode*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value_190, 0, sizeof(struct CVALUE*));
memset(&type_191, 0, sizeof(struct sType*));
memset(&fun_name_192, 0, sizeof(char*));
memset(&calling_fun_193, 0, sizeof(_Bool));
memset(&right_value264, 0, sizeof(void*));
memset(&come_value_194, 0, sizeof(struct CVALUE*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
    left_node_187=((struct sAndNode*)come_null_check(self, "13op.c", 1606))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional253=!((struct sNode*)come_null_check(left_node_187, "13op.c", 1612))->compile(((struct sNode*)come_null_check(left_node_187, "13op.c", 1612))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional253) {
        __result186__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result186__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_189=((struct sAndNode*)come_null_check(self, "13op.c", 1615))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional254=!((struct sNode*)come_null_check(right_node_189, "13op.c", 1621))->compile(((struct sNode*)come_null_check(right_node_189, "13op.c", 1621))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional254) {
        __result187__ = (_Bool)0;
        if(left_value_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result187__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=get_value_from_stack(-1,info))));
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_191=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_188, "13op.c", 1624))->type);
    __freed_obj__ = 0;
    fun_name_192="operator_and";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional255=((struct sAndNode*)come_null_check(self, "13op.c", 1636))->mQuote,    __freed_obj__ = 0, 
    _if_conditional255) {
        calling_fun_193=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_193=operator_overload_fun(type_191,fun_name_192,left_value_188,right_value_190,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional256=!calling_fun_193,    __freed_obj__ = 0, 
    _if_conditional256) {
        come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1637))));
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj131=((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1639))->c_value;
        ((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1639))->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("%s&%s",((struct CVALUE*)come_null_check(left_value_188, "13op.c", 1639))->c_value,((struct CVALUE*)come_null_check(right_value_190, "13op.c", 1639))->c_value))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj132=((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1640))->type;
        ((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1640))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(((struct CVALUE*)come_null_check(left_value_188, "13op.c", 1640))->type))));
        if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1641))->type, "13op.c", 1641))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1642))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_194, "13op.c", 1644))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1646))->stack, "13op.c", 1646)),(struct CVALUE*)come_increment_ref_count(come_value_194));
        __freed_obj__ = 0;
        if(come_value_194 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result188__ = (_Bool)1;
    if(left_value_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result188__;
    __freed_obj__ = 0;
    if(left_value_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result189__ = ((struct sAndNode*)come_null_check(self, "13op.c", 1654))->sline;
    __freed_obj__ = 0;
    return __result189__;
    __freed_obj__ = 0;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value267;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
    __result190__ = __result_obj__ = ((char*)(right_value267=__builtin_string(((struct sAndNode*)come_null_check(self, "13op.c", 1659))->sname)));
    __freed_obj__ = 0;
    return __result190__;
    __freed_obj__ = 0;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value268;
char* __dec_obj133;
void* right_value269;
struct sNode* __dec_obj134;
void* right_value270;
struct sNode* __dec_obj135;
struct sXOrNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1675))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1675))->sline;
    __freed_obj__ = 0;
    __dec_obj133=((struct sXOrNode*)come_null_check(self, "13op.c", 1676))->sname;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1676))->sname=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1676))->sname))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1678))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj134=((struct sXOrNode*)come_null_check(self, "13op.c", 1679))->mLeft;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1679))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(left))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj135=((struct sXOrNode*)come_null_check(self, "13op.c", 1680))->mRight;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1680))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(right))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result191__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result191__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result192__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
}

char* sXOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value271;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value271, 0, sizeof(void*));
    __result193__ = __result_obj__ = ((char*)(right_value271=__builtin_string("sXOrNode")));
    __freed_obj__ = 0;
    return __result193__;
    __freed_obj__ = 0;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_195;
_Bool _if_conditional260;
_Bool __result194__;
void* right_value272;
struct CVALUE* left_value_196;
struct sNode* right_node_197;
_Bool _if_conditional261;
_Bool __result195__;
void* right_value273;
struct CVALUE* right_value_198;
struct sType* type_199;
char* fun_name_200;
_Bool calling_fun_201;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value274;
struct CVALUE* come_value_202;
void* right_value275;
char* __dec_obj136;
void* right_value276;
struct sType* __dec_obj137;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_195, 0, sizeof(struct sNode*));
memset(&right_value272, 0, sizeof(void*));
memset(&left_value_196, 0, sizeof(struct CVALUE*));
memset(&right_node_197, 0, sizeof(struct sNode*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value_198, 0, sizeof(struct CVALUE*));
memset(&type_199, 0, sizeof(struct sType*));
memset(&fun_name_200, 0, sizeof(char*));
memset(&calling_fun_201, 0, sizeof(_Bool));
memset(&right_value274, 0, sizeof(void*));
memset(&come_value_202, 0, sizeof(struct CVALUE*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
    left_node_195=((struct sXOrNode*)come_null_check(self, "13op.c", 1698))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional260=!((struct sNode*)come_null_check(left_node_195, "13op.c", 1704))->compile(((struct sNode*)come_null_check(left_node_195, "13op.c", 1704))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional260) {
        __result194__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result194__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=get_value_from_stack(-1,info))));
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_197=((struct sXOrNode*)come_null_check(self, "13op.c", 1707))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional261=!((struct sNode*)come_null_check(right_node_197, "13op.c", 1713))->compile(((struct sNode*)come_null_check(right_node_197, "13op.c", 1713))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional261) {
        __result195__ = (_Bool)0;
        if(left_value_196 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=get_value_from_stack(-1,info))));
    if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_199=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_196, "13op.c", 1716))->type);
    __freed_obj__ = 0;
    fun_name_200="operator_xor";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional262=((struct sXOrNode*)come_null_check(self, "13op.c", 1727))->mQuote,    __freed_obj__ = 0, 
    _if_conditional262) {
        calling_fun_201=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_201=operator_overload_fun(type_199,fun_name_200,left_value_196,right_value_198,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional263=!calling_fun_201,    __freed_obj__ = 0, 
    _if_conditional263) {
        come_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1728))));
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj136=((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1730))->c_value;
        ((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1730))->c_value=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("%s^%s",((struct CVALUE*)come_null_check(left_value_196, "13op.c", 1730))->c_value,((struct CVALUE*)come_null_check(right_value_198, "13op.c", 1730))->c_value))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj137=((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1731))->type;
        ((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1731))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(((struct CVALUE*)come_null_check(left_value_196, "13op.c", 1731))->type))));
        if(__dec_obj137) { come_call_finalizer(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1732))->type, "13op.c", 1732))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1733))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_202, "13op.c", 1735))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1737))->stack, "13op.c", 1737)),(struct CVALUE*)come_increment_ref_count(come_value_202));
        __freed_obj__ = 0;
        if(come_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result196__ = (_Bool)1;
    if(left_value_196 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result196__;
    __freed_obj__ = 0;
    if(left_value_196 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result197__ = ((struct sXOrNode*)come_null_check(self, "13op.c", 1745))->sline;
    __freed_obj__ = 0;
    return __result197__;
    __freed_obj__ = 0;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value277;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
    __result198__ = __result_obj__ = ((char*)(right_value277=__builtin_string(((struct sXOrNode*)come_null_check(self, "13op.c", 1750))->sname)));
    __freed_obj__ = 0;
    return __result198__;
    __freed_obj__ = 0;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value278;
char* __dec_obj138;
void* right_value279;
struct sNode* __dec_obj139;
void* right_value280;
struct sNode* __dec_obj140;
struct sOrNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
    ((struct sOrNode*)come_null_check(self, "13op.c", 1765))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1765))->sline;
    __freed_obj__ = 0;
    __dec_obj138=((struct sOrNode*)come_null_check(self, "13op.c", 1766))->sname;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1766))->sname=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1766))->sname))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1768))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj139=((struct sOrNode*)come_null_check(self, "13op.c", 1769))->mLeft;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1769))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(left))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj140=((struct sOrNode*)come_null_check(self, "13op.c", 1770))->mRight;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1770))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(right))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result199__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result199__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result200__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result200__;
    __freed_obj__ = 0;
}

char* sOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value281;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value281, 0, sizeof(void*));
    __result201__ = __result_obj__ = ((char*)(right_value281=__builtin_string("sOrNode")));
    __freed_obj__ = 0;
    return __result201__;
    __freed_obj__ = 0;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_203;
_Bool _if_conditional267;
_Bool __result202__;
void* right_value282;
struct CVALUE* left_value_204;
struct sNode* right_node_205;
_Bool _if_conditional268;
_Bool __result203__;
void* right_value283;
struct CVALUE* right_value_206;
struct sType* type_207;
char* fun_name_208;
_Bool calling_fun_209;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value284;
struct CVALUE* come_value_210;
void* right_value285;
char* __dec_obj141;
void* right_value286;
struct sType* __dec_obj142;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_203, 0, sizeof(struct sNode*));
memset(&right_value282, 0, sizeof(void*));
memset(&left_value_204, 0, sizeof(struct CVALUE*));
memset(&right_node_205, 0, sizeof(struct sNode*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value_206, 0, sizeof(struct CVALUE*));
memset(&type_207, 0, sizeof(struct sType*));
memset(&fun_name_208, 0, sizeof(char*));
memset(&calling_fun_209, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&come_value_210, 0, sizeof(struct CVALUE*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
    left_node_203=((struct sOrNode*)come_null_check(self, "13op.c", 1788))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional267=!((struct sNode*)come_null_check(left_node_203, "13op.c", 1794))->compile(((struct sNode*)come_null_check(left_node_203, "13op.c", 1794))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional267) {
        __result202__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result202__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_205=((struct sOrNode*)come_null_check(self, "13op.c", 1797))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional268=!((struct sNode*)come_null_check(right_node_205, "13op.c", 1803))->compile(((struct sNode*)come_null_check(right_node_205, "13op.c", 1803))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional268) {
        __result203__ = (_Bool)0;
        if(left_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result203__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))));
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_207=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_204, "13op.c", 1806))->type);
    __freed_obj__ = 0;
    fun_name_208="operator_or";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional269=((struct sOrNode*)come_null_check(self, "13op.c", 1818))->mQuote,    __freed_obj__ = 0, 
    _if_conditional269) {
        calling_fun_209=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_209=operator_overload_fun(type_207,fun_name_208,left_value_204,right_value_206,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional270=!calling_fun_209,    __freed_obj__ = 0, 
    _if_conditional270) {
        come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1819))));
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj141=((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1821))->c_value;
        ((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1821))->c_value=(char*)come_increment_ref_count(((char*)(right_value285=xsprintf("%s|%s",((struct CVALUE*)come_null_check(left_value_204, "13op.c", 1821))->c_value,((struct CVALUE*)come_null_check(right_value_206, "13op.c", 1821))->c_value))));
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj142=((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1822))->type;
        ((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1822))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(((struct CVALUE*)come_null_check(left_value_204, "13op.c", 1822))->type))));
        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1823))->type, "13op.c", 1823))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1824))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_210, "13op.c", 1826))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1828))->stack, "13op.c", 1828)),(struct CVALUE*)come_increment_ref_count(come_value_210));
        __freed_obj__ = 0;
        if(come_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result204__ = (_Bool)1;
    if(left_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(left_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result205__ = ((struct sOrNode*)come_null_check(self, "13op.c", 1836))->sline;
    __freed_obj__ = 0;
    return __result205__;
    __freed_obj__ = 0;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value287;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
    __result206__ = __result_obj__ = ((char*)(right_value287=__builtin_string(((struct sOrNode*)come_null_check(self, "13op.c", 1841))->sname)));
    __freed_obj__ = 0;
    return __result206__;
    __freed_obj__ = 0;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value288;
char* __dec_obj143;
void* right_value289;
struct sNode* __dec_obj144;
void* right_value290;
struct sNode* __dec_obj145;
struct sAndAndNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1856))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1856))->sline;
    __freed_obj__ = 0;
    __dec_obj143=((struct sAndAndNode*)come_null_check(self, "13op.c", 1857))->sname;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1857))->sname=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1857))->sname))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1859))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj144=((struct sAndAndNode*)come_null_check(self, "13op.c", 1860))->mLeft;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1860))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=sNode_clone(left))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj145=((struct sAndAndNode*)come_null_check(self, "13op.c", 1861))->mRight;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1861))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(right))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result207__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result207__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result208__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
}

char* sAndAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value291;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value291, 0, sizeof(void*));
    __result209__ = __result_obj__ = ((char*)(right_value291=__builtin_string("sAndAndNode")));
    __freed_obj__ = 0;
    return __result209__;
    __freed_obj__ = 0;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_211;
_Bool _if_conditional274;
_Bool __result210__;
void* right_value292;
struct CVALUE* left_value_212;
struct sNode* right_node_213;
_Bool _if_conditional275;
_Bool __result211__;
void* right_value293;
struct CVALUE* right_value_214;
struct sType* type_215;
char* fun_name_216;
_Bool calling_fun_217;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value294;
struct CVALUE* come_value_218;
void* right_value295;
char* __dec_obj146;
void* right_value296;
struct sType* __dec_obj147;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_211, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&left_value_212, 0, sizeof(struct CVALUE*));
memset(&right_node_213, 0, sizeof(struct sNode*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value_214, 0, sizeof(struct CVALUE*));
memset(&type_215, 0, sizeof(struct sType*));
memset(&fun_name_216, 0, sizeof(char*));
memset(&calling_fun_217, 0, sizeof(_Bool));
memset(&right_value294, 0, sizeof(void*));
memset(&come_value_218, 0, sizeof(struct CVALUE*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
    left_node_211=((struct sAndAndNode*)come_null_check(self, "13op.c", 1879))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional274=!((struct sNode*)come_null_check(left_node_211, "13op.c", 1885))->compile(((struct sNode*)come_null_check(left_node_211, "13op.c", 1885))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional274) {
        __result210__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result210__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_213=((struct sAndAndNode*)come_null_check(self, "13op.c", 1888))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional275=!((struct sNode*)come_null_check(right_node_213, "13op.c", 1894))->compile(((struct sNode*)come_null_check(right_node_213, "13op.c", 1894))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional275) {
        __result211__ = (_Bool)0;
        if(left_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result211__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_215=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_212, "13op.c", 1897))->type);
    __freed_obj__ = 0;
    fun_name_216="operator_andand";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional276=((struct sAndAndNode*)come_null_check(self, "13op.c", 1909))->mQuote,    __freed_obj__ = 0, 
    _if_conditional276) {
        calling_fun_217=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_217=operator_overload_fun(type_215,fun_name_216,left_value_212,right_value_214,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional277=!calling_fun_217,    __freed_obj__ = 0, 
    _if_conditional277) {
        come_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1910))));
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj146=((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1912))->c_value;
        ((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1912))->c_value=(char*)come_increment_ref_count(((char*)(right_value295=xsprintf("%s&&%s",((struct CVALUE*)come_null_check(left_value_212, "13op.c", 1912))->c_value,((struct CVALUE*)come_null_check(right_value_214, "13op.c", 1912))->c_value))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj147=((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1913))->type;
        ((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1913))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(((struct CVALUE*)come_null_check(left_value_212, "13op.c", 1913))->type))));
        if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1914))->type, "13op.c", 1914))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1915))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_218, "13op.c", 1917))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1919))->stack, "13op.c", 1919)),(struct CVALUE*)come_increment_ref_count(come_value_218));
        __freed_obj__ = 0;
        if(come_value_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result212__ = (_Bool)1;
    if(left_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result212__;
    __freed_obj__ = 0;
    if(left_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_215, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result213__ = ((struct sAndAndNode*)come_null_check(self, "13op.c", 1927))->sline;
    __freed_obj__ = 0;
    return __result213__;
    __freed_obj__ = 0;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value297;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value297=__builtin_string(((struct sAndAndNode*)come_null_check(self, "13op.c", 1932))->sname)));
    __freed_obj__ = 0;
    return __result214__;
    __freed_obj__ = 0;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value298;
char* __dec_obj148;
void* right_value299;
struct sNode* __dec_obj149;
void* right_value300;
struct sNode* __dec_obj150;
struct sOrOrNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 1947))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1947))->sline;
    __freed_obj__ = 0;
    __dec_obj148=((struct sOrOrNode*)come_null_check(self, "13op.c", 1948))->sname;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 1948))->sname=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1948))->sname))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 1950))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj149=((struct sOrOrNode*)come_null_check(self, "13op.c", 1951))->mLeft;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 1951))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(left))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj150=((struct sOrOrNode*)come_null_check(self, "13op.c", 1952))->mRight;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 1952))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=sNode_clone(right))));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result215__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result216__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result216__;
    __freed_obj__ = 0;
}

char* sOrOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value301;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value301, 0, sizeof(void*));
    __result217__ = __result_obj__ = ((char*)(right_value301=__builtin_string("sOrOrNode")));
    __freed_obj__ = 0;
    return __result217__;
    __freed_obj__ = 0;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_219;
_Bool _if_conditional281;
_Bool __result218__;
void* right_value302;
struct CVALUE* left_value_220;
struct sNode* right_node_221;
_Bool _if_conditional282;
_Bool __result219__;
void* right_value303;
struct CVALUE* right_value_222;
struct sType* type_223;
char* fun_name_224;
_Bool calling_fun_225;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value304;
struct CVALUE* come_value_226;
void* right_value305;
char* __dec_obj151;
void* right_value306;
struct sType* __dec_obj152;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_219, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&left_value_220, 0, sizeof(struct CVALUE*));
memset(&right_node_221, 0, sizeof(struct sNode*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value_222, 0, sizeof(struct CVALUE*));
memset(&type_223, 0, sizeof(struct sType*));
memset(&fun_name_224, 0, sizeof(char*));
memset(&calling_fun_225, 0, sizeof(_Bool));
memset(&right_value304, 0, sizeof(void*));
memset(&come_value_226, 0, sizeof(struct CVALUE*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
    left_node_219=((struct sOrOrNode*)come_null_check(self, "13op.c", 1970))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional281=!((struct sNode*)come_null_check(left_node_219, "13op.c", 1976))->compile(((struct sNode*)come_null_check(left_node_219, "13op.c", 1976))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional281) {
        __result218__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result218__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_221=((struct sOrOrNode*)come_null_check(self, "13op.c", 1979))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional282=!((struct sNode*)come_null_check(right_node_221, "13op.c", 1985))->compile(((struct sNode*)come_null_check(right_node_221, "13op.c", 1985))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional282) {
        __result219__ = (_Bool)0;
        if(left_value_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result219__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value303=get_value_from_stack(-1,info))));
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_223=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_220, "13op.c", 1988))->type);
    __freed_obj__ = 0;
    fun_name_224="operator_oror";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional283=((struct sOrOrNode*)come_null_check(self, "13op.c", 1999))->mQuote,    __freed_obj__ = 0, 
    _if_conditional283) {
        calling_fun_225=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_225=operator_overload_fun(type_223,fun_name_224,left_value_220,right_value_222,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional284=!calling_fun_225,    __freed_obj__ = 0, 
    _if_conditional284) {
        come_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2000))));
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj151=((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2002))->c_value;
        ((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2002))->c_value=(char*)come_increment_ref_count(((char*)(right_value305=xsprintf("%s||%s",((struct CVALUE*)come_null_check(left_value_220, "13op.c", 2002))->c_value,((struct CVALUE*)come_null_check(right_value_222, "13op.c", 2002))->c_value))));
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj152=((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2003))->type;
        ((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2003))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(((struct CVALUE*)come_null_check(left_value_220, "13op.c", 2003))->type))));
        if(__dec_obj152) { come_call_finalizer(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2004))->type, "13op.c", 2004))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2005))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_226, "13op.c", 2007))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2009))->stack, "13op.c", 2009)),(struct CVALUE*)come_increment_ref_count(come_value_226));
        __freed_obj__ = 0;
        if(come_value_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result220__ = (_Bool)1;
    if(left_value_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result220__;
    __freed_obj__ = 0;
    if(left_value_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result221__ = ((struct sOrOrNode*)come_null_check(self, "13op.c", 2017))->sline;
    __freed_obj__ = 0;
    return __result221__;
    __freed_obj__ = 0;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value307;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value307=__builtin_string(((struct sOrOrNode*)come_null_check(self, "13op.c", 2022))->sname)));
    __freed_obj__ = 0;
    return __result222__;
    __freed_obj__ = 0;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value308;
char* __dec_obj153;
void* right_value309;
struct sNode* __dec_obj154;
void* right_value310;
struct sNode* __dec_obj155;
struct sCommaNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2037))->sline=((struct sInfo*)come_null_check(info, "13op.c", 2037))->sline;
    __freed_obj__ = 0;
    __dec_obj153=((struct sCommaNode*)come_null_check(self, "13op.c", 2038))->sname;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2038))->sname=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 2038))->sname))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj154=((struct sCommaNode*)come_null_check(self, "13op.c", 2040))->mLeft;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2040))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(left))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj155=((struct sCommaNode*)come_null_check(self, "13op.c", 2041))->mRight;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2041))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=sNode_clone(right))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0); }
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result223__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result223__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result224__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result224__;
    __freed_obj__ = 0;
}

char* sCommaNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value311;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value311, 0, sizeof(void*));
    __result225__ = __result_obj__ = ((char*)(right_value311=__builtin_string("sCommaNode")));
    __freed_obj__ = 0;
    return __result225__;
    __freed_obj__ = 0;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_227;
_Bool _if_conditional288;
_Bool __result226__;
void* right_value312;
struct CVALUE* left_value_228;
struct sNode* right_node_229;
_Bool _if_conditional289;
_Bool __result227__;
void* right_value313;
struct CVALUE* right_value_230;
void* right_value314;
struct CVALUE* come_value_231;
void* right_value315;
char* __dec_obj156;
void* right_value316;
struct sType* __dec_obj157;
_Bool __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_227, 0, sizeof(struct sNode*));
memset(&right_value312, 0, sizeof(void*));
memset(&left_value_228, 0, sizeof(struct CVALUE*));
memset(&right_node_229, 0, sizeof(struct sNode*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value_230, 0, sizeof(struct CVALUE*));
memset(&right_value314, 0, sizeof(void*));
memset(&come_value_231, 0, sizeof(struct CVALUE*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
    left_node_227=((struct sCommaNode*)come_null_check(self, "13op.c", 2059))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional288=!((struct sNode*)come_null_check(left_node_227, "13op.c", 2065))->compile(((struct sNode*)come_null_check(left_node_227, "13op.c", 2065))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional288) {
        __result226__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result226__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=get_value_from_stack(-1,info))));
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_229=((struct sCommaNode*)come_null_check(self, "13op.c", 2068))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional289=!((struct sNode*)come_null_check(right_node_229, "13op.c", 2074))->compile(((struct sNode*)come_null_check(right_node_229, "13op.c", 2074))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional289) {
        __result227__ = (_Bool)0;
        if(left_value_228 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_228, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result227__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=get_value_from_stack(-1,info))));
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2077))));
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj156=((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2079))->c_value;
    ((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2079))->c_value=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("%s,%s",((struct CVALUE*)come_null_check(left_value_228, "13op.c", 2079))->c_value,((struct CVALUE*)come_null_check(right_value_230, "13op.c", 2079))->c_value))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj157=((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2080))->type;
    ((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2080))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(((struct CVALUE*)come_null_check(left_value_228, "13op.c", 2080))->type))));
    if(__dec_obj157) { come_call_finalizer(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2081))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_231, "13op.c", 2083))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2085))->stack, "13op.c", 2085)),(struct CVALUE*)come_increment_ref_count(come_value_231));
    __freed_obj__ = 0;
    __result228__ = (_Bool)1;
    if(left_value_228 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result228__;
    __freed_obj__ = 0;
    if(left_value_228 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result229__ = ((struct sCommaNode*)come_null_check(self, "13op.c", 2092))->sline;
    __freed_obj__ = 0;
    return __result229__;
    __freed_obj__ = 0;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value317;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value317=__builtin_string(((struct sCommaNode*)come_null_check(self, "13op.c", 2097))->sname)));
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value318;
char* __dec_obj158;
void* right_value319;
struct sNode* __dec_obj159;
void* right_value320;
struct sNode* __dec_obj160;
void* right_value321;
struct sNode* __dec_obj161;
struct sConditionalNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2113))->sline=((struct sInfo*)come_null_check(info, "13op.c", 2113))->sline;
    __freed_obj__ = 0;
    __dec_obj158=((struct sConditionalNode*)come_null_check(self, "13op.c", 2114))->sname;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2114))->sname=(char*)come_increment_ref_count(((char*)(right_value318=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 2114))->sname))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj159=((struct sConditionalNode*)come_null_check(self, "13op.c", 2116))->mValue1;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2116))->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=sNode_clone(value1))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj160=((struct sConditionalNode*)come_null_check(self, "13op.c", 2117))->mValue2;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2117))->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=sNode_clone(value2))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj161=((struct sConditionalNode*)come_null_check(self, "13op.c", 2118))->mValue3;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2118))->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(value3))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0); }
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result231__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result232__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result232__;
    __freed_obj__ = 0;
}

char* sConditionalNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value322;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value322, 0, sizeof(void*));
    __result233__ = __result_obj__ = ((char*)(right_value322=__builtin_string("sConditionalNode")));
    __freed_obj__ = 0;
    return __result233__;
    __freed_obj__ = 0;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* value1_232;
_Bool _if_conditional294;
_Bool __result234__;
void* right_value323;
struct CVALUE* value1_value_233;
struct sNode* value2_234;
_Bool _if_conditional295;
_Bool __result235__;
void* right_value324;
struct CVALUE* value2_value_235;
struct sNode* value3_236;
_Bool _if_conditional296;
_Bool __result236__;
void* right_value325;
struct CVALUE* value3_value_237;
void* right_value326;
struct CVALUE* come_value_238;
void* right_value327;
char* __dec_obj162;
void* right_value328;
struct sType* __dec_obj163;
_Bool __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value1_232, 0, sizeof(struct sNode*));
memset(&right_value323, 0, sizeof(void*));
memset(&value1_value_233, 0, sizeof(struct CVALUE*));
memset(&value2_234, 0, sizeof(struct sNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&value2_value_235, 0, sizeof(struct CVALUE*));
memset(&value3_236, 0, sizeof(struct sNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&value3_value_237, 0, sizeof(struct CVALUE*));
memset(&right_value326, 0, sizeof(void*));
memset(&come_value_238, 0, sizeof(struct CVALUE*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
    value1_232=((struct sConditionalNode*)come_null_check(self, "13op.c", 2136))->mValue1;
    __freed_obj__ = 0;
    if(_if_conditional294=!((struct sNode*)come_null_check(value1_232, "13op.c", 2142))->compile(((struct sNode*)come_null_check(value1_232, "13op.c", 2142))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional294) {
        __result234__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result234__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value1_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=get_value_from_stack(-1,info))));
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    value2_234=((struct sConditionalNode*)come_null_check(self, "13op.c", 2145))->mValue2;
    __freed_obj__ = 0;
    if(_if_conditional295=!((struct sNode*)come_null_check(value2_234, "13op.c", 2151))->compile(((struct sNode*)come_null_check(value2_234, "13op.c", 2151))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional295) {
        __result235__ = (_Bool)0;
        if(value1_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result235__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value2_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=get_value_from_stack(-1,info))));
    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    value3_236=((struct sConditionalNode*)come_null_check(self, "13op.c", 2154))->mValue3;
    __freed_obj__ = 0;
    if(_if_conditional296=!((struct sNode*)come_null_check(value3_236, "13op.c", 2160))->compile(((struct sNode*)come_null_check(value3_236, "13op.c", 2160))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional296) {
        __result236__ = (_Bool)0;
        if(value1_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_235 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_235, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result236__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value3_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=get_value_from_stack(-1,info))));
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2163))));
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj162=((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2165))->c_value;
    ((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2165))->c_value=(char*)come_increment_ref_count(((char*)(right_value327=xsprintf("%s?%s:%s",((struct CVALUE*)come_null_check(value1_value_233, "13op.c", 2165))->c_value,((struct CVALUE*)come_null_check(value2_value_235, "13op.c", 2165))->c_value,((struct CVALUE*)come_null_check(value3_value_237, "13op.c", 2165))->c_value))));
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj163=((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2166))->type;
    ((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2166))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(((struct CVALUE*)come_null_check(value1_value_233, "13op.c", 2166))->type))));
    if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2167))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_238, "13op.c", 2169))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2171))->stack, "13op.c", 2171)),(struct CVALUE*)come_increment_ref_count(come_value_238));
    __freed_obj__ = 0;
    __result237__ = (_Bool)1;
    if(value1_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_235 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_238 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result237__;
    __freed_obj__ = 0;
    if(value1_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_235 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_238 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result238__ = ((struct sConditionalNode*)come_null_check(self, "13op.c", 2178))->sline;
    __freed_obj__ = 0;
    return __result238__;
    __freed_obj__ = 0;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value329;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value329, 0, sizeof(void*));
    __result239__ = __result_obj__ = ((char*)(right_value329=__builtin_string(((struct sConditionalNode*)come_null_check(self, "13op.c", 2183))->sname)));
    __freed_obj__ = 0;
    return __result239__;
    __freed_obj__ = 0;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value330;
struct sNode* node_239;
_Bool _while_condtional10;
_Bool _if_conditional297;
void* right_value331;
struct sNode* right_240;
void* right_value332;
void* right_value333;
struct sNode* _inf_value2;
struct sMultNode* _inf_obj_value2;
void* right_value338;
struct sNode* __result242__;
_Bool _if_conditional307;
void* right_value339;
struct sNode* right_242;
void* right_value340;
void* right_value341;
struct sNode* _inf_value3;
struct sDivNode* _inf_obj_value3;
void* right_value346;
struct sNode* __result245__;
_Bool _if_conditional317;
void* right_value347;
struct sNode* right_244;
void* right_value348;
void* right_value349;
struct sNode* _inf_value4;
struct sModNode* _inf_obj_value4;
void* right_value354;
struct sNode* __result248__;
_Bool _if_conditional327;
void* right_value355;
struct sNode* right_246;
void* right_value356;
void* right_value357;
struct sNode* _inf_value5;
struct sMultNode* _inf_obj_value5;
void* right_value362;
struct sNode* __result251__;
_Bool _if_conditional337;
void* right_value363;
struct sNode* right_248;
void* right_value364;
void* right_value365;
struct sNode* _inf_value6;
struct sDivNode* _inf_obj_value6;
void* right_value370;
struct sNode* __result254__;
_Bool _if_conditional347;
void* right_value371;
struct sNode* right_250;
void* right_value372;
void* right_value373;
struct sNode* _inf_value7;
struct sModNode* _inf_obj_value7;
void* right_value378;
struct sNode* __result257__;
struct sNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value330, 0, sizeof(void*));
memset(&node_239, 0, sizeof(struct sNode*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_240, 0, sizeof(struct sNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_242, 0, sizeof(struct sNode*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_244, 0, sizeof(struct sNode*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_246, 0, sizeof(struct sNode*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_248, 0, sizeof(struct sNode*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_250, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
    node_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=expression_node_v99(info))));
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional10=*((struct sInfo*)come_null_check(info, "13op.c", 2246))->p,    __freed_obj__ = 0, 
    _while_condtional10) {
        if(_if_conditional297=!((struct sNode*)come_null_check(node_239, "13op.c", 2244))->terminated(((struct sNode*)come_null_check(node_239, "13op.c", 2244))->_protocol_obj)&&*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==42&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional297) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2194))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=mult_exp(info))));
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2199);
            _inf_obj_value2=come_increment_ref_count(((struct sMultNode*)(right_value333=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value332=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2199)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_240),(_Bool)0,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMultNode_finalize;
            _inf_value2->clone=(void*)sMultNode_clone;
            _inf_value2->compile=(void*)sMultNode_compile;
            _inf_value2->sline=(void*)sMultNode_sline;
            _inf_value2->sname=(void*)sMultNode_sname;
            _inf_value2->terminated=(void*)sMultNode_terminated;
            _inf_value2->kind=(void*)sMultNode_kind;
            __result242__ = __result_obj__ = ((struct sNode*)(right_value338=_inf_value2));
            if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
            if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result242__;
            __freed_obj__ = 0;
            if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional307=*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==47&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional307) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2202))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=mult_exp(info))));
                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2207);
                _inf_obj_value3=come_increment_ref_count(((struct sDivNode*)(right_value341=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value340=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2207)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_242),(_Bool)0,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDivNode_finalize;
                _inf_value3->clone=(void*)sDivNode_clone;
                _inf_value3->compile=(void*)sDivNode_compile;
                _inf_value3->sline=(void*)sDivNode_sline;
                _inf_value3->sname=(void*)sDivNode_sname;
                _inf_value3->terminated=(void*)sDivNode_terminated;
                _inf_value3->kind=(void*)sDivNode_kind;
                __result245__ = __result_obj__ = ((struct sNode*)(right_value346=_inf_value3));
                if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
                if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
                if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result245__;
                __freed_obj__ = 0;
                if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional317=*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==37&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional317) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2210))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_node_v99(info))));
                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2215);
                    _inf_obj_value4=come_increment_ref_count(((struct sModNode*)(right_value349=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value348=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2215)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_244),(_Bool)0,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sModNode_finalize;
                    _inf_value4->clone=(void*)sModNode_clone;
                    _inf_value4->compile=(void*)sModNode_compile;
                    _inf_value4->sline=(void*)sModNode_sline;
                    _inf_value4->sname=(void*)sModNode_sname;
                    _inf_value4->terminated=(void*)sModNode_terminated;
                    _inf_value4->kind=(void*)sModNode_kind;
                    __result248__ = __result_obj__ = ((struct sNode*)(right_value354=_inf_value4));
                    if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
                    if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result248__;
                    __freed_obj__ = 0;
                    if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional327=!((struct sNode*)come_null_check(node_239, "13op.c", 2244))->terminated(((struct sNode*)come_null_check(node_239, "13op.c", 2244))->_protocol_obj)&&*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)==42&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+2)!=61,                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2218))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=mult_exp(info))));
                        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2223);
                        _inf_obj_value5=come_increment_ref_count(((struct sMultNode*)(right_value357=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value356=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2223)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_246),(_Bool)1,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultNode_finalize;
                        _inf_value5->clone=(void*)sMultNode_clone;
                        _inf_value5->compile=(void*)sMultNode_compile;
                        _inf_value5->sline=(void*)sMultNode_sline;
                        _inf_value5->sname=(void*)sMultNode_sname;
                        _inf_value5->terminated=(void*)sMultNode_terminated;
                        _inf_value5->kind=(void*)sMultNode_kind;
                        __result251__ = __result_obj__ = ((struct sNode*)(right_value362=_inf_value5));
                        if(right_246 && !__freed_obj__) { right_246 = come_decrement_ref_count(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0); } 
                        if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result251__;
                        __freed_obj__ = 0;
                        if(right_246 && !__freed_obj__) { right_246 = come_decrement_ref_count(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional337=*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)==47&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+2)!=61,                        __freed_obj__ = 0, 
                        _if_conditional337) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2226))->p+=2;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=mult_exp(info))));
                            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2231);
                            _inf_obj_value6=come_increment_ref_count(((struct sDivNode*)(right_value365=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value364=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2231)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_248),(_Bool)1,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivNode_finalize;
                            _inf_value6->clone=(void*)sDivNode_clone;
                            _inf_value6->compile=(void*)sDivNode_compile;
                            _inf_value6->sline=(void*)sDivNode_sline;
                            _inf_value6->sname=(void*)sDivNode_sname;
                            _inf_value6->terminated=(void*)sDivNode_terminated;
                            _inf_value6->kind=(void*)sDivNode_kind;
                            __result254__ = __result_obj__ = ((struct sNode*)(right_value370=_inf_value6));
                            if(right_248 && !__freed_obj__) { right_248 = come_decrement_ref_count(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0); } 
                            if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result254__;
                            __freed_obj__ = 0;
                            if(right_248 && !__freed_obj__) { right_248 = come_decrement_ref_count(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional347=*((struct sInfo*)come_null_check(info, "13op.c", 2244))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+1)==37&&*(((struct sInfo*)come_null_check(info, "13op.c", 2244))->p+2)!=61,                            __freed_obj__ = 0, 
                            _if_conditional347) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2234))->p+=2;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=expression_node_v99(info))));
                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2239);
                                _inf_obj_value7=come_increment_ref_count(((struct sModNode*)(right_value373=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value372=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2239)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_250),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModNode_finalize;
                                _inf_value7->clone=(void*)sModNode_clone;
                                _inf_value7->compile=(void*)sModNode_compile;
                                _inf_value7->sline=(void*)sModNode_sline;
                                _inf_value7->sname=(void*)sModNode_sname;
                                _inf_value7->terminated=(void*)sModNode_terminated;
                                _inf_value7->kind=(void*)sModNode_kind;
                                __result257__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value7));
                                if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
                                if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
                                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result257__;
                                __freed_obj__ = 0;
                                if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
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
    __result258__ = __result_obj__ = node_239;
    if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result258__;
    __freed_obj__ = 0;
    if(node_239 && !__freed_obj__) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional328=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional329=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional330=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional330) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional331;
struct sMultNode* __result249__;
void* right_value358;
struct sMultNode* result_247;
_Bool _if_conditional332;
void* right_value359;
struct sNode* __dec_obj173;
_Bool _if_conditional333;
void* right_value360;
struct sNode* __dec_obj174;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value361;
char* __dec_obj175;
struct sMultNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value358, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sMultNode*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
                            if(_if_conditional331=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional331) {
                                __result249__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result249__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_247=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value358=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3))));
                            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional332=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional332) {
                                __dec_obj173=((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 4))->mLeft;
                                ((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 4))->mLeft))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional333=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional333) {
                                __dec_obj174=((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 5))->mRight;
                                ((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=sNode_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 5))->mRight))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional334=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional334) {
                                ((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 6))->mQuote=((struct sMultNode*)come_null_check(self, "sMultNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional335=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional335) {
                                ((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 7))->sline=((struct sMultNode*)come_null_check(self, "sMultNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional336=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional336) {
                                __dec_obj175=((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 8))->sname;
                                ((struct sMultNode*)come_null_check(result_247, "sMultNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 8))->sname))));
                                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0,0); }
                                if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result250__ = __result_obj__ = result_247;
                            if(result_247 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result250__;
                            __freed_obj__ = 0;
                            if(result_247 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional338=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional338) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional339=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional340=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional341;
struct sDivNode* __result252__;
void* right_value366;
struct sDivNode* result_249;
_Bool _if_conditional342;
void* right_value367;
struct sNode* __dec_obj176;
_Bool _if_conditional343;
void* right_value368;
struct sNode* __dec_obj177;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value369;
char* __dec_obj178;
struct sDivNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value366, 0, sizeof(void*));
memset(&result_249, 0, sizeof(struct sDivNode*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
                                if(_if_conditional341=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    __result252__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result252__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_249=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value366=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3))));
                                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional342=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    __dec_obj176=((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 4))->mLeft;
                                    ((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 4))->mLeft))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional343=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional343) {
                                    __dec_obj177=((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 5))->mRight;
                                    ((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 5))->mRight))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                                    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional344=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional344) {
                                    ((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 6))->mQuote=((struct sDivNode*)come_null_check(self, "sDivNode_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional345=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    ((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 7))->sline=((struct sDivNode*)come_null_check(self, "sDivNode_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional346=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional346) {
                                    __dec_obj178=((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 8))->sname;
                                    ((struct sDivNode*)come_null_check(result_249, "sDivNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value369=string_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 8))->sname))));
                                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result253__ = __result_obj__ = result_249;
                                if(result_249 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result253__;
                                __freed_obj__ = 0;
                                if(result_249 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional348=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional348) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional349=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional349) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional350=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional350) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional351;
struct sModNode* __result255__;
void* right_value374;
struct sModNode* result_251;
_Bool _if_conditional352;
void* right_value375;
struct sNode* __dec_obj179;
_Bool _if_conditional353;
void* right_value376;
struct sNode* __dec_obj180;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value377;
char* __dec_obj181;
struct sModNode* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sModNode*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
                                    if(_if_conditional351=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional351) {
                                        __result255__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result255__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_251=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value374=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3))));
                                    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional352=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional352) {
                                        __dec_obj179=((struct sModNode*)come_null_check(result_251, "sModNode_clone", 4))->mLeft;
                                        ((struct sModNode*)come_null_check(result_251, "sModNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 4))->mLeft))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional353=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional353) {
                                        __dec_obj180=((struct sModNode*)come_null_check(result_251, "sModNode_clone", 5))->mRight;
                                        ((struct sModNode*)come_null_check(result_251, "sModNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 5))->mRight))));
                                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional354=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional354) {
                                        ((struct sModNode*)come_null_check(result_251, "sModNode_clone", 6))->mQuote=((struct sModNode*)come_null_check(self, "sModNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional355=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional355) {
                                        ((struct sModNode*)come_null_check(result_251, "sModNode_clone", 7))->sline=((struct sModNode*)come_null_check(self, "sModNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional356=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional356) {
                                        __dec_obj181=((struct sModNode*)come_null_check(result_251, "sModNode_clone", 8))->sname;
                                        ((struct sModNode*)come_null_check(result_251, "sModNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 8))->sname))));
                                        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result256__ = __result_obj__ = result_251;
                                    if(result_251 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result256__;
                                    __freed_obj__ = 0;
                                    if(result_251 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value379;
struct sNode* node_252;
_Bool _while_condtional11;
_Bool _if_conditional357;
void* right_value380;
struct sNode* right_253;
void* right_value381;
void* right_value382;
struct sNode* _inf_value8;
struct sAddNode* _inf_obj_value8;
void* right_value387;
struct sNode* __result261__;
_Bool _if_conditional367;
void* right_value388;
struct sNode* right_255;
void* right_value389;
void* right_value390;
struct sNode* _inf_value9;
struct sSubNode* _inf_obj_value9;
void* right_value395;
struct sNode* __result264__;
_Bool _if_conditional377;
void* right_value396;
struct sNode* right_257;
void* right_value397;
void* right_value398;
struct sNode* _inf_value10;
struct sAddNode* _inf_obj_value10;
void* right_value403;
struct sNode* __result267__;
_Bool _if_conditional387;
void* right_value404;
struct sNode* right_259;
void* right_value405;
void* right_value406;
struct sNode* _inf_value11;
struct sSubNode* _inf_obj_value11;
void* right_value411;
struct sNode* __result270__;
struct sNode* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value379, 0, sizeof(void*));
memset(&node_252, 0, sizeof(struct sNode*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_253, 0, sizeof(struct sNode*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_255, 0, sizeof(struct sNode*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_257, 0, sizeof(struct sNode*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_259, 0, sizeof(struct sNode*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
    node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=mult_exp(info))));
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional11=*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional357=*((struct sInfo*)come_null_check(info, "13op.c", 2297))->p==43&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)!=43,        __freed_obj__ = 0, 
        _if_conditional357) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2260))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=add_exp(info))));
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2265);
            _inf_obj_value8=come_increment_ref_count(((struct sAddNode*)(right_value382=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value381=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2265)))),(struct sNode*)come_increment_ref_count(node_252),(struct sNode*)come_increment_ref_count(right_253),(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sAddNode_finalize;
            _inf_value8->clone=(void*)sAddNode_clone;
            _inf_value8->compile=(void*)sAddNode_compile;
            _inf_value8->sline=(void*)sAddNode_sline;
            _inf_value8->sname=(void*)sAddNode_sname;
            _inf_value8->terminated=(void*)sAddNode_terminated;
            _inf_value8->kind=(void*)sAddNode_kind;
            __result261__ = __result_obj__ = ((struct sNode*)(right_value387=_inf_value8));
            if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
            if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result261__;
            __freed_obj__ = 0;
            if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional367=*((struct sInfo*)come_null_check(info, "13op.c", 2297))->p==45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)!=45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)!=62,            __freed_obj__ = 0, 
            _if_conditional367) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2269))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=add_exp(info))));
                if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2274);
                _inf_obj_value9=come_increment_ref_count(((struct sSubNode*)(right_value390=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value389=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2274)))),(struct sNode*)come_increment_ref_count(node_252),(struct sNode*)come_increment_ref_count(right_255),(_Bool)0,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sSubNode_finalize;
                _inf_value9->clone=(void*)sSubNode_clone;
                _inf_value9->compile=(void*)sSubNode_compile;
                _inf_value9->sline=(void*)sSubNode_sline;
                _inf_value9->sname=(void*)sSubNode_sname;
                _inf_value9->terminated=(void*)sSubNode_terminated;
                _inf_value9->kind=(void*)sSubNode_kind;
                __result264__ = __result_obj__ = ((struct sNode*)(right_value395=_inf_value9));
                if(right_255 && !__freed_obj__) { right_255 = come_decrement_ref_count(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0); } 
                if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result264__;
                __freed_obj__ = 0;
                if(right_255 && !__freed_obj__) { right_255 = come_decrement_ref_count(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional377=*((struct sInfo*)come_null_check(info, "13op.c", 2297))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)==43&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+2)!=43,                __freed_obj__ = 0, 
                _if_conditional377) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2278))->p+=2;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=add_exp(info))));
                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2283);
                    _inf_obj_value10=come_increment_ref_count(((struct sAddNode*)(right_value398=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value397=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2283)))),(struct sNode*)come_increment_ref_count(node_252),(struct sNode*)come_increment_ref_count(right_257),(_Bool)1,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sAddNode_finalize;
                    _inf_value10->clone=(void*)sAddNode_clone;
                    _inf_value10->compile=(void*)sAddNode_compile;
                    _inf_value10->sline=(void*)sAddNode_sline;
                    _inf_value10->sname=(void*)sAddNode_sname;
                    _inf_value10->terminated=(void*)sAddNode_terminated;
                    _inf_value10->kind=(void*)sAddNode_kind;
                    __result267__ = __result_obj__ = ((struct sNode*)(right_value403=_inf_value10));
                    if(right_257 && !__freed_obj__) { right_257 = come_decrement_ref_count(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0); } 
                    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result267__;
                    __freed_obj__ = 0;
                    if(right_257 && !__freed_obj__) { right_257 = come_decrement_ref_count(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional387=*((struct sInfo*)come_null_check(info, "13op.c", 2297))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+1)==45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+2)!=45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2297))->p+2)!=62,                    __freed_obj__ = 0, 
                    _if_conditional387) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2287))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=add_exp(info))));
                        if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2292);
                        _inf_obj_value11=come_increment_ref_count(((struct sSubNode*)(right_value406=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value405=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2292)))),(struct sNode*)come_increment_ref_count(node_252),(struct sNode*)come_increment_ref_count(right_259),(_Bool)1,info))));
                        _inf_value11->_protocol_obj=_inf_obj_value11;
                        _inf_value11->finalize=(void*)sSubNode_finalize;
                        _inf_value11->clone=(void*)sSubNode_clone;
                        _inf_value11->compile=(void*)sSubNode_compile;
                        _inf_value11->sline=(void*)sSubNode_sline;
                        _inf_value11->sname=(void*)sSubNode_sname;
                        _inf_value11->terminated=(void*)sSubNode_terminated;
                        _inf_value11->kind=(void*)sSubNode_kind;
                        __result270__ = __result_obj__ = ((struct sNode*)(right_value411=_inf_value11));
                        if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                        if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result270__;
                        __freed_obj__ = 0;
                        if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
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
    __result271__ = __result_obj__ = node_252;
    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result271__;
    __freed_obj__ = 0;
    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional378=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional378) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional379=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional379) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional380=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional380) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional381;
struct sAddNode* __result265__;
void* right_value399;
struct sAddNode* result_258;
_Bool _if_conditional382;
void* right_value400;
struct sNode* __dec_obj188;
_Bool _if_conditional383;
void* right_value401;
struct sNode* __dec_obj189;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value402;
char* __dec_obj190;
struct sAddNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value399, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sAddNode*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
                        if(_if_conditional381=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional381) {
                            __result265__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result265__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_258=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value399=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3))));
                        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional382=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional382) {
                            __dec_obj188=((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 4))->mLeft;
                            ((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 4))->mLeft))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional383=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional383) {
                            __dec_obj189=((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 5))->mRight;
                            ((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 5))->mRight))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0); }
                            if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional384=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional384) {
                            ((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 6))->mQuote=((struct sAddNode*)come_null_check(self, "sAddNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional385=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional385) {
                            ((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 7))->sline=((struct sAddNode*)come_null_check(self, "sAddNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional386=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional386) {
                            __dec_obj190=((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 8))->sname;
                            ((struct sAddNode*)come_null_check(result_258, "sAddNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value402=string_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 8))->sname))));
                            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0,0); }
                            if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result266__ = __result_obj__ = result_258;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result266__;
                        __freed_obj__ = 0;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional388=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional388) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional389=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional389) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional390=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional390) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional391;
struct sSubNode* __result268__;
void* right_value407;
struct sSubNode* result_260;
_Bool _if_conditional392;
void* right_value408;
struct sNode* __dec_obj191;
_Bool _if_conditional393;
void* right_value409;
struct sNode* __dec_obj192;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value410;
char* __dec_obj193;
struct sSubNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value407, 0, sizeof(void*));
memset(&result_260, 0, sizeof(struct sSubNode*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
                            if(_if_conditional391=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional391) {
                                __result268__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result268__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_260=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value407=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3))));
                            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional392=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional392) {
                                __dec_obj191=((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 4))->mLeft;
                                ((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 4))->mLeft))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional393=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional393) {
                                __dec_obj192=((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 5))->mRight;
                                ((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 5))->mRight))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                                if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional394=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional394) {
                                ((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 6))->mQuote=((struct sSubNode*)come_null_check(self, "sSubNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional395=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional395) {
                                ((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 7))->sline=((struct sSubNode*)come_null_check(self, "sSubNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional396=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional396) {
                                __dec_obj193=((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 8))->sname;
                                ((struct sSubNode*)come_null_check(result_260, "sSubNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value410=string_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 8))->sname))));
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
                                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result269__ = __result_obj__ = result_260;
                            if(result_260 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result269__;
                            __freed_obj__ = 0;
                            if(result_260 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value412;
struct sNode* node_261;
_Bool _while_condtional12;
_Bool _if_conditional397;
void* right_value413;
struct sNode* right_262;
void* right_value414;
void* right_value415;
struct sNode* _inf_value12;
struct sLShiftNode* _inf_obj_value12;
void* right_value420;
struct sNode* __result274__;
_Bool _if_conditional407;
void* right_value421;
struct sNode* right_264;
void* right_value422;
void* right_value423;
struct sNode* _inf_value13;
struct sRShiftNode* _inf_obj_value13;
void* right_value428;
struct sNode* __result277__;
_Bool _if_conditional417;
void* right_value429;
struct sNode* right_266;
void* right_value430;
void* right_value431;
struct sNode* _inf_value14;
struct sLShiftNode* _inf_obj_value14;
void* right_value436;
struct sNode* __result280__;
_Bool _if_conditional427;
void* right_value437;
struct sNode* right_268;
void* right_value438;
void* right_value439;
struct sNode* _inf_value15;
struct sRShiftNode* _inf_obj_value15;
void* right_value444;
struct sNode* __result283__;
struct sNode* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value412, 0, sizeof(void*));
memset(&node_261, 0, sizeof(struct sNode*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_262, 0, sizeof(struct sNode*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_264, 0, sizeof(struct sNode*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_266, 0, sizeof(struct sNode*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_268, 0, sizeof(struct sNode*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=add_exp(info))));
    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional12=*((struct sInfo*)come_null_check(info, "13op.c", 2350))->p,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional397=*((struct sInfo*)come_null_check(info, "13op.c", 2348))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+2)!=61,        __freed_obj__ = 0, 
        _if_conditional397) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2314))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=shift_exp(info))));
            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2319);
            _inf_obj_value12=come_increment_ref_count(((struct sLShiftNode*)(right_value415=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value414=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2319)))),(struct sNode*)come_increment_ref_count(node_261),(struct sNode*)come_increment_ref_count(right_262),(_Bool)0,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sLShiftNode_finalize;
            _inf_value12->clone=(void*)sLShiftNode_clone;
            _inf_value12->compile=(void*)sLShiftNode_compile;
            _inf_value12->sline=(void*)sLShiftNode_sline;
            _inf_value12->sname=(void*)sLShiftNode_sname;
            _inf_value12->terminated=(void*)sLShiftNode_terminated;
            _inf_value12->kind=(void*)sLShiftNode_kind;
            __result274__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value12));
            if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
            if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0); } 
            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result274__;
            __freed_obj__ = 0;
            if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional407=*((struct sInfo*)come_null_check(info, "13op.c", 2348))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+2)!=62,            __freed_obj__ = 0, 
            _if_conditional407) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2322))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=shift_exp(info))));
                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2327);
                _inf_obj_value13=come_increment_ref_count(((struct sRShiftNode*)(right_value423=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value422=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2327)))),(struct sNode*)come_increment_ref_count(node_261),(struct sNode*)come_increment_ref_count(right_264),(_Bool)0,info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sRShiftNode_finalize;
                _inf_value13->clone=(void*)sRShiftNode_clone;
                _inf_value13->compile=(void*)sRShiftNode_compile;
                _inf_value13->sline=(void*)sRShiftNode_sline;
                _inf_value13->sname=(void*)sRShiftNode_sname;
                _inf_value13->terminated=(void*)sRShiftNode_terminated;
                _inf_value13->kind=(void*)sRShiftNode_kind;
                __result277__ = __result_obj__ = ((struct sNode*)(right_value428=_inf_value13));
                if(right_264 && !__freed_obj__) { right_264 = come_decrement_ref_count(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0); } 
                if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0); } 
                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result277__;
                __freed_obj__ = 0;
                if(right_264 && !__freed_obj__) { right_264 = come_decrement_ref_count(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional417=*((struct sInfo*)come_null_check(info, "13op.c", 2348))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+2)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+3)!=61,                __freed_obj__ = 0, 
                _if_conditional417) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2330))->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=shift_exp(info))));
                    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2335);
                    _inf_obj_value14=come_increment_ref_count(((struct sLShiftNode*)(right_value431=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value430=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2335)))),(struct sNode*)come_increment_ref_count(node_261),(struct sNode*)come_increment_ref_count(right_266),(_Bool)1,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sLShiftNode_finalize;
                    _inf_value14->clone=(void*)sLShiftNode_clone;
                    _inf_value14->compile=(void*)sLShiftNode_compile;
                    _inf_value14->sline=(void*)sLShiftNode_sline;
                    _inf_value14->sname=(void*)sLShiftNode_sname;
                    _inf_value14->terminated=(void*)sLShiftNode_terminated;
                    _inf_value14->kind=(void*)sLShiftNode_kind;
                    __result280__ = __result_obj__ = ((struct sNode*)(right_value436=_inf_value14));
                    if(right_266 && !__freed_obj__) { right_266 = come_decrement_ref_count(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0); } 
                    if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0); } 
                    if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result280__;
                    __freed_obj__ = 0;
                    if(right_266 && !__freed_obj__) { right_266 = come_decrement_ref_count(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional427=*((struct sInfo*)come_null_check(info, "13op.c", 2348))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+2)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+3)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2348))->p+3)!=62,                    __freed_obj__ = 0, 
                    _if_conditional427) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2338))->p+=3;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=shift_exp(info))));
                        if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2343);
                        _inf_obj_value15=come_increment_ref_count(((struct sRShiftNode*)(right_value439=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value438=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2343)))),(struct sNode*)come_increment_ref_count(node_261),(struct sNode*)come_increment_ref_count(right_268),(_Bool)1,info))));
                        _inf_value15->_protocol_obj=_inf_obj_value15;
                        _inf_value15->finalize=(void*)sRShiftNode_finalize;
                        _inf_value15->clone=(void*)sRShiftNode_clone;
                        _inf_value15->compile=(void*)sRShiftNode_compile;
                        _inf_value15->sline=(void*)sRShiftNode_sline;
                        _inf_value15->sname=(void*)sRShiftNode_sname;
                        _inf_value15->terminated=(void*)sRShiftNode_terminated;
                        _inf_value15->kind=(void*)sRShiftNode_kind;
                        __result283__ = __result_obj__ = ((struct sNode*)(right_value444=_inf_value15));
                        if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
                        if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0); } 
                        if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result283__;
                        __freed_obj__ = 0;
                        if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
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
    __result284__ = __result_obj__ = node_261;
    if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result284__;
    __freed_obj__ = 0;
    if(node_261 && !__freed_obj__) { node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional418=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional418) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional419=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional419) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional420=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional421;
struct sLShiftNode* __result278__;
void* right_value432;
struct sLShiftNode* result_267;
_Bool _if_conditional422;
void* right_value433;
struct sNode* __dec_obj200;
_Bool _if_conditional423;
void* right_value434;
struct sNode* __dec_obj201;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value435;
char* __dec_obj202;
struct sLShiftNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value432, 0, sizeof(void*));
memset(&result_267, 0, sizeof(struct sLShiftNode*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
                        if(_if_conditional421=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional421) {
                            __result278__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result278__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_267=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value432=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3))));
                        if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional422=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional422) {
                            __dec_obj200=((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 4))->mLeft;
                            ((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=sNode_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 4))->mLeft))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional423=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            __dec_obj201=((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 5))->mRight;
                            ((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 5))->mRight))));
                            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0); }
                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { right_value434 = come_decrement_ref_count(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional424=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            ((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 6))->mQuote=((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional425=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional425) {
                            ((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 7))->sline=((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional426=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            __dec_obj202=((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 8))->sname;
                            ((struct sLShiftNode*)come_null_check(result_267, "sLShiftNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 8))->sname))));
                            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0,0); }
                            if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result279__ = __result_obj__ = result_267;
                        if(result_267 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result279__;
                        __freed_obj__ = 0;
                        if(result_267 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional428=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional428) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional429=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional429) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional430=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional430) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional431;
struct sRShiftNode* __result281__;
void* right_value440;
struct sRShiftNode* result_269;
_Bool _if_conditional432;
void* right_value441;
struct sNode* __dec_obj203;
_Bool _if_conditional433;
void* right_value442;
struct sNode* __dec_obj204;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value443;
char* __dec_obj205;
struct sRShiftNode* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value440, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sRShiftNode*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
                            if(_if_conditional431=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional431) {
                                __result281__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result281__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_269=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value440=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3))));
                            if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional432=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional432) {
                                __dec_obj203=((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 4))->mLeft;
                                ((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=sNode_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 4))->mLeft))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional433=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional433) {
                                __dec_obj204=((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 5))->mRight;
                                ((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 5))->mRight))));
                                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0); }
                                if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional434=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional434) {
                                ((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 6))->mQuote=((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional435=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional435) {
                                ((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 7))->sline=((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional436=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional436) {
                                __dec_obj205=((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 8))->sname;
                                ((struct sRShiftNode*)come_null_check(result_269, "sRShiftNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 8))->sname))));
                                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0,0); }
                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result282__ = __result_obj__ = result_269;
                            if(result_269 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result282__;
                            __freed_obj__ = 0;
                            if(result_269 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value445;
struct sNode* node_270;
_Bool _while_condtional13;
_Bool _if_conditional437;
void* right_value446;
struct sNode* right_271;
void* right_value447;
void* right_value448;
struct sNode* _inf_value16;
struct sGtEqNode* _inf_obj_value16;
void* right_value453;
struct sNode* __result287__;
_Bool _if_conditional447;
void* right_value454;
struct sNode* right_273;
void* right_value455;
void* right_value456;
struct sNode* _inf_value17;
struct sLtEqNode* _inf_obj_value17;
void* right_value461;
struct sNode* __result290__;
_Bool _if_conditional457;
void* right_value462;
struct sNode* right_275;
void* right_value463;
void* right_value464;
struct sNode* _inf_value18;
struct sGtNode* _inf_obj_value18;
void* right_value469;
struct sNode* __result293__;
_Bool _if_conditional467;
void* right_value470;
struct sNode* right_277;
void* right_value471;
void* right_value472;
struct sNode* _inf_value19;
struct sLtNode* _inf_obj_value19;
void* right_value477;
struct sNode* __result296__;
_Bool _if_conditional477;
void* right_value478;
struct sNode* right_279;
void* right_value479;
void* right_value480;
struct sNode* _inf_value20;
struct sGtEqNode* _inf_obj_value20;
void* right_value485;
struct sNode* __result299__;
_Bool _if_conditional487;
void* right_value486;
struct sNode* right_281;
void* right_value487;
void* right_value488;
struct sNode* _inf_value21;
struct sLtEqNode* _inf_obj_value21;
void* right_value493;
struct sNode* __result302__;
_Bool _if_conditional497;
void* right_value494;
struct sNode* right_283;
void* right_value495;
void* right_value496;
struct sNode* _inf_value22;
struct sGtNode* _inf_obj_value22;
void* right_value501;
struct sNode* __result305__;
_Bool _if_conditional507;
void* right_value502;
struct sNode* right_285;
void* right_value503;
void* right_value504;
struct sNode* _inf_value23;
struct sLtNode* _inf_obj_value23;
void* right_value509;
struct sNode* __result308__;
struct sNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value445, 0, sizeof(void*));
memset(&node_270, 0, sizeof(struct sNode*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_271, 0, sizeof(struct sNode*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_273, 0, sizeof(struct sNode*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_275, 0, sizeof(struct sNode*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_277, 0, sizeof(struct sNode*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value472, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_279, 0, sizeof(struct sNode*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_281, 0, sizeof(struct sNode*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_283, 0, sizeof(struct sNode*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_285, 0, sizeof(struct sNode*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=shift_exp(info))));
    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional13=*((struct sInfo*)come_null_check(info, "13op.c", 2433))->p,    __freed_obj__ = 0, 
    _while_condtional13) {
        if(_if_conditional437=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==61,        __freed_obj__ = 0, 
        _if_conditional437) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2365))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=shift_exp(info))));
            if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2370);
            _inf_obj_value16=come_increment_ref_count(((struct sGtEqNode*)(right_value448=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value447=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2370)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_271),(_Bool)0,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sGtEqNode_finalize;
            _inf_value16->clone=(void*)sGtEqNode_clone;
            _inf_value16->compile=(void*)sGtEqNode_compile;
            _inf_value16->sline=(void*)sGtEqNode_sline;
            _inf_value16->sname=(void*)sGtEqNode_sname;
            _inf_value16->terminated=(void*)sGtEqNode_terminated;
            _inf_value16->kind=(void*)sGtEqNode_kind;
            __result287__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value16));
            if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
            if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
            if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result287__;
            __freed_obj__ = 0;
            if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional447=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==61,            __freed_obj__ = 0, 
            _if_conditional447) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2373))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=shift_exp(info))));
                if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2378);
                _inf_obj_value17=come_increment_ref_count(((struct sLtEqNode*)(right_value456=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value455=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2378)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sLtEqNode_finalize;
                _inf_value17->clone=(void*)sLtEqNode_clone;
                _inf_value17->compile=(void*)sLtEqNode_compile;
                _inf_value17->sline=(void*)sLtEqNode_sline;
                _inf_value17->sname=(void*)sLtEqNode_sname;
                _inf_value17->terminated=(void*)sLtEqNode_terminated;
                _inf_value17->kind=(void*)sLtEqNode_kind;
                __result290__ = __result_obj__ = ((struct sNode*)(right_value461=_inf_value17));
                if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
                if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result290__;
                __freed_obj__ = 0;
                if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional457=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)!=62,                __freed_obj__ = 0, 
                _if_conditional457) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2381))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=shift_exp(info))));
                    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { right_value462 = come_decrement_ref_count(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2386);
                    _inf_obj_value18=come_increment_ref_count(((struct sGtNode*)(right_value464=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value463=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2386)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_275),(_Bool)0,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sGtNode_finalize;
                    _inf_value18->clone=(void*)sGtNode_clone;
                    _inf_value18->compile=(void*)sGtNode_compile;
                    _inf_value18->sline=(void*)sGtNode_sline;
                    _inf_value18->sname=(void*)sGtNode_sname;
                    _inf_value18->terminated=(void*)sGtNode_terminated;
                    _inf_value18->kind=(void*)sGtNode_kind;
                    __result293__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value18));
                    if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                    if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                    if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result293__;
                    __freed_obj__ = 0;
                    if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional467=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)!=60,                    __freed_obj__ = 0, 
                    _if_conditional467) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2389))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=shift_exp(info))));
                        if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2394);
                        _inf_obj_value19=come_increment_ref_count(((struct sLtNode*)(right_value472=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value471=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2394)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_277),(_Bool)0,info))));
                        _inf_value19->_protocol_obj=_inf_obj_value19;
                        _inf_value19->finalize=(void*)sLtNode_finalize;
                        _inf_value19->clone=(void*)sLtNode_clone;
                        _inf_value19->compile=(void*)sLtNode_compile;
                        _inf_value19->sline=(void*)sLtNode_sline;
                        _inf_value19->sname=(void*)sLtNode_sname;
                        _inf_value19->terminated=(void*)sLtNode_terminated;
                        _inf_value19->kind=(void*)sLtNode_kind;
                        __result296__ = __result_obj__ = ((struct sNode*)(right_value477=_inf_value19));
                        if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                        if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                        if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result296__;
                        __freed_obj__ = 0;
                        if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional477=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+2)==61,                        __freed_obj__ = 0, 
                        _if_conditional477) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2397))->p+=3;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=shift_exp(info))));
                            if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { right_value478 = come_decrement_ref_count(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2402);
                            _inf_obj_value20=come_increment_ref_count(((struct sGtEqNode*)(right_value480=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value479=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2402)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_279),(_Bool)1,info))));
                            _inf_value20->_protocol_obj=_inf_obj_value20;
                            _inf_value20->finalize=(void*)sGtEqNode_finalize;
                            _inf_value20->clone=(void*)sGtEqNode_clone;
                            _inf_value20->compile=(void*)sGtEqNode_compile;
                            _inf_value20->sline=(void*)sGtEqNode_sline;
                            _inf_value20->sname=(void*)sGtEqNode_sname;
                            _inf_value20->terminated=(void*)sGtEqNode_terminated;
                            _inf_value20->kind=(void*)sGtEqNode_kind;
                            __result299__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value20));
                            if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
                            if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                            if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result299__;
                            __freed_obj__ = 0;
                            if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional487=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+2)==61,                            __freed_obj__ = 0, 
                            _if_conditional487) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2405))->p+=3;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=shift_exp(info))));
                                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { right_value486 = come_decrement_ref_count(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2410);
                                _inf_obj_value21=come_increment_ref_count(((struct sLtEqNode*)(right_value488=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value487=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2410)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                                _inf_value21->_protocol_obj=_inf_obj_value21;
                                _inf_value21->finalize=(void*)sLtEqNode_finalize;
                                _inf_value21->clone=(void*)sLtEqNode_clone;
                                _inf_value21->compile=(void*)sLtEqNode_compile;
                                _inf_value21->sline=(void*)sLtEqNode_sline;
                                _inf_value21->sname=(void*)sLtEqNode_sname;
                                _inf_value21->terminated=(void*)sLtEqNode_terminated;
                                _inf_value21->kind=(void*)sLtEqNode_kind;
                                __result302__ = __result_obj__ = ((struct sNode*)(right_value493=_inf_value21));
                                if(right_281 && !__freed_obj__) { right_281 = come_decrement_ref_count(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0); } 
                                if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                                if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result302__;
                                __freed_obj__ = 0;
                                if(right_281 && !__freed_obj__) { right_281 = come_decrement_ref_count(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional497=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+2)!=62,                                __freed_obj__ = 0, 
                                _if_conditional497) {
                                    ((struct sInfo*)come_null_check(info, "13op.c", 2413))->p+=2;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    right_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=shift_exp(info))));
                                    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { right_value494 = come_decrement_ref_count(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2418);
                                    _inf_obj_value22=come_increment_ref_count(((struct sGtNode*)(right_value496=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value495=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2418)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_283),(_Bool)1,info))));
                                    _inf_value22->_protocol_obj=_inf_obj_value22;
                                    _inf_value22->finalize=(void*)sGtNode_finalize;
                                    _inf_value22->clone=(void*)sGtNode_clone;
                                    _inf_value22->compile=(void*)sGtNode_compile;
                                    _inf_value22->sline=(void*)sGtNode_sline;
                                    _inf_value22->sname=(void*)sGtNode_sname;
                                    _inf_value22->terminated=(void*)sGtNode_terminated;
                                    _inf_value22->kind=(void*)sGtNode_kind;
                                    __result305__ = __result_obj__ = ((struct sNode*)(right_value501=_inf_value22));
                                    if(right_283 && !__freed_obj__) { right_283 = come_decrement_ref_count(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0); } 
                                    if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result305__;
                                    __freed_obj__ = 0;
                                    if(right_283 && !__freed_obj__) { right_283 = come_decrement_ref_count(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional507=*((struct sInfo*)come_null_check(info, "13op.c", 2431))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2431))->p+2)!=60,                                    __freed_obj__ = 0, 
                                    _if_conditional507) {
                                        ((struct sInfo*)come_null_check(info, "13op.c", 2421))->p+=2;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value502=shift_exp(info))));
                                        if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2426);
                                        _inf_obj_value23=come_increment_ref_count(((struct sLtNode*)(right_value504=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value503=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2426)))),(struct sNode*)come_increment_ref_count(node_270),(struct sNode*)come_increment_ref_count(right_285),(_Bool)1,info))));
                                        _inf_value23->_protocol_obj=_inf_obj_value23;
                                        _inf_value23->finalize=(void*)sLtNode_finalize;
                                        _inf_value23->clone=(void*)sLtNode_clone;
                                        _inf_value23->compile=(void*)sLtNode_compile;
                                        _inf_value23->sline=(void*)sLtNode_sline;
                                        _inf_value23->sname=(void*)sLtNode_sname;
                                        _inf_value23->terminated=(void*)sLtNode_terminated;
                                        _inf_value23->kind=(void*)sLtNode_kind;
                                        __result308__ = __result_obj__ = ((struct sNode*)(right_value509=_inf_value23));
                                        if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
                                        if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result308__;
                                        __freed_obj__ = 0;
                                        if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
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
    __result309__ = __result_obj__ = node_270;
    if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result309__;
    __freed_obj__ = 0;
    if(node_270 && !__freed_obj__) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional478=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional478) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional479=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional479) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional480=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional480) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional481;
struct sGtEqNode* __result297__;
void* right_value481;
struct sGtEqNode* result_280;
_Bool _if_conditional482;
void* right_value482;
struct sNode* __dec_obj218;
_Bool _if_conditional483;
void* right_value483;
struct sNode* __dec_obj219;
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
void* right_value484;
char* __dec_obj220;
struct sGtEqNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value481, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sGtEqNode*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
                                if(_if_conditional481=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional481) {
                                    __result297__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result297__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_280=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value481=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3))));
                                if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional482=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional482) {
                                    __dec_obj218=((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 4))->mLeft;
                                    ((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=sNode_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 4))->mLeft))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0); }
                                    if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional483=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional483) {
                                    __dec_obj219=((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 5))->mRight;
                                    ((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=sNode_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 5))->mRight))));
                                    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0); }
                                    if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional484=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional484) {
                                    ((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 6))->mQuote=((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional485=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional485) {
                                    ((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 7))->sline=((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional486=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional486) {
                                    __dec_obj220=((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 8))->sname;
                                    ((struct sGtEqNode*)come_null_check(result_280, "sGtEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value484=string_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 8))->sname))));
                                    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result298__ = __result_obj__ = result_280;
                                if(result_280 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result298__;
                                __freed_obj__ = 0;
                                if(result_280 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional488=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional488) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional489=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional489) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional490=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional490) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional491;
struct sLtEqNode* __result300__;
void* right_value489;
struct sLtEqNode* result_282;
_Bool _if_conditional492;
void* right_value490;
struct sNode* __dec_obj221;
_Bool _if_conditional493;
void* right_value491;
struct sNode* __dec_obj222;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
void* right_value492;
char* __dec_obj223;
struct sLtEqNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value489, 0, sizeof(void*));
memset(&result_282, 0, sizeof(struct sLtEqNode*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
                                    if(_if_conditional491=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional491) {
                                        __result300__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result300__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_282=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value489=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3))));
                                    if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional492=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional492) {
                                        __dec_obj221=((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 4))->mLeft;
                                        ((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=sNode_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 4))->mLeft))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0); }
                                        if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional493=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional493) {
                                        __dec_obj222=((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 5))->mRight;
                                        ((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=sNode_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 5))->mRight))));
                                        if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0); }
                                        if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional494=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional494) {
                                        ((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 6))->mQuote=((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional495=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional495) {
                                        ((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 7))->sline=((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional496=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional496) {
                                        __dec_obj223=((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 8))->sname;
                                        ((struct sLtEqNode*)come_null_check(result_282, "sLtEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value492=string_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 8))->sname))));
                                        if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result301__ = __result_obj__ = result_282;
                                    if(result_282 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result301__;
                                    __freed_obj__ = 0;
                                    if(result_282 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional498=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional498) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional499=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional499) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional500=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 3))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional500) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional501;
struct sGtNode* __result303__;
void* right_value497;
struct sGtNode* result_284;
_Bool _if_conditional502;
void* right_value498;
struct sNode* __dec_obj224;
_Bool _if_conditional503;
void* right_value499;
struct sNode* __dec_obj225;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
void* right_value500;
char* __dec_obj226;
struct sGtNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value497, 0, sizeof(void*));
memset(&result_284, 0, sizeof(struct sGtNode*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
                                        if(_if_conditional501=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional501) {
                                            __result303__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result303__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_284=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value497=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3))));
                                        if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional502=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 5))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional502) {
                                            __dec_obj224=((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 4))->mLeft;
                                            ((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=sNode_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 4))->mLeft))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0); }
                                            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional503=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 6))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional503) {
                                            __dec_obj225=((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 5))->mRight;
                                            ((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value499=sNode_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 5))->mRight))));
                                            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0); }
                                            if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional504=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional504) {
                                            ((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 6))->mQuote=((struct sGtNode*)come_null_check(self, "sGtNode_clone", 6))->mQuote;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional505=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional505) {
                                            ((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 7))->sline=((struct sGtNode*)come_null_check(self, "sGtNode_clone", 7))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional506=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 9))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional506) {
                                            __dec_obj226=((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 8))->sname;
                                            ((struct sGtNode*)come_null_check(result_284, "sGtNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value500=string_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 8))->sname))));
                                            if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result304__ = __result_obj__ = result_284;
                                        if(result_284 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result304__;
                                        __freed_obj__ = 0;
                                        if(result_284 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional508=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional508) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional509=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional509) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional510=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 3))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional510) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional511;
struct sLtNode* __result306__;
void* right_value505;
struct sLtNode* result_286;
_Bool _if_conditional512;
void* right_value506;
struct sNode* __dec_obj227;
_Bool _if_conditional513;
void* right_value507;
struct sNode* __dec_obj228;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
void* right_value508;
char* __dec_obj229;
struct sLtNode* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value505, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sLtNode*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_value507, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
                                            if(_if_conditional511=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional511) {
                                                __result306__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result306__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_286=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value505=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3))));
                                            if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional512=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 5))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional512) {
                                                __dec_obj227=((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 4))->mLeft;
                                                ((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value506=sNode_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 4))->mLeft))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0); }
                                                if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional513=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 6))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional513) {
                                                __dec_obj228=((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 5))->mRight;
                                                ((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=sNode_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 5))->mRight))));
                                                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0); }
                                                if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional514=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional514) {
                                                ((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 6))->mQuote=((struct sLtNode*)come_null_check(self, "sLtNode_clone", 6))->mQuote;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional515=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional515) {
                                                ((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 7))->sline=((struct sLtNode*)come_null_check(self, "sLtNode_clone", 7))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional516=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 9))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional516) {
                                                __dec_obj229=((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 8))->sname;
                                                ((struct sLtNode*)come_null_check(result_286, "sLtNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value508=string_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 8))->sname))));
                                                if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result307__ = __result_obj__ = result_286;
                                            if(result_286 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result307__;
                                            __freed_obj__ = 0;
                                            if(result_286 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value510;
struct sNode* node_287;
_Bool _while_condtional14;
_Bool _if_conditional517;
void* right_value511;
struct sNode* right_288;
void* right_value512;
void* right_value513;
struct sNode* _inf_value24;
struct sEq2Node* _inf_obj_value24;
void* right_value518;
struct sNode* __result312__;
_Bool _if_conditional527;
void* right_value519;
struct sNode* right_290;
void* right_value520;
void* right_value521;
struct sNode* _inf_value25;
struct sEqNode* _inf_obj_value25;
void* right_value526;
struct sNode* __result315__;
_Bool _if_conditional537;
void* right_value527;
struct sNode* right_292;
void* right_value528;
void* right_value529;
struct sNode* _inf_value26;
struct sNotEq2Node* _inf_obj_value26;
void* right_value534;
struct sNode* __result318__;
_Bool _if_conditional547;
void* right_value535;
struct sNode* right_294;
void* right_value536;
void* right_value537;
struct sNode* _inf_value27;
struct sNotEqNode* _inf_obj_value27;
void* right_value542;
struct sNode* __result321__;
_Bool _if_conditional557;
void* right_value543;
struct sNode* right_296;
void* right_value544;
void* right_value545;
struct sNode* _inf_value28;
struct sEq2Node* _inf_obj_value28;
void* right_value550;
struct sNode* __result324__;
_Bool _if_conditional567;
void* right_value551;
struct sNode* right_298;
void* right_value552;
void* right_value553;
struct sNode* _inf_value29;
struct sEqNode* _inf_obj_value29;
void* right_value558;
struct sNode* __result327__;
_Bool _if_conditional577;
void* right_value559;
struct sNode* right_300;
void* right_value560;
void* right_value561;
struct sNode* _inf_value30;
struct sNotEq2Node* _inf_obj_value30;
void* right_value566;
struct sNode* __result330__;
_Bool _if_conditional587;
void* right_value567;
struct sNode* right_302;
void* right_value568;
void* right_value569;
struct sNode* _inf_value31;
struct sNotEqNode* _inf_obj_value31;
void* right_value574;
struct sNode* __result333__;
struct sNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value510, 0, sizeof(void*));
memset(&node_287, 0, sizeof(struct sNode*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_288, 0, sizeof(struct sNode*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_290, 0, sizeof(struct sNode*));
memset(&right_value520, 0, sizeof(void*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_292, 0, sizeof(struct sNode*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_294, 0, sizeof(struct sNode*));
memset(&right_value536, 0, sizeof(void*));
memset(&right_value537, 0, sizeof(void*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_296, 0, sizeof(struct sNode*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
memset(&right_298, 0, sizeof(struct sNode*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value553, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_300, 0, sizeof(struct sNode*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
memset(&right_value566, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_302, 0, sizeof(struct sNode*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_value569, 0, sizeof(void*));
memset(&right_value574, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=comparison_exp(info))));
    if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { right_value510 = come_decrement_ref_count(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional14=*((struct sInfo*)come_null_check(info, "13op.c", 2516))->p,    __freed_obj__ = 0, 
    _while_condtional14) {
        if(_if_conditional517=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61,        __freed_obj__ = 0, 
        _if_conditional517) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2448))->p+=3;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=eq_exp(info))));
            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2453);
            _inf_obj_value24=come_increment_ref_count(((struct sEq2Node*)(right_value513=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value512=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2453)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sEq2Node_finalize;
            _inf_value24->clone=(void*)sEq2Node_clone;
            _inf_value24->compile=(void*)sEq2Node_compile;
            _inf_value24->sline=(void*)sEq2Node_sline;
            _inf_value24->sname=(void*)sEq2Node_sname;
            _inf_value24->terminated=(void*)sEq2Node_terminated;
            _inf_value24->kind=(void*)sEq2Node_kind;
            __result312__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value24));
            if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
            if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
            if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result312__;
            __freed_obj__ = 0;
            if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional527=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61,            __freed_obj__ = 0, 
            _if_conditional527) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2456))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=eq_exp(info))));
                if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { right_value519 = come_decrement_ref_count(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2461);
                _inf_obj_value25=come_increment_ref_count(((struct sEqNode*)(right_value521=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value520=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2461)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sEqNode_finalize;
                _inf_value25->clone=(void*)sEqNode_clone;
                _inf_value25->compile=(void*)sEqNode_compile;
                _inf_value25->sline=(void*)sEqNode_sline;
                _inf_value25->sname=(void*)sEqNode_sname;
                _inf_value25->terminated=(void*)sEqNode_terminated;
                _inf_value25->kind=(void*)sEqNode_kind;
                __result315__ = __result_obj__ = ((struct sNode*)(right_value526=_inf_value25));
                if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
                if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result315__;
                __freed_obj__ = 0;
                if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional537=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61,                __freed_obj__ = 0, 
                _if_conditional537) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2464))->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=eq_exp(info))));
                    if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2469);
                    _inf_obj_value26=come_increment_ref_count(((struct sNotEq2Node*)(right_value529=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value528=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2469)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_292),(_Bool)0,info))));
                    _inf_value26->_protocol_obj=_inf_obj_value26;
                    _inf_value26->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value26->clone=(void*)sNotEq2Node_clone;
                    _inf_value26->compile=(void*)sNotEq2Node_compile;
                    _inf_value26->sline=(void*)sNotEq2Node_sline;
                    _inf_value26->sname=(void*)sNotEq2Node_sname;
                    _inf_value26->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value26->kind=(void*)sNotEq2Node_kind;
                    __result318__ = __result_obj__ = ((struct sNode*)(right_value534=_inf_value26));
                    if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                    if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                    if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result318__;
                    __freed_obj__ = 0;
                    if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional547=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61,                    __freed_obj__ = 0, 
                    _if_conditional547) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2472))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value535=eq_exp(info))));
                        if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { right_value535 = come_decrement_ref_count(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2477);
                        _inf_obj_value27=come_increment_ref_count(((struct sNotEqNode*)(right_value537=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value536=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2477)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_294),(_Bool)0,info))));
                        _inf_value27->_protocol_obj=_inf_obj_value27;
                        _inf_value27->finalize=(void*)sNotEqNode_finalize;
                        _inf_value27->clone=(void*)sNotEqNode_clone;
                        _inf_value27->compile=(void*)sNotEqNode_compile;
                        _inf_value27->sline=(void*)sNotEqNode_sline;
                        _inf_value27->sname=(void*)sNotEqNode_sname;
                        _inf_value27->terminated=(void*)sNotEqNode_terminated;
                        _inf_value27->kind=(void*)sNotEqNode_kind;
                        __result321__ = __result_obj__ = ((struct sNode*)(right_value542=_inf_value27));
                        if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                        if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                        if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result321__;
                        __freed_obj__ = 0;
                        if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional557=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+3)==61,                        __freed_obj__ = 0, 
                        _if_conditional557) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2480))->p+=4;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value543=eq_exp(info))));
                            if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { right_value543 = come_decrement_ref_count(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2485);
                            _inf_obj_value28=come_increment_ref_count(((struct sEq2Node*)(right_value545=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value544=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2485)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_296),(_Bool)1,info))));
                            _inf_value28->_protocol_obj=_inf_obj_value28;
                            _inf_value28->finalize=(void*)sEq2Node_finalize;
                            _inf_value28->clone=(void*)sEq2Node_clone;
                            _inf_value28->compile=(void*)sEq2Node_compile;
                            _inf_value28->sline=(void*)sEq2Node_sline;
                            _inf_value28->sname=(void*)sEq2Node_sname;
                            _inf_value28->terminated=(void*)sEq2Node_terminated;
                            _inf_value28->kind=(void*)sEq2Node_kind;
                            __result324__ = __result_obj__ = ((struct sNode*)(right_value550=_inf_value28));
                            if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
                            if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                            if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result324__;
                            __freed_obj__ = 0;
                            if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional567=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61,                            __freed_obj__ = 0, 
                            _if_conditional567) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2488))->p+=3;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value551=eq_exp(info))));
                                if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { right_value551 = come_decrement_ref_count(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2493);
                                _inf_obj_value29=come_increment_ref_count(((struct sEqNode*)(right_value553=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value552=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2493)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                _inf_value29->finalize=(void*)sEqNode_finalize;
                                _inf_value29->clone=(void*)sEqNode_clone;
                                _inf_value29->compile=(void*)sEqNode_compile;
                                _inf_value29->sline=(void*)sEqNode_sline;
                                _inf_value29->sname=(void*)sEqNode_sname;
                                _inf_value29->terminated=(void*)sEqNode_terminated;
                                _inf_value29->kind=(void*)sEqNode_kind;
                                __result327__ = __result_obj__ = ((struct sNode*)(right_value558=_inf_value29));
                                if(right_298 && !__freed_obj__) { right_298 = come_decrement_ref_count(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0); } 
                                if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                                if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result327__;
                                __freed_obj__ = 0;
                                if(right_298 && !__freed_obj__) { right_298 = come_decrement_ref_count(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional577=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+3)==61,                                __freed_obj__ = 0, 
                                _if_conditional577) {
                                    ((struct sInfo*)come_null_check(info, "13op.c", 2496))->p+=4;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    right_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=eq_exp(info))));
                                    if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { right_value559 = come_decrement_ref_count(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2501);
                                    _inf_obj_value30=come_increment_ref_count(((struct sNotEq2Node*)(right_value561=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value560=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2501)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_300),(_Bool)1,info))));
                                    _inf_value30->_protocol_obj=_inf_obj_value30;
                                    _inf_value30->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value30->clone=(void*)sNotEq2Node_clone;
                                    _inf_value30->compile=(void*)sNotEq2Node_compile;
                                    _inf_value30->sline=(void*)sNotEq2Node_sline;
                                    _inf_value30->sname=(void*)sNotEq2Node_sname;
                                    _inf_value30->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value30->kind=(void*)sNotEq2Node_kind;
                                    __result330__ = __result_obj__ = ((struct sNode*)(right_value566=_inf_value30));
                                    if(right_300 && !__freed_obj__) { right_300 = come_decrement_ref_count(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0); } 
                                    if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result330__;
                                    __freed_obj__ = 0;
                                    if(right_300 && !__freed_obj__) { right_300 = come_decrement_ref_count(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional587=*((struct sInfo*)come_null_check(info, "13op.c", 2514))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+1)==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2514))->p+2)==61,                                    __freed_obj__ = 0, 
                                    _if_conditional587) {
                                        ((struct sInfo*)come_null_check(info, "13op.c", 2504))->p+=3;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value567=eq_exp(info))));
                                        if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { right_value567 = come_decrement_ref_count(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2509);
                                        _inf_obj_value31=come_increment_ref_count(((struct sNotEqNode*)(right_value569=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value568=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2509)))),(struct sNode*)come_increment_ref_count(node_287),(struct sNode*)come_increment_ref_count(right_302),(_Bool)1,info))));
                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                        _inf_value31->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value31->clone=(void*)sNotEqNode_clone;
                                        _inf_value31->compile=(void*)sNotEqNode_compile;
                                        _inf_value31->sline=(void*)sNotEqNode_sline;
                                        _inf_value31->sname=(void*)sNotEqNode_sname;
                                        _inf_value31->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value31->kind=(void*)sNotEqNode_kind;
                                        __result333__ = __result_obj__ = ((struct sNode*)(right_value574=_inf_value31));
                                        if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
                                        if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result333__;
                                        __freed_obj__ = 0;
                                        if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
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
    __result334__ = __result_obj__ = node_287;
    if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result334__;
    __freed_obj__ = 0;
    if(node_287 && !__freed_obj__) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional558;
_Bool _if_conditional559;
_Bool _if_conditional560;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional558=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional558) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional559=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional559) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional560=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional560) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional561;
struct sEq2Node* __result322__;
void* right_value546;
struct sEq2Node* result_297;
_Bool _if_conditional562;
void* right_value547;
struct sNode* __dec_obj242;
_Bool _if_conditional563;
void* right_value548;
struct sNode* __dec_obj243;
_Bool _if_conditional564;
_Bool _if_conditional565;
_Bool _if_conditional566;
void* right_value549;
char* __dec_obj244;
struct sEq2Node* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value546, 0, sizeof(void*));
memset(&result_297, 0, sizeof(struct sEq2Node*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value549, 0, sizeof(void*));
                                if(_if_conditional561=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional561) {
                                    __result322__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result322__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_297=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value546=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3))));
                                if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional562=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional562) {
                                    __dec_obj242=((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 4))->mLeft;
                                    ((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=sNode_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 4))->mLeft))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0); }
                                    if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { right_value547 = come_decrement_ref_count(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional563=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional563) {
                                    __dec_obj243=((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 5))->mRight;
                                    ((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value548=sNode_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 5))->mRight))));
                                    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0); }
                                    if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { right_value548 = come_decrement_ref_count(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional564=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional564) {
                                    ((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 6))->mQuote=((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional565=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional565) {
                                    ((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 7))->sline=((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional566=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional566) {
                                    __dec_obj244=((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 8))->sname;
                                    ((struct sEq2Node*)come_null_check(result_297, "sEq2Node_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value549=string_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 8))->sname))));
                                    if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { right_value549 = come_decrement_ref_count(right_value549, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result323__ = __result_obj__ = result_297;
                                if(result_297 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result323__;
                                __freed_obj__ = 0;
                                if(result_297 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional568;
_Bool _if_conditional569;
_Bool _if_conditional570;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional568=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional568) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional569=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional569) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional570=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional570) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional571;
struct sEqNode* __result325__;
void* right_value554;
struct sEqNode* result_299;
_Bool _if_conditional572;
void* right_value555;
struct sNode* __dec_obj245;
_Bool _if_conditional573;
void* right_value556;
struct sNode* __dec_obj246;
_Bool _if_conditional574;
_Bool _if_conditional575;
_Bool _if_conditional576;
void* right_value557;
char* __dec_obj247;
struct sEqNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value554, 0, sizeof(void*));
memset(&result_299, 0, sizeof(struct sEqNode*));
memset(&right_value555, 0, sizeof(void*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
                                    if(_if_conditional571=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional571) {
                                        __result325__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result325__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_299=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value554=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3))));
                                    if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional572=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional572) {
                                        __dec_obj245=((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 4))->mLeft;
                                        ((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value555=sNode_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 4))->mLeft))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0); }
                                        if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional573=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional573) {
                                        __dec_obj246=((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 5))->mRight;
                                        ((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=sNode_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 5))->mRight))));
                                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0); }
                                        if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional574=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional574) {
                                        ((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 6))->mQuote=((struct sEqNode*)come_null_check(self, "sEqNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional575=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional575) {
                                        ((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 7))->sline=((struct sEqNode*)come_null_check(self, "sEqNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional576=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional576) {
                                        __dec_obj247=((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 8))->sname;
                                        ((struct sEqNode*)come_null_check(result_299, "sEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value557=string_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 8))->sname))));
                                        if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { right_value557 = come_decrement_ref_count(right_value557, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result326__ = __result_obj__ = result_299;
                                    if(result_299 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result326__;
                                    __freed_obj__ = 0;
                                    if(result_299 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional578;
_Bool _if_conditional579;
_Bool _if_conditional580;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional578=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional578) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional579=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional579) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional580=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 3))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional580) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional581;
struct sNotEq2Node* __result328__;
void* right_value562;
struct sNotEq2Node* result_301;
_Bool _if_conditional582;
void* right_value563;
struct sNode* __dec_obj248;
_Bool _if_conditional583;
void* right_value564;
struct sNode* __dec_obj249;
_Bool _if_conditional584;
_Bool _if_conditional585;
_Bool _if_conditional586;
void* right_value565;
char* __dec_obj250;
struct sNotEq2Node* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value562, 0, sizeof(void*));
memset(&result_301, 0, sizeof(struct sNotEq2Node*));
memset(&right_value563, 0, sizeof(void*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
                                        if(_if_conditional581=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional581) {
                                            __result328__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result328__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_301=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value562=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3))));
                                        if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional582=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 5))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional582) {
                                            __dec_obj248=((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 4))->mLeft;
                                            ((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=sNode_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 4))->mLeft))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0); }
                                            if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional583=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 6))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional583) {
                                            __dec_obj249=((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 5))->mRight;
                                            ((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=sNode_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 5))->mRight))));
                                            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0); }
                                            if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { right_value564 = come_decrement_ref_count(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional584=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional584) {
                                            ((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 6))->mQuote=((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 6))->mQuote;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional585=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional585) {
                                            ((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 7))->sline=((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 7))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional586=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 9))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional586) {
                                            __dec_obj250=((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 8))->sname;
                                            ((struct sNotEq2Node*)come_null_check(result_301, "sNotEq2Node_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value565=string_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 8))->sname))));
                                            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { right_value565 = come_decrement_ref_count(right_value565, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result329__ = __result_obj__ = result_301;
                                        if(result_301 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result329__;
                                        __freed_obj__ = 0;
                                        if(result_301 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional588;
_Bool _if_conditional589;
_Bool _if_conditional590;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional588=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional588) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional589=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional589) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional590=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 3))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional590) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional591;
struct sNotEqNode* __result331__;
void* right_value570;
struct sNotEqNode* result_303;
_Bool _if_conditional592;
void* right_value571;
struct sNode* __dec_obj251;
_Bool _if_conditional593;
void* right_value572;
struct sNode* __dec_obj252;
_Bool _if_conditional594;
_Bool _if_conditional595;
_Bool _if_conditional596;
void* right_value573;
char* __dec_obj253;
struct sNotEqNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value570, 0, sizeof(void*));
memset(&result_303, 0, sizeof(struct sNotEqNode*));
memset(&right_value571, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
memset(&right_value573, 0, sizeof(void*));
                                            if(_if_conditional591=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional591) {
                                                __result331__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result331__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_303=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value570=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3))));
                                            if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional592=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 5))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional592) {
                                                __dec_obj251=((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 4))->mLeft;
                                                ((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=sNode_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 4))->mLeft))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0); }
                                                if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional593=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 6))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional593) {
                                                __dec_obj252=((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 5))->mRight;
                                                ((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=sNode_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 5))->mRight))));
                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0); }
                                                if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { right_value572 = come_decrement_ref_count(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional594=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional594) {
                                                ((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 6))->mQuote=((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 6))->mQuote;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional595=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional595) {
                                                ((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 7))->sline=((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 7))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional596=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 9))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional596) {
                                                __dec_obj253=((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 8))->sname;
                                                ((struct sNotEqNode*)come_null_check(result_303, "sNotEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value573=string_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 8))->sname))));
                                                if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { right_value573 = come_decrement_ref_count(right_value573, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result332__ = __result_obj__ = result_303;
                                            if(result_303 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result332__;
                                            __freed_obj__ = 0;
                                            if(result_303 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value575;
struct sNode* node_304;
_Bool _while_condtional15;
_Bool _if_conditional597;
void* right_value576;
struct sNode* right_305;
void* right_value577;
void* right_value578;
struct sNode* _inf_value32;
struct sAndNode* _inf_obj_value32;
void* right_value583;
struct sNode* __result337__;
_Bool _if_conditional607;
void* right_value584;
struct sNode* right_307;
void* right_value585;
void* right_value586;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value591;
struct sNode* __result340__;
struct sNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value575, 0, sizeof(void*));
memset(&node_304, 0, sizeof(struct sNode*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_305, 0, sizeof(struct sNode*));
memset(&right_value577, 0, sizeof(void*));
memset(&right_value578, 0, sizeof(void*));
memset(&right_value583, 0, sizeof(void*));
memset(&right_value584, 0, sizeof(void*));
memset(&right_307, 0, sizeof(struct sNode*));
memset(&right_value585, 0, sizeof(void*));
memset(&right_value586, 0, sizeof(void*));
memset(&right_value591, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value575=eq_exp(info))));
    if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { right_value575 = come_decrement_ref_count(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "13op.c", 2551))->p,    __freed_obj__ = 0, 
    _while_condtional15) {
        if(_if_conditional597=*((struct sInfo*)come_null_check(info, "13op.c", 2549))->p==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2549))->p+1)!=38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2549))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional597) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2531))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=and_exp(info))));
            if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { right_value576 = come_decrement_ref_count(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2536);
            _inf_obj_value32=come_increment_ref_count(((struct sAndNode*)(right_value578=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value577=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2536)))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_305),(_Bool)0,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sAndNode_finalize;
            _inf_value32->clone=(void*)sAndNode_clone;
            _inf_value32->compile=(void*)sAndNode_compile;
            _inf_value32->sline=(void*)sAndNode_sline;
            _inf_value32->sname=(void*)sAndNode_sname;
            _inf_value32->terminated=(void*)sAndNode_terminated;
            _inf_value32->kind=(void*)sAndNode_kind;
            __result337__ = __result_obj__ = ((struct sNode*)(right_value583=_inf_value32));
            if(right_305 && !__freed_obj__) { right_305 = come_decrement_ref_count(right_305, ((struct sNode*)right_305)->finalize, ((struct sNode*)right_305)->_protocol_obj, 0, 0, 0); } 
            if(node_304 && !__freed_obj__) { node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0); } 
            if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value578 && right_value578 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result337__;
            __freed_obj__ = 0;
            if(right_305 && !__freed_obj__) { right_305 = come_decrement_ref_count(right_305, ((struct sNode*)right_305)->finalize, ((struct sNode*)right_305)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional607=*((struct sInfo*)come_null_check(info, "13op.c", 2549))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2549))->p+1)==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2549))->p+2)!=38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2549))->p+2)!=61,            __freed_obj__ = 0, 
            _if_conditional607) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2539))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=and_exp(info))));
                if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { right_value584 = come_decrement_ref_count(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2544);
                _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value586=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value585=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2544)))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_307),(_Bool)1,info))));
                _inf_value33->_protocol_obj=_inf_obj_value33;
                _inf_value33->finalize=(void*)sAndNode_finalize;
                _inf_value33->clone=(void*)sAndNode_clone;
                _inf_value33->compile=(void*)sAndNode_compile;
                _inf_value33->sline=(void*)sAndNode_sline;
                _inf_value33->sname=(void*)sAndNode_sname;
                _inf_value33->terminated=(void*)sAndNode_terminated;
                _inf_value33->kind=(void*)sAndNode_kind;
                __result340__ = __result_obj__ = ((struct sNode*)(right_value591=_inf_value33));
                if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
                if(node_304 && !__freed_obj__) { node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0); } 
                if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value586 && right_value586 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result340__;
                __freed_obj__ = 0;
                if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
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
    __result341__ = __result_obj__ = node_304;
    if(node_304 && !__freed_obj__) { node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result341__;
    __freed_obj__ = 0;
    if(node_304 && !__freed_obj__) { node_304 = come_decrement_ref_count(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional608=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional608) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional609=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional609) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional610=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional610) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional611;
struct sAndNode* __result338__;
void* right_value587;
struct sAndNode* result_308;
_Bool _if_conditional612;
void* right_value588;
struct sNode* __dec_obj257;
_Bool _if_conditional613;
void* right_value589;
struct sNode* __dec_obj258;
_Bool _if_conditional614;
_Bool _if_conditional615;
_Bool _if_conditional616;
void* right_value590;
char* __dec_obj259;
struct sAndNode* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value587, 0, sizeof(void*));
memset(&result_308, 0, sizeof(struct sAndNode*));
memset(&right_value588, 0, sizeof(void*));
memset(&right_value589, 0, sizeof(void*));
memset(&right_value590, 0, sizeof(void*));
                    if(_if_conditional611=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional611) {
                        __result338__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result338__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_308=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value587=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3))));
                    if(right_value587 && right_value587 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional612=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional612) {
                        __dec_obj257=((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 4))->mLeft;
                        ((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value588=sNode_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 4))->mLeft))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0); }
                        if(right_value588 && right_value588 != __result_obj__ && !__freed_obj__) { right_value588 = come_decrement_ref_count(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional613=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional613) {
                        __dec_obj258=((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 5))->mRight;
                        ((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 5))->mRight))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0); }
                        if(right_value589 && right_value589 != __result_obj__ && !__freed_obj__) { right_value589 = come_decrement_ref_count(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional614=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional614) {
                        ((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 6))->mQuote=((struct sAndNode*)come_null_check(self, "sAndNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional615=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional615) {
                        ((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 7))->sline=((struct sAndNode*)come_null_check(self, "sAndNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional616=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional616) {
                        __dec_obj259=((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 8))->sname;
                        ((struct sAndNode*)come_null_check(result_308, "sAndNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value590=string_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 8))->sname))));
                        if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0,0); }
                        if(right_value590 && right_value590 != __result_obj__ && !__freed_obj__) { right_value590 = come_decrement_ref_count(right_value590, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result339__ = __result_obj__ = result_308;
                    if(result_308 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_308, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result339__;
                    __freed_obj__ = 0;
                    if(result_308 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_308, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value592;
struct sNode* node_309;
_Bool _while_condtional16;
_Bool _if_conditional617;
void* right_value593;
struct sNode* right_310;
void* right_value594;
void* right_value595;
struct sNode* _inf_value34;
struct sXOrNode* _inf_obj_value34;
void* right_value600;
struct sNode* __result344__;
_Bool _if_conditional627;
void* right_value601;
struct sNode* right_312;
void* right_value602;
void* right_value603;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value608;
struct sNode* __result347__;
struct sNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value592, 0, sizeof(void*));
memset(&node_309, 0, sizeof(struct sNode*));
memset(&right_value593, 0, sizeof(void*));
memset(&right_310, 0, sizeof(struct sNode*));
memset(&right_value594, 0, sizeof(void*));
memset(&right_value595, 0, sizeof(void*));
memset(&right_value600, 0, sizeof(void*));
memset(&right_value601, 0, sizeof(void*));
memset(&right_312, 0, sizeof(struct sNode*));
memset(&right_value602, 0, sizeof(void*));
memset(&right_value603, 0, sizeof(void*));
memset(&right_value608, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value592=and_exp(info))));
    if(right_value592 && right_value592 != __result_obj__ && !__freed_obj__) { right_value592 = come_decrement_ref_count(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional16=*((struct sInfo*)come_null_check(info, "13op.c", 2586))->p,    __freed_obj__ = 0, 
    _while_condtional16) {
        if(_if_conditional617=*((struct sInfo*)come_null_check(info, "13op.c", 2584))->p==94&&*(((struct sInfo*)come_null_check(info, "13op.c", 2584))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional617) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2566))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=xor_exp(info))));
            if(right_value593 && right_value593 != __result_obj__ && !__freed_obj__) { right_value593 = come_decrement_ref_count(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2571);
            _inf_obj_value34=come_increment_ref_count(((struct sXOrNode*)(right_value595=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value594=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2571)))),(struct sNode*)come_increment_ref_count(node_309),(struct sNode*)come_increment_ref_count(right_310),(_Bool)0,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sXOrNode_finalize;
            _inf_value34->clone=(void*)sXOrNode_clone;
            _inf_value34->compile=(void*)sXOrNode_compile;
            _inf_value34->sline=(void*)sXOrNode_sline;
            _inf_value34->sname=(void*)sXOrNode_sname;
            _inf_value34->terminated=(void*)sXOrNode_terminated;
            _inf_value34->kind=(void*)sXOrNode_kind;
            __result344__ = __result_obj__ = ((struct sNode*)(right_value600=_inf_value34));
            if(right_310 && !__freed_obj__) { right_310 = come_decrement_ref_count(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0); } 
            if(node_309 && !__freed_obj__) { node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0); } 
            if(right_value594 && right_value594 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value595 && right_value595 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result344__;
            __freed_obj__ = 0;
            if(right_310 && !__freed_obj__) { right_310 = come_decrement_ref_count(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional627=*((struct sInfo*)come_null_check(info, "13op.c", 2584))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2584))->p+1)==94&&*(((struct sInfo*)come_null_check(info, "13op.c", 2584))->p+2)!=61,            __freed_obj__ = 0, 
            _if_conditional627) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2574))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=xor_exp(info))));
                if(right_value601 && right_value601 != __result_obj__ && !__freed_obj__) { right_value601 = come_decrement_ref_count(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2579);
                _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value603=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value602=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2579)))),(struct sNode*)come_increment_ref_count(node_309),(struct sNode*)come_increment_ref_count(right_312),(_Bool)1,info))));
                _inf_value35->_protocol_obj=_inf_obj_value35;
                _inf_value35->finalize=(void*)sXOrNode_finalize;
                _inf_value35->clone=(void*)sXOrNode_clone;
                _inf_value35->compile=(void*)sXOrNode_compile;
                _inf_value35->sline=(void*)sXOrNode_sline;
                _inf_value35->sname=(void*)sXOrNode_sname;
                _inf_value35->terminated=(void*)sXOrNode_terminated;
                _inf_value35->kind=(void*)sXOrNode_kind;
                __result347__ = __result_obj__ = ((struct sNode*)(right_value608=_inf_value35));
                if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
                if(node_309 && !__freed_obj__) { node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0); } 
                if(right_value602 && right_value602 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value603 && right_value603 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result347__;
                __freed_obj__ = 0;
                if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
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
    __result348__ = __result_obj__ = node_309;
    if(node_309 && !__freed_obj__) { node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result348__;
    __freed_obj__ = 0;
    if(node_309 && !__freed_obj__) { node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional628;
_Bool _if_conditional629;
_Bool _if_conditional630;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional628=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional628) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional629=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional629) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional630=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional630) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional631;
struct sXOrNode* __result345__;
void* right_value604;
struct sXOrNode* result_313;
_Bool _if_conditional632;
void* right_value605;
struct sNode* __dec_obj263;
_Bool _if_conditional633;
void* right_value606;
struct sNode* __dec_obj264;
_Bool _if_conditional634;
_Bool _if_conditional635;
_Bool _if_conditional636;
void* right_value607;
char* __dec_obj265;
struct sXOrNode* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value604, 0, sizeof(void*));
memset(&result_313, 0, sizeof(struct sXOrNode*));
memset(&right_value605, 0, sizeof(void*));
memset(&right_value606, 0, sizeof(void*));
memset(&right_value607, 0, sizeof(void*));
                    if(_if_conditional631=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional631) {
                        __result345__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result345__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_313=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value604=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3))));
                    if(right_value604 && right_value604 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional632=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional632) {
                        __dec_obj263=((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 4))->mLeft;
                        ((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value605=sNode_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 4))->mLeft))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0); }
                        if(right_value605 && right_value605 != __result_obj__ && !__freed_obj__) { right_value605 = come_decrement_ref_count(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional633=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional633) {
                        __dec_obj264=((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 5))->mRight;
                        ((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=sNode_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 5))->mRight))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0); }
                        if(right_value606 && right_value606 != __result_obj__ && !__freed_obj__) { right_value606 = come_decrement_ref_count(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional634=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional634) {
                        ((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 6))->mQuote=((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional635=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional635) {
                        ((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 7))->sline=((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional636=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional636) {
                        __dec_obj265=((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 8))->sname;
                        ((struct sXOrNode*)come_null_check(result_313, "sXOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value607=string_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 8))->sname))));
                        if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0,0,0); }
                        if(right_value607 && right_value607 != __result_obj__ && !__freed_obj__) { right_value607 = come_decrement_ref_count(right_value607, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result346__ = __result_obj__ = result_313;
                    if(result_313 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_313, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result346__;
                    __freed_obj__ = 0;
                    if(result_313 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_313, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value609;
struct sNode* node_314;
_Bool _while_condtional17;
_Bool _if_conditional637;
void* right_value610;
struct sNode* right_315;
void* right_value611;
void* right_value612;
struct sNode* _inf_value36;
struct sOrNode* _inf_obj_value36;
void* right_value617;
struct sNode* __result351__;
_Bool _if_conditional647;
void* right_value618;
struct sNode* right_317;
void* right_value619;
void* right_value620;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value625;
struct sNode* __result354__;
struct sNode* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value609, 0, sizeof(void*));
memset(&node_314, 0, sizeof(struct sNode*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_315, 0, sizeof(struct sNode*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&right_value617, 0, sizeof(void*));
memset(&right_value618, 0, sizeof(void*));
memset(&right_317, 0, sizeof(struct sNode*));
memset(&right_value619, 0, sizeof(void*));
memset(&right_value620, 0, sizeof(void*));
memset(&right_value625, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value609=xor_exp(info))));
    if(right_value609 && right_value609 != __result_obj__ && !__freed_obj__) { right_value609 = come_decrement_ref_count(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional17=*((struct sInfo*)come_null_check(info, "13op.c", 2621))->p,    __freed_obj__ = 0, 
    _while_condtional17) {
        if(_if_conditional637=*((struct sInfo*)come_null_check(info, "13op.c", 2619))->p==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2619))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2619))->p+1)!=124,        __freed_obj__ = 0, 
        _if_conditional637) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2601))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=or_exp(info))));
            if(right_value610 && right_value610 != __result_obj__ && !__freed_obj__) { right_value610 = come_decrement_ref_count(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2606);
            _inf_obj_value36=come_increment_ref_count(((struct sOrNode*)(right_value612=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value611=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2606)))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_315),(_Bool)0,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sOrNode_finalize;
            _inf_value36->clone=(void*)sOrNode_clone;
            _inf_value36->compile=(void*)sOrNode_compile;
            _inf_value36->sline=(void*)sOrNode_sline;
            _inf_value36->sname=(void*)sOrNode_sname;
            _inf_value36->terminated=(void*)sOrNode_terminated;
            _inf_value36->kind=(void*)sOrNode_kind;
            __result351__ = __result_obj__ = ((struct sNode*)(right_value617=_inf_value36));
            if(right_315 && !__freed_obj__) { right_315 = come_decrement_ref_count(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0); } 
            if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
            if(right_value611 && right_value611 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value612 && right_value612 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result351__;
            __freed_obj__ = 0;
            if(right_315 && !__freed_obj__) { right_315 = come_decrement_ref_count(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional647=*((struct sInfo*)come_null_check(info, "13op.c", 2619))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2619))->p+1)==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2619))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2619))->p+2)!=124,            __freed_obj__ = 0, 
            _if_conditional647) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2609))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=or_exp(info))));
                if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { right_value618 = come_decrement_ref_count(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2614);
                _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value620=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value619=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2614)))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_317),(_Bool)1,info))));
                _inf_value37->_protocol_obj=_inf_obj_value37;
                _inf_value37->finalize=(void*)sOrNode_finalize;
                _inf_value37->clone=(void*)sOrNode_clone;
                _inf_value37->compile=(void*)sOrNode_compile;
                _inf_value37->sline=(void*)sOrNode_sline;
                _inf_value37->sname=(void*)sOrNode_sname;
                _inf_value37->terminated=(void*)sOrNode_terminated;
                _inf_value37->kind=(void*)sOrNode_kind;
                __result354__ = __result_obj__ = ((struct sNode*)(right_value625=_inf_value37));
                if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
                if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
                if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value620 && right_value620 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result354__;
                __freed_obj__ = 0;
                if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
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
    __result355__ = __result_obj__ = node_314;
    if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result355__;
    __freed_obj__ = 0;
    if(node_314 && !__freed_obj__) { node_314 = come_decrement_ref_count(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional648;
_Bool _if_conditional649;
_Bool _if_conditional650;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional648=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional648) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional649=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional649) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional650=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional650) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional651;
struct sOrNode* __result352__;
void* right_value621;
struct sOrNode* result_318;
_Bool _if_conditional652;
void* right_value622;
struct sNode* __dec_obj269;
_Bool _if_conditional653;
void* right_value623;
struct sNode* __dec_obj270;
_Bool _if_conditional654;
_Bool _if_conditional655;
_Bool _if_conditional656;
void* right_value624;
char* __dec_obj271;
struct sOrNode* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value621, 0, sizeof(void*));
memset(&result_318, 0, sizeof(struct sOrNode*));
memset(&right_value622, 0, sizeof(void*));
memset(&right_value623, 0, sizeof(void*));
memset(&right_value624, 0, sizeof(void*));
                    if(_if_conditional651=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional651) {
                        __result352__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result352__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_318=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value621=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3))));
                    if(right_value621 && right_value621 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional652=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional652) {
                        __dec_obj269=((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 4))->mLeft;
                        ((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=sNode_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 4))->mLeft))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0); }
                        if(right_value622 && right_value622 != __result_obj__ && !__freed_obj__) { right_value622 = come_decrement_ref_count(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional653=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional653) {
                        __dec_obj270=((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 5))->mRight;
                        ((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=sNode_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 5))->mRight))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0); }
                        if(right_value623 && right_value623 != __result_obj__ && !__freed_obj__) { right_value623 = come_decrement_ref_count(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional654=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional654) {
                        ((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 6))->mQuote=((struct sOrNode*)come_null_check(self, "sOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional655=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional655) {
                        ((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 7))->sline=((struct sOrNode*)come_null_check(self, "sOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional656=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional656) {
                        __dec_obj271=((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 8))->sname;
                        ((struct sOrNode*)come_null_check(result_318, "sOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value624=string_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 8))->sname))));
                        if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0,0,0); }
                        if(right_value624 && right_value624 != __result_obj__ && !__freed_obj__) { right_value624 = come_decrement_ref_count(right_value624, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result353__ = __result_obj__ = result_318;
                    if(result_318 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_318, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result353__;
                    __freed_obj__ = 0;
                    if(result_318 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_318, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value626;
struct sNode* node_319;
_Bool _while_condtional18;
_Bool _if_conditional657;
void* right_value627;
struct sNode* right_320;
void* right_value628;
void* right_value629;
struct sNode* _inf_value38;
struct sAndAndNode* _inf_obj_value38;
void* right_value634;
struct sNode* __result358__;
_Bool _if_conditional667;
void* right_value635;
struct sNode* right_322;
void* right_value636;
void* right_value637;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value642;
struct sNode* __result361__;
struct sNode* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value626, 0, sizeof(void*));
memset(&node_319, 0, sizeof(struct sNode*));
memset(&right_value627, 0, sizeof(void*));
memset(&right_320, 0, sizeof(struct sNode*));
memset(&right_value628, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
memset(&right_322, 0, sizeof(struct sNode*));
memset(&right_value636, 0, sizeof(void*));
memset(&right_value637, 0, sizeof(void*));
memset(&right_value642, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=or_exp(info))));
    if(right_value626 && right_value626 != __result_obj__ && !__freed_obj__) { right_value626 = come_decrement_ref_count(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional18=*((struct sInfo*)come_null_check(info, "13op.c", 2656))->p,    __freed_obj__ = 0, 
    _while_condtional18) {
        if(_if_conditional657=*((struct sInfo*)come_null_check(info, "13op.c", 2654))->p==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2654))->p+1)==38,        __freed_obj__ = 0, 
        _if_conditional657) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2636))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=andand_exp(info))));
            if(right_value627 && right_value627 != __result_obj__ && !__freed_obj__) { right_value627 = come_decrement_ref_count(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2641);
            _inf_obj_value38=come_increment_ref_count(((struct sAndAndNode*)(right_value629=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value628=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2641)))),(struct sNode*)come_increment_ref_count(node_319),(struct sNode*)come_increment_ref_count(right_320),(_Bool)0,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAndAndNode_finalize;
            _inf_value38->clone=(void*)sAndAndNode_clone;
            _inf_value38->compile=(void*)sAndAndNode_compile;
            _inf_value38->sline=(void*)sAndAndNode_sline;
            _inf_value38->sname=(void*)sAndAndNode_sname;
            _inf_value38->terminated=(void*)sAndAndNode_terminated;
            _inf_value38->kind=(void*)sAndAndNode_kind;
            __result358__ = __result_obj__ = ((struct sNode*)(right_value634=_inf_value38));
            if(right_320 && !__freed_obj__) { right_320 = come_decrement_ref_count(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0); } 
            if(node_319 && !__freed_obj__) { node_319 = come_decrement_ref_count(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0); } 
            if(right_value628 && right_value628 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value629 && right_value629 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result358__;
            __freed_obj__ = 0;
            if(right_320 && !__freed_obj__) { right_320 = come_decrement_ref_count(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional667=*((struct sInfo*)come_null_check(info, "13op.c", 2654))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2654))->p+1)==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2654))->p+2)==38,            __freed_obj__ = 0, 
            _if_conditional667) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2644))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=andand_exp(info))));
                if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { right_value635 = come_decrement_ref_count(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2649);
                _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value637=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value636=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2649)))),(struct sNode*)come_increment_ref_count(node_319),(struct sNode*)come_increment_ref_count(right_322),(_Bool)1,info))));
                _inf_value39->_protocol_obj=_inf_obj_value39;
                _inf_value39->finalize=(void*)sAndAndNode_finalize;
                _inf_value39->clone=(void*)sAndAndNode_clone;
                _inf_value39->compile=(void*)sAndAndNode_compile;
                _inf_value39->sline=(void*)sAndAndNode_sline;
                _inf_value39->sname=(void*)sAndAndNode_sname;
                _inf_value39->terminated=(void*)sAndAndNode_terminated;
                _inf_value39->kind=(void*)sAndAndNode_kind;
                __result361__ = __result_obj__ = ((struct sNode*)(right_value642=_inf_value39));
                if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
                if(node_319 && !__freed_obj__) { node_319 = come_decrement_ref_count(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0); } 
                if(right_value636 && right_value636 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value637 && right_value637 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result361__;
                __freed_obj__ = 0;
                if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
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
    __result362__ = __result_obj__ = node_319;
    if(node_319 && !__freed_obj__) { node_319 = come_decrement_ref_count(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result362__;
    __freed_obj__ = 0;
    if(node_319 && !__freed_obj__) { node_319 = come_decrement_ref_count(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional668;
_Bool _if_conditional669;
_Bool _if_conditional670;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional668=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional668) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional669=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional669) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional670=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional670) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional671;
struct sAndAndNode* __result359__;
void* right_value638;
struct sAndAndNode* result_323;
_Bool _if_conditional672;
void* right_value639;
struct sNode* __dec_obj275;
_Bool _if_conditional673;
void* right_value640;
struct sNode* __dec_obj276;
_Bool _if_conditional674;
_Bool _if_conditional675;
_Bool _if_conditional676;
void* right_value641;
char* __dec_obj277;
struct sAndAndNode* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value638, 0, sizeof(void*));
memset(&result_323, 0, sizeof(struct sAndAndNode*));
memset(&right_value639, 0, sizeof(void*));
memset(&right_value640, 0, sizeof(void*));
memset(&right_value641, 0, sizeof(void*));
                    if(_if_conditional671=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional671) {
                        __result359__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result359__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_323=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value638=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3))));
                    if(right_value638 && right_value638 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional672=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional672) {
                        __dec_obj275=((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 4))->mLeft;
                        ((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=sNode_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 4))->mLeft))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0); }
                        if(right_value639 && right_value639 != __result_obj__ && !__freed_obj__) { right_value639 = come_decrement_ref_count(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional673=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional673) {
                        __dec_obj276=((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 5))->mRight;
                        ((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value640=sNode_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 5))->mRight))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0); }
                        if(right_value640 && right_value640 != __result_obj__ && !__freed_obj__) { right_value640 = come_decrement_ref_count(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional674=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional674) {
                        ((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 6))->mQuote=((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional675=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional675) {
                        ((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 7))->sline=((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional676=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional676) {
                        __dec_obj277=((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 8))->sname;
                        ((struct sAndAndNode*)come_null_check(result_323, "sAndAndNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value641=string_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 8))->sname))));
                        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0,0,0); }
                        if(right_value641 && right_value641 != __result_obj__ && !__freed_obj__) { right_value641 = come_decrement_ref_count(right_value641, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result360__ = __result_obj__ = result_323;
                    if(result_323 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_323, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result360__;
                    __freed_obj__ = 0;
                    if(result_323 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_323, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value643;
struct sNode* node_324;
_Bool _while_condtional19;
_Bool _if_conditional677;
void* right_value644;
struct sNode* right_325;
void* right_value645;
void* right_value646;
struct sNode* _inf_value40;
struct sOrOrNode* _inf_obj_value40;
void* right_value651;
struct sNode* __result365__;
_Bool _if_conditional687;
void* right_value652;
struct sNode* right_327;
void* right_value653;
void* right_value654;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value659;
struct sNode* __result368__;
struct sNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value643, 0, sizeof(void*));
memset(&node_324, 0, sizeof(struct sNode*));
memset(&right_value644, 0, sizeof(void*));
memset(&right_325, 0, sizeof(struct sNode*));
memset(&right_value645, 0, sizeof(void*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value651, 0, sizeof(void*));
memset(&right_value652, 0, sizeof(void*));
memset(&right_327, 0, sizeof(struct sNode*));
memset(&right_value653, 0, sizeof(void*));
memset(&right_value654, 0, sizeof(void*));
memset(&right_value659, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value643=andand_exp(info))));
    if(right_value643 && right_value643 != __result_obj__ && !__freed_obj__) { right_value643 = come_decrement_ref_count(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional19=*((struct sInfo*)come_null_check(info, "13op.c", 2691))->p,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional677=*((struct sInfo*)come_null_check(info, "13op.c", 2689))->p==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2689))->p+1)==124,        __freed_obj__ = 0, 
        _if_conditional677) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2671))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=oror_exp(info))));
            if(right_value644 && right_value644 != __result_obj__ && !__freed_obj__) { right_value644 = come_decrement_ref_count(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2676);
            _inf_obj_value40=come_increment_ref_count(((struct sOrOrNode*)(right_value646=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value645=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2676)))),(struct sNode*)come_increment_ref_count(node_324),(struct sNode*)come_increment_ref_count(right_325),(_Bool)0,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sOrOrNode_finalize;
            _inf_value40->clone=(void*)sOrOrNode_clone;
            _inf_value40->compile=(void*)sOrOrNode_compile;
            _inf_value40->sline=(void*)sOrOrNode_sline;
            _inf_value40->sname=(void*)sOrOrNode_sname;
            _inf_value40->terminated=(void*)sOrOrNode_terminated;
            _inf_value40->kind=(void*)sOrOrNode_kind;
            __result365__ = __result_obj__ = ((struct sNode*)(right_value651=_inf_value40));
            if(right_325 && !__freed_obj__) { right_325 = come_decrement_ref_count(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0); } 
            if(node_324 && !__freed_obj__) { node_324 = come_decrement_ref_count(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0); } 
            if(right_value645 && right_value645 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value646 && right_value646 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result365__;
            __freed_obj__ = 0;
            if(right_325 && !__freed_obj__) { right_325 = come_decrement_ref_count(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional687=*((struct sInfo*)come_null_check(info, "13op.c", 2689))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2689))->p+1)==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2689))->p+2)==124,            __freed_obj__ = 0, 
            _if_conditional687) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2679))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=oror_exp(info))));
                if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { right_value652 = come_decrement_ref_count(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2684);
                _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value654=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value653=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2684)))),(struct sNode*)come_increment_ref_count(node_324),(struct sNode*)come_increment_ref_count(right_327),(_Bool)1,info))));
                _inf_value41->_protocol_obj=_inf_obj_value41;
                _inf_value41->finalize=(void*)sOrOrNode_finalize;
                _inf_value41->clone=(void*)sOrOrNode_clone;
                _inf_value41->compile=(void*)sOrOrNode_compile;
                _inf_value41->sline=(void*)sOrOrNode_sline;
                _inf_value41->sname=(void*)sOrOrNode_sname;
                _inf_value41->terminated=(void*)sOrOrNode_terminated;
                _inf_value41->kind=(void*)sOrOrNode_kind;
                __result368__ = __result_obj__ = ((struct sNode*)(right_value659=_inf_value41));
                if(right_327 && !__freed_obj__) { right_327 = come_decrement_ref_count(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0); } 
                if(node_324 && !__freed_obj__) { node_324 = come_decrement_ref_count(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0); } 
                if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value654 && right_value654 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result368__;
                __freed_obj__ = 0;
                if(right_327 && !__freed_obj__) { right_327 = come_decrement_ref_count(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0); } 
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
    __result369__ = __result_obj__ = node_324;
    if(node_324 && !__freed_obj__) { node_324 = come_decrement_ref_count(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result369__;
    __freed_obj__ = 0;
    if(node_324 && !__freed_obj__) { node_324 = come_decrement_ref_count(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional688;
_Bool _if_conditional689;
_Bool _if_conditional690;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional688=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional688) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional689=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional689) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional690=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional690) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional691;
struct sOrOrNode* __result366__;
void* right_value655;
struct sOrOrNode* result_328;
_Bool _if_conditional692;
void* right_value656;
struct sNode* __dec_obj281;
_Bool _if_conditional693;
void* right_value657;
struct sNode* __dec_obj282;
_Bool _if_conditional694;
_Bool _if_conditional695;
_Bool _if_conditional696;
void* right_value658;
char* __dec_obj283;
struct sOrOrNode* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value655, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sOrOrNode*));
memset(&right_value656, 0, sizeof(void*));
memset(&right_value657, 0, sizeof(void*));
memset(&right_value658, 0, sizeof(void*));
                    if(_if_conditional691=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional691) {
                        __result366__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result366__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_328=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value655=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3))));
                    if(right_value655 && right_value655 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional692=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional692) {
                        __dec_obj281=((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 4))->mLeft;
                        ((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=sNode_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 4))->mLeft))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0); }
                        if(right_value656 && right_value656 != __result_obj__ && !__freed_obj__) { right_value656 = come_decrement_ref_count(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional693=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional693) {
                        __dec_obj282=((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 5))->mRight;
                        ((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=sNode_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 5))->mRight))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0); }
                        if(right_value657 && right_value657 != __result_obj__ && !__freed_obj__) { right_value657 = come_decrement_ref_count(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional694=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional694) {
                        ((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 6))->mQuote=((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional695=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional695) {
                        ((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 7))->sline=((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional696=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional696) {
                        __dec_obj283=((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 8))->sname;
                        ((struct sOrOrNode*)come_null_check(result_328, "sOrOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value658=string_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 8))->sname))));
                        if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0,0,0); }
                        if(right_value658 && right_value658 != __result_obj__ && !__freed_obj__) { right_value658 = come_decrement_ref_count(right_value658, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result367__ = __result_obj__ = result_328;
                    if(result_328 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result367__;
                    __freed_obj__ = 0;
                    if(result_328 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value660;
struct sNode* node_329;
_Bool _while_condtional20;
_Bool _if_conditional697;
void* right_value661;
struct sNode* node2_330;
void* right_value662;
void* right_value663;
struct sNode* _inf_value42;
struct sCommaNode* _inf_obj_value42;
void* right_value668;
struct sNode* __result372__;
struct sNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value660, 0, sizeof(void*));
memset(&node_329, 0, sizeof(struct sNode*));
memset(&right_value661, 0, sizeof(void*));
memset(&node2_330, 0, sizeof(struct sNode*));
memset(&right_value662, 0, sizeof(void*));
memset(&right_value663, 0, sizeof(void*));
memset(&right_value668, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=oror_exp(info))));
    if(right_value660 && right_value660 != __result_obj__ && !__freed_obj__) { right_value660 = come_decrement_ref_count(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional20=*((struct sInfo*)come_null_check(info, "13op.c", 2718))->p,    __freed_obj__ = 0, 
    _while_condtional20) {
        if(_if_conditional697=!((struct sInfo*)come_null_check(info, "13op.c", 2716))->no_comma&&*((struct sInfo*)come_null_check(info, "13op.c", 2716))->p==44,        __freed_obj__ = 0, 
        _if_conditional697) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2706))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            node2_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=oror_exp(info))));
            if(right_value661 && right_value661 != __result_obj__ && !__freed_obj__) { right_value661 = come_decrement_ref_count(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2711);
            _inf_obj_value42=come_increment_ref_count(((struct sCommaNode*)(right_value663=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value662=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2711)))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(node2_330),info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sCommaNode_finalize;
            _inf_value42->clone=(void*)sCommaNode_clone;
            _inf_value42->compile=(void*)sCommaNode_compile;
            _inf_value42->sline=(void*)sCommaNode_sline;
            _inf_value42->sname=(void*)sCommaNode_sname;
            _inf_value42->terminated=(void*)sCommaNode_terminated;
            _inf_value42->kind=(void*)sCommaNode_kind;
            __result372__ = __result_obj__ = ((struct sNode*)(right_value668=_inf_value42));
            if(node2_330 && !__freed_obj__) { node2_330 = come_decrement_ref_count(node2_330, ((struct sNode*)node2_330)->finalize, ((struct sNode*)node2_330)->_protocol_obj, 0, 0, 0); } 
            if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0); } 
            if(right_value662 && right_value662 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value663 && right_value663 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result372__;
            __freed_obj__ = 0;
            if(node2_330 && !__freed_obj__) { node2_330 = come_decrement_ref_count(node2_330, ((struct sNode*)node2_330)->finalize, ((struct sNode*)node2_330)->_protocol_obj, 0, 0, 0); } 
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
    __result373__ = __result_obj__ = node_329;
    if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result373__;
    __freed_obj__ = 0;
    if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional698;
_Bool _if_conditional699;
_Bool _if_conditional700;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional698=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional698) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional699=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->mRight!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional699) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional700=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional700) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional701;
struct sCommaNode* __result370__;
void* right_value664;
struct sCommaNode* result_331;
_Bool _if_conditional702;
void* right_value665;
struct sNode* __dec_obj284;
_Bool _if_conditional703;
void* right_value666;
struct sNode* __dec_obj285;
_Bool _if_conditional704;
_Bool _if_conditional705;
void* right_value667;
char* __dec_obj286;
struct sCommaNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value664, 0, sizeof(void*));
memset(&result_331, 0, sizeof(struct sCommaNode*));
memset(&right_value665, 0, sizeof(void*));
memset(&right_value666, 0, sizeof(void*));
memset(&right_value667, 0, sizeof(void*));
                if(_if_conditional701=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional701) {
                    __result370__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result370__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_331=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value664=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3))));
                if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional702=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 5))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional702) {
                    __dec_obj284=((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 4))->mLeft;
                    ((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=sNode_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 4))->mLeft))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0); }
                    if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { right_value665 = come_decrement_ref_count(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional703=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 6))->mRight!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional703) {
                    __dec_obj285=((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 5))->mRight;
                    ((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value666=sNode_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 5))->mRight))));
                    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0); }
                    if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { right_value666 = come_decrement_ref_count(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional704=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional704) {
                    ((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 6))->sline=((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 6))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional705=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 8))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional705) {
                    __dec_obj286=((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 7))->sname;
                    ((struct sCommaNode*)come_null_check(result_331, "sCommaNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value667=string_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 7))->sname))));
                    if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count(__dec_obj286, (void*)0, (void*)0, 0,0,0); }
                    if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { right_value667 = come_decrement_ref_count(right_value667, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result371__ = __result_obj__ = result_331;
                if(result_331 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result371__;
                __freed_obj__ = 0;
                if(result_331 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value669;
struct sNode* node_332;
_Bool _while_condtional21;
_Bool _if_conditional706;
struct sNode* value1_333;
_Bool _if_conditional707;
void* right_value670;
void* right_value671;
struct sNode* _inf_value43;
struct sNullNode* _inf_obj_value43;
void* right_value674;
struct sNode* __dec_obj288;
void* right_value675;
struct sNode* __dec_obj289;
void* right_value676;
void* right_value677;
struct sNode* value2_336;
void* right_value678;
void* right_value679;
struct sNode* _inf_value44;
struct sConditionalNode* _inf_obj_value44;
void* right_value685;
struct sNode* __result380__;
struct sNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value669, 0, sizeof(void*));
memset(&node_332, 0, sizeof(struct sNode*));
memset(&value1_333, 0, sizeof(struct sNode*));
memset(&right_value670, 0, sizeof(void*));
memset(&right_value671, 0, sizeof(void*));
memset(&right_value674, 0, sizeof(void*));
memset(&right_value675, 0, sizeof(void*));
memset(&right_value676, 0, sizeof(void*));
memset(&right_value677, 0, sizeof(void*));
memset(&value2_336, 0, sizeof(struct sNode*));
memset(&right_value678, 0, sizeof(void*));
memset(&right_value679, 0, sizeof(void*));
memset(&right_value685, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=comma_exp(info))));
    if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { right_value669 = come_decrement_ref_count(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "13op.c", 2761))->p,    __freed_obj__ = 0, 
    _while_condtional21) {
        if(_if_conditional706=*((struct sInfo*)come_null_check(info, "13op.c", 2759))->p==63,        __freed_obj__ = 0, 
        _if_conditional706) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2733))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            if(_if_conditional707=*((struct sInfo*)come_null_check(info, "13op.c", 2746))->p==58,            __freed_obj__ = 0, 
            _if_conditional707) {
                _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2740);
                _inf_obj_value43=come_increment_ref_count(((struct sNullNode*)(right_value671=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value670=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2740)))),info))));
                _inf_value43->_protocol_obj=_inf_obj_value43;
                _inf_value43->finalize=(void*)sNullNode_finalize;
                _inf_value43->clone=(void*)sNullNode_clone;
                _inf_value43->compile=(void*)sNullNode_compile;
                _inf_value43->sline=(void*)sNullNode_sline;
                _inf_value43->sname=(void*)sNullNode_sname;
                _inf_value43->terminated=(void*)sNullNode_terminated;
                _inf_value43->kind=(void*)sNullNode_kind;
                __dec_obj288=value1_333;
                value1_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=_inf_value43)));
                if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                if(right_value670 && right_value670 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value671 && right_value671 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value674 && right_value674 != __result_obj__ && !__freed_obj__) { right_value674 = come_decrement_ref_count(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                __dec_obj289=value1_333;
                value1_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=comma_exp(info))));
                if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                if(right_value675 && right_value675 != __result_obj__ && !__freed_obj__) { right_value675 = come_decrement_ref_count(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            optional$2intbool_value((come_push_stackframe("13op.c", 2748),((struct optional$2intbool*)(right_value676=expected_next_character(58,info)))));
            come_pop_stackframe();
            if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            value2_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=comma_exp(info))));
            if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { right_value677 = come_decrement_ref_count(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2754);
            _inf_obj_value44=come_increment_ref_count(((struct sConditionalNode*)(right_value679=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value678=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2754)))),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(value1_333),(struct sNode*)come_increment_ref_count(value2_336),info))));
            _inf_value44->_protocol_obj=_inf_obj_value44;
            _inf_value44->finalize=(void*)sConditionalNode_finalize;
            _inf_value44->clone=(void*)sConditionalNode_clone;
            _inf_value44->compile=(void*)sConditionalNode_compile;
            _inf_value44->sline=(void*)sConditionalNode_sline;
            _inf_value44->sname=(void*)sConditionalNode_sname;
            _inf_value44->terminated=(void*)sConditionalNode_terminated;
            _inf_value44->kind=(void*)sConditionalNode_kind;
            __result380__ = __result_obj__ = ((struct sNode*)(right_value685=_inf_value44));
            if(value1_333 && !__freed_obj__) { value1_333 = come_decrement_ref_count(value1_333, ((struct sNode*)value1_333)->finalize, ((struct sNode*)value1_333)->_protocol_obj, 0, 0, 0); } 
            if(value2_336 && !__freed_obj__) { value2_336 = come_decrement_ref_count(value2_336, ((struct sNode*)value2_336)->finalize, ((struct sNode*)value2_336)->_protocol_obj, 0, 0, 0); } 
            if(node_332 && !__freed_obj__) { node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0); } 
            if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value679 && right_value679 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result380__;
            __freed_obj__ = 0;
            if(value1_333 && !__freed_obj__) { value1_333 = come_decrement_ref_count(value1_333, ((struct sNode*)value1_333)->finalize, ((struct sNode*)value1_333)->_protocol_obj, 0, 0, 0); } 
            if(value2_336 && !__freed_obj__) { value2_336 = come_decrement_ref_count(value2_336, ((struct sNode*)value2_336)->finalize, ((struct sNode*)value2_336)->_protocol_obj, 0, 0, 0); } 
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
    __result381__ = __result_obj__ = node_332;
    if(node_332 && !__freed_obj__) { node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result381__;
    __freed_obj__ = 0;
    if(node_332 && !__freed_obj__) { node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional712;
int default_value_335;
int __result376__;
int __result377__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_335, 0, sizeof(int));
                if(_if_conditional712=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional712) {
                    __freed_obj__ = 0;
                    memset(&default_value_335,0,sizeof(int));
                    __freed_obj__ = 0;
                    __result376__ = default_value_335;
                    __freed_obj__ = 0;
                    return __result376__;
                    __freed_obj__ = 0;
                }
                else {
                    __result377__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result377__;
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
_Bool _if_conditional713;
_Bool _if_conditional714;
_Bool _if_conditional715;
_Bool _if_conditional716;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional713=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional713) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional714=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional714) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional715=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->mValue3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional715) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional716=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 4))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional716) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional717;
struct sConditionalNode* __result378__;
void* right_value680;
struct sConditionalNode* result_337;
_Bool _if_conditional718;
void* right_value681;
struct sNode* __dec_obj290;
_Bool _if_conditional719;
void* right_value682;
struct sNode* __dec_obj291;
_Bool _if_conditional720;
void* right_value683;
struct sNode* __dec_obj292;
_Bool _if_conditional721;
_Bool _if_conditional722;
void* right_value684;
char* __dec_obj293;
struct sConditionalNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value680, 0, sizeof(void*));
memset(&result_337, 0, sizeof(struct sConditionalNode*));
memset(&right_value681, 0, sizeof(void*));
memset(&right_value682, 0, sizeof(void*));
memset(&right_value683, 0, sizeof(void*));
memset(&right_value684, 0, sizeof(void*));
                if(_if_conditional717=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional717) {
                    __result378__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result378__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_337=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value680=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3))));
                if(right_value680 && right_value680 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional718=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 5))->mValue1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional718) {
                    __dec_obj290=((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 4))->mValue1;
                    ((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 4))->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 4))->mValue1))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0); }
                    if(right_value681 && right_value681 != __result_obj__ && !__freed_obj__) { right_value681 = come_decrement_ref_count(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional719=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 6))->mValue2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional719) {
                    __dec_obj291=((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 5))->mValue2;
                    ((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 5))->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value682=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 5))->mValue2))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0); }
                    if(right_value682 && right_value682 != __result_obj__ && !__freed_obj__) { right_value682 = come_decrement_ref_count(right_value682, ((struct sNode*)right_value682)->finalize, ((struct sNode*)right_value682)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional720=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 7))->mValue3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional720) {
                    __dec_obj292=((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 6))->mValue3;
                    ((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 6))->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 6))->mValue3))));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0); }
                    if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { right_value683 = come_decrement_ref_count(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional721=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional721) {
                    ((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 7))->sline=((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 7))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional722=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 9))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional722) {
                    __dec_obj293=((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 8))->sname;
                    ((struct sConditionalNode*)come_null_check(result_337, "sConditionalNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value684=string_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 8))->sname))));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, (void*)0, (void*)0, 0,0,0); }
                    if(right_value684 && right_value684 != __result_obj__ && !__freed_obj__) { right_value684 = come_decrement_ref_count(right_value684, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result379__ = __result_obj__ = result_337;
                if(result_337 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_337, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result379__;
                __freed_obj__ = 0;
                if(result_337 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_337, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value686;
struct sNode* node_338;
struct sNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value686, 0, sizeof(void*));
memset(&node_338, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=conditional_exp(info))));
    if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { right_value686 = come_decrement_ref_count(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result382__ = __result_obj__ = node_338;
    if(node_338 && !__freed_obj__) { node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result382__;
    __freed_obj__ = 0;
    if(node_338 && !__freed_obj__) { node_338 = come_decrement_ref_count(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional723;
void* right_value687;
void* right_value688;
struct sNode* _inf_value45;
struct sNullNode* _inf_obj_value45;
void* right_value691;
void* right_value692;
void* right_value693;
struct sNode* __result386__;
void* right_value694;
struct __current_stack1__ __current_stack1__;
void* right_value697;
struct sNode* result_340;
void* right_value698;
void* right_value699;
struct sNode* __result390__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value687, 0, sizeof(void*));
memset(&right_value688, 0, sizeof(void*));
memset(&right_value691, 0, sizeof(void*));
memset(&right_value692, 0, sizeof(void*));
memset(&right_value693, 0, sizeof(void*));
memset(&right_value694, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value697, 0, sizeof(void*));
memset(&result_340, 0, sizeof(struct sNode*));
memset(&right_value698, 0, sizeof(void*));
memset(&right_value699, 0, sizeof(void*));
    if(_if_conditional723=charp_operator_equals(buf,"null"),    __freed_obj__ = 0, 
    _if_conditional723) {
        _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2778);
        _inf_obj_value45=come_increment_ref_count(((struct sNullNode*)(right_value688=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value687=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2778)))),info))));
        _inf_value45->_protocol_obj=_inf_obj_value45;
        _inf_value45->finalize=(void*)sNullNode_finalize;
        _inf_value45->clone=(void*)sNullNode_clone;
        _inf_value45->compile=(void*)sNullNode_compile;
        _inf_value45->sline=(void*)sNullNode_sline;
        _inf_value45->sname=(void*)sNullNode_sname;
        _inf_value45->terminated=(void*)sNullNode_terminated;
        _inf_value45->kind=(void*)sNullNode_kind;
        __result386__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value693=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value692=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2778)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value691=_inf_value45))),(_Bool)1)));
        if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { right_value691 = come_decrement_ref_count(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0); } 
        if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { right_value692 = come_decrement_ref_count(right_value692, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result386__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value697=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("13op.c", 2785),((struct optional$2sNodephbool*)(right_value694=string_node_v12(buf,head,head_sline,info)))), "13op.c", 2785)),&__current_stack1__,(void*)method_block1_13opc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value697 && right_value697 != __result_obj__ && !__freed_obj__) { right_value697 = come_decrement_ref_count(right_value697, ((struct sNode*)right_value697)->finalize, ((struct sNode*)right_value697)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result390__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value699=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value698=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2785)))),(struct sNode*)come_increment_ref_count(result_340),(_Bool)1)));
    if(result_340 && !__freed_obj__) { result_340 = come_decrement_ref_count(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0, 0, 0); } 
    if(right_value698 && right_value698 != __result_obj__ && !__freed_obj__) { right_value698 = come_decrement_ref_count(right_value698, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result390__;
    __freed_obj__ = 0;
    if(result_340 && !__freed_obj__) { result_340 = come_decrement_ref_count(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0, 0, 0); } 
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional724;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional724=self!=((void*)0)&&((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 1))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional724) {
                if(((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname && !__freed_obj__) { ((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional725;
struct sNullNode* __result383__;
void* right_value689;
struct sNullNode* result_339;
_Bool _if_conditional726;
_Bool _if_conditional727;
void* right_value690;
char* __dec_obj294;
struct sNullNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value689, 0, sizeof(void*));
memset(&result_339, 0, sizeof(struct sNullNode*));
memset(&right_value690, 0, sizeof(void*));
            if(_if_conditional725=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional725) {
                __result383__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result383__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_339=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value689=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3))));
            if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional726=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional726) {
                ((struct sNullNode*)come_null_check(result_339, "sNullNode_clone", 4))->sline=((struct sNullNode*)come_null_check(self, "sNullNode_clone", 4))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional727=self!=((void*)0)&&((struct sNullNode*)come_null_check(self, "sNullNode_clone", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional727) {
                __dec_obj294=((struct sNullNode*)come_null_check(result_339, "sNullNode_clone", 5))->sname;
                ((struct sNullNode*)come_null_check(result_339, "sNullNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value690=string_clone(((struct sNullNode*)come_null_check(self, "sNullNode_clone", 5))->sname))));
                if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count(__dec_obj294, (void*)0, (void*)0, 0,0,0); }
                if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { right_value690 = come_decrement_ref_count(right_value690, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result384__ = __result_obj__ = result_339;
            if(result_339 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_339, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result384__;
            __freed_obj__ = 0;
            if(result_339 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_339, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj295;
struct optional$2sNodephbool* __result385__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj295=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result385__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result385__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional728;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional728=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional728) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional729;
_Bool _if_conditional730;
struct sNode* __result387__;
struct sNode* __result388__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional729=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional729) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional730=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional730) {
                __result387__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result387__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result388__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result388__;
        __freed_obj__ = 0;
}

void method_block1_13opc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value695;
void* right_value696;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value695, 0, sizeof(void*));
memset(&right_value696, 0, sizeof(void*));
        if(right_value695 && right_value695 != __result_obj__ && !__freed_obj__) { right_value695 = come_decrement_ref_count(right_value695, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value696 && right_value696 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("13op.c", 2783), ((struct optional$2voidpbool*)(right_value696=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value695=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "13op.c", 2783))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result389__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result389__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

