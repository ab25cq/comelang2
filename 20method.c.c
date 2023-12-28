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












struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
struct sCurrentNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 10))->sline=((struct sInfo*)come_null_check(info, "20method.c", 10))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname;
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 11))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = ((struct sCurrentNode*)come_null_check(self, "20method.c", 18))->sline;
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value1;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result16__ = __result_obj__ = ((char*)(right_value1=__builtin_string(((struct sCurrentNode*)come_null_check(self, "20method.c", 23))->sname)));
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

char* sCurrentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
    __result18__ = __result_obj__ = ((char*)(right_value2=__builtin_string("sCurrentNode")));
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value3;
char* class_name_8;
void* right_value4;
void* right_value5;
struct sClass* current_stack_9;
void* right_value6;
void* right_value7;
void* right_value8;
void* right_value9;
void* right_value50;
struct tuple2$2charphsTypeph* result_kind_38;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
void* right_value62;
struct tuple2$2charphsTypeph* return_value_43;
void* right_value63;
struct sVarTable* vtable_44;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_45;
char* it_48;
_Bool _for_condtionalA2;
char* key_51;
void* right_value73;
struct sVar* value_57;
void* right_value74;
struct sType* type2_58;
void* right_value75;
void* right_value76;
void* right_value77;
struct tuple2$2charphsTypeph* item_59;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value78;
struct sType* type3_60;
void* right_value79;
void* right_value80;
void* right_value81;
struct tuple2$2charphsTypeph* item2_63;
void* right_value82;
void* right_value83;
static int num_current_stack_112=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_113;
char* it_114;
_Bool _for_condtionalA7;
char* key_115;
void* right_value96;
struct sVar* value_116;
void* right_value97;
struct sType* type2_117;
void* right_value98;
void* right_value99;
struct tuple2$2charphsTypeph* item_118;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value100;
struct CVALUE* come_value_119;
void* right_value101;
char* __dec_obj33;
void* right_value102;
void* right_value103;
struct sType* __dec_obj34;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&class_name_8, 0, sizeof(char*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&current_stack_9, 0, sizeof(struct sClass*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&result_kind_38, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&return_value_43, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&vtable_44, 0, sizeof(struct sVarTable*));
memset(&o2_saved_45, 0, sizeof(struct map$2charphsVarph*));
memset(&it_48, 0, sizeof(char*));
memset(&key_51, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&value_57, 0, sizeof(struct sVar*));
memset(&right_value74, 0, sizeof(void*));
memset(&type2_58, 0, sizeof(struct sType*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&item_59, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value78, 0, sizeof(void*));
memset(&type3_60, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&item2_63, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&o2_saved_113, 0, sizeof(struct map$2charphsVarph*));
memset(&it_114, 0, sizeof(char*));
memset(&key_115, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&value_116, 0, sizeof(struct sVar*));
memset(&right_value97, 0, sizeof(void*));
memset(&type2_117, 0, sizeof(struct sType*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&item_118, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value100, 0, sizeof(void*));
memset(&come_value_119, 0, sizeof(struct CVALUE*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
    ((struct sInfo*)come_null_check(info, "20method.c", 38))->current_stack_num++;
    __freed_obj__ = 0;
    class_name_8=(char*)come_increment_ref_count(((char*)(right_value3=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 39))->current_stack_num))));
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    current_stack_9=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value5=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value4=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40)))),class_name_8,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_kind_38=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value50=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value9=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42)))),(char*)come_increment_ref_count(((char*)(right_value6=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value8=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value7=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42)))),"int",(_Bool)0,info))))))));
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_9, "20method.c", 43))->mFields, "20method.c", 43)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value57=tuple2$2charphsTypephp_clone(result_kind_38)))));
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return_value_43=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value62=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value61=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45)))),(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45)))),"void*",(_Bool)0,info))))))));
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_9, "20method.c", 46))->mFields, "20method.c", 46)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value63=tuple2$2charphsTypephp_clone(return_value_43)))));
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    vtable_44=((struct sInfo*)come_null_check(info, "20method.c", 48))->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional8=vtable_44,    __freed_obj__ = 0, 
    _while_condtional8) {
        for(
        o2_saved_45=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_44, "20method.c", 87))->mVars)),it_48=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_45), "20method.c", 87))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_45), "20method.c", 87))) ,        __freed_obj__ = 0, 
        _for_condtionalA2;        it_48=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_45), "20method.c", 87))) ,        __freed_obj__ = 0, 
        0        ){
            key_51=it_48;
            __freed_obj__ = 0;
            come_clear_stackframe();
            value_57=optional$2sVarpbool_value((come_push_stackframe("20method.c", 53),((struct optional$2sVarpbool*)(right_value73=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_44, "20method.c", 53))->mVars,key_51)))));
            come_pop_stackframe();
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(((struct sVar*)come_null_check(value_57, "20method.c", 55))->mType))));
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_58, "20method.c", 57))->mPointerNum++;
            __freed_obj__ = 0;
            item_59=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value77=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value76=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59)))),(char*)come_increment_ref_count(((char*)(right_value75=__builtin_string(((struct sVar*)come_null_check(value_57, "20method.c", 59))->mCValueName)))),(struct sType*)come_increment_ref_count(type2_58)))));
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional119=((struct sVar*)come_null_check(value_57, "20method.c", 85))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(_if_conditional120=memcmp(((struct sVar*)come_null_check(value_57, "20method.c", 84))->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional120) {
                }
                else {
                    if(_if_conditional121=memcmp(((struct sVar*)come_null_check(value_57, "20method.c", 84))->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional121) {
                    }
                    else {
                        if(_if_conditional122=memcmp(((struct sVar*)come_null_check(value_57, "20method.c", 84))->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional122) {
                        }
                        else {
                            if(_if_conditional123=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_57, "20method.c", 84))->mType, "20method.c", 84))->mClass, "20method.c", 84))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_57, "20method.c", 84))->mType, "20method.c", 84))->mClass, "20method.c", 84))->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional123) {
                            }
                            else {
                                if(_if_conditional124=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type2_58, "20method.c", 84))->mArrayNum, "20method.c", 84)))==1,                                __freed_obj__ = 0, 
                                _if_conditional124) {
                                    type3_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(type2_58))));
                                    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type3_60, "20method.c", 76))->mArrayNum, "20method.c", 76)));
                                    __freed_obj__ = 0;
                                    ((struct sType*)come_null_check(type3_60, "20method.c", 77))->mPointerNum++;
                                    __freed_obj__ = 0;
                                    item2_63=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value81=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78)))),(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(((struct sVar*)come_null_check(value_57, "20method.c", 78))->mCValueName)))),(struct sType*)come_increment_ref_count(type3_60)))));
                                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_9, "20method.c", 79))->mFields, "20method.c", 79)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value82=tuple2$2charphsTypephp_clone(item2_63)))));
                                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(type3_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_63 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_9, "20method.c", 82))->mFields, "20method.c", 82)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=tuple2$2charphsTypephp_clone(item_59)))));
                                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
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
            if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_59 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_45 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_45, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_44=((struct sVarTable*)come_null_check(vtable_44, "20method.c", 87))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    output_struct(current_stack_9,info);
    __freed_obj__ = 0;
    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 92))->classes, "20method.c", 92)),(char*)come_increment_ref_count(class_name_8),(struct sClass*)come_increment_ref_count(current_stack_9));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    num_current_stack_112++;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_8,num_current_stack_112);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_112,class_name_8);
    __freed_obj__ = 0;
    vtable_44=((struct sInfo*)come_null_check(info, "20method.c", 99))->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional20=vtable_44,    __freed_obj__ = 0, 
    _while_condtional20) {
        for(
        o2_saved_113=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_44, "20method.c", 134))->mVars)),it_114=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_113), "20method.c", 134))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_113), "20method.c", 134))) ,        __freed_obj__ = 0, 
        _for_condtionalA7;        it_114=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_113), "20method.c", 134))) ,        __freed_obj__ = 0, 
        0        ){
            key_115=it_114;
            __freed_obj__ = 0;
            come_clear_stackframe();
            value_116=optional$2sVarpbool_value((come_push_stackframe("20method.c", 104),((struct optional$2sVarpbool*)(right_value96=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_44, "20method.c", 104))->mVars,key_115)))));
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(((struct sVar*)come_null_check(value_116, "20method.c", 106))->mType))));
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            item_118=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108)))),(char*)come_increment_ref_count(((struct sVar*)come_null_check(value_116, "20method.c", 108))->mCValueName),(struct sType*)come_increment_ref_count(type2_117)))));
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional180=((struct sVar*)come_null_check(value_116, "20method.c", 132))->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional180) {
                if(_if_conditional181=memcmp(((struct sVar*)come_null_check(value_116, "20method.c", 131))->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional181) {
                }
                else {
                    if(_if_conditional182=memcmp(((struct sVar*)come_null_check(value_116, "20method.c", 131))->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                    }
                    else {
                        if(_if_conditional183=memcmp(((struct sVar*)come_null_check(value_116, "20method.c", 131))->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional183) {
                        }
                        else {
                            if(_if_conditional184=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_116, "20method.c", 131))->mType, "20method.c", 131))->mClass, "20method.c", 131))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_116, "20method.c", 131))->mType, "20method.c", 131))->mClass, "20method.c", 131))->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional184) {
                            }
                            else {
                                if(_if_conditional185=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_117, "20method.c", 130))->mClass, "20method.c", 130))->mName,"lambda"),                                __freed_obj__ = 0, 
                                _if_conditional185) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_112,((struct sVar*)come_null_check(value_116, "20method.c", 125))->mCValueName,((struct sVar*)come_null_check(value_116, "20method.c", 125))->mCValueName);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_112,((struct sVar*)come_null_check(value_116, "20method.c", 128))->mCValueName,((struct sVar*)come_null_check(value_116, "20method.c", 128))->mCValueName);
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
            if(type2_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_118 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_113 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_44=((struct sVarTable*)come_null_check(vtable_44, "20method.c", 134))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137))));
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj33=((struct CVALUE*)come_null_check(come_value_119, "20method.c", 139))->c_value;
    ((struct CVALUE*)come_null_check(come_value_119, "20method.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("&__current_stack%d__",num_current_stack_112))));
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj34=((struct CVALUE*)come_null_check(come_value_119, "20method.c", 140))->type;
    ((struct CVALUE*)come_null_check(come_value_119, "20method.c", 140))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140)))),class_name_8,(_Bool)0,info))));
    if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_119, "20method.c", 141))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_119, "20method.c", 143))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 145))->stack, "20method.c", 145)),(struct CVALUE*)come_increment_ref_count(come_value_119));
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "20method.c", 147))->num_current_stack=num_current_stack_112;
    __freed_obj__ = 0;
    __result88__ = (_Bool)1;
    if(class_name_8 && !__freed_obj__) { class_name_8 = come_decrement_ref_count(class_name_8, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_9 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_38 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_43 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(class_name_8 && !__freed_obj__) { class_name_8 = come_decrement_ref_count(class_name_8, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_9 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_38 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_43 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_10;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_10=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional1=it_10!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional1) {
                    prev_it_11=it_10;
                    __freed_obj__ = 0;
                    it_10=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_10, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional8) {
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional9=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional9) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional10=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional10) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
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
                                        if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional11) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional13) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional14) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional15) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional17) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional19) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional20) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional22) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional23) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional24) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional25) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional26) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional12=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional12) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_12;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sTypeph*));
                                                it_12=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional2=it_12!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional2) {
                                                    prev_it_13=it_12;
                                                    __freed_obj__ = 0;
                                                    it_12=((struct list_item$1sTypeph*)come_null_check(it_12, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional16=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional16) {
                                                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sNodeph*));
                                                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_14!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_15=it_14;
                                                    __freed_obj__ = 0;
                                                    it_14=((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_15 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional18=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional18) {
                                                            if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_16;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_16, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1charph*));
                                                it_16=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_16!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_17=it_16;
                                                    __freed_obj__ = 0;
                                                    it_16=((struct list_item$1charph*)come_null_check(it_16, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_17 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional21=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional21) {
                                                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value10;
char* __dec_obj2;
void* right_value49;
struct sType* __dec_obj27;
struct tuple2$2charphsTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
        __dec_obj2=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value10=charp_clone(v1))));
        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj27=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=sType_clone(v2))));
        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result41__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
struct sType* __result19__;
void* right_value11;
struct sType* result_18;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional34;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj6;
_Bool _if_conditional37;
void* right_value18;
char* __dec_obj7;
_Bool _if_conditional38;
void* right_value25;
struct list$1sTypeph* __dec_obj11;
_Bool _if_conditional42;
void* right_value33;
struct list$1sNodeph* __dec_obj15;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value34;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional57;
void* right_value41;
struct list$1charph* __dec_obj20;
_Bool _if_conditional61;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value45;
struct sNode* __dec_obj23;
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
void* right_value46;
struct sNode* __dec_obj24;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value47;
char* __dec_obj25;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value48;
char* __dec_obj26;
struct sType* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
            if(_if_conditional28=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional28) {
                __result19__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_18=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional29=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional29) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj4=((struct sType*)come_null_check(result_18, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_18, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional34) {
                __dec_obj6=((struct sType*)come_null_check(result_18, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_18, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj6) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional37) {
                __dec_obj7=((struct sType*)come_null_check(result_18, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_18, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional38) {
                __dec_obj11=((struct sType*)come_null_check(result_18, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_18, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj11) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional42) {
                __dec_obj15=((struct sType*)come_null_check(result_18, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_18, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj15) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional56) {
                __dec_obj16=((struct sType*)come_null_check(result_18, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_18, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                __dec_obj20=((struct sType*)come_null_check(result_18, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_18, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                __dec_obj22=((struct sType*)come_null_check(result_18, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_18, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj22) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                __dec_obj23=((struct sType*)come_null_check(result_18, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_18, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                __dec_obj24=((struct sType*)come_null_check(result_18, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_18, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional92=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                __dec_obj25=((struct sType*)come_null_check(result_18, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_18, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional93=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                ((struct sType*)come_null_check(result_18, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                __dec_obj26=((struct sType*)come_null_check(result_18, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_18, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = result_18;
            if(result_18 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
            if(result_18 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional32=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional32) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result24__;
void* right_value19;
void* right_value20;
struct list$1sTypeph* result_21;
struct list_item$1sTypeph* it_22;
_Bool _while_condtional5;
void* right_value24;
struct list$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1sTypeph*));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
                    if(_if_conditional39=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional39) {
                        __result24__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_21=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value19=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_22=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_22!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_21, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_22, "./comelang2.h", 192))->item)))));
                        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_22=((struct list_item$1sTypeph*)come_null_check(it_22, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result27__ = __result_obj__ = result_21;
                    if(result_21 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                    if(result_21 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result25__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result25__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional40;
void* right_value21;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj8;
_Bool _if_conditional41;
void* right_value22;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj9;
void* right_value23;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj10;
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional40=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_23, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_23, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_23, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_23, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_23;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_23;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional41=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional41) {
                                    litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_24, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_24, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_24, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_24, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_24;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_24;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_25;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_25;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result26__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result26__;
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
_Bool _if_conditional43;
struct list$1sNodeph* __result28__;
void* right_value26;
void* right_value27;
struct list$1sNodeph* result_26;
struct list_item$1sNodeph* it_27;
_Bool _while_condtional6;
void* right_value32;
struct list$1sNodeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct list$1sNodeph*));
memset(&it_27, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value32, 0, sizeof(void*));
                    if(_if_conditional43=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional43) {
                        __result28__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_26=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value26=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_27=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_27!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_26, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_27, "./comelang2.h", 192))->item)))));
                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        it_27=((struct list_item$1sNodeph*)come_null_check(it_27, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result33__ = __result_obj__ = result_26;
                    if(result_26 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                    if(result_26 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result29__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result29__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional44;
void* right_value28;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj12;
_Bool _if_conditional45;
void* right_value29;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj13;
void* right_value30;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj14;
struct list$1sNodeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional44=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_28, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_28, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_28, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_28, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_28;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_28;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional45=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional45) {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_29, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_29, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_29, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_29, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_29;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_29;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_30;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_30;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result30__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result30__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional46;
struct sNode* __result31__;
void* right_value31;
struct sNode* result_31;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct sNode*));
                            if(_if_conditional46=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional46) {
                                __result31__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result31__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_31=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            if(_if_conditional47=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional48=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional48) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional49=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional49) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional50=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional51=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional52=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional53=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional53) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional54=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                ((struct sNode*)come_null_check(result_31, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result32__ = __result_obj__ = result_31;
                            if(result_31 && !__freed_obj__) { result_31 = come_decrement_ref_count(result_31, ((struct sNode*)result_31)->finalize, ((struct sNode*)result_31)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
                            if(result_31 && !__freed_obj__) { result_31 = come_decrement_ref_count(result_31, ((struct sNode*)result_31)->finalize, ((struct sNode*)result_31)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional58;
struct list$1charph* __result34__;
void* right_value35;
void* right_value36;
struct list$1charph* result_32;
struct list_item$1charph* it_33;
_Bool _while_condtional7;
void* right_value40;
struct list$1charph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&result_32, 0, sizeof(struct list$1charph*));
memset(&it_33, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
                    if(_if_conditional58=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        __result34__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_32=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value35=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_33=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_33!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_32, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value40=string_clone(((struct list_item$1charph*)come_null_check(it_33, "./comelang2.h", 192))->item)))));
                        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_33=((struct list_item$1charph*)come_null_check(it_33, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result37__ = __result_obj__ = result_32;
                    if(result_32 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result37__;
                    __freed_obj__ = 0;
                    if(result_32 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result35__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result35__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional59;
void* right_value37;
struct list_item$1charph* litem_34;
char* __dec_obj17;
_Bool _if_conditional60;
void* right_value38;
struct list_item$1charph* litem_35;
char* __dec_obj18;
void* right_value39;
struct list_item$1charph* litem_36;
char* __dec_obj19;
struct list$1charph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional59=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional59) {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_34, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_34, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=((struct list_item$1charph*)come_null_check(litem_34, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_34, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_34;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_34;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional60=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional60) {
                                    litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_35, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_35, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj18=((struct list_item$1charph*)come_null_check(litem_35, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_35, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_35;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_35;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj19=((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_36;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_36;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result36__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result36__;
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
_Bool _if_conditional62;
struct tuple1$1sTypeph* __result38__;
void* right_value42;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional63;
void* right_value43;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value43, 0, sizeof(void*));
                    if(_if_conditional62=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional62) {
                        __result38__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result38__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional63=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional63) {
                        __dec_obj21=((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result39__ = __result_obj__ = result_37;
                    if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
                    if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional102;
void* right_value51;
struct list_item$1tuple2$2charphsTypephph* litem_39;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional105;
void* right_value52;
struct list_item$1tuple2$2charphsTypephph* litem_40;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value53;
struct list_item$1tuple2$2charphsTypephph* litem_41;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional102=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional102) {
            litem_39=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value51=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_39, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_39, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj28=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_39, "./comelang2.h", 276))->item;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_39, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj28) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_39;
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_39;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional105=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional105) {
                litem_40=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value52=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_40, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_40, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj29=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_40, "./comelang2.h", 286))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_40, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_40;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_40;
                __freed_obj__ = 0;
            }
            else {
                litem_41=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value53=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_41, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_41, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj30=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_41, "./comelang2.h", 296))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_41, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_41;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_41;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result42__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional103=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional106;
struct tuple2$2charphsTypeph* __result43__;
void* right_value54;
struct tuple2$2charphsTypeph* result_42;
_Bool _if_conditional107;
void* right_value55;
char* __dec_obj31;
_Bool _if_conditional108;
void* right_value56;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
        if(_if_conditional106=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional106) {
            __result43__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result43__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_42=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value54=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional107) {
            __dec_obj31=((struct tuple2$2charphsTypeph*)come_null_check(result_42, "tuple2$2charphsTypephp_clone", 4))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_42, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            __dec_obj32=((struct tuple2$2charphsTypeph*)come_null_check(result_42, "tuple2$2charphsTypephp_clone", 5))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_42, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
            if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result44__ = __result_obj__ = result_42;
        if(result_42 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
        if(result_42 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional109;
char* result_46;
char* __result45__;
_Bool _if_conditional110;
char* __result46__;
char* result_47;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
            if(_if_conditional109=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional109) {
                __freed_obj__ = 0;
                memset(&result_46,0,sizeof(char*));
                __freed_obj__ = 0;
                __result45__ = __result_obj__ = result_46;
                __freed_obj__ = 0;
                return __result45__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
            __freed_obj__ = 0;
            if(_if_conditional110=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,            __freed_obj__ = 0, 
            _if_conditional110) {
                __result46__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_47,0,sizeof(char*));
            __freed_obj__ = 0;
            __result47__ = __result_obj__ = result_47;
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result48__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
            __freed_obj__ = 0;
            return __result48__;
            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional111;
char* result_49;
char* __result49__;
_Bool _if_conditional112;
char* __result50__;
char* result_50;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_49, 0, sizeof(char*));
memset(&result_50, 0, sizeof(char*));
            if(_if_conditional111=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                __freed_obj__ = 0;
                memset(&result_49,0,sizeof(char*));
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = result_49;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
            __freed_obj__ = 0;
            if(_if_conditional112=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,            __freed_obj__ = 0, 
            _if_conditional112) {
                __result50__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_50,0,sizeof(char*));
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = result_50;
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* default_value_52;
unsigned int hash_53;
unsigned int it_54;
_Bool _while_condtional9;
_Bool _if_conditional113;
void* right_value64;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional115;
void* right_value65;
void* right_value66;
struct optional$2sVarpbool* __result55__;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value67;
void* right_value68;
struct optional$2sVarpbool* __result56__;
void* right_value69;
void* right_value70;
struct optional$2sVarpbool* __result57__;
void* right_value71;
void* right_value72;
struct optional$2sVarpbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_52, 0, sizeof(struct sVar*));
memset(&hash_53, 0, sizeof(unsigned int));
memset(&it_54, 0, sizeof(unsigned int));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_52,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                hash_53=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_54=hash_53;
                __freed_obj__ = 0;
                while(_while_condtional9=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional113=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_54],                    __freed_obj__ = 0, 
                    _if_conditional113) {
                        if(_if_conditional115=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value64=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_54], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        (right_value64 && right_value64 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional115) {
                            __result55__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value66=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value65=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_54],(_Bool)1)));
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result55__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_54++;
                        __freed_obj__ = 0;
                        if(_if_conditional116=it_54>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional116) {
                            it_54=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional117=it_54==hash_53,                            __freed_obj__ = 0, 
                            _if_conditional117) {
                                __result56__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value68=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value67=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_52,(_Bool)0))));
                                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result56__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result57__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value70=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value69=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_52,(_Bool)0))));
                        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result58__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value72=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value71=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_52,(_Bool)0))));
                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result58__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional114;
_Bool default_value_55;
_Bool __result52__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_55, 0, sizeof(_Bool));
                            if(_if_conditional114=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional114) {
                                __freed_obj__ = 0;
                                memset(&default_value_55,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result52__ = default_value_55;
                                __freed_obj__ = 0;
                                return __result52__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result53__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result53__;
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

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sVarpbool* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result54__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result54__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional118;
struct sVar* default_value_56;
struct sVar* __result59__;
struct sVar* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_56, 0, sizeof(struct sVar*));
                if(_if_conditional118=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional118) {
                    __freed_obj__ = 0;
                    memset(&default_value_56,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    __result59__ = __result_obj__ = default_value_56;
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
                }
                else {
                    __result60__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result60__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result61__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                    __freed_obj__ = 0;
                                    return __result61__;
                                    __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_62;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_62, 0, sizeof(struct list_item$1sNodeph*));
                                        it_61=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional10=it_61!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional10) {
                                            prev_it_62=it_61;
                                            __freed_obj__ = 0;
                                            it_61=((struct list_item$1sNodeph*)come_null_check(it_61, "./comelang2.h", 479))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_62 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                        __freed_obj__ = 0;
                                        __result62__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result62__;
                                        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_64;
_Bool _for_condtionalA3;
_Bool _if_conditional125;
_Bool _if_conditional126;
int i_65;
_Bool _for_condtionalA4;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_64, 0, sizeof(int));
memset(&i_65, 0, sizeof(int));
            for(
            i_64=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            i_64<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            __freed_obj__ = 0, 
            _for_condtionalA3;            i_64++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional125=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_64],                __freed_obj__ = 0, 
                _if_conditional125) {
                    if(_if_conditional126=1,                    __freed_obj__ = 0, 
                    _if_conditional126) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_64] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_64], (void*)0, (void*)0, 0, 0, 0, 0); }
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
            i_65=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_65<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_65++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional131=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_65],                __freed_obj__ = 0, 
                _if_conditional131) {
                    if(_if_conditional132=1,                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_65] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_65] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_65], (void*)0, (void*)0, 0, 0, 0); }
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

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional127=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional127) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional128=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional128) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional129=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional129) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional130=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional130) {
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_66;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_67, 0, sizeof(struct list_item$1charp*));
                it_66=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional11=it_66!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional11) {
                    prev_it_67=it_66;
                    __freed_obj__ = 0;
                    it_66=((struct list_item$1charp*)come_null_check(it_66, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_67 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_67, (void*)0, (void*)0, 0, 0, 0, 0); }
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

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional133;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional14;
_Bool _if_conditional145;
void* right_value90;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool same_key_exist_103;
char* it2_106;
_Bool _for_condtionalA6;
void* right_value92;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct map$2charphsClassph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
memset(&right_value90, 0, sizeof(void*));
memset(&same_key_exist_103, 0, sizeof(_Bool));
memset(&it2_106, 0, sizeof(char*));
memset(&right_value92, 0, sizeof(void*));
        if(_if_conditional133=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional133) {
            map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_85=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_86=hash_85;
        __freed_obj__ = 0;
        while(_while_condtional14=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional14) {
            if(_if_conditional145=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_86],            __freed_obj__ = 0, 
            _if_conditional145) {
                if(_if_conditional146=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value90=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_86], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                (right_value90 && right_value90 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional146) {
                    if(_if_conditional147=1,                    __freed_obj__ = 0, 
                    _if_conditional147) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_86]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_86] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_86] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_86], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_86]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_86]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_86]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional167=1,                    __freed_obj__ = 0, 
                    _if_conditional167) {
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_86] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_86], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_86]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_86]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_86++;
                __freed_obj__ = 0;
                if(_if_conditional168=it_86>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional168) {
                    it_86=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional169=it_86==hash_85,                    __freed_obj__ = 0, 
                    _if_conditional169) {
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
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_86]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional170=1,                __freed_obj__ = 0, 
                _if_conditional170) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_86]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_86]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional171=1,                __freed_obj__ = 0, 
                _if_conditional171) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_86]=(struct sClass*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_86]=item;
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
        same_key_exist_103=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_106=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it2_106=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional176=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value92=string_equals(((char*)come_null_check(it2_106, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),            (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional176) {
                same_key_exist_103=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional177=!same_key_exist_103,        __freed_obj__ = 0, 
        _if_conditional177) {
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
int size_68;
void* right_value84;
char** keys_69;
void* right_value85;
struct sClass** items_70;
void* right_value86;
_Bool* item_existance_71;
int len_72;
char* it_75;
_Bool _for_condtionalA5;
struct sClass* default_value_78;
void* right_value88;
struct sClass* it2_81;
unsigned int hash_82;
int n_83;
_Bool _while_condtional13;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct sClass* default_value_84;
void* right_value89;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_68, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&keys_69, 0, sizeof(char**));
memset(&right_value85, 0, sizeof(void*));
memset(&items_70, 0, sizeof(struct sClass**));
memset(&right_value86, 0, sizeof(void*));
memset(&item_existance_71, 0, sizeof(_Bool*));
memset(&len_72, 0, sizeof(int));
memset(&it_75, 0, sizeof(char*));
memset(&default_value_78, 0, sizeof(struct sClass*));
memset(&right_value88, 0, sizeof(void*));
memset(&it2_81, 0, sizeof(struct sClass*));
memset(&hash_82, 0, sizeof(unsigned int));
memset(&n_83, 0, sizeof(int));
memset(&default_value_84, 0, sizeof(struct sClass*));
memset(&right_value89, 0, sizeof(void*));
                size_68=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_69=(char**)come_increment_ref_count(((char**)(right_value84=(char**)come_calloc(1, sizeof(char*)*(1*(size_68)), "./comelang2.h", 1370))));
                if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_70=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value85=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_68)), "./comelang2.h", 1371))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_71=(_Bool*)come_increment_ref_count(((_Bool*)(right_value86=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_68)), "./comelang2.h", 1372))));
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_72=0;
                __freed_obj__ = 0;
                for(
                it_75=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA5=                !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA5;                it_75=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_78,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    it2_81=((struct sClass*)(right_value88=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_75,default_value_78)));
                    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_82=string_get_hash_key(((char*)come_null_check(it_75, "./comelang2.h", 1380)))%size_68;
                    __freed_obj__ = 0;
                    n_83=hash_82;
                    __freed_obj__ = 0;
                    while(_while_condtional13=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        if(_if_conditional142=item_existance_71[n_83],                        __freed_obj__ = 0, 
                        _if_conditional142) {
                            n_83++;
                            __freed_obj__ = 0;
                            if(_if_conditional143=n_83>=size_68,                            __freed_obj__ = 0, 
                            _if_conditional143) {
                                n_83=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional144=n_83==hash_82,                                __freed_obj__ = 0, 
                                _if_conditional144) {
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
                            item_existance_71[n_83]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_69[n_83]=it_75;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_70[n_83]=((struct sClass*)(right_value89=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_75,default_value_84)));
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_72++;
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
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_69;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_70;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_71;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_68;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_72;
                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional134;
char* result_73;
char* __result63__;
_Bool _if_conditional135;
char* __result64__;
char* result_74;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(char*));
memset(&result_74, 0, sizeof(char*));
                    if(_if_conditional134=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        __freed_obj__ = 0;
                        memset(&result_73,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result63__ = __result_obj__ = result_73;
                        __freed_obj__ = 0;
                        return __result63__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional135=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        __result64__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result64__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_74,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result65__ = __result_obj__ = result_74;
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
_Bool _if_conditional136;
char* result_76;
char* __result67__;
_Bool _if_conditional137;
char* __result68__;
char* result_77;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(char*));
memset(&result_77, 0, sizeof(char*));
                    if(_if_conditional136=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        __freed_obj__ = 0;
                        memset(&result_76,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result67__ = __result_obj__ = result_76;
                        __freed_obj__ = 0;
                        return __result67__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional137=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional137) {
                        __result68__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result68__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_77,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result69__ = __result_obj__ = result_77;
                    __freed_obj__ = 0;
                    return __result69__;
                    __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_79;
unsigned int it_80;
_Bool _while_condtional12;
_Bool _if_conditional138;
void* right_value87;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional139;
struct sClass* __result70__;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* __result71__;
struct sClass* __result72__;
struct sClass* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&it_80, 0, sizeof(unsigned int));
memset(&right_value87, 0, sizeof(void*));
                        hash_79=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_80=hash_79;
                        __freed_obj__ = 0;
                        while(_while_condtional12=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional12) {
                            if(_if_conditional138=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_80],                            __freed_obj__ = 0, 
                            _if_conditional138) {
                                if(_if_conditional139=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value87=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_80], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional139) {
                                    __result70__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_80];
                                    __freed_obj__ = 0;
                                    return __result70__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_80++;
                                __freed_obj__ = 0;
                                if(_if_conditional140=it_80>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional140) {
                                    it_80=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional141=it_80==hash_79,                                    __freed_obj__ = 0, 
                                    _if_conditional141) {
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
int it2_87;
struct list_item$1charp* it_88;
_Bool _while_condtional15;
void* right_value91;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional148;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_87, 0, sizeof(int));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&right_value91, 0, sizeof(void*));
                            it2_87=0;
                            __freed_obj__ = 0;
                            it_88=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional15=it_88!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional15) {
                                if(_if_conditional148=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value91=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value91 && right_value91 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional148) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_87,it2_87+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_87++;
                                __freed_obj__ = 0;
                                it_88=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 500))->next;
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
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int tmp_89;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __result74__;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* it_92;
int i_93;
_Bool _while_condtional17;
_Bool _if_conditional157;
struct list_item$1charp* prev_it_94;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* it_95;
int i_96;
_Bool _while_condtional18;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list_item$1charp* prev_it_97;
struct list_item$1charp* it_98;
struct list_item$1charp* head_prev_it_99;
struct list_item$1charp* tail_it_100;
int i_101;
_Bool _while_condtional19;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1charp* prev_it_102;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct list$1charp* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1charp*));
memset(&it_95, 0, sizeof(struct list_item$1charp*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1charp*));
memset(&it_98, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_99, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_100, 0, sizeof(struct list_item$1charp*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional149=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            tmp_89=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_89;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional153=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional153) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional154=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional154) {
                                            __result74__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result74__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional155=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional155) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional156=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional156) {
                                                it_92=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_93=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_92!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    if(_if_conditional157=i_93<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional157) {
                                                        prev_it_94=it_92;
                                                        __freed_obj__ = 0;
                                                        it_92=((struct list_item$1charp*)come_null_check(it_92, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_93++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_94 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional158=i_93==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional158) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_92;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_92=((struct list_item$1charp*)come_null_check(it_92, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_93++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional159=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional159) {
                                                    it_95=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_96=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional18=it_95!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional18) {
                                                        if(_if_conditional160=i_96==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional160) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_95, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional161=i_96>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional161) {
                                                            prev_it_97=it_95;
                                                            __freed_obj__ = 0;
                                                            it_95=((struct list_item$1charp*)come_null_check(it_95, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_96++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_97 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_95=((struct list_item$1charp*)come_null_check(it_95, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_96++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_98=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_99=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_100=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_101=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_98!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional162=i_101==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional162) {
                                                            head_prev_it_99=((struct list_item$1charp*)come_null_check(it_98, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional163=i_101==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional163) {
                                                            tail_it_100=it_98;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional164=i_101>=head&&i_101<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional164) {
                                                            prev_it_102=it_98;
                                                            __freed_obj__ = 0;
                                                            it_98=((struct list_item$1charp*)come_null_check(it_98, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_101++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_102 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_98=((struct list_item$1charp*)come_null_check(it_98, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_101++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional165=head_prev_it_99!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional165) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_99, "./comelang2.h", 620))->next=tail_it_100;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional166=tail_it_100!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional166) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_100, "./comelang2.h", 623))->prev=head_prev_it_99;
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
struct list_item$1charp* it_90;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_91;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_91, 0, sizeof(struct list_item$1charp*));
                                                it_90=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_90!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    prev_it_91=it_90;
                                                    __freed_obj__ = 0;
                                                    it_90=((struct list_item$1charp*)come_null_check(it_90, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_91 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional172;
char* result_104;
char* __result78__;
_Bool _if_conditional173;
char* __result79__;
char* result_105;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_104, 0, sizeof(char*));
memset(&result_105, 0, sizeof(char*));
            if(_if_conditional172=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional172) {
                __freed_obj__ = 0;
                memset(&result_104,0,sizeof(char*));
                __freed_obj__ = 0;
                __result78__ = __result_obj__ = result_104;
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional173=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional173) {
                __result79__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_105,0,sizeof(char*));
            __freed_obj__ = 0;
            __result80__ = __result_obj__ = result_105;
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
_Bool _if_conditional174;
char* result_107;
char* __result82__;
_Bool _if_conditional175;
char* __result83__;
char* result_108;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_107, 0, sizeof(char*));
memset(&result_108, 0, sizeof(char*));
            if(_if_conditional174=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                __freed_obj__ = 0;
                memset(&result_107,0,sizeof(char*));
                __freed_obj__ = 0;
                __result82__ = __result_obj__ = result_107;
                __freed_obj__ = 0;
                return __result82__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional175=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional175) {
                __result83__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_108,0,sizeof(char*));
            __freed_obj__ = 0;
            __result84__ = __result_obj__ = result_108;
            __freed_obj__ = 0;
            return __result84__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional178;
void* right_value93;
struct list_item$1charp* litem_109;
_Bool _if_conditional179;
void* right_value94;
struct list_item$1charp* litem_110;
void* right_value95;
struct list_item$1charp* litem_111;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_109, 0, sizeof(struct list_item$1charp*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_110, 0, sizeof(struct list_item$1charp*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional178=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional178) {
                    litem_109=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value93=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_109, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_109, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_109, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_109;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_109;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional179=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        litem_110=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_110, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_110, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_110, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_110;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_110;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_111=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_111, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_111, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_111, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_111;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_111;
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

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional186=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional186) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional187=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional188;
void* right_value104;
struct list_item$1CVALUEph* litem_120;
struct CVALUE* __dec_obj35;
_Bool _if_conditional190;
void* right_value105;
struct list_item$1CVALUEph* litem_121;
struct CVALUE* __dec_obj36;
void* right_value106;
struct list_item$1CVALUEph* litem_122;
struct CVALUE* __dec_obj37;
struct list$1CVALUEph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_120, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value106, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional188=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional188) {
            litem_120=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_120, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_120, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj35=((struct list_item$1CVALUEph*)come_null_check(litem_120, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_120, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj35) { come_call_finalizer(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_120;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_120;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional190=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional190) {
                litem_121=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_121, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_121, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj36=((struct list_item$1CVALUEph*)come_null_check(litem_121, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_121, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj36) { come_call_finalizer(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_121;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_121;
                __freed_obj__ = 0;
            }
            else {
                litem_122=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value106=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_122, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_122, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj37=((struct list_item$1CVALUEph*)come_null_check(litem_122, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_122, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj37) { come_call_finalizer(CVALUE_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_122;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_122;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result87__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result87__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional189=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional189) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value107;
struct sNode* __dec_obj38;
void* right_value108;
char* __dec_obj39;
void* right_value118;
struct list$1tuple2$2charphsNodephph* __dec_obj45;
void* right_value119;
struct buffer* __dec_obj46;
void* right_value120;
char* __dec_obj47;
struct sMethodCallNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    __dec_obj38=((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(obj))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj39=((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(fun_name))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj45=((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value118=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj45) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj46=((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_clone(method_block))));
    if(__dec_obj46) { come_call_finalizer(buffer_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 168))->sline=((struct sInfo*)come_null_check(info, "20method.c", 168))->sline;
    __freed_obj__ = 0;
    __dec_obj47=((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 169))->sname))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 170))->method_block_sline=method_block_sline;
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional191;
struct list$1tuple2$2charphsNodephph* __result89__;
void* right_value109;
void* right_value110;
struct list$1tuple2$2charphsNodephph* result_125;
struct list_item$1tuple2$2charphsNodephph* it_126;
_Bool _while_condtional22;
void* right_value117;
struct list$1tuple2$2charphsNodephph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value117, 0, sizeof(void*));
        if(_if_conditional191=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional191) {
            __result89__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_125=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value110=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value109=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_126=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional22=it_126!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional22) {
            list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_125, "./comelang2.h", 192)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value117=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_126, "./comelang2.h", 192))->item)))));
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_126=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_126, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result94__ = __result_obj__ = result_125;
        if(result_125 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result94__;
        __freed_obj__ = 0;
        if(result_125 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsNodephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result90__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsNodephph* it_123;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_124, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_123=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional21=it_123!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    prev_it_124=it_123;
                    __freed_obj__ = 0;
                    it_123=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_123, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_124 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional192=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            if(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional193) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional194=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional194) {
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional195;
void* right_value111;
struct list_item$1tuple2$2charphsNodephph* litem_127;
struct tuple2$2charphsNodeph* __dec_obj40;
_Bool _if_conditional198;
void* right_value112;
struct list_item$1tuple2$2charphsNodephph* litem_128;
struct tuple2$2charphsNodeph* __dec_obj41;
void* right_value113;
struct list_item$1tuple2$2charphsNodephph* litem_129;
struct tuple2$2charphsNodeph* __dec_obj42;
struct list$1tuple2$2charphsNodephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional195=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional195) {
                    litem_127=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value111=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 202))));
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_127, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_127, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj40=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_127, "./comelang2.h", 206))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_127, "./comelang2.h", 206))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj40) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_127;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_127;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional198=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional198) {
                        litem_128=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value112=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 212))));
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_128, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_128, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj41=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_128, "./comelang2.h", 216))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_128, "./comelang2.h", 216))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_128;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_128;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_129=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value113=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 222))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_129, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_129, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj42=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_129, "./comelang2.h", 226))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_129, "./comelang2.h", 226))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj42) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_129;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_129;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result91__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result91__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional196=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional196) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional197=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional197) {
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional199;
struct tuple2$2charphsNodeph* __result92__;
void* right_value114;
struct tuple2$2charphsNodeph* result_130;
_Bool _if_conditional200;
void* right_value115;
char* __dec_obj43;
_Bool _if_conditional201;
void* right_value116;
struct sNode* __dec_obj44;
struct tuple2$2charphsNodeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&result_130, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
                if(_if_conditional199=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    __result92__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result92__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_130=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value114=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional200=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional200) {
                    __dec_obj43=((struct tuple2$2charphsNodeph*)come_null_check(result_130, "tuple2$2charphsNodephp_clone", 4))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_130, "tuple2$2charphsNodephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1))));
                    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional201=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 6))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional201) {
                    __dec_obj44=((struct tuple2$2charphsNodeph*)come_null_check(result_130, "tuple2$2charphsNodephp_clone", 5))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_130, "tuple2$2charphsNodephp_clone", 5))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result93__ = __result_obj__ = result_130;
                if(result_130 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_130, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result93__;
                __freed_obj__ = 0;
                if(result_130 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_130, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = ((struct sMethodCallNode*)come_null_check(self, "20method.c", 177))->sline;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value121;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value121=__builtin_string(((struct sMethodCallNode*)come_null_check(self, "20method.c", 182))->sname)));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value122;
char* none_generics_name_131;
void* right_value123;
char* fun_name2_132;
void* right_value124;
char* fun_name3_133;
void* right_value126;
struct sGenericsFun* generics_fun_136;
_Bool _if_conditional220;
void* right_value127;
_Bool _if_conditional221;
void* right_value128;
char* __result102__;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&none_generics_name_131, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&fun_name2_132, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&fun_name3_133, 0, sizeof(char*));
memset(&right_value126, 0, sizeof(void*));
memset(&generics_fun_136, 0, sizeof(struct sGenericsFun*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    none_generics_name_131=(char*)come_increment_ref_count(((char*)(right_value122=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "20method.c", 191))->mClass, "20method.c", 191))->mName))));
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name2_132=(char*)come_increment_ref_count(((char*)(right_value123=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name3_133=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s_%s",none_generics_name_131,fun_name))));
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    generics_fun_136=((struct sGenericsFun*)(right_value126=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 195))->generics_funcs, "20method.c", 195)),fun_name3_133,((void*)0))));
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional220=generics_fun_136,    __freed_obj__ = 0, 
    _if_conditional220) {
        if(_if_conditional221=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(fun_name2_132)))),generics_fun_136,type,info),        (right_value127 && right_value127 != __result_obj__ && !__freed_obj__) ? right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional221) {
            err_msg(info,"%s not found",fun_name3_133);
            __freed_obj__ = 0;
            __result102__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
            if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
            if(none_generics_name_131 && !__freed_obj__) { none_generics_name_131 = come_decrement_ref_count(none_generics_name_131, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name2_132 && !__freed_obj__) { fun_name2_132 = come_decrement_ref_count(fun_name2_132, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name3_133 && !__freed_obj__) { fun_name3_133 = come_decrement_ref_count(fun_name3_133, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result102__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = fun_name2_132;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_131 && !__freed_obj__) { none_generics_name_131 = come_decrement_ref_count(none_generics_name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_132 && !__freed_obj__) { fun_name2_132 = come_decrement_ref_count(fun_name2_132, (void*)0, (void*)0, 0, 1, 0); }
    if(fun_name3_133 && !__freed_obj__) { fun_name3_133 = come_decrement_ref_count(fun_name3_133, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_131 && !__freed_obj__) { none_generics_name_131 = come_decrement_ref_count(none_generics_name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_132 && !__freed_obj__) { fun_name2_132 = come_decrement_ref_count(fun_name2_132, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name3_133 && !__freed_obj__) { fun_name3_133 = come_decrement_ref_count(fun_name3_133, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_134;
unsigned int it_135;
_Bool _while_condtional23;
_Bool _if_conditional207;
void* right_value125;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional208;
struct sGenericsFun* __result98__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sGenericsFun* __result99__;
struct sGenericsFun* __result100__;
struct sGenericsFun* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_134, 0, sizeof(unsigned int));
memset(&it_135, 0, sizeof(unsigned int));
memset(&right_value125, 0, sizeof(void*));
        hash_134=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
        __freed_obj__ = 0;
        it_135=hash_134;
        __freed_obj__ = 0;
        while(_while_condtional23=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional23) {
            if(_if_conditional207=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_135],            __freed_obj__ = 0, 
            _if_conditional207) {
                if(_if_conditional208=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value125=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_135], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                (right_value125 && right_value125 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional208) {
                    __result98__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_135];
                    __freed_obj__ = 0;
                    return __result98__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_135++;
                __freed_obj__ = 0;
                if(_if_conditional209=it_135>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                __freed_obj__ = 0, 
                _if_conditional209) {
                    it_135=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional210=it_135==hash_134,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result99__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result99__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result100__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result100__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result101__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
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
        if(_if_conditional211=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional211) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional212=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional212) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional213=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional213) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional214=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional214) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional215=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional215) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional216=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional216) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional217=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional217) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional218=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional218) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional219=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional219) {
            if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional222;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional222=((struct sMethodCallNode*)come_null_check(self, "20method.c", 215))->method_block,    __freed_obj__ = 0, 
    _if_conditional222) {
        __result104__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    else {
        __result105__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* sMethodCallNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value129;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
    __result106__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sMethodCallNode")));
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* fun_name_137;
struct list$1tuple2$2charphsNodephph* params_138;
struct sNode* obj_139;
struct buffer* method_block_140;
int method_block_sline_141;
_Bool _if_conditional223;
_Bool __result107__;
void* right_value130;
struct CVALUE* obj_value_142;
void* right_value131;
struct sType* obj_type_143;
struct sClass* klass_144;
_Bool calling_dynamic_method_145;
struct sType* lambda_type_146;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* it_150;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_153;
struct sType* field_type_154;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value132;
struct sType* result_type_155;
void* right_value133;
void* right_value134;
struct list$1CVALUEph* come_params_158;
int i_159;
struct list$1tuple2$2charphsNodephph* o2_saved_160;
struct tuple2$2charphsNodeph* it_163;
_Bool _for_condtionalA9;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_166;
struct sNode* node_167;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool __result123__;
void* right_value135;
struct CVALUE* come_value_168;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value143;
void* right_value144;
struct optional$2sTypephbool* __exception_result_var_a6;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
char* __dec_obj49;
_Bool _if_conditional243;
void* right_value145;
char* __dec_obj50;
_Bool _if_conditional244;
void* right_value146;
char* __dec_obj51;
void* right_value147;
char* __dec_obj52;
_Bool _if_conditional245;
void* right_value148;
char* __dec_obj53;
void* right_value149;
void* right_value150;
struct buffer* buf_173;
void* right_value151;
int j_174;
struct list$1CVALUEph* o2_saved_175;
struct CVALUE* it_178;
_Bool _for_condtionalA10;
_Bool _if_conditional250;
void* right_value152;
char* __dec_obj54;
_Bool _if_conditional251;
void* right_value153;
struct CVALUE* come_value2_181;
void* right_value154;
char* __dec_obj55;
void* right_value155;
struct sType* result_type2_182;
_Bool _if_conditional252;
void* right_value156;
void* right_value157;
char* __dec_obj56;
void* right_value158;
struct sType* __dec_obj57;
void* right_value159;
void* right_value160;
void* right_value161;
char* generics_fun_name_183;
struct sFun* fun_184;
int i_185;
_Bool _for_condtionalA11;
void* right_value162;
char* new_fun_name_186;
void* right_value172;
_Bool _if_conditional258;
void* right_value173;
char* __dec_obj58;
_Bool _if_conditional259;
void* right_value175;
_Bool _if_conditional279;
void* right_value176;
void* right_value177;
char* __dec_obj59;
void* right_value178;
_Bool _if_conditional280;
_Bool __result148__;
void* right_value179;
struct sType* result_type_193;
void* right_value180;
struct sType* result_type2_194;
void* right_value181;
void* right_value182;
struct list$1sTypeph* param_types_195;
struct list$1sTypeph* o2_saved_196;
struct sType* it_199;
_Bool _for_condtionalA12;
_Bool _if_conditional285;
void* right_value186;
struct sType* it2_205;
void* right_value187;
void* right_value188;
void* right_value189;
struct list$1CVALUEph* come_params_206;
void* right_value190;
void* right_value196;
struct map$2charphCVALUEph* label_params_210;
int i_211;
struct list$1tuple2$2charphsNodephph* o2_saved_212;
struct tuple2$2charphsNodeph* it_213;
_Bool _for_condtionalA16;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_214;
struct sNode* node_215;
_Bool _if_conditional292;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
struct optional$2sTypephbool* __exception_result_var_a8;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
char* __dec_obj64;
_Bool _if_conditional296;
void* right_value202;
char* __dec_obj65;
_Bool _if_conditional297;
void* right_value203;
char* __dec_obj66;
void* right_value204;
char* __dec_obj67;
_Bool _if_conditional298;
void* right_value205;
char* __dec_obj68;
void* right_value206;
struct optional$2sTypephbool* __exception_result_var_a9;
_Bool _if_conditional299;
void* right_value211;
_Bool _if_conditional304;
_Bool __result164__;
void* right_value212;
struct CVALUE* come_value_220;
_Bool _if_conditional305;
int n_221;
struct list$1charph* o2_saved_222;
char* it_225;
_Bool _for_condtionalA17;
_Bool _if_conditional310;
void* right_value213;
struct optional$2sTypephbool* __exception_result_var_a10;
_Bool _if_conditional311;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
struct optional$2sTypephbool* __exception_result_var_a11;
void* right_value219;
struct optional$2sTypephbool* __exception_result_var_a12;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
char* __dec_obj70;
_Bool _if_conditional315;
void* right_value220;
char* __dec_obj71;
_Bool _if_conditional316;
void* right_value221;
char* __dec_obj72;
void* right_value222;
char* __dec_obj73;
_Bool _if_conditional317;
void* right_value223;
char* __dec_obj74;
void* right_value224;
struct optional$2sTypephbool* __exception_result_var_a13;
_Bool _if_conditional318;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
struct optional$2sTypephbool* __exception_result_var_a14;
void* right_value230;
struct optional$2sTypephbool* __exception_result_var_a15;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* __dec_obj75;
_Bool _if_conditional322;
void* right_value231;
char* __dec_obj76;
_Bool _if_conditional323;
void* right_value232;
char* __dec_obj77;
void* right_value233;
char* __dec_obj78;
_Bool _if_conditional324;
void* right_value234;
char* __dec_obj79;
_Bool _if_conditional325;
void* right_value243;
_Bool _if_conditional348;
_Bool _for_condtionalA20;
void* right_value244;
void* right_value245;
char* default_param_249;
void* right_value246;
char* param_name_250;
void* right_value256;
struct CVALUE* come_value_255;
_Bool _if_conditional354;
struct buffer* source_256;
char* p_257;
char* head_258;
int sline_259;
void* right_value257;
struct buffer* __dec_obj80;
void* right_value258;
struct sNode* node_260;
_Bool _if_conditional355;
_Bool __result193__;
struct buffer* __dec_obj81;
void* right_value259;
struct CVALUE* come_value_261;
void* right_value260;
struct optional$2sTypephbool* __exception_result_var_a19;
_Bool _if_conditional356;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
struct optional$2sTypephbool* __exception_result_var_a20;
void* right_value266;
struct optional$2sTypephbool* __exception_result_var_a21;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
char* __dec_obj82;
_Bool _if_conditional360;
void* right_value267;
char* __dec_obj83;
_Bool _if_conditional361;
void* right_value268;
char* __dec_obj84;
void* right_value269;
char* __dec_obj85;
_Bool _if_conditional362;
void* right_value270;
char* __dec_obj86;
_Bool _if_conditional363;
_Bool __result194__;
_Bool _if_conditional364;
_Bool _for_condtionalA21;
void* right_value271;
char* param_name_262;
void* right_value272;
struct CVALUE* come_value_263;
_Bool _if_conditional365;
void* right_value276;
_Bool _if_conditional373;
void* right_value277;
void* right_value278;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value281;
struct sNode* current_stack_frame_node_268;
_Bool _if_conditional378;
_Bool __result203__;
void* right_value282;
struct CVALUE* come_value_269;
void* right_value283;
void* right_value284;
struct buffer* method_block2_270;
void* right_value285;
void* right_value286;
struct sType* method_block_type_271;
void* right_value287;
char* class_name_272;
void* right_value288;
void* right_value298;
struct sClass* current_stack_frame_struct_277;
void* right_value299;
_Bool _if_conditional384;
_Bool __result211__;
void* right_value300;
struct sType* result_type_278;
struct list$1sTypeph* param_types_279;
struct list$1charph* param_names_280;
void* right_value301;
void* right_value302;
struct buffer* all_alhabet_sname_281;
char* p_282;
_Bool _while_condtional35;
_Bool _if_conditional385;
void* right_value303;
void* right_value304;
void* right_value305;
int i_283;
struct list$1sTypeph* o2_saved_284;
struct sType* it_285;
_Bool _for_condtionalA22;
struct sType* param_type_286;
_Bool _if_conditional387;
void* right_value306;
char* param_name_287;
void* right_value307;
void* right_value308;
_Bool _if_conditional388;
void* right_value309;
char* param_name_288;
void* right_value310;
void* right_value311;
void* right_value312;
char* param_name_289;
void* right_value313;
void* right_value314;
_Bool _if_conditional389;
void* right_value315;
struct buffer* source3_290;
char* p_291;
char* head_292;
int sline_293;
struct buffer* __dec_obj91;
void* right_value316;
struct sNode* node_294;
_Bool _if_conditional390;
_Bool __result213__;
void* right_value317;
void* right_value318;
char* method_block_name_295;
void* right_value319;
struct CVALUE* come_value2_296;
void* right_value320;
struct sFun* fun2_297;
_Bool _if_conditional391;
_Bool __result214__;
struct sType* method_block_type2_298;
void* right_value321;
char* __dec_obj92;
void* right_value322;
struct sType* __dec_obj93;
struct buffer* __dec_obj94;
void* right_value323;
void* right_value324;
struct buffer* buf_299;
int j_300;
struct list$1CVALUEph* o2_saved_301;
struct CVALUE* it_302;
_Bool _for_condtionalA23;
_Bool _if_conditional392;
void* right_value325;
struct CVALUE* come_value2_303;
void* right_value326;
char* __dec_obj95;
void* right_value327;
struct sType* __dec_obj96;
_Bool _if_conditional393;
void* right_value328;
char* __dec_obj97;
_Bool _if_conditional394;
void* right_value329;
char* __dec_obj98;
_Bool _if_conditional395;
void* right_value330;
char* var_name_304;
void* right_value331;
struct sType* result_type_305;
void* right_value332;
struct sType* result_type2_306;
struct sType* result_type3_307;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value333;
void* right_value334;
void* right_value335;
void* right_value336;
void* right_value337;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
_Bool _if_conditional399;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
_Bool __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_name_137, 0, sizeof(char*));
memset(&params_138, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_139, 0, sizeof(struct sNode*));
memset(&method_block_140, 0, sizeof(struct buffer*));
memset(&method_block_sline_141, 0, sizeof(int));
memset(&right_value130, 0, sizeof(void*));
memset(&obj_value_142, 0, sizeof(struct CVALUE*));
memset(&right_value131, 0, sizeof(void*));
memset(&obj_type_143, 0, sizeof(struct sType*));
memset(&klass_144, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_145, 0, sizeof(_Bool));
memset(&lambda_type_146, 0, sizeof(struct sType*));
memset(&o2_saved_147, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_150, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_153, 0, sizeof(char*));
memset(&field_type_154, 0, sizeof(struct sType*));
memset(&field_name_153, 0, sizeof(char*));
memset(&field_type_154, 0, sizeof(struct sType*));
memset(&right_value132, 0, sizeof(void*));
memset(&result_type_155, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&come_params_158, 0, sizeof(struct list$1CVALUEph*));
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_163, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
memset(&label_166, 0, sizeof(char*));
memset(&node_167, 0, sizeof(struct sNode*));
memset(&right_value135, 0, sizeof(void*));
memset(&come_value_168, 0, sizeof(struct CVALUE*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&buf_173, 0, sizeof(struct buffer*));
memset(&right_value151, 0, sizeof(void*));
memset(&j_174, 0, sizeof(int));
memset(&o2_saved_175, 0, sizeof(struct list$1CVALUEph*));
memset(&it_178, 0, sizeof(struct CVALUE*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&come_value2_181, 0, sizeof(struct CVALUE*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&result_type2_182, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&generics_fun_name_183, 0, sizeof(char*));
memset(&fun_184, 0, sizeof(struct sFun*));
memset(&i_185, 0, sizeof(int));
memset(&right_value162, 0, sizeof(void*));
memset(&new_fun_name_186, 0, sizeof(char*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&result_type_193, 0, sizeof(struct sType*));
memset(&right_value180, 0, sizeof(void*));
memset(&result_type2_194, 0, sizeof(struct sType*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&param_types_195, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_196, 0, sizeof(struct list$1sTypeph*));
memset(&it_199, 0, sizeof(struct sType*));
memset(&right_value186, 0, sizeof(void*));
memset(&it2_205, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&come_params_206, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&label_params_210, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_211, 0, sizeof(int));
memset(&o2_saved_212, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_213, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_214, 0, sizeof(char*));
memset(&node_215, 0, sizeof(struct sNode*));
memset(&label_214, 0, sizeof(char*));
memset(&node_215, 0, sizeof(struct sNode*));
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
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_220, 0, sizeof(struct CVALUE*));
memset(&n_221, 0, sizeof(int));
memset(&o2_saved_222, 0, sizeof(struct list$1charph*));
memset(&it_225, 0, sizeof(char*));
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
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&default_param_249, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&param_name_250, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
memset(&come_value_255, 0, sizeof(struct CVALUE*));
memset(&source_256, 0, sizeof(struct buffer*));
memset(&p_257, 0, sizeof(char*));
memset(&head_258, 0, sizeof(char*));
memset(&sline_259, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&node_260, 0, sizeof(struct sNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&come_value_261, 0, sizeof(struct CVALUE*));
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
memset(&param_name_262, 0, sizeof(char*));
memset(&right_value272, 0, sizeof(void*));
memset(&come_value_263, 0, sizeof(struct CVALUE*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&current_stack_frame_node_268, 0, sizeof(struct sNode*));
memset(&right_value282, 0, sizeof(void*));
memset(&come_value_269, 0, sizeof(struct CVALUE*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&method_block2_270, 0, sizeof(struct buffer*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&method_block_type_271, 0, sizeof(struct sType*));
memset(&right_value287, 0, sizeof(void*));
memset(&class_name_272, 0, sizeof(char*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&current_stack_frame_struct_277, 0, sizeof(struct sClass*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&result_type_278, 0, sizeof(struct sType*));
memset(&param_types_279, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_280, 0, sizeof(struct list$1charph*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&all_alhabet_sname_281, 0, sizeof(struct buffer*));
memset(&p_282, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&i_283, 0, sizeof(int));
memset(&o2_saved_284, 0, sizeof(struct list$1sTypeph*));
memset(&it_285, 0, sizeof(struct sType*));
memset(&param_type_286, 0, sizeof(struct sType*));
memset(&right_value306, 0, sizeof(void*));
memset(&param_name_287, 0, sizeof(char*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&param_name_288, 0, sizeof(char*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&param_name_289, 0, sizeof(char*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&source3_290, 0, sizeof(struct buffer*));
memset(&p_291, 0, sizeof(char*));
memset(&head_292, 0, sizeof(char*));
memset(&sline_293, 0, sizeof(int));
memset(&right_value316, 0, sizeof(void*));
memset(&node_294, 0, sizeof(struct sNode*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&method_block_name_295, 0, sizeof(char*));
memset(&right_value319, 0, sizeof(void*));
memset(&come_value2_296, 0, sizeof(struct CVALUE*));
memset(&right_value320, 0, sizeof(void*));
memset(&fun2_297, 0, sizeof(struct sFun*));
memset(&method_block_type2_298, 0, sizeof(struct sType*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&buf_299, 0, sizeof(struct buffer*));
memset(&j_300, 0, sizeof(int));
memset(&o2_saved_301, 0, sizeof(struct list$1CVALUEph*));
memset(&it_302, 0, sizeof(struct CVALUE*));
memset(&right_value325, 0, sizeof(void*));
memset(&come_value2_303, 0, sizeof(struct CVALUE*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&var_name_304, 0, sizeof(char*));
memset(&right_value331, 0, sizeof(void*));
memset(&result_type_305, 0, sizeof(struct sType*));
memset(&right_value332, 0, sizeof(void*));
memset(&result_type2_306, 0, sizeof(struct sType*));
memset(&result_type3_307, 0, sizeof(struct sType*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
    fun_name_137=((struct sMethodCallNode*)come_null_check(self, "20method.c", 224))->fun_name;
    __freed_obj__ = 0;
    params_138=((struct sMethodCallNode*)come_null_check(self, "20method.c", 225))->params;
    __freed_obj__ = 0;
    obj_139=((struct sMethodCallNode*)come_null_check(self, "20method.c", 226))->obj;
    __freed_obj__ = 0;
    method_block_140=((struct sMethodCallNode*)come_null_check(self, "20method.c", 227))->method_block;
    __freed_obj__ = 0;
    method_block_sline_141=((struct sMethodCallNode*)come_null_check(self, "20method.c", 228))->method_block_sline;
    __freed_obj__ = 0;
    if(_if_conditional223=!((struct sNode*)come_null_check(obj_139, "20method.c", 234))->compile(((struct sNode*)come_null_check(obj_139, "20method.c", 234))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional223) {
        __result107__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    obj_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    obj_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 240))->type))));
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_144=((struct sType*)come_null_check(obj_type_143, "20method.c", 242))->mClass;
    __freed_obj__ = 0;
    calling_dynamic_method_145=(_Bool)0;
    __freed_obj__ = 0;
    lambda_type_146=((void*)0);
    __freed_obj__ = 0;
    for(
    o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_144, "20method.c", 256))->mFields)),it_150=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "20method.c", 256))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "20method.c", 256))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_150=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "20method.c", 256))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_150;
        field_name_153=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_154=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional228=string_operator_equals(field_name_153,fun_name_137)&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(field_type_154, "20method.c", 254))->mClass, "20method.c", 254))->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional228) {
            calling_dynamic_method_145=(_Bool)1;
            __freed_obj__ = 0;
            lambda_type_146=field_type_154;
            __freed_obj__ = 0;
            if(field_name_153 && !__freed_obj__) { field_name_153 = come_decrement_ref_count(field_name_153, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(field_name_153 && !__freed_obj__) { field_name_153 = come_decrement_ref_count(field_name_153, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_147 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional229=calling_dynamic_method_145,    __freed_obj__ = 0, 
    _if_conditional229) {
        result_type_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type_146, "20method.c", 257))->mResultType, "20method.c", 257))->v1))));
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_155, "20method.c", 258))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_158=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value134=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value133=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260))))))));
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_159=0;
        __freed_obj__ = 0;
        for(
        o2_saved_160=(params_138),it_163=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_160), "20method.c", 314))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_160), "20method.c", 314))) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_163=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_160), "20method.c", 314))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=it_163;
            label_166=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_167=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            if(_if_conditional234=i_159==0,            __freed_obj__ = 0, 
            _if_conditional234) {
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_158, "20method.c", 267)),(struct CVALUE*)come_increment_ref_count(obj_value_142));
                __freed_obj__ = 0;
                i_159++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional235=!((struct sNode*)come_null_check(node_167, "20method.c", 275))->compile(((struct sNode*)come_null_check(node_167, "20method.c", 275))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional235) {
                    __result123__ = (_Bool)0;
                    if(label_166 && !__freed_obj__) { label_166 = come_decrement_ref_count(label_166, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_167 && !__freed_obj__) { node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_155 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result123__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                check_assign_type(((char*)(right_value138=xsprintf("\%s param num \%s is assinged to",((char*)(right_value136=charp_to_string(fun_name_137))),((char*)(right_value137=int_to_string(i_159)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 277),((struct optional$2sTypephbool*)(right_value143=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_146, "20method.c", 277))->mParamTypes,i_159-1))))),((struct CVALUE*)come_null_check(come_value_168, "20method.c", 277))->type,come_value_168,(_Bool)0,info);
                come_pop_stackframe();
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional240=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 307),__exception_result_var_a6=((struct optional$2sTypephbool*)(right_value144=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_146, "20method.c", 307))->mParamTypes,i_159-1))), come_pop_stackframe(), __exception_result_var_a6)), "20method.c", 307))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 307))->type, "20method.c", 307))->mHeap,                (right_value144 && right_value144 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(_if_conditional241=((struct CVALUE*)come_null_check(come_value_168, "20method.c", 305))->var,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        if(_if_conditional242=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            __dec_obj49=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 282))->var, "20method.c", 282))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 282))->var, "20method.c", 282))->mCValueName=((void*)0);
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional243=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                __dec_obj50=((struct CVALUE*)come_null_check(come_value_168, "20method.c", 285))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_168, "20method.c", 285))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 285))->type,((struct CVALUE*)come_null_check(come_value_168, "20method.c", 285))->c_value,info))));
                                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional244=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 297))->var, "20method.c", 297))->mType, "20method.c", 297))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional244) {
                                    __dec_obj51=((struct CVALUE*)come_null_check(come_value_168, "20method.c", 288))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_168, "20method.c", 288))->c_value=(char*)come_increment_ref_count(((char*)(right_value146=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 288))->type,((struct CVALUE*)come_null_check(come_value_168, "20method.c", 288))->c_value,info))));
                                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj52=((struct CVALUE*)come_null_check(come_value_168, "20method.c", 291))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_168, "20method.c", 291))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 291))->type,((struct CVALUE*)come_null_check(come_value_168, "20method.c", 291))->c_value,info))));
                                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional245=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 304))->type, "20method.c", 304))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional245) {
                        }
                        else {
                            __dec_obj53=((struct CVALUE*)come_null_check(come_value_168, "20method.c", 302))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_168, "20method.c", 302))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_168, "20method.c", 302))->type,((struct CVALUE*)come_null_check(come_value_168, "20method.c", 302))->c_value,info))));
                            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_158, "20method.c", 307)),(struct CVALUE*)come_increment_ref_count(come_value_168));
                __freed_obj__ = 0;
                i_159++;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_166 && !__freed_obj__) { label_166 = come_decrement_ref_count(label_166, (void*)0, (void*)0, 0, 0, 0); }
            if(node_167 && !__freed_obj__) { node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        buf_173=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 314))))))));
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_173, "20method.c", 316)),((char*)(right_value151=xsprintf("%s->%s",((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 316))->c_value,fun_name_137))));
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_173, "20method.c", 317)),"(");
        __freed_obj__ = 0;
        j_174=0;
        __freed_obj__ = 0;
        for(
        o2_saved_175=(struct list$1CVALUEph*)come_increment_ref_count((come_params_158)),it_178=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_175), "20method.c", 332))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_175), "20method.c", 332))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_178=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_175), "20method.c", 332))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional250=j_174==0,            __freed_obj__ = 0, 
            _if_conditional250) {
                __dec_obj54=((struct CVALUE*)come_null_check(it_178, "20method.c", 322))->c_value;
                ((struct CVALUE*)come_null_check(it_178, "20method.c", 322))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->_protocol_obj",((struct CVALUE*)come_null_check(it_178, "20method.c", 322))->c_value))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_173, "20method.c", 324)),((struct CVALUE*)come_null_check(it_178, "20method.c", 324))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional251=j_174!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_158, "20method.c", 330)))-1,            __freed_obj__ = 0, 
            _if_conditional251) {
                buffer_append_str(((struct buffer*)come_null_check(buf_173, "20method.c", 327)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_174++;
            __freed_obj__ = 0;
        }
        if(o2_saved_175 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_175, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_173, "20method.c", 332)),")");
        __freed_obj__ = 0;
        come_value2_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 334))));
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj55=((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 336))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 336))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=buffer_to_string(((struct buffer*)come_null_check(buf_173, "20method.c", 336))))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type2_182=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=solve_generics(result_type_155,((struct sInfo*)come_null_check(info, "20method.c", 338))->generics_type,info))));
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional252=((struct sType*)come_null_check(result_type2_182, "20method.c", 344))->mHeap,        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj56=((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 341))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 341))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=append_object_to_right_values(((char*)(right_value156=buffer_to_string(((struct buffer*)come_null_check(buf_173, "20method.c", 341))))),(struct sType*)come_increment_ref_count(result_type2_182),info))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj57=((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 344))->type;
        ((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 344))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(result_type2_182))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 345))->type, "20method.c", 345))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 346))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_181, "20method.c", 348))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 350))->stack, "20method.c", 350)),(struct CVALUE*)come_increment_ref_count(come_value2_181));
        __freed_obj__ = 0;
        if(result_type_155 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_173 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_181 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_182 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        generics_fun_name_183=(char*)come_increment_ref_count(((char*)(right_value161=string_to_string(((char*)come_null_check(((char*)(right_value160=make_generics_function(obj_type_143,(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(fun_name_137)))),info))), "20method.c", 353))))));
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_184=((void*)0);
        __freed_obj__ = 0;
        for(
        i_185=128 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        i_185>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA11;        i_185-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_186=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s_v%d",generics_fun_name_183,i_185))));
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_184=optional$2sFunpbool_value((come_push_stackframe("20method.c", 360),((struct optional$2sFunpbool*)(right_value172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 360))->funcs,new_fun_name_186)))));
            come_pop_stackframe();
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional258=fun_184!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional258) {
                __dec_obj58=generics_fun_name_183;
                generics_fun_name_183=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(new_fun_name_186))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_186 && !__freed_obj__) { new_fun_name_186 = come_decrement_ref_count(new_fun_name_186, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_186 && !__freed_obj__) { new_fun_name_186 = come_decrement_ref_count(new_fun_name_186, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional259=fun_184==((void*)0),        __freed_obj__ = 0, 
        _if_conditional259) {
            fun_184=((struct sFun*)(right_value175=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 369))->funcs, "20method.c", 369)),generics_fun_name_183,((void*)0))));
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional279=fun_184==((void*)0),            __freed_obj__ = 0, 
            _if_conditional279) {
                __dec_obj59=generics_fun_name_183;
                generics_fun_name_183=(char*)come_increment_ref_count(((char*)(right_value177=create_method_name(obj_type_143,(_Bool)0,((char*)(right_value176=__builtin_string(fun_name_137))),info))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                fun_184=((struct sFun*)(right_value178=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 374))->funcs, "20method.c", 374)),generics_fun_name_183,((void*)0))));
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional280=fun_184==((void*)0),                __freed_obj__ = 0, 
                _if_conditional280) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_183,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 377))->come_fun, "20method.c", 377))->mName);
                    __freed_obj__ = 0;
                    __result148__ = (_Bool)1;
                    if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result148__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(((struct sFun*)come_null_check(fun_184, "20method.c", 383))->mResultType))));
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_193, "20method.c", 384))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        result_type2_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=solve_generics(result_type_193,((struct sInfo*)come_null_check(info, "20method.c", 386))->generics_type,info))));
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        param_types_195=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 388))))))));
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_196=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_184, "20method.c", 400))->mParamTypes)),it_199=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_196), "20method.c", 400))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_196), "20method.c", 400))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_199=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_196), "20method.c", 400))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional285=it_199==((void*)0),            __freed_obj__ = 0, 
            _if_conditional285) {
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_195, "20method.c", 391)),it_199);
                __freed_obj__ = 0;
            }
            else {
                it2_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=solve_generics(it_199,((struct sInfo*)come_null_check(info, "20method.c", 394))->generics_type,info))));
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_195, "20method.c", 396)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(it2_205)))));
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(it2_205 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_205, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        if(o2_saved_196 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_params_206=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value189=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value188=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 400))))))));
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        label_params_210=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value196=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value190=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 402))))))));
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_211=0;
        __freed_obj__ = 0;
        for(
        o2_saved_212=(params_138),it_213=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_212), "20method.c", 538))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        !list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_212), "20method.c", 538))) ,        __freed_obj__ = 0, 
        _for_condtionalA16;        it_213=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_212), "20method.c", 538))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var3=it_213;
            label_214=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_215=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            __freed_obj__ = 0;
            if(_if_conditional292=i_211==0,            __freed_obj__ = 0, 
            _if_conditional292) {
                come_clear_stackframe();
                check_assign_type(((char*)(right_value199=xsprintf("\%s param num \%s is assinged to",((char*)(right_value197=charp_to_string(fun_name_137))),((char*)(right_value198=int_to_string(i_211)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 409),((struct optional$2sTypephbool*)(right_value200=list$1sTypephp_operator_load_element(param_types_195,i_211))))),((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 409))->type,obj_value_142,(_Bool)0,info);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional293=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 441),__exception_result_var_a8=((struct optional$2sTypephbool*)(right_value201=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a8)), "20method.c", 441))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 441))->type, "20method.c", 441))->mHeap,                (right_value201 && right_value201 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional293) {
                    if(_if_conditional294=((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 436))->var,                    __freed_obj__ = 0, 
                    _if_conditional294) {
                        if(_if_conditional295=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional295) {
                            __dec_obj64=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 413))->var, "20method.c", 413))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 413))->var, "20method.c", 413))->mCValueName=((void*)0);
                            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional296=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                __dec_obj65=((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 416))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 416))->c_value=(char*)come_increment_ref_count(((char*)(right_value202=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 416))->type,((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 416))->c_value,info))));
                                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional297=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 428))->var, "20method.c", 428))->mType, "20method.c", 428))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional297) {
                                    __dec_obj66=((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 419))->c_value;
                                    ((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value203=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 419))->type,((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 419))->c_value,info))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj67=((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 422))->c_value;
                                    ((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 422))->c_value=(char*)come_increment_ref_count(((char*)(right_value204=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 422))->type,((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 422))->c_value,info))));
                                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional298=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 435))->type, "20method.c", 435))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional298) {
                        }
                        else {
                            __dec_obj68=((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 433))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 433))->c_value=(char*)come_increment_ref_count(((char*)(right_value205=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 433))->type,((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 433))->c_value,info))));
                            if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional299=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 441),__exception_result_var_a9=((struct optional$2sTypephbool*)(right_value206=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a9)), "20method.c", 441))->mHeap&&!((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_142, "20method.c", 441))->type, "20method.c", 441))->mHeap,                    (right_value206 && right_value206 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        come_clear_stackframe();
                        err_msg(info,"require heap parametor(%s)",optional$2charphbool_value((come_push_stackframe("20method.c", 438),((struct optional$2charphbool*)(right_value211=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_184, "20method.c", 438))->mParamNames,i_211))))));
                        come_pop_stackframe();
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 441)),(struct CVALUE*)come_increment_ref_count(obj_value_142));
                __freed_obj__ = 0;
                i_211++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional304=!((struct sNode*)come_null_check(node_215, "20method.c", 450))->compile(((struct sNode*)come_null_check(node_215, "20method.c", 450))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional304) {
                    __result164__ = (_Bool)0;
                    if(label_214 && !__freed_obj__) { label_214 = come_decrement_ref_count(label_214, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_215 && !__freed_obj__) { node_215 = come_decrement_ref_count(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0); } 
                    if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result164__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional305=label_214!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional305) {
                    n_221=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_222=(struct list$1charph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_184, "20method.c", 462))->mParamNames)),it_225=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_222), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA17=                    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_222), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA17;                    it_225=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_222), "20method.c", 462))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional310=string_operator_equals(label_214,it_225),                        __freed_obj__ = 0, 
                        _if_conditional310) {
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        n_221++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_222 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional311=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 465),__exception_result_var_a10=((struct optional$2sTypephbool*)(right_value213=list$1sTypephp_operator_load_element(param_types_195,n_221))), come_pop_stackframe(), __exception_result_var_a10)),                    (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value216=xsprintf("\%s param num \%s is assinged to",((char*)(right_value214=charp_to_string(fun_name_137))),((char*)(right_value215=int_to_string(i_211)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 463),((struct optional$2sTypephbool*)(right_value217=list$1sTypephp_operator_load_element(param_types_195,n_221))))),((struct CVALUE*)come_null_check(come_value_220, "20method.c", 463))->type,come_value_220,(_Bool)0,info);
                        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional312=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 492),__exception_result_var_a11=((struct optional$2sTypephbool*)(right_value218=list$1sTypephp_operator_load_element(param_types_195,n_221))), come_pop_stackframe(), __exception_result_var_a11))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 492),__exception_result_var_a12=((struct optional$2sTypephbool*)(right_value219=list$1sTypephp_operator_load_element(param_types_195,n_221))), come_pop_stackframe(), __exception_result_var_a12)), "20method.c", 492))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 492))->type, "20method.c", 492))->mHeap,                    (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    (right_value219 && right_value219 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        if(_if_conditional313=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 491))->var,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            if(_if_conditional314=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 468))->var, "20method.c", 468))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 468))->var, "20method.c", 468))->mCValueName=((void*)0);
                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional315=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional315) {
                                    __dec_obj71=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 471))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 471))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 471))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 471))->c_value,info))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional316=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 483))->var, "20method.c", 483))->mType, "20method.c", 483))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional316) {
                                        __dec_obj72=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 474))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 474))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 474))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 474))->c_value,info))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj73=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 477))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 477))->c_value=(char*)come_increment_ref_count(((char*)(right_value222=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 477))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 477))->c_value,info))));
                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional317=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 490))->type, "20method.c", 490))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional317) {
                            }
                            else {
                                __dec_obj74=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 488))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 488))->c_value=(char*)come_increment_ref_count(((char*)(right_value223=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 488))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 488))->c_value,info))));
                                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional318=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 497),__exception_result_var_a13=((struct optional$2sTypephbool*)(right_value224=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a13)),                    (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value227=xsprintf("\%s param num \%s is assinged to",((char*)(right_value225=charp_to_string(fun_name_137))),((char*)(right_value226=int_to_string(i_211)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 495),((struct optional$2sTypephbool*)(right_value228=list$1sTypephp_operator_load_element(param_types_195,i_211))))),((struct CVALUE*)come_null_check(come_value_220, "20method.c", 495))->type,come_value_220,(_Bool)0,info);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional319=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 524),__exception_result_var_a14=((struct optional$2sTypephbool*)(right_value229=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a14))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 524),__exception_result_var_a15=((struct optional$2sTypephbool*)(right_value230=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a15)), "20method.c", 524))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 524))->type, "20method.c", 524))->mHeap,                    (right_value229 && right_value229 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    (right_value230 && right_value230 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional319) {
                        if(_if_conditional320=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 523))->var,                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            if(_if_conditional321=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional321) {
                                __dec_obj75=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 500))->var, "20method.c", 500))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 500))->var, "20method.c", 500))->mCValueName=((void*)0);
                                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional322=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional322) {
                                    __dec_obj76=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 503))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 503))->c_value=(char*)come_increment_ref_count(((char*)(right_value231=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 503))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 503))->c_value,info))));
                                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional323=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 515))->var, "20method.c", 515))->mType, "20method.c", 515))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional323) {
                                        __dec_obj77=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 506))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 506))->c_value=(char*)come_increment_ref_count(((char*)(right_value232=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 506))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 506))->c_value,info))));
                                        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj78=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 509))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 509))->c_value=(char*)come_increment_ref_count(((char*)(right_value233=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 509))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 509))->c_value,info))));
                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional324=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 522))->type, "20method.c", 522))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional324) {
                            }
                            else {
                                __dec_obj79=((struct CVALUE*)come_null_check(come_value_220, "20method.c", 520))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_220, "20method.c", 520))->c_value=(char*)come_increment_ref_count(((char*)(right_value234=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_220, "20method.c", 520))->type,((struct CVALUE*)come_null_check(come_value_220, "20method.c", 520))->c_value,info))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional325=label_214==((void*)0),                __freed_obj__ = 0, 
                _if_conditional325) {
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 527)),(struct CVALUE*)come_increment_ref_count(come_value_220));
                    __freed_obj__ = 0;
                    i_211++;
                    __freed_obj__ = 0;
                }
                else {
                    map$2charphCVALUEph_insert(((struct map$2charphCVALUEph*)come_null_check(label_params_210, "20method.c", 532)),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(label_214)))),(struct CVALUE*)come_increment_ref_count(come_value_220));
                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_220, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_214 && !__freed_obj__) { label_214 = come_decrement_ref_count(label_214, (void*)0, (void*)0, 0, 0, 0); }
            if(node_215 && !__freed_obj__) { node_215 = come_decrement_ref_count(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        if(_if_conditional348=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_138, "20method.c", 615)))<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_184, "20method.c", 615))->mParamTypes, "20method.c", 615)))+(method_block_140?-2:0),        __freed_obj__ = 0, 
        _if_conditional348) {
            for(
            ;            _for_condtionalA20=            i_211<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_184, "20method.c", 614))->mParamTypes, "20method.c", 614)))+(method_block_140?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA20;            i_211++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                default_param_249=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(optional$2charphbool_value((come_push_stackframe("20method.c", 541),((struct optional$2charphbool*)(right_value244=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_184, "20method.c", 541))->mParamDefaultParametors,i_211)))))))));
                if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                param_name_250=optional$2charphbool_value((come_push_stackframe("20method.c", 543),((struct optional$2charphbool*)(right_value246=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_184, "20method.c", 543))->mParamNames,i_211)))));
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                come_value_255=optional$2CVALUEpbool_value((come_push_stackframe("20method.c", 546),((struct optional$2CVALUEpbool*)(right_value256=map$2charphCVALUEphp_operator_load_element(label_params_210,param_name_250)))));
                come_pop_stackframe();
                if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional354=default_param_249&&string_operator_not_equals(default_param_249,""),                __freed_obj__ = 0, 
                _if_conditional354) {
                    source_256=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 550))->source);
                    __freed_obj__ = 0;
                    p_257=((struct sInfo*)come_null_check(info, "20method.c", 551))->p;
                    __freed_obj__ = 0;
                    head_258=((struct sInfo*)come_null_check(info, "20method.c", 552))->head;
                    __freed_obj__ = 0;
                    sline_259=((struct sInfo*)come_null_check(info, "20method.c", 553))->sline;
                    __freed_obj__ = 0;
                    __dec_obj80=((struct sInfo*)come_null_check(info, "20method.c", 555))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 555))->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value257=string_to_buffer(((char*)come_null_check(default_param_249, "20method.c", 555))))));
                    if(__dec_obj80) { come_call_finalizer(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 556))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 556))->source, "20method.c", 556))->buf;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 557))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 557))->source, "20method.c", 557))->buf;
                    __freed_obj__ = 0;
                    node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=expression_v13(info))));
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(_if_conditional355=!((struct sNode*)come_null_check(node_260, "20method.c", 565))->compile(((struct sNode*)come_null_check(node_260, "20method.c", 565))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional355) {
                        __result193__ = (_Bool)0;
                        if(source_256 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(node_260 && !__freed_obj__) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
                        if(default_param_249 && !__freed_obj__) { default_param_249 = come_decrement_ref_count(default_param_249, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result193__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj81=((struct sInfo*)come_null_check(info, "20method.c", 565))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 565))->source=(struct buffer*)come_increment_ref_count(source_256);
                    if(__dec_obj81) { come_call_finalizer(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 566))->p=p_257;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 567))->head=head_258;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "20method.c", 568))->sline=sline_259;
                    __freed_obj__ = 0;
                    come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional356=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 574),__exception_result_var_a19=((struct optional$2sTypephbool*)(right_value260=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a19)),                    (right_value260 && right_value260 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional356) {
                        come_clear_stackframe();
                        check_assign_type(((char*)(right_value263=xsprintf("\%s param num \%s is assinged to",((char*)(right_value261=charp_to_string(fun_name_137))),((char*)(right_value262=int_to_string(i_211)))))),optional$2sTypephbool_value((come_push_stackframe("20method.c", 572),((struct optional$2sTypephbool*)(right_value264=list$1sTypephp_operator_load_element(param_types_195,i_211))))),((struct CVALUE*)come_null_check(come_value_261, "20method.c", 572))->type,come_value_261,(_Bool)0,info);
                        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional357=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 601),__exception_result_var_a20=((struct optional$2sTypephbool*)(right_value265=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a20))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("20method.c", 601),__exception_result_var_a21=((struct optional$2sTypephbool*)(right_value266=list$1sTypephp_operator_load_element(param_types_195,i_211))), come_pop_stackframe(), __exception_result_var_a21)), "20method.c", 601))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 601))->type, "20method.c", 601))->mHeap,                    (right_value265 && right_value265 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    (right_value266 && right_value266 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional357) {
                        if(_if_conditional358=((struct CVALUE*)come_null_check(come_value_261, "20method.c", 600))->var,                        __freed_obj__ = 0, 
                        _if_conditional358) {
                            if(_if_conditional359=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional359) {
                                __dec_obj82=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 577))->var, "20method.c", 577))->mCValueName;
                                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 577))->var, "20method.c", 577))->mCValueName=((void*)0);
                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional360=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mShare,                                __freed_obj__ = 0, 
                                _if_conditional360) {
                                    __dec_obj83=((struct CVALUE*)come_null_check(come_value_261, "20method.c", 580))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_261, "20method.c", 580))->c_value=(char*)come_increment_ref_count(((char*)(right_value267=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 580))->type,((struct CVALUE*)come_null_check(come_value_261, "20method.c", 580))->c_value,info))));
                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional361=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 592))->var, "20method.c", 592))->mType, "20method.c", 592))->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional361) {
                                        __dec_obj84=((struct CVALUE*)come_null_check(come_value_261, "20method.c", 583))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_261, "20method.c", 583))->c_value=(char*)come_increment_ref_count(((char*)(right_value268=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 583))->type,((struct CVALUE*)come_null_check(come_value_261, "20method.c", 583))->c_value,info))));
                                        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj85=((struct CVALUE*)come_null_check(come_value_261, "20method.c", 586))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value_261, "20method.c", 586))->c_value=(char*)come_increment_ref_count(((char*)(right_value269=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 586))->type,((struct CVALUE*)come_null_check(come_value_261, "20method.c", 586))->c_value,info))));
                                        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional362=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 599))->type, "20method.c", 599))->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional362) {
                            }
                            else {
                                __dec_obj86=((struct CVALUE*)come_null_check(come_value_261, "20method.c", 597))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_261, "20method.c", 597))->c_value=(char*)come_increment_ref_count(((char*)(right_value270=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_261, "20method.c", 597))->type,((struct CVALUE*)come_null_check(come_value_261, "20method.c", 597))->c_value,info))));
                                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 601)),(struct CVALUE*)come_increment_ref_count(come_value_261));
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    if(source_256 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_256, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_260 && !__freed_obj__) { node_260 = come_decrement_ref_count(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_261 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional363=come_value_255,                    __freed_obj__ = 0, 
                    _if_conditional363) {
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 606)),((void*)0));
                        __freed_obj__ = 0;
                    }
                    else {
                        err_msg(info,"require parametor(%s)",((struct sFun*)come_null_check(fun_184, "20method.c", 609))->mName);
                        __freed_obj__ = 0;
                        __result194__ = (_Bool)0;
                        if(default_param_249 && !__freed_obj__) { default_param_249 = come_decrement_ref_count(default_param_249, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result194__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(default_param_249 && !__freed_obj__) { default_param_249 = come_decrement_ref_count(default_param_249, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional364=map$2charphCVALUEph_length(((struct map$2charphCVALUEph*)come_null_check(label_params_210, "20method.c", 628)))>0,        __freed_obj__ = 0, 
        _if_conditional364) {
            for(
            i_211=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA21=            i_211<list$1charph_length(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(fun_184, "20method.c", 626))->mParamNames, "20method.c", 626)))+(method_block_140?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA21;            i_211++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                param_name_262=optional$2charphbool_value((come_push_stackframe("20method.c", 617),((struct optional$2charphbool*)(right_value271=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_184, "20method.c", 617))->mParamNames,i_211)))));
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                come_value_263=optional$2CVALUEpbool_value((come_push_stackframe("20method.c", 620),((struct optional$2CVALUEpbool*)(right_value272=map$2charphCVALUEphp_operator_load_element(label_params_210,param_name_262)))));
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional365=come_value_263,                __freed_obj__ = 0, 
                _if_conditional365) {
                    list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 623)),i_211,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=CVALUE_clone(come_value_263)))));
                    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional373=method_block_140,        __freed_obj__ = 0, 
        _if_conditional373) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 629);
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value278=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value277=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 629)))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=_inf_value1)));
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            if(_if_conditional378=!((struct sNode*)come_null_check(current_stack_frame_node_268, "20method.c", 635))->compile(((struct sNode*)come_null_check(current_stack_frame_node_268, "20method.c", 635))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional378) {
                __result203__ = (_Bool)0;
                if(current_stack_frame_node_268 && !__freed_obj__) { current_stack_frame_node_268 = come_decrement_ref_count(current_stack_frame_node_268, ((struct sNode*)current_stack_frame_node_268)->finalize, ((struct sNode*)current_stack_frame_node_268)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result203__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_269=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
            if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 636)),(struct CVALUE*)come_increment_ref_count(come_value_269));
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_block2_270=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value284=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value283=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 639))))))));
            if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            method_block_type_271=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(optional$2sTypephbool_value((come_push_stackframe("20method.c", 640),((struct optional$2sTypephbool*)(right_value285=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_184, "20method.c", 640))->mParamTypes,-1)))))))));
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            class_name_272=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 642))->current_stack_num))));
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            come_clear_stackframe();
            ((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("20method.c", 644),((struct optional$2sTypephbool*)(right_value288=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(method_block_type_271, "20method.c", 644))->mParamTypes,0))))), "20method.c", 644))->mClass=optional$2sClasspbool_value((come_push_stackframe("20method.c", 644),((struct optional$2sClasspbool*)(right_value298=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 644))->classes,class_name_272)))));
            come_pop_stackframe();
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            current_stack_frame_struct_277=((struct sInfo*)come_null_check(info, "20method.c", 645))->current_stack_frame_struct;
            __freed_obj__ = 0;
            come_clear_stackframe();
            ((struct sInfo*)come_null_check(info, "20method.c", 646))->current_stack_frame_struct=optional$2sClasspbool_value((come_push_stackframe("20method.c", 646),((struct optional$2sClasspbool*)(right_value299=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 646))->classes,class_name_272)))));
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 648))->num_method_block++;
            __freed_obj__ = 0;
            if(_if_conditional384=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(method_block_type_271, "20method.c", 655))->mClass, "20method.c", 655))->mName,"lambda"),            __freed_obj__ = 0, 
            _if_conditional384) {
                err_msg(info,"This function does not have method block(%s)",fun_name_137);
                __freed_obj__ = 0;
                __result211__ = (_Bool)0;
                if(current_stack_frame_node_268 && !__freed_obj__) { current_stack_frame_node_268 = come_decrement_ref_count(current_stack_frame_node_268, ((struct sNode*)current_stack_frame_node_268)->finalize, ((struct sNode*)current_stack_frame_node_268)->_protocol_obj, 0, 0, 0); } 
                if(come_value_269 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_270 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_272 && !__freed_obj__) { class_name_272 = come_decrement_ref_count(class_name_272, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result211__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_type_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(method_block_type_271, "20method.c", 655))->mResultType, "20method.c", 655))->v1))));
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_278, "20method.c", 656))->mStatic=(_Bool)0;
            __freed_obj__ = 0;
            param_types_279=((struct sType*)come_null_check(method_block_type_271, "20method.c", 657))->mParamTypes;
            __freed_obj__ = 0;
            param_names_280=((struct sType*)come_null_check(method_block_type_271, "20method.c", 658))->mParamNames;
            __freed_obj__ = 0;
            all_alhabet_sname_281=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value302=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value301=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 660))))))));
            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            {
                p_282=((struct sInfo*)come_null_check(info, "20method.c", 662))->sname;
                __freed_obj__ = 0;
                while(_while_condtional35=*p_282,                __freed_obj__ = 0, 
                _while_condtional35) {
                    if(_if_conditional385=xisalnum(*p_282),                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        buffer_append_char(((struct buffer*)come_null_check(all_alhabet_sname_281, "20method.c", 665)),*p_282++);
                        __freed_obj__ = 0;
                    }
                    else {
                        p_282++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 673)),((char*)(right_value305=xsprintf("%s method_block%d_%s(",optional$2charphbool_expect((come_push_stackframe("20method.c", 673),((struct optional$2charphbool*)(right_value303=make_type_name_string(result_type_278,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct sInfo*)come_null_check(info, "20method.c", 673))->num_method_block,((char*)(right_value304=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_281, "20method.c", 673)))))))));
            come_pop_stackframe();
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            i_283=0;
            __freed_obj__ = 0;
            for(
            o2_saved_284=(param_types_279),it_285=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_284), "20method.c", 700))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA22=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_284), "20method.c", 700))) ,            __freed_obj__ = 0, 
            _for_condtionalA22;            it_285=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_284), "20method.c", 700))) ,            __freed_obj__ = 0, 
            0            ){
                param_type_286=it_285;
                __freed_obj__ = 0;
                if(_if_conditional387=i_283==0,                __freed_obj__ = 0, 
                _if_conditional387) {
                    param_name_287=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("parent"))));
                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 681)),((char*)(right_value308=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 681),((struct optional$2charphbool*)(right_value307=make_define_var(param_type_286,param_name_287,(_Bool)0,info)))))))));
                    come_pop_stackframe();
                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(param_name_287 && !__freed_obj__) { param_name_287 = come_decrement_ref_count(param_name_287, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional388=i_283==1,                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        param_name_288=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("it"))));
                        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 686)),((char*)(right_value311=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 686),((struct optional$2charphbool*)(right_value310=make_define_var(param_type_286,param_name_288,(_Bool)0,info)))))))));
                        come_pop_stackframe();
                        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(param_name_288 && !__freed_obj__) { param_name_288 = come_decrement_ref_count(param_name_288, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        param_name_289=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("it%d",i_283))));
                        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 691)),((char*)(right_value314=xsprintf("%s",optional$2charphbool_expect((come_push_stackframe("20method.c", 691),((struct optional$2charphbool*)(right_value313=make_define_var(param_type_286,param_name_289,(_Bool)0,info)))))))));
                        come_pop_stackframe();
                        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(param_name_289 && !__freed_obj__) { param_name_289 = come_decrement_ref_count(param_name_289, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional389=i_283!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(param_types_279, "20method.c", 698)))-1,                __freed_obj__ = 0, 
                _if_conditional389) {
                    buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 695)),",");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_283++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 700)),")\n");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(method_block2_270, "20method.c", 702)),((char*)(right_value315=buffer_to_string(((struct buffer*)come_null_check(method_block_140, "20method.c", 702))))));
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            source3_290=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 704))->source);
            __freed_obj__ = 0;
            p_291=((struct sInfo*)come_null_check(info, "20method.c", 705))->p;
            __freed_obj__ = 0;
            head_292=((struct sInfo*)come_null_check(info, "20method.c", 706))->head;
            __freed_obj__ = 0;
            sline_293=((struct sInfo*)come_null_check(info, "20method.c", 707))->sline;
            __freed_obj__ = 0;
            __dec_obj91=((struct sInfo*)come_null_check(info, "20method.c", 710))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 710))->source=(struct buffer*)come_increment_ref_count(method_block2_270);
            if(__dec_obj91) { come_call_finalizer(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 711))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 711))->source, "20method.c", 711))->buf;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 712))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 712))->source, "20method.c", 712))->buf;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 713))->sline=method_block_sline_141;
            __freed_obj__ = 0;
            node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=parse_function(info))));
            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            if(_if_conditional390=!((struct sNode*)come_null_check(node_294, "20method.c", 722))->compile(((struct sNode*)come_null_check(node_294, "20method.c", 722))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional390) {
                __result213__ = (_Bool)0;
                if(current_stack_frame_node_268 && !__freed_obj__) { current_stack_frame_node_268 = come_decrement_ref_count(current_stack_frame_node_268, ((struct sNode*)current_stack_frame_node_268)->finalize, ((struct sNode*)current_stack_frame_node_268)->_protocol_obj, 0, 0, 0); } 
                if(come_value_269 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_270 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_272 && !__freed_obj__) { class_name_272 = come_decrement_ref_count(class_name_272, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_290, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_294 && !__freed_obj__) { node_294 = come_decrement_ref_count(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result213__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_name_295=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("method_block%d_%s",((struct sInfo*)come_null_check(info, "20method.c", 722))->num_method_block,((char*)(right_value317=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_281, "20method.c", 722)))))))));
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_value2_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 724))));
            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            fun2_297=((struct sFun*)(right_value320=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 726))->funcs, "20method.c", 726)),method_block_name_295,((void*)0))));
            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional391=fun2_297==((void*)0),            __freed_obj__ = 0, 
            _if_conditional391) {
                err_msg(info,"method block function not found(%s)",method_block_name_295);
                __freed_obj__ = 0;
                __result214__ = (_Bool)1;
                if(current_stack_frame_node_268 && !__freed_obj__) { current_stack_frame_node_268 = come_decrement_ref_count(current_stack_frame_node_268, ((struct sNode*)current_stack_frame_node_268)->finalize, ((struct sNode*)current_stack_frame_node_268)->_protocol_obj, 0, 0, 0); } 
                if(come_value_269 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_270 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_272 && !__freed_obj__) { class_name_272 = come_decrement_ref_count(class_name_272, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_281, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_290, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_294 && !__freed_obj__) { node_294 = come_decrement_ref_count(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0); } 
                if(method_block_name_295 && !__freed_obj__) { method_block_name_295 = come_decrement_ref_count(method_block_name_295, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value2_296 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result214__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_type2_298=((struct sFun*)come_null_check(fun2_297, "20method.c", 733))->mLambdaType;
            __freed_obj__ = 0;
            __dec_obj92=((struct CVALUE*)come_null_check(come_value2_296, "20method.c", 735))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_296, "20method.c", 735))->c_value=(char*)come_increment_ref_count(((char*)(right_value321=xsprintf("(void*)%s",method_block_name_295))));
            if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
            if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj93=((struct CVALUE*)come_null_check(come_value2_296, "20method.c", 736))->type;
            ((struct CVALUE*)come_null_check(come_value2_296, "20method.c", 736))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(method_block_type2_298))));
            if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value2_296, "20method.c", 737))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 739)),(struct CVALUE*)come_increment_ref_count(come_value2_296));
            __freed_obj__ = 0;
            __dec_obj94=((struct sInfo*)come_null_check(info, "20method.c", 741))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 741))->source=(struct buffer*)come_increment_ref_count(source3_290);
            if(__dec_obj94) { come_call_finalizer(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 742))->p=p_291;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 743))->head=head_292;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 744))->sline=sline_293;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 746))->current_stack_frame_struct=current_stack_frame_struct_277;
            __freed_obj__ = 0;
            if(current_stack_frame_node_268 && !__freed_obj__) { current_stack_frame_node_268 = come_decrement_ref_count(current_stack_frame_node_268, ((struct sNode*)current_stack_frame_node_268)->finalize, ((struct sNode*)current_stack_frame_node_268)->_protocol_obj, 0, 0, 0); } 
            if(come_value_269 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_269, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block2_270 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_270, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block_type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(class_name_272 && !__freed_obj__) { class_name_272 = come_decrement_ref_count(class_name_272, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_278 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_278, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(all_alhabet_sname_281 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_281, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(source3_290 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_290, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node_294 && !__freed_obj__) { node_294 = come_decrement_ref_count(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0); } 
            if(method_block_name_295 && !__freed_obj__) { method_block_name_295 = come_decrement_ref_count(method_block_name_295, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value2_296 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        buf_299=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 749))))))));
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_299, "20method.c", 751)),generics_fun_name_183);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_299, "20method.c", 752)),"(");
        __freed_obj__ = 0;
        j_300=0;
        __freed_obj__ = 0;
        for(
        o2_saved_301=(struct list$1CVALUEph*)come_increment_ref_count((come_params_206)),it_302=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_301), "20method.c", 764))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA23=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_301), "20method.c", 764))) ,        __freed_obj__ = 0, 
        _for_condtionalA23;        it_302=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_301), "20method.c", 764))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_299, "20method.c", 756)),((struct CVALUE*)come_null_check(it_302, "20method.c", 756))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional392=j_300!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_206, "20method.c", 762)))-1,            __freed_obj__ = 0, 
            _if_conditional392) {
                buffer_append_str(((struct buffer*)come_null_check(buf_299, "20method.c", 759)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_300++;
            __freed_obj__ = 0;
        }
        if(o2_saved_301 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_301, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_299, "20method.c", 764)),")");
        __freed_obj__ = 0;
        come_value2_303=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 767))));
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj95=((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 769))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 769))->c_value=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(((struct buffer*)come_null_check(buf_299, "20method.c", 769))))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 770))->type;
        ((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 770))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(result_type2_194))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 771))->type, "20method.c", 771))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 772))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional393=((struct sType*)come_null_check(result_type2_194, "20method.c", 778))->mHeap,        __freed_obj__ = 0, 
        _if_conditional393) {
            __dec_obj97=((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 775))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 775))->c_value=(char*)come_increment_ref_count(((char*)(right_value328=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 775))->c_value,(struct sType*)come_increment_ref_count(result_type2_194),info))));
            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional394=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun_184, "20method.c", 782))->mResultType, "20method.c", 782))->mException,        __freed_obj__ = 0, 
        _if_conditional394) {
            __dec_obj98=((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 779))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 779))->c_value=(char*)come_increment_ref_count(((char*)(right_value329=append_exception_value(((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 779))->c_value,((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 779))->type,info))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_303, "20method.c", 782))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 784))->stack, "20method.c", 784)),(struct CVALUE*)come_increment_ref_count(come_value2_303));
        __freed_obj__ = 0;
        if(_if_conditional395=method_block_140,        __freed_obj__ = 0, 
        _if_conditional395) {
            var_name_304=(char*)come_increment_ref_count(((char*)(right_value330=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 787))->num_current_stack))));
            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            result_type_305=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 789))->come_fun, "20method.c", 789))->mResultType))));
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            result_type2_306=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=solve_generics(result_type_305,((struct sInfo*)come_null_check(info, "20method.c", 791))->generics_type,info))));
            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            result_type3_307=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_306, "20method.c", 793))->mNoSolvedGenericsType, "20method.c", 793))->v1;
            __freed_obj__ = 0;
            if(_if_conditional396=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_306, "20method.c", 801))->mNoSolvedGenericsType, "20method.c", 801))->v1,            __freed_obj__ = 0, 
            _if_conditional396) {
                result_type3_307=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_306, "20method.c", 795))->mNoSolvedGenericsType, "20method.c", 795))->v1;
                __freed_obj__ = 0;
            }
            else {
                result_type3_307=result_type2_306;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional397=((struct sInfo*)come_null_check(info, "20method.c", 847))->in_loop,            __freed_obj__ = 0, 
            _if_conditional397) {
                if(_if_conditional398=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_307, "20method.c", 832))->mClass, "20method.c", 832))->mName,"void")&&((struct sType*)come_null_check(result_type3_307, "20method.c", 832))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional398) {
                    add_come_last_code3(info,((char*)(right_value336=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value333=string_to_string(var_name_304))),((char*)(right_value334=string_to_string(var_name_304))),((char*)(right_value335=string_to_string(var_name_304)))))));
                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_last_code3(info,((char*)(right_value343=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value337=string_to_string(var_name_304))),((char*)(right_value338=string_to_string(var_name_304))),((char*)(right_value339=string_to_string(var_name_304))),((char*)(right_value341=string_to_string(optional$2charphbool_expect((come_push_stackframe("20method.c", 830),((struct optional$2charphbool*)(right_value340=make_type_name_string(result_type2_306,(_Bool)0,(_Bool)0,(_Bool)0,info)))))))),((char*)(right_value342=string_to_string(var_name_304)))))));
                    come_pop_stackframe();
                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional399=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_307, "20method.c", 847))->mClass, "20method.c", 847))->mName,"void")&&((struct sType*)come_null_check(result_type3_307, "20method.c", 847))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional399) {
                    add_come_last_code3(info,((char*)(right_value345=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value344=string_to_string(var_name_304)))))));
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_last_code3(info,((char*)(right_value350=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value346=string_to_string(var_name_304))),((char*)(right_value348=string_to_string(optional$2charphbool_expect((come_push_stackframe("20method.c", 845),((struct optional$2charphbool*)(right_value347=make_type_name_string(result_type2_306,(_Bool)0,(_Bool)0,(_Bool)0,info)))))))),((char*)(right_value349=string_to_string(var_name_304)))))));
                    come_pop_stackframe();
                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(var_name_304 && !__freed_obj__) { var_name_304 = come_decrement_ref_count(var_name_304, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_305 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_305, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_306 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_306, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(generics_fun_name_183 && !__freed_obj__) { generics_fun_name_183 = come_decrement_ref_count(generics_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_195 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_206 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(label_params_210 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_210, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_299 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_299, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_303 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_303, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result215__ = (_Bool)1;
    if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
    if(obj_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional224;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result108__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* __result109__;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional224=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional224) {
            __freed_obj__ = 0;
            memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result108__ = __result_obj__ = result_148;
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional225=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional225) {
            __result109__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result109__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result110__ = __result_obj__ = result_149;
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result111__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional226;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result112__;
_Bool _if_conditional227;
struct tuple2$2charphsTypeph* __result113__;
struct tuple2$2charphsTypeph* result_152;
struct tuple2$2charphsTypeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_152, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional226=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            __freed_obj__ = 0;
            memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = result_151;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional227=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional227) {
            __result113__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result114__ = __result_obj__ = result_152;
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result115__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result115__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_156;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_156, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_157, 0, sizeof(struct list_item$1CVALUEph*));
                it_156=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional24=it_156!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional24) {
                    prev_it_157=it_156;
                    __freed_obj__ = 0;
                    it_156=((struct list_item$1CVALUEph*)come_null_check(it_156, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_157 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional230;
struct tuple2$2charphsNodeph* result_161;
struct tuple2$2charphsNodeph* __result116__;
_Bool _if_conditional231;
struct tuple2$2charphsNodeph* __result117__;
struct tuple2$2charphsNodeph* result_162;
struct tuple2$2charphsNodeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_162, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional230=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                __freed_obj__ = 0;
                memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result116__ = __result_obj__ = result_161;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional231=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional231) {
                __result117__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result117__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_162,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result118__ = __result_obj__ = result_162;
            __freed_obj__ = 0;
            return __result118__;
            __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result119__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional232;
struct tuple2$2charphsNodeph* result_164;
struct tuple2$2charphsNodeph* __result120__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* __result121__;
struct tuple2$2charphsNodeph* result_165;
struct tuple2$2charphsNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_164, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_165, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional232=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional232) {
                __freed_obj__ = 0;
                memset(&result_164,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result120__ = __result_obj__ = result_164;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional233=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional233) {
                __result121__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result121__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_165,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result122__ = __result_obj__ = result_165;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional236;
struct list_item$1sTypeph* it_169;
int i_170;
_Bool _while_condtional25;
_Bool _if_conditional237;
void* right_value139;
void* right_value140;
struct optional$2sTypephbool* __result125__;
struct sType* default_value_171;
void* right_value141;
void* right_value142;
struct optional$2sTypephbool* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_169, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_170, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&default_value_171, 0, sizeof(struct sType*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
                    if(_if_conditional236=position<0,                    __freed_obj__ = 0, 
                    _if_conditional236) {
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_169=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                    __freed_obj__ = 0;
                    i_170=0;
                    __freed_obj__ = 0;
                    while(_while_condtional25=it_169!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional25) {
                        if(_if_conditional237=position==i_170,                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            __result125__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value140=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value139=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_169, "./comelang2.h", 742))->item),(_Bool)1)));
                            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result125__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_169=((struct list_item$1sTypeph*)come_null_check(it_169, "./comelang2.h", 744))->next;
                        __freed_obj__ = 0;
                        i_170++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_171,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result126__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value142=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value141=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_171),(_Bool)0))));
                    if(default_value_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result126__;
                    __freed_obj__ = 0;
                    if(default_value_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj48;
struct optional$2sTypephbool* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj48=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result124__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result124__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional238=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional238) {
                                        if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional239;
struct sType* default_value_172;
struct sType* __result127__;
struct sType* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_172, 0, sizeof(struct sType*));
                    if(_if_conditional239=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional239) {
                        __freed_obj__ = 0;
                        memset(&default_value_172,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result127__ = __result_obj__ = default_value_172;
                        __freed_obj__ = 0;
                        return __result127__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result128__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result128__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional246;
struct CVALUE* result_176;
struct CVALUE* __result129__;
_Bool _if_conditional247;
struct CVALUE* __result130__;
struct CVALUE* result_177;
struct CVALUE* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_176, 0, sizeof(struct CVALUE*));
memset(&result_177, 0, sizeof(struct CVALUE*));
            if(_if_conditional246=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional246) {
                __freed_obj__ = 0;
                memset(&result_176,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result129__ = __result_obj__ = result_176;
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional247=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional247) {
                __result130__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result130__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_177,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result131__ = __result_obj__ = result_177;
            __freed_obj__ = 0;
            return __result131__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result132__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result132__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional248;
struct CVALUE* result_179;
struct CVALUE* __result133__;
_Bool _if_conditional249;
struct CVALUE* __result134__;
struct CVALUE* result_180;
struct CVALUE* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_179, 0, sizeof(struct CVALUE*));
memset(&result_180, 0, sizeof(struct CVALUE*));
            if(_if_conditional248=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional248) {
                __freed_obj__ = 0;
                memset(&result_179,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result133__ = __result_obj__ = result_179;
                __freed_obj__ = 0;
                return __result133__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional249=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional249) {
                __result134__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_180,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result135__ = __result_obj__ = result_180;
            __freed_obj__ = 0;
            return __result135__;
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result136__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result136__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_187;
unsigned int hash_188;
unsigned int it_189;
_Bool _while_condtional26;
_Bool _if_conditional253;
void* right_value163;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional254;
void* right_value164;
void* right_value165;
struct optional$2sFunpbool* __result138__;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value166;
void* right_value167;
struct optional$2sFunpbool* __result139__;
void* right_value168;
void* right_value169;
struct optional$2sFunpbool* __result140__;
void* right_value170;
void* right_value171;
struct optional$2sFunpbool* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_187, 0, sizeof(struct sFun*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_187,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_188=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_189=hash_188;
                __freed_obj__ = 0;
                while(_while_condtional26=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional26) {
                    if(_if_conditional253=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_189],                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        if(_if_conditional254=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value163=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_189], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                        (right_value163 && right_value163 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional254) {
                            __result138__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value165=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value164=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_189],(_Bool)1)));
                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result138__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_189++;
                        __freed_obj__ = 0;
                        if(_if_conditional255=it_189>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional255) {
                            it_189=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional256=it_189==hash_188,                            __freed_obj__ = 0, 
                            _if_conditional256) {
                                __result139__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value167=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value166=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_187,(_Bool)0))));
                                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result139__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result140__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value169=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value168=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_187,(_Bool)0))));
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result140__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result141__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value171=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value170=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_187,(_Bool)0))));
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result141__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result137__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result137__;
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
_Bool _if_conditional257;
struct sFun* default_value_190;
struct sFun* __result142__;
struct sFun* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_190, 0, sizeof(struct sFun*));
                if(_if_conditional257=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional257) {
                    __freed_obj__ = 0;
                    memset(&default_value_190,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result142__ = __result_obj__ = default_value_190;
                    __freed_obj__ = 0;
                    return __result142__;
                    __freed_obj__ = 0;
                }
                else {
                    __result143__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result143__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_191;
unsigned int it_192;
_Bool _while_condtional27;
_Bool _if_conditional260;
void* right_value174;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional261;
struct sFun* __result144__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sFun* __result145__;
struct sFun* __result146__;
struct sFun* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_191, 0, sizeof(unsigned int));
memset(&it_192, 0, sizeof(unsigned int));
memset(&right_value174, 0, sizeof(void*));
                hash_191=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                __freed_obj__ = 0;
                it_192=hash_191;
                __freed_obj__ = 0;
                while(_while_condtional27=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional27) {
                    if(_if_conditional260=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_192],                    __freed_obj__ = 0, 
                    _if_conditional260) {
                        if(_if_conditional261=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a7=((struct optional$2boolbool*)(right_value174=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_192], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a7)),                        (right_value174 && right_value174 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional261) {
                            __result144__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_192];
                            __freed_obj__ = 0;
                            return __result144__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_192++;
                        __freed_obj__ = 0;
                        if(_if_conditional262=it_192>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                        __freed_obj__ = 0, 
                        _if_conditional262) {
                            it_192=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional263=it_192==hash_191,                            __freed_obj__ = 0, 
                            _if_conditional263) {
                                __result145__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result145__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result146__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result146__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result147__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result147__;
                __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
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
                if(_if_conditional264=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional264) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional265=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional265) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional266=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional266) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional267=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional267) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional268=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional268) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional269=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional269) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional270=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional270) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional273=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional273) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional274=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional274) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional275=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional275) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional276=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional276) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional277=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional277) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional278=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional278) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional271=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional271) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional272=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional272) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional281;
struct sType* result_197;
struct sType* __result149__;
_Bool _if_conditional282;
struct sType* __result150__;
struct sType* result_198;
struct sType* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_197, 0, sizeof(struct sType*));
memset(&result_198, 0, sizeof(struct sType*));
            if(_if_conditional281=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional281) {
                __freed_obj__ = 0;
                memset(&result_197,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result149__ = __result_obj__ = result_197;
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional282=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional282) {
                __result150__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result150__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_198,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result151__ = __result_obj__ = result_198;
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result152__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result152__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional283;
struct sType* result_200;
struct sType* __result153__;
_Bool _if_conditional284;
struct sType* __result154__;
struct sType* result_201;
struct sType* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_200, 0, sizeof(struct sType*));
memset(&result_201, 0, sizeof(struct sType*));
            if(_if_conditional283=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional283) {
                __freed_obj__ = 0;
                memset(&result_200,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result153__ = __result_obj__ = result_200;
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional284=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional284) {
                __result154__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result154__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_201,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result155__ = __result_obj__ = result_201;
            __freed_obj__ = 0;
            return __result155__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional286;
void* right_value183;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj60;
_Bool _if_conditional287;
void* right_value184;
struct list_item$1sTypeph* litem_203;
struct sType* __dec_obj61;
void* right_value185;
struct list_item$1sTypeph* litem_204;
struct sType* __dec_obj62;
struct list$1sTypeph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value184, 0, sizeof(void*));
memset(&litem_203, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value185, 0, sizeof(void*));
memset(&litem_204, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional286=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value183=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_202, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_202, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj60=((struct list_item$1sTypeph*)come_null_check(litem_202, "./comelang2.h", 276))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_202, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_202;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_202;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional287=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            litem_203=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value184=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                            if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_203, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_203, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_203, "./comelang2.h", 286))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_203, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_203;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_203;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_204=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value185=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_204, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_204, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj62=((struct list_item$1sTypeph*)come_null_check(litem_204, "./comelang2.h", 296))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_204, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_204;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_204;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result156__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result156__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value191;
void* right_value192;
void* right_value193;
int i_207;
_Bool _for_condtionalA13;
void* right_value194;
void* right_value195;
struct list$1charp* __dec_obj63;
struct map$2charphCVALUEph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&i_207, 0, sizeof(int));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value192=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1123))));
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            for(
            i_207=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA13=            i_207<1024 ,            __freed_obj__ = 0, 
            _for_condtionalA13;            i_207++ ,            __freed_obj__ = 0, 
            0            ){
                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_207]=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
            __freed_obj__ = 0;
            __dec_obj63=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value195=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value194=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
            if(__dec_obj63) { come_call_finalizer(list$1charp_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
            __freed_obj__ = 0;
            __result158__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result158__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charp* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result157__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result157__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_208;
_Bool _for_condtionalA14;
_Bool _if_conditional288;
_Bool _if_conditional289;
int i_209;
_Bool _for_condtionalA15;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_208, 0, sizeof(int));
memset(&i_209, 0, sizeof(int));
                for(
                i_208=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA14=                i_208<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1172))->size ,                __freed_obj__ = 0, 
                _for_condtionalA14;                i_208++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional288=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_208],                    __freed_obj__ = 0, 
                    _if_conditional288) {
                        if(_if_conditional289=1,                        __freed_obj__ = 0, 
                        _if_conditional289) {
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1168))->items[i_208] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1168))->items[i_208], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1172))->items);
                __freed_obj__ = 0;
                for(
                i_209=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA15=                i_209<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1181))->size ,                __freed_obj__ = 0, 
                _for_condtionalA15;                i_209++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional290=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_209],                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        if(_if_conditional291=1,                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_209] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_209] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_209], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1181))->keys);
                __freed_obj__ = 0;
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1183))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1183))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1185))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional300;
struct list_item$1charph* it_216;
int i_217;
_Bool _while_condtional28;
_Bool _if_conditional301;
void* right_value207;
void* right_value208;
struct optional$2charphbool* __result160__;
char* default_value_218;
void* right_value209;
void* right_value210;
struct optional$2charphbool* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_216, 0, sizeof(struct list_item$1charph*));
memset(&i_217, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&default_value_218, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
                            if(_if_conditional300=position<0,                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_216=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                            __freed_obj__ = 0;
                            i_217=0;
                            __freed_obj__ = 0;
                            while(_while_condtional28=it_216!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional28) {
                                if(_if_conditional301=position==i_217,                                __freed_obj__ = 0, 
                                _if_conditional301) {
                                    __result160__ = __result_obj__ = ((struct optional$2charphbool*)(right_value208=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value207=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_216, "./comelang2.h", 742))->item),(_Bool)1)));
                                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result160__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_216=((struct list_item$1charph*)come_null_check(it_216, "./comelang2.h", 744))->next;
                                __freed_obj__ = 0;
                                i_217++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_218,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result161__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value210=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value209=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_218),(_Bool)0))));
                            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result161__;
                            __freed_obj__ = 0;
                            if(default_value_218 && !__freed_obj__) { default_value_218 = come_decrement_ref_count(default_value_218, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj69;
struct optional$2charphbool* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __dec_obj69=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                        ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                        __freed_obj__ = 0;
                                        __result159__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result159__;
                                        __freed_obj__ = 0;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional302=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional302) {
                                                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional303;
char* default_value_219;
char* __result162__;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_219, 0, sizeof(char*));
                            if(_if_conditional303=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional303) {
                                __freed_obj__ = 0;
                                memset(&default_value_219,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result162__ = __result_obj__ = default_value_219;
                                __freed_obj__ = 0;
                                return __result162__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result163__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result163__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional306;
char* result_223;
char* __result165__;
_Bool _if_conditional307;
char* __result166__;
char* result_224;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_223, 0, sizeof(char*));
memset(&result_224, 0, sizeof(char*));
                        if(_if_conditional306=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional306) {
                            __freed_obj__ = 0;
                            memset(&result_223,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result165__ = __result_obj__ = result_223;
                            __freed_obj__ = 0;
                            return __result165__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional307=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional307) {
                            __result166__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result166__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_224,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result167__ = __result_obj__ = result_224;
                        __freed_obj__ = 0;
                        return __result167__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result168__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result168__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional308;
char* result_226;
char* __result169__;
_Bool _if_conditional309;
char* __result170__;
char* result_227;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
                        if(_if_conditional308=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            __freed_obj__ = 0;
                            memset(&result_226,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result169__ = __result_obj__ = result_226;
                            __freed_obj__ = 0;
                            return __result169__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional309=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            __result170__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result170__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_227,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result171__ = __result_obj__ = result_227;
                        __freed_obj__ = 0;
                        return __result171__;
                        __freed_obj__ = 0;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional326;
unsigned int hash_245;
unsigned int it_246;
_Bool _while_condtional31;
_Bool _if_conditional338;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a17;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool same_key_exist_247;
char* it2_248;
_Bool _for_condtionalA19;
void* right_value242;
struct optional$2boolbool* __exception_result_var_a18;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct map$2charphCVALUEph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_245, 0, sizeof(unsigned int));
memset(&it_246, 0, sizeof(unsigned int));
memset(&right_value241, 0, sizeof(void*));
memset(&same_key_exist_247, 0, sizeof(_Bool));
memset(&it2_248, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
                        if(_if_conditional326=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->size,                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            map$2charphCVALUEph_rehash(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1422)));
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        hash_245=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->size;
                        __freed_obj__ = 0;
                        it_246=hash_245;
                        __freed_obj__ = 0;
                        while(_while_condtional31=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional31) {
                            if(_if_conditional338=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_246],                            __freed_obj__ = 0, 
                            _if_conditional338) {
                                if(_if_conditional339=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a17=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_246], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a17)),                                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(_if_conditional340=1,                                    __freed_obj__ = 0, 
                                    _if_conditional340) {
                                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_246]);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_246] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_246] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_246], (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_246]=(char*)come_increment_ref_count(key);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_246]);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_246]=key;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional341=1,                                    __freed_obj__ = 0, 
                                    _if_conditional341) {
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->items[it_246] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->items[it_246], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1443))->items[it_246]=(struct CVALUE*)come_increment_ref_count(item);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1446))->items[it_246]=item;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_246++;
                                __freed_obj__ = 0;
                                if(_if_conditional342=it_246>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1460))->size,                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    it_246=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional343=it_246==hash_245,                                    __freed_obj__ = 0, 
                                    _if_conditional343) {
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
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_246]=(_Bool)1;
                                __freed_obj__ = 0;
                                if(_if_conditional344=1,                                __freed_obj__ = 0, 
                                _if_conditional344) {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_246]=(char*)come_increment_ref_count(key);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_246]=key;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional345=1,                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1470))->items[it_246]=(struct CVALUE*)come_increment_ref_count(item);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1473))->items[it_246]=item;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        same_key_exist_247=(_Bool)0;
                        __freed_obj__ = 0;
                        for(
                        it2_248=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA19=                        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA19;                        it2_248=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional346=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a18=((struct optional$2boolbool*)(right_value242=string_equals(((char*)come_null_check(it2_248, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a18)),                            (right_value242 && right_value242 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                same_key_exist_247=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional347=!same_key_exist_247,                        __freed_obj__ = 0, 
                        _if_conditional347) {
                            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result183__ = __result_obj__ = self;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result183__;
                        __freed_obj__ = 0;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_228;
void* right_value235;
char** keys_229;
void* right_value236;
struct CVALUE** items_230;
void* right_value237;
_Bool* item_existance_231;
int len_232;
char* it_235;
_Bool _for_condtionalA18;
struct CVALUE* default_value_238;
void* right_value239;
struct CVALUE* it2_241;
unsigned int hash_242;
int n_243;
_Bool _while_condtional30;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct CVALUE* default_value_244;
void* right_value240;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_228, 0, sizeof(int));
memset(&right_value235, 0, sizeof(void*));
memset(&keys_229, 0, sizeof(char**));
memset(&right_value236, 0, sizeof(void*));
memset(&items_230, 0, sizeof(struct CVALUE**));
memset(&right_value237, 0, sizeof(void*));
memset(&item_existance_231, 0, sizeof(_Bool*));
memset(&len_232, 0, sizeof(int));
memset(&it_235, 0, sizeof(char*));
memset(&default_value_238, 0, sizeof(struct CVALUE*));
memset(&right_value239, 0, sizeof(void*));
memset(&it2_241, 0, sizeof(struct CVALUE*));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&n_243, 0, sizeof(int));
memset(&default_value_244, 0, sizeof(struct CVALUE*));
memset(&right_value240, 0, sizeof(void*));
                                size_228=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                __freed_obj__ = 0;
                                keys_229=(char**)come_increment_ref_count(((char**)(right_value235=(char**)come_calloc(1, sizeof(char*)*(1*(size_228)), "./comelang2.h", 1370))));
                                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                items_230=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value236=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_228)), "./comelang2.h", 1371))));
                                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                item_existance_231=(_Bool*)come_increment_ref_count(((_Bool*)(right_value237=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_228)), "./comelang2.h", 1372))));
                                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                len_232=0;
                                __freed_obj__ = 0;
                                for(
                                it_235=map$2charphCVALUEph_begin(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA18=                                !map$2charphCVALUEph_end(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA18;                                it_235=map$2charphCVALUEph_next(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    __freed_obj__ = 0;
                                    memset(&default_value_238,0,sizeof(struct CVALUE*));
                                    __freed_obj__ = 0;
                                    it2_241=((struct CVALUE*)(right_value239=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1379)),it_235,default_value_238)));
                                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    hash_242=string_get_hash_key(((char*)come_null_check(it_235, "./comelang2.h", 1380)))%size_228;
                                    __freed_obj__ = 0;
                                    n_243=hash_242;
                                    __freed_obj__ = 0;
                                    while(_while_condtional30=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional30) {
                                        if(_if_conditional335=item_existance_231[n_243],                                        __freed_obj__ = 0, 
                                        _if_conditional335) {
                                            n_243++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional336=n_243>=size_228,                                            __freed_obj__ = 0, 
                                            _if_conditional336) {
                                                n_243=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional337=n_243==hash_242,                                                __freed_obj__ = 0, 
                                                _if_conditional337) {
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
                                            item_existance_231[n_243]=(_Bool)1;
                                            __freed_obj__ = 0;
                                            keys_229[n_243]=it_235;
                                            __freed_obj__ = 0;
                                            __freed_obj__ = 0;
                                            items_230[n_243]=((struct CVALUE*)(right_value240=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1400)),it_235,default_value_244)));
                                            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            len_232++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408))->items);
                                __freed_obj__ = 0;
                                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_229;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1413))->items=items_230;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_231;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1416))->size=size_228;
                                __freed_obj__ = 0;
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1417))->len=len_232;
                                __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional327;
char* result_233;
char* __result172__;
_Bool _if_conditional328;
char* __result173__;
char* result_234;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_233, 0, sizeof(char*));
memset(&result_234, 0, sizeof(char*));
                                    if(_if_conditional327=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional327) {
                                        __freed_obj__ = 0;
                                        memset(&result_233,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result172__ = __result_obj__ = result_233;
                                        __freed_obj__ = 0;
                                        return __result172__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional328=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional328) {
                                        __result173__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                        __freed_obj__ = 0;
                                        return __result173__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_234,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result174__ = __result_obj__ = result_234;
                                    __freed_obj__ = 0;
                                    return __result174__;
                                    __freed_obj__ = 0;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result175__ = self==((void*)0)||((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result175__;
                                    __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional329;
char* result_236;
char* __result176__;
_Bool _if_conditional330;
char* __result177__;
char* result_237;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_236, 0, sizeof(char*));
memset(&result_237, 0, sizeof(char*));
                                    if(_if_conditional329=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional329) {
                                        __freed_obj__ = 0;
                                        memset(&result_236,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result176__ = __result_obj__ = result_236;
                                        __freed_obj__ = 0;
                                        return __result176__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional330=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional330) {
                                        __result177__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                        __freed_obj__ = 0;
                                        return __result177__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_237,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result178__ = __result_obj__ = result_237;
                                    __freed_obj__ = 0;
                                    return __result178__;
                                    __freed_obj__ = 0;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_239;
unsigned int it_240;
_Bool _while_condtional29;
_Bool _if_conditional331;
void* right_value238;
struct optional$2boolbool* __exception_result_var_a16;
_Bool _if_conditional332;
struct CVALUE* __result179__;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct CVALUE* __result180__;
struct CVALUE* __result181__;
struct CVALUE* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_239, 0, sizeof(unsigned int));
memset(&it_240, 0, sizeof(unsigned int));
memset(&right_value238, 0, sizeof(void*));
                                        hash_239=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                        __freed_obj__ = 0;
                                        it_240=hash_239;
                                        __freed_obj__ = 0;
                                        while(_while_condtional29=(_Bool)1,                                        __freed_obj__ = 0, 
                                        _while_condtional29) {
                                            if(_if_conditional331=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_240],                                            __freed_obj__ = 0, 
                                            _if_conditional331) {
                                                if(_if_conditional332=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a16=((struct optional$2boolbool*)(right_value238=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_240], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a16)),                                                (right_value238 && right_value238 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __freed_obj__ = 0, 
                                                _if_conditional332) {
                                                    __result179__ = __result_obj__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1266))->items[it_240];
                                                    __freed_obj__ = 0;
                                                    return __result179__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                it_240++;
                                                __freed_obj__ = 0;
                                                if(_if_conditional333=it_240>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                __freed_obj__ = 0, 
                                                _if_conditional333) {
                                                    it_240=0;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional334=it_240==hash_239,                                                    __freed_obj__ = 0, 
                                                    _if_conditional334) {
                                                        __result180__ = __result_obj__ = default_value;
                                                        __freed_obj__ = 0;
                                                        return __result180__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __result181__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result181__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result182__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result182__;
                                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result184__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result184__;
            __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result185__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result185__;
            __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* default_value_251;
unsigned int hash_252;
unsigned int it_253;
_Bool _while_condtional32;
_Bool _if_conditional349;
void* right_value247;
struct optional$2boolbool* __exception_result_var_b3;
_Bool _if_conditional350;
void* right_value248;
void* right_value249;
struct optional$2CVALUEpbool* __result187__;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value250;
void* right_value251;
struct optional$2CVALUEpbool* __result188__;
void* right_value252;
void* right_value253;
struct optional$2CVALUEpbool* __result189__;
void* right_value254;
void* right_value255;
struct optional$2CVALUEpbool* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_251, 0, sizeof(struct CVALUE*));
memset(&hash_252, 0, sizeof(unsigned int));
memset(&it_253, 0, sizeof(unsigned int));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_251,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    hash_252=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1584))->size;
                    __freed_obj__ = 0;
                    it_253=hash_252;
                    __freed_obj__ = 0;
                    while(_while_condtional32=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional32) {
                        if(_if_conditional349=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_253],                        __freed_obj__ = 0, 
                        _if_conditional349) {
                            if(_if_conditional350=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b3=((struct optional$2boolbool*)(right_value247=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_253], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b3)),                            (right_value247 && right_value247 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __freed_obj__ = 0, 
                            _if_conditional350) {
                                __result187__ = __result_obj__ = ((struct optional$2CVALUEpbool*)(right_value249=optional$2CVALUEpbool_initialize((struct optional$2CVALUEpbool*)come_increment_ref_count(((struct optional$2CVALUEpbool*)(right_value248=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1592))->items[it_253],(_Bool)1)));
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result187__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_253++;
                            __freed_obj__ = 0;
                            if(_if_conditional351=it_253>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1603))->size,                            __freed_obj__ = 0, 
                            _if_conditional351) {
                                it_253=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional352=it_253==hash_252,                                __freed_obj__ = 0, 
                                _if_conditional352) {
                                    __result188__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2CVALUEpbool*)(right_value251=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value250=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1601))),default_value_251,(_Bool)0))));
                                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result188__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result189__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2CVALUEpbool*)(right_value253=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value252=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1605))),default_value_251,(_Bool)0))));
                            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result189__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result190__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2CVALUEpbool*)(right_value255=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value254=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1609))),default_value_251,(_Bool)0))));
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result190__;
                    __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2CVALUEpbool* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result186__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result186__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct CVALUE* optional$2CVALUEpbool_value(struct optional$2CVALUEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional353;
struct CVALUE* default_value_254;
struct CVALUE* __result191__;
struct CVALUE* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_254, 0, sizeof(struct CVALUE*));
                    if(_if_conditional353=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        __freed_obj__ = 0;
                        memset(&default_value_254,0,sizeof(struct CVALUE*));
                        __freed_obj__ = 0;
                        __result191__ = __result_obj__ = default_value_254;
                        __freed_obj__ = 0;
                        return __result191__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result192__ = __result_obj__ = ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result192__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result195__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1327))->len;
            __freed_obj__ = 0;
            return __result195__;
            __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result196__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result196__;
                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
struct list$1CVALUEph* __result197__;
struct list_item$1CVALUEph* it_264;
int i_265;
_Bool _while_condtional33;
_Bool _if_conditional368;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_264, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_265, 0, sizeof(int));
                        if(_if_conditional366=position<0,                        __freed_obj__ = 0, 
                        _if_conditional366) {
                            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 632))->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional367=position>=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 640))->len,                        __freed_obj__ = 0, 
                        _if_conditional367) {
                            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 636)),(struct CVALUE*)come_increment_ref_count(item));
                            __freed_obj__ = 0;
                            __result197__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result197__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_264=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 640))->head;
                        __freed_obj__ = 0;
                        i_265=0;
                        __freed_obj__ = 0;
                        while(_while_condtional33=it_264!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional33) {
                            if(_if_conditional368=position==i_265,                            __freed_obj__ = 0, 
                            _if_conditional368) {
                                __dec_obj87=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 644))->item;
                                ((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 644))->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj87) { come_call_finalizer(CVALUE_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_264=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 647))->next;
                            __freed_obj__ = 0;
                            i_265++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result198__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result198__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional369;
struct CVALUE* __result199__;
void* right_value273;
struct CVALUE* result_266;
_Bool _if_conditional370;
void* right_value274;
char* __dec_obj88;
_Bool _if_conditional371;
void* right_value275;
struct sType* __dec_obj89;
_Bool _if_conditional372;
struct CVALUE* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct CVALUE*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
                        if(_if_conditional369=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional369) {
                            __result199__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result199__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional370=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional370) {
                            __dec_obj88=((struct CVALUE*)come_null_check(result_266, "CVALUE_clone", 4))->c_value;
                            ((struct CVALUE*)come_null_check(result_266, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value274=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional371=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional371) {
                            __dec_obj89=((struct CVALUE*)come_null_check(result_266, "CVALUE_clone", 5))->type;
                            ((struct CVALUE*)come_null_check(result_266, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                            if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional372=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional372) {
                            ((struct CVALUE*)come_null_check(result_266, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result200__ = __result_obj__ = result_266;
                        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result200__;
                        __freed_obj__ = 0;
                        if(result_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_273;
unsigned int hash_274;
unsigned int it_275;
_Bool _while_condtional34;
_Bool _if_conditional379;
void* right_value289;
struct optional$2boolbool* __exception_result_var_b4;
_Bool _if_conditional380;
void* right_value290;
void* right_value291;
struct optional$2sClasspbool* __result205__;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value292;
void* right_value293;
struct optional$2sClasspbool* __result206__;
void* right_value294;
void* right_value295;
struct optional$2sClasspbool* __result207__;
void* right_value296;
void* right_value297;
struct optional$2sClasspbool* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_273, 0, sizeof(struct sClass*));
memset(&hash_274, 0, sizeof(unsigned int));
memset(&it_275, 0, sizeof(unsigned int));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_273,0,sizeof(struct sClass*));
                __freed_obj__ = 0;
                hash_274=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_275=hash_274;
                __freed_obj__ = 0;
                while(_while_condtional34=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional34) {
                    if(_if_conditional379=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_275],                    __freed_obj__ = 0, 
                    _if_conditional379) {
                        if(_if_conditional380=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b4=((struct optional$2boolbool*)(right_value289=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_275], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b4)),                        (right_value289 && right_value289 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional380) {
                            __result205__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value291=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value290=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_275],(_Bool)1)));
                            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result205__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_275++;
                        __freed_obj__ = 0;
                        if(_if_conditional381=it_275>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional381) {
                            it_275=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional382=it_275==hash_274,                            __freed_obj__ = 0, 
                            _if_conditional382) {
                                __result206__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value293=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value292=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_273,(_Bool)0))));
                                if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result206__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result207__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value295=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value294=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_273,(_Bool)0))));
                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result207__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result208__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value297=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value296=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_273,(_Bool)0))));
                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result208__;
                __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result204__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result204__;
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
_Bool _if_conditional383;
struct sClass* default_value_276;
struct sClass* __result209__;
struct sClass* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_276, 0, sizeof(struct sClass*));
                if(_if_conditional383=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional383) {
                    __freed_obj__ = 0;
                    memset(&default_value_276,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    __result209__ = __result_obj__ = default_value_276;
                    __freed_obj__ = 0;
                    return __result209__;
                    __freed_obj__ = 0;
                }
                else {
                    __result210__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result210__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional386;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional386=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional386) {
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
                __result212__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result212__;
                __freed_obj__ = 0;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value351;
void* right_value352;
struct list$1tuple2$2charphsNodephph* params_308;
void* right_value356;
void* right_value359;
void* right_value360;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value361;
_Bool _while_condtional36;
_Bool _if_conditional405;
char* p_313;
int sline_314;
_Bool err_flag_315;
void* right_value362;
char* label_316;
_Bool _if_conditional406;
void* right_value363;
char* __dec_obj104;
_Bool _if_conditional407;
char* __dec_obj105;
_Bool no_comma_317;
void* right_value364;
struct sNode* node_318;
void* right_value365;
struct sNode* __dec_obj106;
void* right_value366;
void* right_value367;
_Bool _if_conditional408;
_Bool _if_conditional409;
struct buffer* method_block_319;
int method_block_sline_320;
_Bool _if_conditional410;
char* head_321;
void* right_value368;
char* tail_322;
void* right_value369;
void* right_value370;
struct buffer* __dec_obj107;
int len_323;
void* right_value371;
char* mem_324;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value382;
struct sNode* node_326;
void* right_value383;
struct sNode* __dec_obj113;
struct sNode* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&params_308, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&p_313, 0, sizeof(char*));
memset(&sline_314, 0, sizeof(int));
memset(&err_flag_315, 0, sizeof(_Bool));
memset(&right_value362, 0, sizeof(void*));
memset(&label_316, 0, sizeof(char*));
memset(&right_value363, 0, sizeof(void*));
memset(&no_comma_317, 0, sizeof(_Bool));
memset(&right_value364, 0, sizeof(void*));
memset(&node_318, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&method_block_319, 0, sizeof(struct buffer*));
memset(&method_block_sline_320, 0, sizeof(int));
memset(&head_321, 0, sizeof(char*));
memset(&right_value368, 0, sizeof(void*));
memset(&tail_322, 0, sizeof(char*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&len_323, 0, sizeof(int));
memset(&right_value371, 0, sizeof(void*));
memset(&mem_324, 0, sizeof(char*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&node_326, 0, sizeof(struct sNode*));
memset(&right_value383, 0, sizeof(void*));
    params_308=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value352=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value351=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 855))))))));
    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_308, "20method.c", 856)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value360=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value356=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 856)))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(obj)))))))));
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional402=*((struct sInfo*)come_null_check(info, "20method.c", 863))->p==45&&*(((struct sInfo*)come_null_check(info, "20method.c", 863))->p+1)==62,    __freed_obj__ = 0, 
    _if_conditional402) {
        ((struct sInfo*)come_null_check(info, "20method.c", 859))->p+=2;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional403=*((struct sInfo*)come_null_check(info, "20method.c", 917))->p!=123,    __freed_obj__ = 0, 
    _if_conditional403) {
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("20method.c", 864),((struct optional$2intbool*)(right_value361=expected_next_character(40,info)))));
        come_pop_stackframe();
        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        while(_while_condtional36=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional36) {
            if(_if_conditional405=*((struct sInfo*)come_null_check(info, "20method.c", 873))->p==41,            __freed_obj__ = 0, 
            _if_conditional405) {
                ((struct sInfo*)come_null_check(info, "20method.c", 868))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            p_313=((struct sInfo*)come_null_check(info, "20method.c", 873))->p;
            __freed_obj__ = 0;
            sline_314=((struct sInfo*)come_null_check(info, "20method.c", 874))->sline;
            __freed_obj__ = 0;
            err_flag_315=(_Bool)0;
            __freed_obj__ = 0;
            label_316=(char*)come_increment_ref_count(((char*)(right_value362=__builtin_string(""))));
            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional406=xisalpha(*((struct sInfo*)come_null_check(info, "20method.c", 881))->p)||*((struct sInfo*)come_null_check(info, "20method.c", 881))->p==95,            __freed_obj__ = 0, 
            _if_conditional406) {
                come_clear_stackframe();
                __dec_obj104=label_316;
                label_316=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("20method.c", 879),((struct optional$2charphbool*)(right_value363=parse_word(info))))));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                err_flag_315=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional407=err_flag_315==(_Bool)1&&*((struct sInfo*)come_null_check(info, "20method.c", 894))->p==58,            __freed_obj__ = 0, 
            _if_conditional407) {
                ((struct sInfo*)come_null_check(info, "20method.c", 884))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                __dec_obj105=label_316;
                label_316=((void*)0);
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "20method.c", 890))->p=p_313;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "20method.c", 891))->sline=sline_314;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            no_comma_317=((struct sInfo*)come_null_check(info, "20method.c", 894))->no_comma;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 895))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_v13(info))));
            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            __dec_obj106=node_318;
            node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_318),info))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "20method.c", 901))->no_comma=no_comma_317;
            __freed_obj__ = 0;
            list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_308, "20method.c", 903)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value367=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value366=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 903)))),(char*)come_increment_ref_count(label_316),(struct sNode*)come_increment_ref_count(node_318))))));
            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional408=*((struct sInfo*)come_null_check(info, "20method.c", 914))->p==44,            __freed_obj__ = 0, 
            _if_conditional408) {
                ((struct sInfo*)come_null_check(info, "20method.c", 906))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional409=*((struct sInfo*)come_null_check(info, "20method.c", 914))->p==41,                __freed_obj__ = 0, 
                _if_conditional409) {
                    ((struct sInfo*)come_null_check(info, "20method.c", 910))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(label_316 && !__freed_obj__) { label_316 = come_decrement_ref_count(label_316, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(label_316 && !__freed_obj__) { label_316 = come_decrement_ref_count(label_316, (void*)0, (void*)0, 0, 0, 0); }
            if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    method_block_319=((void*)0);
    __freed_obj__ = 0;
    method_block_sline_320=0;
    __freed_obj__ = 0;
    if(_if_conditional410=*((struct sInfo*)come_null_check(info, "20method.c", 940))->p==123,    __freed_obj__ = 0, 
    _if_conditional410) {
        head_321=((struct sInfo*)come_null_check(info, "20method.c", 922))->p;
        __freed_obj__ = 0;
        method_block_sline_320=((struct sInfo*)come_null_check(info, "20method.c", 923))->sline;
        __freed_obj__ = 0;
        ((char*)(right_value368=skip_block(info)));
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        tail_322=((struct sInfo*)come_null_check(info, "20method.c", 927))->p;
        __freed_obj__ = 0;
        __dec_obj107=method_block_319;
        method_block_319=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value370=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value369=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 929))))))));
        if(__dec_obj107) { come_call_finalizer(buffer_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        len_323=tail_322-head_321;
        __freed_obj__ = 0;
        mem_324=(char*)come_increment_ref_count(((char*)(right_value371=(char*)come_calloc(1, sizeof(char)*(1*(len_323+1)), "20method.c", 932))));
        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        memcpy(mem_324,head_321,len_323);
        __freed_obj__ = 0;
        mem_324[len_323]=0;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(method_block_319, "20method.c", 936)),mem_324);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(method_block_319, "20method.c", 937)),"\n");
        __freed_obj__ = 0;
        if(mem_324 && !__freed_obj__) { mem_324 = come_decrement_ref_count(mem_324, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 942);
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value375=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value372=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 942)))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value374=list$1tuple2$2charphsNodephphp_clone(params_308)))),method_block_319,method_block_sline_320,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=_inf_value2)));
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj113=node_326;
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=exception_get_value((struct sNode*)come_increment_ref_count(node_326),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result222__ = __result_obj__ = node_326;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_308 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_308, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_319, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result222__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_308 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_308, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_319 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_319, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional400;
void* right_value353;
struct list_item$1tuple2$2charphsNodephph* litem_309;
struct tuple2$2charphsNodeph* __dec_obj99;
_Bool _if_conditional401;
void* right_value354;
struct list_item$1tuple2$2charphsNodephph* litem_310;
struct tuple2$2charphsNodeph* __dec_obj100;
void* right_value355;
struct list_item$1tuple2$2charphsNodephph* litem_311;
struct tuple2$2charphsNodeph* __dec_obj101;
struct list$1tuple2$2charphsNodephph* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value353, 0, sizeof(void*));
memset(&litem_309, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value354, 0, sizeof(void*));
memset(&litem_310, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value355, 0, sizeof(void*));
memset(&litem_311, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional400=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional400) {
            litem_309=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value353=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 272))));
            if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_309, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_309, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj99=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_309, "./comelang2.h", 276))->item;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_309, "./comelang2.h", 276))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj99) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_309;
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_309;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional401=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional401) {
                litem_310=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value354=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 282))));
                if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_310, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_310, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj100=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_310, "./comelang2.h", 286))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_310, "./comelang2.h", 286))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj100) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_310;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_310;
                __freed_obj__ = 0;
            }
            else {
                litem_311=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value355=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 292))));
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_311, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_311, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj101=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_311, "./comelang2.h", 296))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_311, "./comelang2.h", 296))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj101) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_311;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_311;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result216__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result216__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value357;
char* __dec_obj102;
void* right_value358;
struct sNode* __dec_obj103;
struct tuple2$2charphsNodeph* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
        __dec_obj102=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value357=string_clone(v1))));
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj103=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(v2))));
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
        if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        __result217__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result217__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional404;
int default_value_312;
int __result218__;
int __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_312, 0, sizeof(int));
            if(_if_conditional404=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional404) {
                __freed_obj__ = 0;
                memset(&default_value_312,0,sizeof(int));
                __freed_obj__ = 0;
                __result218__ = default_value_312;
                __freed_obj__ = 0;
                return __result218__;
                __freed_obj__ = 0;
            }
            else {
                __result219__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result219__;
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

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional411=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional411) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->finalize, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional412=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional412) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional413=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional413) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional414=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional414) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional415=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 5))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional415) {
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional416;
struct sMethodCallNode* __result220__;
void* right_value376;
struct sMethodCallNode* result_325;
_Bool _if_conditional417;
void* right_value377;
struct sNode* __dec_obj108;
_Bool _if_conditional418;
void* right_value378;
char* __dec_obj109;
_Bool _if_conditional419;
void* right_value379;
struct list$1tuple2$2charphsNodephph* __dec_obj110;
_Bool _if_conditional420;
void* right_value380;
struct buffer* __dec_obj111;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value381;
char* __dec_obj112;
_Bool _if_conditional423;
struct sMethodCallNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sMethodCallNode*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
        if(_if_conditional416=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional416) {
            __result220__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result220__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_325=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value376=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3))));
        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            __dec_obj108=((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 4))->obj;
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 4))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 4))->obj))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional418=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional418) {
            __dec_obj109=((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 5))->fun_name;
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 5))->fun_name=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->fun_name))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional419=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional419) {
            __dec_obj110=((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 6))->params;
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 6))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value379=list$1tuple2$2charphsNodephphp_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->params))));
            if(__dec_obj110) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional420=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8))->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional420) {
            __dec_obj111=((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 7))->method_block;
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 7))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=buffer_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->method_block))));
            if(__dec_obj111) { come_call_finalizer(buffer_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional421=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional421) {
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 8))->sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional422=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional422) {
            __dec_obj112=((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 9))->sname;
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value381=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9))->sname))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional423=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional423) {
            ((struct sMethodCallNode*)come_null_check(result_325, "sMethodCallNode_clone", 10))->method_block_sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10))->method_block_sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result221__ = __result_obj__ = result_325;
        if(result_325 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result221__;
        __freed_obj__ = 0;
        if(result_325 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional424;
void* right_value384;
void* right_value385;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value388;
void* right_value389;
void* right_value390;
struct sNode* __result226__;
void* right_value391;
struct __current_stack1__ __current_stack1__;
void* right_value394;
struct sNode* result_328;
void* right_value395;
void* right_value396;
struct sNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value394, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
    if(_if_conditional424=charp_operator_equals(buf,"__current__"),    __freed_obj__ = 0, 
    _if_conditional424) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 951);
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value385=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value384=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 951)))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result226__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value390=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value389=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 951)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=_inf_value3))),(_Bool)1)));
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result226__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("20method.c", 958),((struct optional$2sNodephbool*)(right_value391=string_node_v15(buf,head,head_sline,info)))), "20method.c", 958)),&__current_stack1__,(void*)method_block1_20methodc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result230__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value396=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value395=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 958)))),(struct sNode*)come_increment_ref_count(result_328),(_Bool)1)));
    if(result_328 && !__freed_obj__) { result_328 = come_decrement_ref_count(result_328, ((struct sNode*)result_328)->finalize, ((struct sNode*)result_328)->_protocol_obj, 0, 0, 0); } 
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
    if(result_328 && !__freed_obj__) { result_328 = come_decrement_ref_count(result_328, ((struct sNode*)result_328)->finalize, ((struct sNode*)result_328)->_protocol_obj, 0, 0, 0); } 
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional425=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 1))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional425) {
                if(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional426;
struct sCurrentNode* __result223__;
void* right_value386;
struct sCurrentNode* result_327;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value387;
char* __dec_obj114;
struct sCurrentNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value386, 0, sizeof(void*));
memset(&result_327, 0, sizeof(struct sCurrentNode*));
memset(&right_value387, 0, sizeof(void*));
            if(_if_conditional426=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional426) {
                __result223__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result223__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_327=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value386=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3))));
            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional427=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional427) {
                ((struct sCurrentNode*)come_null_check(result_327, "sCurrentNode_clone", 4))->sline=((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 4))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional428=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional428) {
                __dec_obj114=((struct sCurrentNode*)come_null_check(result_327, "sCurrentNode_clone", 5))->sname;
                ((struct sCurrentNode*)come_null_check(result_327, "sCurrentNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value387=string_clone(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5))->sname))));
                if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result224__ = __result_obj__ = result_327;
            if(result_327 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result224__;
            __freed_obj__ = 0;
            if(result_327 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj115;
struct optional$2sNodephbool* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj115=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result225__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result225__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional429=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional429) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
struct sNode* __result227__;
struct sNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional430=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional430) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional431=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional431) {
                __result227__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result227__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result228__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result228__;
        __freed_obj__ = 0;
}

void method_block1_20methodc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value392;
void* right_value393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
        if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("20method.c", 956), ((struct optional$2voidpbool*)(right_value393=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value392=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "20method.c", 956))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result229__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result229__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value397;
struct sNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
    __result231__ = __result_obj__ = ((struct sNode*)(right_value397=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

