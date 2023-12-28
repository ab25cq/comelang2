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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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












_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* generics_type_32;
_Bool _if_conditional91;
struct sType* __dec_obj23;
struct sClass* klass_33;
char* class_name_34;
char* fun_name2_35;
struct sFun* operator_fun_36;
_Bool _if_conditional92;
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
void* right_value52;
char* __dec_obj25;
int i_48;
_Bool _for_condtionalA2;
void* right_value53;
char* new_fun_name_49;
void* right_value54;
_Bool _if_conditional115;
void* right_value55;
char* __dec_obj26;
_Bool _if_conditional116;
void* right_value56;
_Bool result_50;
_Bool _if_conditional117;
void* right_value57;
struct CVALUE* come_value_51;
char* left_value2_52;
void* right_value58;
void* right_value59;
void* right_value64;
void* right_value65;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __dec_obj28;
_Bool _if_conditional127;
void* right_value66;
char* __dec_obj29;
_Bool _if_conditional128;
void* right_value67;
char* __dec_obj30;
void* right_value68;
char* __dec_obj31;
_Bool _if_conditional129;
void* right_value69;
char* __dec_obj32;
void* right_value70;
char* __dec_obj33;
void* right_value71;
char* __dec_obj34;
char* middle_value2_57;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
char* __dec_obj35;
_Bool _if_conditional133;
void* right_value76;
char* __dec_obj36;
_Bool _if_conditional134;
void* right_value77;
char* __dec_obj37;
void* right_value78;
char* __dec_obj38;
_Bool _if_conditional135;
void* right_value79;
char* __dec_obj39;
void* right_value80;
char* __dec_obj40;
void* right_value81;
char* __dec_obj41;
char* right_value2_58;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
char* __dec_obj42;
_Bool _if_conditional139;
void* right_value86;
char* __dec_obj43;
_Bool _if_conditional140;
void* right_value87;
char* __dec_obj44;
void* right_value88;
char* __dec_obj45;
_Bool _if_conditional141;
void* right_value89;
char* __dec_obj46;
void* right_value90;
char* __dec_obj47;
void* right_value91;
char* __dec_obj48;
void* right_value92;
char* __dec_obj49;
void* right_value93;
struct sType* result_type1_59;
void* right_value94;
struct sType* result_type2_60;
void* right_value95;
struct sType* __dec_obj50;
_Bool _if_conditional142;
void* right_value96;
char* __dec_obj51;
_Bool _if_conditional143;
void* right_value97;
char* __dec_obj52;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&generics_type_32, 0, sizeof(struct sType*));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&class_name_34, 0, sizeof(char*));
memset(&fun_name2_35, 0, sizeof(char*));
memset(&operator_fun_36, 0, sizeof(struct sFun*));
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
memset(&i_48, 0, sizeof(int));
memset(&right_value53, 0, sizeof(void*));
memset(&new_fun_name_49, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&result_50, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*));
memset(&left_value2_52, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&middle_value2_57, 0, sizeof(char*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value2_58, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&result_type1_59, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_type2_60, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
    generics_type_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional91=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_32, "18field.c", 11))->mNoSolvedGenericsType, "18field.c", 11))->v1,    __freed_obj__ = 0, 
    _if_conditional91) {
        __dec_obj23=generics_type_32;
        generics_type_32=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_32, "18field.c", 8))->mNoSolvedGenericsType, "18field.c", 8))->v1);
        if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_33=((struct sType*)come_null_check(type, "18field.c", 11))->mClass;
    __freed_obj__ = 0;
    class_name_34=((struct sClass*)come_null_check(klass_33, "18field.c", 12))->mName;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    operator_fun_36=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional92=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21))->mNoSolvedGenericsType, "18field.c", 21))->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18))->mNoSolvedGenericsType, "18field.c", 18))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 58))->mGenericsTypes, "18field.c", 58)))>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_37=(char*)come_increment_ref_count(((char*)(right_value35=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22))->mClass, "18field.c", 22))->mName))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(type,((struct sInfo*)come_null_check(info, "18field.c", 24))->generics_type,info))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=fun_name2_35;
        fun_name2_35=(char*)come_increment_ref_count(((char*)(right_value37=create_method_name(obj_type_38,(_Bool)0,fun_name,info))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_39=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("%s_%s",none_generics_name_37,fun_name))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_43=((struct sGenericsFun*)(right_value40=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29))->generics_funcs, "18field.c", 29)),fun_name3_39,((void*)0))));
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_43,        __freed_obj__ = 0, 
        _if_conditional108) {
            if(_if_conditional109=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(fun_name2_35)))),generics_fun_43,obj_type_38,info),            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional109) {
                __result39__ = (_Bool)0;
                if(none_generics_name_37 && !__freed_obj__) { none_generics_name_37 = come_decrement_ref_count(none_generics_name_37, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_39 && !__freed_obj__) { fun_name3_39 = come_decrement_ref_count(fun_name3_39, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_35 && !__freed_obj__) { fun_name2_35 = come_decrement_ref_count(fun_name2_35, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        operator_fun_36=optional$2sFunpbool_value((come_push_stackframe("18field.c", 37),((struct optional$2sFunpbool*)(right_value51=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 37))->funcs,fun_name2_35)))));
        come_pop_stackframe();
        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_37 && !__freed_obj__) { none_generics_name_37 = come_decrement_ref_count(none_generics_name_37, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_39 && !__freed_obj__) { fun_name3_39 = come_decrement_ref_count(fun_name3_39, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj25=fun_name2_35;
        fun_name2_35=(char*)come_increment_ref_count(((char*)(right_value52=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_48=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_48>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_48-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_49=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("%s_v%d",fun_name2_35,i_48))));
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_36=optional$2sFunpbool_value((come_push_stackframe("18field.c", 45),((struct optional$2sFunpbool*)(right_value54=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 45))->funcs,new_fun_name_49)))));
            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional115=operator_fun_36,            __freed_obj__ = 0, 
            _if_conditional115) {
                __dec_obj26=fun_name2_35;
                fun_name2_35=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(new_fun_name_49))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_49 && !__freed_obj__) { new_fun_name_49 = come_decrement_ref_count(new_fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_49 && !__freed_obj__) { new_fun_name_49 = come_decrement_ref_count(new_fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional116=operator_fun_36==((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            come_clear_stackframe();
            operator_fun_36=optional$2sFunpbool_value((come_push_stackframe("18field.c", 54),((struct optional$2sFunpbool*)(right_value56=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 54))->funcs,fun_name2_35)))));
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_50=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional117=operator_fun_36,    __freed_obj__ = 0, 
    _if_conditional117) {
        come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61))));
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_35)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 63),((struct optional$2sTypephbool*)(right_value64=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 63))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "18field.c", 63))->type,left_value,(_Bool)0,info);
        come_pop_stackframe();
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional124=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 95),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value65=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 95))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "18field.c", 95))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 95))->type, "18field.c", 95))->mHeap,        (right_value65 && right_value65 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional124) {
            if(_if_conditional125=((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->var,            __freed_obj__ = 0, 
            _if_conditional125) {
                if(_if_conditional126=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional126) {
                    __dec_obj28=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName=((void*)0);
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional127=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        __dec_obj29=((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value=(char*)come_increment_ref_count(((char*)(right_value66=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value,info))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional128=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional128) {
                            __dec_obj30=((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value=(char*)come_increment_ref_count(((char*)(right_value67=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value,info))));
                            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj31=((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value=(char*)come_increment_ref_count(((char*)(right_value68=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value,info))));
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional129=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 89))->type, "18field.c", 89))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                }
                else {
                    __dec_obj32=((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value=(char*)come_increment_ref_count(((char*)(right_value69=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value,info))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj33=left_value2_52;
            left_value2_52=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_52;
            left_value2_52=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(((struct CVALUE*)come_null_check(left_value, "18field.c", 93))->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_35)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 96),((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 96))->mParamTypes,1))))),((struct CVALUE*)come_null_check(middle_value, "18field.c", 96))->type,middle_value,(_Bool)0,info);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional130=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 128),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 128))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "18field.c", 128))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 128))->type, "18field.c", 128))->mHeap,        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional130) {
            if(_if_conditional131=((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->var,            __freed_obj__ = 0, 
            _if_conditional131) {
                if(_if_conditional132=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
                    __dec_obj35=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName=((void*)0);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional133=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __dec_obj36=((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value;
                        ((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value,info))));
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional134=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional134) {
                            __dec_obj37=((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value,info))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj38=((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value,info))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional135=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 122))->type, "18field.c", 122))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional135) {
                }
                else {
                    __dec_obj39=((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value;
                    ((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value,info))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj40=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s",((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->c_value))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj41=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(((struct CVALUE*)come_null_check(middle_value, "18field.c", 126))->c_value))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_35)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 129),((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 129))->mParamTypes,2))))),((struct CVALUE*)come_null_check(right_value, "18field.c", 129))->type,right_value,(_Bool)0,info);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional136=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 162),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 162))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_a4)), "18field.c", 162))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 162))->type, "18field.c", 162))->mHeap,        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->var,            __freed_obj__ = 0, 
            _if_conditional137) {
                if(_if_conditional138=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional138) {
                    __dec_obj42=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName=((void*)0);
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional139=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        __dec_obj43=((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value,info))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional140=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            __dec_obj44=((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value,info))));
                            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj45=((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value=(char*)come_increment_ref_count(((char*)(right_value88=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value,info))));
                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional141=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 155))->type, "18field.c", 155))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional141) {
                }
                else {
                    __dec_obj46=((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value=(char*)come_increment_ref_count(((char*)(right_value89=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value,info))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj47=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->c_value))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj48=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(((struct CVALUE*)come_null_check(right_value, "18field.c", 159))->c_value))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj49=((struct CVALUE*)come_null_check(come_value_51, "18field.c", 162))->c_value;
        ((struct CVALUE*)come_null_check(come_value_51, "18field.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s(%s,%s,%s)",fun_name2_35,left_value2_52,middle_value2_57,right_value2_58))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type1_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 164))->mResultType))));
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=solve_generics(result_type1_59,generics_type_32,info))));
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj50=((struct CVALUE*)come_null_check(come_value_51, "18field.c", 168))->type;
        ((struct CVALUE*)come_null_check(come_value_51, "18field.c", 168))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(result_type2_60))));
        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_51, "18field.c", 169))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional142=((struct sType*)come_null_check(result_type2_60, "18field.c", 175))->mHeap,        __freed_obj__ = 0, 
        _if_conditional142) {
            __dec_obj51=((struct CVALUE*)come_null_check(come_value_51, "18field.c", 172))->c_value;
            ((struct CVALUE*)come_null_check(come_value_51, "18field.c", 172))->c_value=(char*)come_increment_ref_count(((char*)(right_value96=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_51, "18field.c", 172))->c_value,(struct sType*)come_increment_ref_count(result_type2_60),info))));
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional143=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_36, "18field.c", 179))->mResultType, "18field.c", 179))->mException,        __freed_obj__ = 0, 
        _if_conditional143) {
            __dec_obj52=((struct CVALUE*)come_null_check(come_value_51, "18field.c", 176))->c_value;
            ((struct CVALUE*)come_null_check(come_value_51, "18field.c", 176))->c_value=(char*)come_increment_ref_count(((char*)(right_value97=append_exception_value(((struct CVALUE*)come_null_check(come_value_51, "18field.c", 176))->c_value,((struct CVALUE*)come_null_check(come_value_51, "18field.c", 176))->type,info))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_51, "18field.c", 179))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 181))->stack, "18field.c", 181)),(struct CVALUE*)come_increment_ref_count(come_value_51));
        __freed_obj__ = 0;
        result_50=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_52 && !__freed_obj__) { left_value2_52 = come_decrement_ref_count(left_value2_52, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_57 && !__freed_obj__) { middle_value2_57 = come_decrement_ref_count(middle_value2_57, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_58 && !__freed_obj__) { right_value2_58 = come_decrement_ref_count(right_value2_58, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result53__ = result_50;
    if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_35 && !__freed_obj__) { fun_name2_35 = come_decrement_ref_count(fun_name2_35, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(generics_type_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_35 && !__freed_obj__) { fun_name2_35 = come_decrement_ref_count(fun_name2_35, (void*)0, (void*)0, 0, 0, 0); }
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
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional110=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_46],                __freed_obj__ = 0, 
                _if_conditional110) {
                    if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value42=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_46], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value42 && right_value42 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0):0,
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
                    if(_if_conditional112=it_46>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        it_46=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional113=it_46==hash_45,                        __freed_obj__ = 0, 
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
            if(_if_conditional114=self==((void*)0),            __freed_obj__ = 0, 
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

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional118=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional120;
struct list_item$1sTypeph* it_53;
int i_54;
_Bool _while_condtional9;
_Bool _if_conditional121;
void* right_value60;
void* right_value61;
struct optional$2sTypephbool* __result48__;
struct sType* default_value_55;
void* right_value62;
void* right_value63;
struct optional$2sTypephbool* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_54, 0, sizeof(int));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&default_value_55, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            if(_if_conditional120=position<0,            __freed_obj__ = 0, 
            _if_conditional120) {
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
                if(_if_conditional121=position==i_54,                __freed_obj__ = 0, 
                _if_conditional121) {
                    __result48__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value61=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value60=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_53, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result48__;
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
            __result49__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value63=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value62=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_55),(_Bool)0))));
            if(default_value_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result49__;
            __freed_obj__ = 0;
            if(default_value_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional122=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional122) {
                                if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
struct sType* default_value_56;
struct sType* __result50__;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_56, 0, sizeof(struct sType*));
            if(_if_conditional123=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional123) {
                __freed_obj__ = 0;
                memset(&default_value_56,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result50__ = __result_obj__ = default_value_56;
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
_Bool _if_conditional144;
void* right_value98;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj53;
_Bool _if_conditional146;
void* right_value99;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj54;
void* right_value100;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional144=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional144) {
                litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value98=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj53=((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 276))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj53) { come_call_finalizer(CVALUE_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_61;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_61;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional146=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional146) {
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value99=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj54=((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 286))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj54) { come_call_finalizer(CVALUE_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_62;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_62;
                    __freed_obj__ = 0;
                }
                else {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value100=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_63, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_63, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj55=((struct list_item$1CVALUEph*)come_null_check(litem_63, "./comelang2.h", 296))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_63, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj55) { come_call_finalizer(CVALUE_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_63;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_63;
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
_Bool _if_conditional145;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional145=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional145) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value101;
char* __dec_obj56;
void* right_value102;
struct sNode* __dec_obj57;
void* right_value103;
struct sNode* __dec_obj58;
void* right_value104;
char* __dec_obj59;
struct sStoreFieldNode* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 201))->sline=((struct sInfo*)come_null_check(info, "18field.c", 201))->sline;
    __freed_obj__ = 0;
    __dec_obj56=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 202))->sname))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj57=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj58=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj59=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(name))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
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

char* sStoreFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value105;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_64;
struct sNode* right_65;
void* right_value106;
char* name_66;
_Bool _if_conditional151;
_Bool __result57__;
void* right_value107;
struct CVALUE* left_value_67;
_Bool _if_conditional152;
_Bool __result58__;
void* right_value108;
struct CVALUE* right_value_68;
struct sType* right_type_69;
struct sType* left_type_70;
void* right_value109;
struct sType* left_type2_71;
struct sClass* klass_72;
void* right_value119;
struct sType* field_type_77;
int index_78;
char* child_field_name_79;
void* right_value120;
_Bool _if_conditional158;
_Bool __result66__;
struct list$1tuple2$2charphsTypephph* o2_saved_80;
struct tuple2$2charphsTypeph* field_83;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_86;
struct sType* field_type2_87;
_Bool _if_conditional163;
void* right_value121;
struct sType* __dec_obj60;
_Bool _if_conditional167;
struct list$1tuple2$2charphsTypephph* o2_saved_90;
struct tuple2$2charphsTypeph* field_91;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_92;
struct sType* field_type2_93;
struct sClass* klass2_94;
struct list$1tuple2$2charphsTypephph* o2_saved_95;
struct tuple2$2charphsTypeph* field2_96;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_97;
struct sType* field_type3_98;
_Bool _if_conditional168;
void* right_value122;
char* __dec_obj61;
void* right_value123;
struct sType* __dec_obj62;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value124;
struct sType* __dec_obj63;
_Bool _if_conditional171;
_Bool __result75__;
void* right_value125;
struct CVALUE* come_value_99;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool __result76__;
void* right_value126;
void* right_value127;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value128;
char* c_value_100;
_Bool _if_conditional178;
_Bool _if_conditional179;
char* __dec_obj64;
_Bool _if_conditional180;
void* right_value129;
char* __dec_obj65;
_Bool _if_conditional181;
void* right_value130;
char* __dec_obj66;
void* right_value131;
char* __dec_obj67;
_Bool _if_conditional182;
void* right_value132;
char* __dec_obj68;
void* right_value133;
char* __dec_obj69;
void* right_value134;
char* c_value_101;
_Bool _if_conditional183;
_Bool _if_conditional184;
char* __dec_obj70;
_Bool _if_conditional185;
void* right_value135;
char* __dec_obj71;
_Bool _if_conditional186;
void* right_value136;
char* __dec_obj72;
void* right_value137;
char* __dec_obj73;
_Bool _if_conditional187;
void* right_value138;
char* __dec_obj74;
void* right_value139;
char* __dec_obj75;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value140;
char* c_value_102;
_Bool _if_conditional190;
_Bool _if_conditional191;
char* __dec_obj76;
_Bool _if_conditional192;
void* right_value141;
char* __dec_obj77;
_Bool _if_conditional193;
void* right_value142;
char* __dec_obj78;
void* right_value143;
char* __dec_obj79;
_Bool _if_conditional194;
void* right_value144;
char* __dec_obj80;
void* right_value145;
char* __dec_obj81;
void* right_value146;
char* c_value_103;
void* right_value147;
char* __dec_obj82;
void* right_value148;
char* __dec_obj83;
_Bool __result77__;
int right_value_id_104;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value149;
char* c_value_105;
void* right_value150;
char* __dec_obj84;
void* right_value151;
char* c_value_106;
void* right_value152;
char* __dec_obj85;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value153;
char* c_value_107;
void* right_value154;
char* __dec_obj86;
void* right_value155;
char* c_value_108;
void* right_value156;
char* __dec_obj87;
_Bool __result78__;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value157;
char* __dec_obj88;
void* right_value158;
char* __dec_obj89;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value159;
char* __dec_obj90;
void* right_value160;
char* __dec_obj91;
_Bool __result79__;
void* right_value161;
struct sType* __dec_obj92;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_64, 0, sizeof(struct sNode*));
memset(&right_65, 0, sizeof(struct sNode*));
memset(&right_value106, 0, sizeof(void*));
memset(&name_66, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_67, 0, sizeof(struct CVALUE*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_68, 0, sizeof(struct CVALUE*));
memset(&right_type_69, 0, sizeof(struct sType*));
memset(&left_type_70, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&left_type2_71, 0, sizeof(struct sType*));
memset(&klass_72, 0, sizeof(struct sClass*));
memset(&right_value119, 0, sizeof(void*));
memset(&field_type_77, 0, sizeof(struct sType*));
memset(&index_78, 0, sizeof(int));
memset(&child_field_name_79, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&o2_saved_80, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_83, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_86, 0, sizeof(char*));
memset(&field_type2_87, 0, sizeof(struct sType*));
memset(&field_name_86, 0, sizeof(char*));
memset(&field_type2_87, 0, sizeof(struct sType*));
memset(&right_value121, 0, sizeof(void*));
memset(&o2_saved_90, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_91, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_92, 0, sizeof(char*));
memset(&field_type2_93, 0, sizeof(struct sType*));
memset(&field_name_92, 0, sizeof(char*));
memset(&field_type2_93, 0, sizeof(struct sType*));
memset(&klass2_94, 0, sizeof(struct sClass*));
memset(&o2_saved_95, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_96, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_97, 0, sizeof(char*));
memset(&field_type3_98, 0, sizeof(struct sType*));
memset(&field_name2_97, 0, sizeof(char*));
memset(&field_type3_98, 0, sizeof(struct sType*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&come_value_99, 0, sizeof(struct CVALUE*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&c_value_101, 0, sizeof(char*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&c_value_102, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_id_104, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&c_value_106, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&c_value_107, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_108, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    left_64=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 223))->mLeft;
    __freed_obj__ = 0;
    right_65=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 224))->mRight;
    __freed_obj__ = 0;
    name_66=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 225))->mName))));
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional151=!((struct sNode*)come_null_check(left_64, "18field.c", 231))->compile(((struct sNode*)come_null_check(left_64, "18field.c", 231))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result57__ = (_Bool)0;
        if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional152=!((struct sNode*)come_null_check(right_65, "18field.c", 238))->compile(((struct sNode*)come_null_check(right_65, "18field.c", 238))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result58__ = (_Bool)0;
        if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_69=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 241))->type;
    __freed_obj__ = 0;
    left_type_70=((struct CVALUE*)come_null_check(left_value_67, "18field.c", 243))->type;
    __freed_obj__ = 0;
    left_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=solve_generics(left_type_70,left_type_70,info))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_72=((struct sType*)come_null_check(left_type2_71, "18field.c", 247))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_72=optional$2sClasspbool_value((come_push_stackframe("18field.c", 248),((struct optional$2sClasspbool*)(right_value119=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 248))->classes,((struct sClass*)come_null_check(klass_72, "18field.c", 248))->mName)))));
    come_pop_stackframe();
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_77=((void*)0);
    __freed_obj__ = 0;
    index_78=0;
    __freed_obj__ = 0;
    child_field_name_79=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_72=optional$2sClasspbool_value((come_push_stackframe("18field.c", 253),((struct optional$2sClasspbool*)(right_value120=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 253))->classes,((struct sClass*)come_null_check(klass_72, "18field.c", 253))->mName)))));
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional158=((struct sClass*)come_null_check(klass_72, "18field.c", 260))->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional158) {
        err_msg(info,"%s fields are null",((struct sClass*)come_null_check(klass_72, "18field.c", 256))->mName);
        __freed_obj__ = 0;
        __result66__ = (_Bool)0;
        if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    o2_saved_80=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_72, "18field.c", 271))->mFields)),field_83=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_80), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_80), "18field.c", 271))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    field_83=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_80), "18field.c", 271))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_83;
        field_name_86=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_87=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional163=string_operator_equals(field_name_86,name_66),        __freed_obj__ = 0, 
        _if_conditional163) {
            __dec_obj60=field_type_77;
            field_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(field_type2_87))));
            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_86 && !__freed_obj__) { field_name_86 = come_decrement_ref_count(field_name_86, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_78++;
        __freed_obj__ = 0;
        if(field_name_86 && !__freed_obj__) { field_name_86 = come_decrement_ref_count(field_name_86, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_80 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional167=index_78==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_72, "18field.c", 306))->mFields, "18field.c", 306))),    __freed_obj__ = 0, 
    _if_conditional167) {
        index_78=0;
        __freed_obj__ = 0;
        for(
        o2_saved_90=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_72, "18field.c", 300))->mFields)),field_91=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_90), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_90), "18field.c", 300))) ,        __freed_obj__ = 0, 
        _for_condtionalA4;        field_91=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_90), "18field.c", 300))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_91;
            field_name_92=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_93=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_94=((struct sType*)come_null_check(field_type2_93, "18field.c", 276))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_95=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_94, "18field.c", 288))->mFields)),field2_96=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_95), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_95), "18field.c", 288))) ,            __freed_obj__ = 0, 
            _for_condtionalA5;            field2_96=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_95), "18field.c", 288))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_96;
                field_name2_97=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_98=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional168=string_operator_equals(field_name2_97,name_66),                __freed_obj__ = 0, 
                _if_conditional168) {
                    __dec_obj61=child_field_name_79;
                    child_field_name_79=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(field_name_92))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj62=field_type_77;
                    field_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(field_type3_98))));
                    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_97 && !__freed_obj__) { field_name2_97 = come_decrement_ref_count(field_name2_97, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_97 && !__freed_obj__) { field_name2_97 = come_decrement_ref_count(field_name2_97, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_98, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_95 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_95, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional169=child_field_name_79,            __freed_obj__ = 0, 
            _if_conditional169) {
                if(field_name_92 && !__freed_obj__) { field_name_92 = come_decrement_ref_count(field_name_92, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional170=string_operator_equals(field_name_92,name_66),            __freed_obj__ = 0, 
            _if_conditional170) {
                __dec_obj63=field_type_77;
                field_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(field_type2_93))));
                if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_92 && !__freed_obj__) { field_name_92 = come_decrement_ref_count(field_name_92, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_78++;
            __freed_obj__ = 0;
            if(field_name_92 && !__freed_obj__) { field_name_92 = come_decrement_ref_count(field_name_92, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_93, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_90 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_90, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional171=index_78==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_72, "18field.c", 304))->mFields, "18field.c", 304))),        __freed_obj__ = 0, 
        _if_conditional171) {
            err_msg(info,"field not found(%s) in %s(1)",name_66,((struct sClass*)come_null_check(klass_72, "18field.c", 301))->mName);
            __freed_obj__ = 0;
            __result75__ = (_Bool)0;
            if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result75__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 306))));
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional172=((struct sType*)come_null_check(field_type_77, "18field.c", 320))->mHeap&&!((struct sType*)come_null_check(right_type_69, "18field.c", 320))->mHeap,    __freed_obj__ = 0, 
    _if_conditional172) {
        if(_if_conditional173=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_69, "18field.c", 318))->mClass, "18field.c", 318))->mName,"void")&&((struct sType*)come_null_check(right_type_69, "18field.c", 318))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional173) {
        }
        else {
            if(_if_conditional174=!((struct sType*)come_null_check(right_type_69, "18field.c", 317))->mDelegate&&!((struct sType*)come_null_check(right_type_69, "18field.c", 317))->mShare,            __freed_obj__ = 0, 
            _if_conditional174) {
                err_msg(info,"require right value as heap object(%s)",name_66);
                __freed_obj__ = 0;
                __result76__ = (_Bool)0;
                if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    check_assign_type(((char*)(right_value127=xsprintf("\%s is assigned to",((char*)(right_value126=string_to_string(name_66)))))),field_type_77,right_type_69,right_value_68,(_Bool)0,info);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional175=((struct sType*)come_null_check(field_type_77, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(right_type_69, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_77, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_69, "18field.c", 487))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional175) {
        if(_if_conditional176=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional176) {
            if(_if_conditional177=child_field_name_79,            __freed_obj__ = 0, 
            _if_conditional177) {
                c_value_100=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 325))->c_value,child_field_name_79,name_66))));
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_77,c_value_100,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional178=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 352))->var,                __freed_obj__ = 0, 
                _if_conditional178) {
                    if(_if_conditional179=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        __dec_obj64=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 329))->var, "18field.c", 329))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 329))->var, "18field.c", 329))->mCValueName=((void*)0);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            __dec_obj65=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 332))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 332))->c_value=(char*)come_increment_ref_count(((char*)(right_value129=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 332))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 332))->c_value,info))));
                            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 344))->var, "18field.c", 344))->mType, "18field.c", 344))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional181) {
                                __dec_obj66=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 335))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 335))->c_value=(char*)come_increment_ref_count(((char*)(right_value130=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 335))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 335))->c_value,info))));
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj67=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 338))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 338))->c_value=(char*)come_increment_ref_count(((char*)(right_value131=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 338))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 338))->c_value,info))));
                                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional182=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 351))->type, "18field.c", 351))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                    }
                    else {
                        __dec_obj68=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 349))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 349))->c_value=(char*)come_increment_ref_count(((char*)(right_value132=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 349))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 349))->c_value,info))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj69=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 352))->c_value;
                ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 352))->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 352))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 352))->c_value))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_101=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 355))->c_value,name_66))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_77,c_value_101,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional183=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 382))->var,                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 359))->var, "18field.c", 359))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 359))->var, "18field.c", 359))->mCValueName=((void*)0);
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional185) {
                            __dec_obj71=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 362))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 362))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 362))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 362))->c_value,info))));
                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 374))->var, "18field.c", 374))->mType, "18field.c", 374))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                __dec_obj72=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 365))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 365))->c_value=(char*)come_increment_ref_count(((char*)(right_value136=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 365))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 365))->c_value,info))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj73=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 368))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 368))->c_value=(char*)come_increment_ref_count(((char*)(right_value137=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 368))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 368))->c_value,info))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional187=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 381))->type, "18field.c", 381))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional187) {
                    }
                    else {
                        __dec_obj74=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 379))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 379))->c_value=(char*)come_increment_ref_count(((char*)(right_value138=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 379))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 379))->c_value,info))));
                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj75=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 382))->c_value;
                ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 382))->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 382))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 382))->c_value))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(c_value_101 && !__freed_obj__) { c_value_101 = come_decrement_ref_count(c_value_101, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional188=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 427))->type, "18field.c", 427))->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional188) {
                if(_if_conditional189=child_field_name_79,                __freed_obj__ = 0, 
                _if_conditional189) {
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 387))->c_value,child_field_name_79,name_66))));
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_77,c_value_102,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional190=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 414))->var,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        if(_if_conditional191=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                            __dec_obj76=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 391))->var, "18field.c", 391))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 391))->var, "18field.c", 391))->mCValueName=((void*)0);
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional192=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 394))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 394))->c_value=(char*)come_increment_ref_count(((char*)(right_value141=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 394))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 394))->c_value,info))));
                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional193=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 406))->var, "18field.c", 406))->mType, "18field.c", 406))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional193) {
                                    __dec_obj78=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 397))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 397))->c_value=(char*)come_increment_ref_count(((char*)(right_value142=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 397))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 397))->c_value,info))));
                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj79=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 400))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 400))->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 400))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 400))->c_value,info))));
                                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional194=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 413))->type, "18field.c", 413))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                        }
                        else {
                            __dec_obj80=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 411))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 411))->c_value=(char*)come_increment_ref_count(((char*)(right_value144=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 411))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 411))->c_value,info))));
                            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj81=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 414))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 414))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 414))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 414))->c_value))));
                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_103=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 417))->c_value,name_66))));
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_77,c_value_103,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj82=((struct CVALUE*)come_null_check(right_value_68, "18field.c", 419))->c_value;
                    ((struct CVALUE*)come_null_check(right_value_68, "18field.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 419))->type,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 419))->c_value,info))));
                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj83=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 420))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 420))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 420))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 420))->c_value))));
                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 424))->type, "18field.c", 424))->mPointerNum);
                __freed_obj__ = 0;
                __result77__ = (_Bool)0;
                if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        right_value_id_104=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_68, "18field.c", 427))->c_value));
        __freed_obj__ = 0;
        if(_if_conditional195=right_value_id_104!=-1,        __freed_obj__ = 0, 
        _if_conditional195) {
            remove_object_from_right_values(right_value_id_104,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional196=((struct sType*)come_null_check(field_type_77, "18field.c", 487))->mHeap&&((struct sType*)come_null_check(field_type_77, "18field.c", 487))->mPointerNum>0&&((struct sType*)come_null_check(right_type_69, "18field.c", 487))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_69, "18field.c", 487))->mClass, "18field.c", 487))->mName,"void"),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(_if_conditional197=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                if(_if_conditional198=child_field_name_79,                __freed_obj__ = 0, 
                _if_conditional198) {
                    c_value_105=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 437))->c_value,child_field_name_79,name_66))));
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_77,c_value_105,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj84=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 439))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 439))->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 439))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 439))->c_value))));
                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_106=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 442))->c_value,name_66))));
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_77,c_value_106,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj85=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 444))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 444))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 444))->c_value))));
                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(c_value_106 && !__freed_obj__) { c_value_106 = come_decrement_ref_count(c_value_106, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional199=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 463))->type, "18field.c", 463))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    if(_if_conditional200=child_field_name_79,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        c_value_107=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 449))->c_value,child_field_name_79,name_66))));
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_77,c_value_107,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj86=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 451))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 451))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 451))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 451))->c_value))));
                        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_107 && !__freed_obj__) { c_value_107 = come_decrement_ref_count(c_value_107, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_108=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 454))->c_value,name_66))));
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_77,c_value_108,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj87=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 456))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 456))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 456))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 456))->c_value))));
                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(c_value_108 && !__freed_obj__) { c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 460))->type, "18field.c", 460))->mPointerNum);
                    __freed_obj__ = 0;
                    __result78__ = (_Bool)0;
                    if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result78__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional201=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional201) {
                if(_if_conditional202=child_field_name_79,                __freed_obj__ = 0, 
                _if_conditional202) {
                    __dec_obj88=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 467))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 467))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 467))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 467))->c_value))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj89=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 470))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 470))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 470))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 470))->c_value))));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional203=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 485))->type, "18field.c", 485))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional203) {
                    if(_if_conditional204=child_field_name_79,                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        __dec_obj90=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 475))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 475))->c_value,child_field_name_79,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 475))->c_value))));
                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj91=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 478))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 478))->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_67, "18field.c", 478))->c_value,name_66,((struct CVALUE*)come_null_check(right_value_68, "18field.c", 478))->c_value))));
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_67, "18field.c", 482))->type, "18field.c", 482))->mPointerNum);
                    __freed_obj__ = 0;
                    __result79__ = (_Bool)0;
                    if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj92=((struct CVALUE*)come_null_check(come_value_99, "18field.c", 487))->type;
    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 487))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(field_type_77))));
    if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_99, "18field.c", 488))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 490))->stack, "18field.c", 490)),(struct CVALUE*)come_increment_ref_count(come_value_99));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_99, "18field.c", 492))->c_value);
    __freed_obj__ = 0;
    __result80__ = (_Bool)1;
    if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(name_66 && !__freed_obj__) { name_66 = come_decrement_ref_count(name_66, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_79 && !__freed_obj__) { child_field_name_79 = come_decrement_ref_count(child_field_name_79, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* default_value_73;
unsigned int hash_74;
unsigned int it_75;
_Bool _while_condtional10;
_Bool _if_conditional153;
void* right_value110;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional154;
void* right_value111;
void* right_value112;
struct optional$2sClasspbool* __result60__;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value113;
void* right_value114;
struct optional$2sClasspbool* __result61__;
void* right_value115;
void* right_value116;
struct optional$2sClasspbool* __result62__;
void* right_value117;
void* right_value118;
struct optional$2sClasspbool* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(struct sClass*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_73,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_74=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
        __freed_obj__ = 0;
        it_75=hash_74;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional153=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_75],            __freed_obj__ = 0, 
            _if_conditional153) {
                if(_if_conditional154=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value110=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_75], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional154) {
                    __result60__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value112=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value111=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_75],(_Bool)1)));
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result60__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_75++;
                __freed_obj__ = 0;
                if(_if_conditional155=it_75>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                __freed_obj__ = 0, 
                _if_conditional155) {
                    it_75=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional156=it_75==hash_74,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        __result61__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value114=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value113=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_73,(_Bool)0))));
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result62__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value116=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value115=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_73,(_Bool)0))));
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result62__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result63__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value118=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value117=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_73,(_Bool)0))));
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sClasspbool* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result59__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result59__;
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
_Bool _if_conditional157;
struct sClass* default_value_76;
struct sClass* __result64__;
struct sClass* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_76, 0, sizeof(struct sClass*));
        if(_if_conditional157=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            __freed_obj__ = 0;
            memset(&default_value_76,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = default_value_76;
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
        }
        else {
            __result65__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional159;
struct tuple2$2charphsTypeph* result_81;
struct tuple2$2charphsTypeph* __result67__;
_Bool _if_conditional160;
struct tuple2$2charphsTypeph* __result68__;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional159=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional159) {
            __freed_obj__ = 0;
            memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result67__ = __result_obj__ = result_81;
            __freed_obj__ = 0;
            return __result67__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional160=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional160) {
            __result68__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result68__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result69__ = __result_obj__ = result_82;
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result70__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* result_84;
struct tuple2$2charphsTypeph* __result71__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result72__;
struct tuple2$2charphsTypeph* result_85;
struct tuple2$2charphsTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_84, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_85, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional161) {
            __freed_obj__ = 0;
            memset(&result_84,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result71__ = __result_obj__ = result_84;
            __freed_obj__ = 0;
            return __result71__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional162=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional162) {
            __result72__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result72__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_85,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result73__ = __result_obj__ = result_85;
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_88;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_89;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_89, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_88=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_88!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_89=it_88;
            __freed_obj__ = 0;
            it_88=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_88, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_89 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional164=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional165=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional165) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional166=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result74__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result74__;
        __freed_obj__ = 0;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 499))->sline;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value162;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(right_value162=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 504))->sname)));
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value163;
char* __dec_obj93;
void* right_value164;
struct sNode* __dec_obj94;
struct sNullCheckNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 519))->sline=((struct sInfo*)come_null_check(info, "18field.c", 519))->sline;
    __freed_obj__ = 0;
    __dec_obj93=((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 520))->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj94=((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 523))->mOnlyNullCecker=only_null_checker;
    __freed_obj__ = 0;
    __result83__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value165;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result85__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sNullCheckNode")));
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_109;
_Bool _if_conditional207;
_Bool __result86__;
void* right_value166;
struct CVALUE* left_value_110;
_Bool _if_conditional208;
void* right_value167;
char* method_name_111;
void* right_value169;
_Bool _if_conditional213;
struct sType* obj_type_114;
_Bool _if_conditional229;
struct sType* obj_type2_115;
void* right_value170;
void* right_value171;
char* __dec_obj95;
void* right_value172;
struct sFun* fun_116;
_Bool _if_conditional230;
_Bool __result91__;
void* right_value173;
struct sType* type_117;
void* right_value174;
struct CVALUE* come_value_118;
void* right_value175;
char* __dec_obj96;
void* right_value176;
struct sType* __dec_obj97;
_Bool _if_conditional231;
void* right_value177;
struct CVALUE* come_value_119;
void* right_value178;
void* right_value179;
char* __dec_obj98;
void* right_value180;
struct sType* __dec_obj99;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_109, 0, sizeof(struct sNode*));
memset(&right_value166, 0, sizeof(void*));
memset(&left_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&method_name_111, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&obj_type_114, 0, sizeof(struct sType*));
memset(&obj_type2_115, 0, sizeof(struct sType*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&fun_116, 0, sizeof(struct sFun*));
memset(&right_value173, 0, sizeof(void*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&come_value_119, 0, sizeof(struct CVALUE*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
    left_109=((struct sNullCheckNode*)come_null_check(self, "18field.c", 540))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional207=!((struct sNode*)come_null_check(left_109, "18field.c", 546))->compile(((struct sNode*)come_null_check(left_109, "18field.c", 546))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional207) {
        __result86__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional208=!((struct sNullCheckNode*)come_null_check(self, "18field.c", 598))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 598))->type, "18field.c", 598))->mNoSolvedGenericsType, "18field.c", 598))->v1, "18field.c", 598))->mClass, "18field.c", 598))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional208) {
        method_name_111=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 550))->type,(_Bool)0,"expect",info))));
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional213=((struct sFun*)(right_value169=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs, "18field.c", 564)),method_name_111,((void*)0))))==((void*)0),        (right_value169 && right_value169 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional213) {
            obj_type_114=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 553))->type, "18field.c", 553))->mNoSolvedGenericsType, "18field.c", 553))->v1;
            __freed_obj__ = 0;
            if(_if_conditional229=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_114, "18field.c", 562))->mGenericsTypes, "18field.c", 562)))>0,            __freed_obj__ = 0, 
            _if_conditional229) {
                obj_type2_115=((struct CVALUE*)come_null_check(left_value_110, "18field.c", 555))->type;
                __freed_obj__ = 0;
                __dec_obj95=method_name_111;
                method_name_111=(char*)come_increment_ref_count(((char*)(right_value171=make_generics_function(obj_type2_115,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("expect")))),info))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 559))->type, "18field.c", 559))->mClass, "18field.c", 559))->mName);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        fun_116=optional$2sFunpbool_value((come_push_stackframe("18field.c", 564),((struct optional$2sFunpbool*)(right_value172=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs,method_name_111)))));
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional230=fun_116==((void*)0),        __freed_obj__ = 0, 
        _if_conditional230) {
            err_msg(info,"function not found(%s)",method_name_111);
            __freed_obj__ = 0;
            __result91__ = (_Bool)1;
            if(method_name_111 && !__freed_obj__) { method_name_111 = come_decrement_ref_count(method_name_111, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result91__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=solve_generics(((struct sFun*)come_null_check(fun_116, "18field.c", 571))->mResultType,((struct CVALUE*)come_null_check(left_value_110, "18field.c", 571))->type,info))));
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573))));
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 575))->c_value;
        ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 575))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s(%s)",method_name_111,((struct CVALUE*)come_null_check(left_value_110, "18field.c", 575))->c_value))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj97=((struct CVALUE*)come_null_check(come_value_118, "18field.c", 576))->type;
        ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 576))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type_117))));
        if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_118, "18field.c", 577))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 579))->stack, "18field.c", 579)),(struct CVALUE*)come_increment_ref_count(come_value_118));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_118, "18field.c", 581))->c_value);
        __freed_obj__ = 0;
        if(method_name_111 && !__freed_obj__) { method_name_111 = come_decrement_ref_count(method_name_111, (void*)0, (void*)0, 0, 0, 0); }
        if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional231=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 598))->type, "18field.c", 598))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional231) {
            come_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 584))));
            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj98=((struct CVALUE*)come_null_check(come_value_119, "18field.c", 586))->c_value;
            ((struct CVALUE*)come_null_check(come_value_119, "18field.c", 586))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect((come_push_stackframe("18field.c", 586),((struct optional$2charphbool*)(right_value178=make_type_name_string(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 586))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct CVALUE*)come_null_check(left_value_110, "18field.c", 586))->c_value,((struct sInfo*)come_null_check(info, "18field.c", 586))->sname,((struct sInfo*)come_null_check(info, "18field.c", 586))->sline))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj99=((struct CVALUE*)come_null_check(come_value_119, "18field.c", 587))->type;
            ((struct CVALUE*)come_null_check(come_value_119, "18field.c", 587))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(((struct CVALUE*)come_null_check(left_value_110, "18field.c", 587))->type))));
            if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_119, "18field.c", 588))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 590))->stack, "18field.c", 590)),(struct CVALUE*)come_increment_ref_count(come_value_119));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_119, "18field.c", 592))->c_value);
            __freed_obj__ = 0;
            if(come_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 595))->stack, "18field.c", 595)),(struct CVALUE*)come_increment_ref_count(left_value_110));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result93__ = (_Bool)1;
    if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
    if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_112;
unsigned int it_113;
_Bool _while_condtional12;
_Bool _if_conditional209;
void* right_value168;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional210;
struct sFun* __result87__;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sFun* __result88__;
struct sFun* __result89__;
struct sFun* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_112, 0, sizeof(unsigned int));
memset(&it_113, 0, sizeof(unsigned int));
memset(&right_value168, 0, sizeof(void*));
            hash_112=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_113=hash_112;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional209=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_113],                __freed_obj__ = 0, 
                _if_conditional209) {
                    if(_if_conditional210=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a5=((struct optional$2boolbool*)(right_value168=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_113], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a5)),                    (right_value168 && right_value168 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result87__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_113];
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_113++;
                    __freed_obj__ = 0;
                    if(_if_conditional211=it_113>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        it_113=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional212=it_113==hash_112,                        __freed_obj__ = 0, 
                        _if_conditional212) {
                            __result88__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result88__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result89__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result90__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional221=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional221) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional222=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional232;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional232=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional232) {
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
                __result92__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result92__;
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional233=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional233) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = ((struct sNullCheckNode*)come_null_check(self, "18field.c", 603))->sline;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value181;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value181=__builtin_string(((struct sNullCheckNode*)come_null_check(self, "18field.c", 608))->sname)));
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value182;
char* __dec_obj100;
void* right_value183;
struct sNode* __dec_obj101;
struct sExceptionGetValueNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 621))->sline=((struct sInfo*)come_null_check(info, "18field.c", 621))->sline;
    __freed_obj__ = 0;
    __dec_obj100=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 622))->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 622))->sname))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj101=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(left))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result96__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value184;
struct CVALUE* left_value_120;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value185;
char* method_name_121;
void* right_value186;
_Bool _if_conditional238;
struct sType* obj_type_122;
_Bool _if_conditional239;
struct sType* obj_type2_123;
void* right_value187;
void* right_value188;
char* __dec_obj102;
void* right_value189;
struct sFun* fun_124;
_Bool _if_conditional240;
_Bool __result98__;
void* right_value190;
struct sType* type_125;
void* right_value191;
struct CVALUE* come_value_126;
void* right_value192;
char* __dec_obj103;
void* right_value193;
struct sType* __dec_obj104;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&left_value_120, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&method_name_121, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_122, 0, sizeof(struct sType*));
memset(&obj_type2_123, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&fun_124, 0, sizeof(struct sFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&type_125, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_126, 0, sizeof(struct CVALUE*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    left_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional236=left_value_120==((void*)0),    __freed_obj__ = 0, 
    _if_conditional236) {
    }
    else {
        if(_if_conditional237=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 681))->type, "18field.c", 681))->mNoSolvedGenericsType, "18field.c", 681))->v1, "18field.c", 681))->mClass, "18field.c", 681))->mName,"optional"),        __freed_obj__ = 0, 
        _if_conditional237) {
            method_name_121=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 642))->type,(_Bool)0,"expect",info))));
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional238=((struct sFun*)(right_value186=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs, "18field.c", 656)),method_name_121,((void*)0))))==((void*)0),            (right_value186 && right_value186 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional238) {
                obj_type_122=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 645))->type, "18field.c", 645))->mNoSolvedGenericsType, "18field.c", 645))->v1;
                __freed_obj__ = 0;
                if(_if_conditional239=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_122, "18field.c", 654))->mGenericsTypes, "18field.c", 654)))>0,                __freed_obj__ = 0, 
                _if_conditional239) {
                    obj_type2_123=((struct CVALUE*)come_null_check(left_value_120, "18field.c", 647))->type;
                    __freed_obj__ = 0;
                    __dec_obj102=method_name_121;
                    method_name_121=(char*)come_increment_ref_count(((char*)(right_value188=make_generics_function(obj_type2_123,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("value")))),info))));
                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_120, "18field.c", 651))->type, "18field.c", 651))->mClass, "18field.c", 651))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_124=optional$2sFunpbool_value((come_push_stackframe("18field.c", 656),((struct optional$2sFunpbool*)(right_value189=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 656))->funcs,method_name_121)))));
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional240=fun_124==((void*)0),            __freed_obj__ = 0, 
            _if_conditional240) {
                err_msg(info,"function not found(%s)",method_name_121);
                __freed_obj__ = 0;
                __result98__ = (_Bool)1;
                if(method_name_121 && !__freed_obj__) { method_name_121 = come_decrement_ref_count(method_name_121, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result98__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(((struct sFun*)come_null_check(fun_124, "18field.c", 663))->mResultType,((struct CVALUE*)come_null_check(left_value_120, "18field.c", 663))->type,info))));
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 665))));
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj103=((struct CVALUE*)come_null_check(come_value_126, "18field.c", 667))->c_value;
            ((struct CVALUE*)come_null_check(come_value_126, "18field.c", 667))->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s(%s)",method_name_121,((struct CVALUE*)come_null_check(left_value_120, "18field.c", 667))->c_value))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj104=((struct CVALUE*)come_null_check(come_value_126, "18field.c", 668))->type;
            ((struct CVALUE*)come_null_check(come_value_126, "18field.c", 668))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(type_125))));
            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_126, "18field.c", 669))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 671))->stack, "18field.c", 671)),(struct CVALUE*)come_increment_ref_count(come_value_126));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_126, "18field.c", 673))->c_value);
            __freed_obj__ = 0;
            if(method_name_121 && !__freed_obj__) { method_name_121 = come_decrement_ref_count(method_name_121, (void*)0, (void*)0, 0, 0, 0); }
            if(type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 676))->stack, "18field.c", 676)),(struct CVALUE*)come_increment_ref_count(left_value_120));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(left_value_120, "18field.c", 678))->c_value);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result99__ = (_Bool)1;
    if(left_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(left_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value194;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
    __result100__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_127;
_Bool _if_conditional241;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_127, 0, sizeof(struct sNode*));
    left_127=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 691))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional241=!((struct sNode*)come_null_check(left_127, "18field.c", 697))->compile(((struct sNode*)come_null_check(left_127, "18field.c", 697))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result101__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result102__ = compiletime_get_exception_value(info);
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 702))->sline;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value195;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value195=__builtin_string(((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 707))->sname)));
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value196;
void* right_value197;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value203;
struct sNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 712);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value197=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value196=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 712)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result107__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value204;
char* __dec_obj109;
void* right_value205;
struct sNode* __dec_obj110;
void* right_value206;
char* __dec_obj111;
struct sLoadFieldNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 726))->sline=((struct sInfo*)come_null_check(info, "18field.c", 726))->sline;
    __freed_obj__ = 0;
    __dec_obj109=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 727))->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 727))->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj110=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj111=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->mName=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(name))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value207;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_129;
void* right_value208;
char* name_130;
_Bool _if_conditional255;
_Bool __result111__;
void* right_value209;
struct CVALUE* left_value_131;
struct sType* left_type_132;
void* right_value210;
struct sType* left_type2_133;
struct sClass* klass_134;
void* right_value211;
struct sType* field_type_135;
int index_136;
char* child_field_name_137;
void* right_value212;
struct list$1tuple2$2charphsTypephph* o2_saved_138;
struct tuple2$2charphsTypeph* field_139;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_140;
struct sType* field_type2_141;
_Bool _if_conditional256;
void* right_value213;
struct sType* __dec_obj112;
_Bool _if_conditional257;
struct list$1tuple2$2charphsTypephph* o2_saved_142;
struct tuple2$2charphsTypeph* field_143;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_144;
struct sType* field_type2_145;
struct sClass* klass2_146;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* field2_148;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_149;
struct sType* field_type3_150;
_Bool _if_conditional258;
void* right_value214;
char* __dec_obj113;
void* right_value215;
struct sType* __dec_obj114;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value216;
struct sType* __dec_obj115;
_Bool _if_conditional261;
_Bool __result112__;
void* right_value217;
struct CVALUE* come_value_151;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value218;
char* __dec_obj116;
void* right_value219;
char* __dec_obj117;
_Bool _if_conditional264;
void* right_value220;
char* __dec_obj118;
void* right_value221;
char* __dec_obj119;
void* right_value222;
struct sType* __dec_obj120;
_Bool _if_conditional265;
void* right_value223;
struct sType* __dec_obj121;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_129, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&name_130, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&left_value_131, 0, sizeof(struct CVALUE*));
memset(&left_type_132, 0, sizeof(struct sType*));
memset(&right_value210, 0, sizeof(void*));
memset(&left_type2_133, 0, sizeof(struct sType*));
memset(&klass_134, 0, sizeof(struct sClass*));
memset(&right_value211, 0, sizeof(void*));
memset(&field_type_135, 0, sizeof(struct sType*));
memset(&index_136, 0, sizeof(int));
memset(&child_field_name_137, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&o2_saved_138, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_139, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_140, 0, sizeof(char*));
memset(&field_type2_141, 0, sizeof(struct sType*));
memset(&field_name_140, 0, sizeof(char*));
memset(&field_type2_141, 0, sizeof(struct sType*));
memset(&right_value213, 0, sizeof(void*));
memset(&o2_saved_142, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_143, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_144, 0, sizeof(char*));
memset(&field_type2_145, 0, sizeof(struct sType*));
memset(&field_name_144, 0, sizeof(char*));
memset(&field_type2_145, 0, sizeof(struct sType*));
memset(&klass2_146, 0, sizeof(struct sClass*));
memset(&o2_saved_147, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_149, 0, sizeof(char*));
memset(&field_type3_150, 0, sizeof(struct sType*));
memset(&field_name2_149, 0, sizeof(char*));
memset(&field_type3_150, 0, sizeof(struct sType*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&come_value_151, 0, sizeof(struct CVALUE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
    left_129=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 747))->mLeft;
    __freed_obj__ = 0;
    name_130=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 748))->mName))));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional255=!((struct sNode*)come_null_check(left_129, "18field.c", 754))->compile(((struct sNode*)come_null_check(left_129, "18field.c", 754))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional255) {
        __result111__ = (_Bool)0;
        if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_132=((struct CVALUE*)come_null_check(left_value_131, "18field.c", 757))->type;
    __freed_obj__ = 0;
    left_type2_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(left_type_132,left_type_132,info))));
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_134=((struct sType*)come_null_check(left_type2_133, "18field.c", 761))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_134=optional$2sClasspbool_value((come_push_stackframe("18field.c", 762),((struct optional$2sClasspbool*)(right_value211=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 762))->classes,((struct sClass*)come_null_check(klass_134, "18field.c", 762))->mName)))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    field_type_135=((void*)0);
    __freed_obj__ = 0;
    index_136=0;
    __freed_obj__ = 0;
    child_field_name_137=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_134=optional$2sClasspbool_value((come_push_stackframe("18field.c", 767),((struct optional$2sClasspbool*)(right_value212=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 767))->classes,((struct sClass*)come_null_check(klass_134, "18field.c", 767))->mName)))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_138=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_134, "18field.c", 779))->mFields)),field_139=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_138), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_138), "18field.c", 779))) ,    __freed_obj__ = 0, 
    _for_condtionalA6;    field_139=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_138), "18field.c", 779))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_139;
        field_name_140=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_141=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional256=string_operator_equals(field_name_140,name_130),        __freed_obj__ = 0, 
        _if_conditional256) {
            __dec_obj112=field_type_135;
            field_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(field_type2_141))));
            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(field_name_140 && !__freed_obj__) { field_name_140 = come_decrement_ref_count(field_name_140, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_141, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_136++;
        __freed_obj__ = 0;
        if(field_name_140 && !__freed_obj__) { field_name_140 = come_decrement_ref_count(field_name_140, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_138 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional257=index_136==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_134, "18field.c", 814))->mFields, "18field.c", 814))),    __freed_obj__ = 0, 
    _if_conditional257) {
        index_136=0;
        __freed_obj__ = 0;
        for(
        o2_saved_142=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_134, "18field.c", 808))->mFields)),field_143=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_142), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_142), "18field.c", 808))) ,        __freed_obj__ = 0, 
        _for_condtionalA7;        field_143=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_142), "18field.c", 808))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_143;
            field_name_144=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_145=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_146=((struct sType*)come_null_check(field_type2_145, "18field.c", 784))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_146, "18field.c", 796))->mFields)),field2_148=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA8=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "18field.c", 796))) ,            __freed_obj__ = 0, 
            _for_condtionalA8;            field2_148=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_147), "18field.c", 796))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_148;
                field_name2_149=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_150=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional258=string_operator_equals(field_name2_149,name_130),                __freed_obj__ = 0, 
                _if_conditional258) {
                    __dec_obj113=child_field_name_137;
                    child_field_name_137=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(field_name_144))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj114=field_type_135;
                    field_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(field_type3_150))));
                    if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(field_name2_149 && !__freed_obj__) { field_name2_149 = come_decrement_ref_count(field_name2_149, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_149 && !__freed_obj__) { field_name2_149 = come_decrement_ref_count(field_name2_149, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_150, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_147 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional259=child_field_name_137,            __freed_obj__ = 0, 
            _if_conditional259) {
                if(field_name_144 && !__freed_obj__) { field_name_144 = come_decrement_ref_count(field_name_144, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_145 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional260=string_operator_equals(field_name_144,name_130),            __freed_obj__ = 0, 
            _if_conditional260) {
                __dec_obj115=field_type_135;
                field_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(field_type2_145))));
                if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(field_name_144 && !__freed_obj__) { field_name_144 = come_decrement_ref_count(field_name_144, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_145 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_136++;
            __freed_obj__ = 0;
            if(field_name_144 && !__freed_obj__) { field_name_144 = come_decrement_ref_count(field_name_144, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_145 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_142 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_142, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional261=index_136==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_134, "18field.c", 812))->mFields, "18field.c", 812))),        __freed_obj__ = 0, 
        _if_conditional261) {
            err_msg(info,"field not found(%s) in %s(2)",name_130,((struct sClass*)come_null_check(klass_134, "18field.c", 809))->mName);
            __freed_obj__ = 0;
            __result112__ = (_Bool)0;
            if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_137 && !__freed_obj__) { child_field_name_137 = come_decrement_ref_count(child_field_name_137, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 814))));
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional262=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_131, "18field.c", 832))->type, "18field.c", 832))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional262) {
        if(_if_conditional263=child_field_name_137,        __freed_obj__ = 0, 
        _if_conditional263) {
            __dec_obj116=((struct CVALUE*)come_null_check(come_value_151, "18field.c", 818))->c_value;
            ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 818))->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_131, "18field.c", 818))->c_value,child_field_name_137,name_130))));
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj117=((struct CVALUE*)come_null_check(come_value_151, "18field.c", 821))->c_value;
            ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 821))->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_131, "18field.c", 821))->c_value,name_130))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional264=child_field_name_137,        __freed_obj__ = 0, 
        _if_conditional264) {
            __dec_obj118=((struct CVALUE*)come_null_check(come_value_151, "18field.c", 826))->c_value;
            ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 826))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_131, "18field.c", 826))->c_value,child_field_name_137,name_130))));
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj119=((struct CVALUE*)come_null_check(come_value_151, "18field.c", 829))->c_value;
            ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 829))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_131, "18field.c", 829))->c_value,name_130))));
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj120=((struct CVALUE*)come_null_check(come_value_151, "18field.c", 832))->type;
    ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 832))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type_135))));
    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_151, "18field.c", 833))->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional265=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 843))->type, "18field.c", 843))->mArrayNum, "18field.c", 843)))==1,    __freed_obj__ = 0, 
    _if_conditional265) {
        __dec_obj121=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 836))->type, "18field.c", 836))->mOriginalLoadVarType, "18field.c", 836))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 836))->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 838))->type, "18field.c", 838))->mArrayNum, "18field.c", 838)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 839))->type, "18field.c", 839))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 840))->type, "18field.c", 840))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "18field.c", 840))->type, "18field.c", 840))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 843))->stack, "18field.c", 843)),(struct CVALUE*)come_increment_ref_count(come_value_151));
    __freed_obj__ = 0;
    __result115__ = (_Bool)1;
    if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_137 && !__freed_obj__) { child_field_name_137 = come_decrement_ref_count(child_field_name_137, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(name_130 && !__freed_obj__) { name_130 = come_decrement_ref_count(name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_137 && !__freed_obj__) { child_field_name_137 = come_decrement_ref_count(child_field_name_137, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result113__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_152;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_153;
struct list$1sNodeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_152, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1sNodeph*));
            it_152=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_152!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_153=it_152;
                __freed_obj__ = 0;
                it_152=((struct list_item$1sNodeph*)come_null_check(it_152, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_153 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 850))->sline;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value224;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value224, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(right_value224=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 855))->sname)));
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value225;
char* __dec_obj122;
void* right_value226;
struct sNode* __dec_obj123;
void* right_value227;
struct sNode* __dec_obj124;
void* right_value228;
struct list$1sNodeph* __dec_obj125;
struct sStoreArrayNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 871))->sline=((struct sInfo*)come_null_check(info, "18field.c", 871))->sline;
    __freed_obj__ = 0;
    __dec_obj122=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 872))->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 872))->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj123=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj124=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj125=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value228=list$1sNodephp_clone(array_num))));
    if(__dec_obj125) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->mQuote=quote;
    __freed_obj__ = 0;
    __result118__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value229;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_154;
struct sNode* right_155;
struct list$1sNodeph* array_num_nodes_156;
_Bool _if_conditional270;
_Bool __result121__;
void* right_value230;
struct CVALUE* left_value_157;
struct sType* left_type_158;
void* right_value231;
void* right_value232;
struct list$1CVALUEph* array_num_161;
struct list$1sNodeph* o2_saved_162;
struct sNode* it_165;
_Bool _for_condtionalA9;
_Bool _if_conditional275;
_Bool __result130__;
void* right_value233;
struct CVALUE* c_value_168;
_Bool _if_conditional276;
_Bool __result131__;
void* right_value234;
struct CVALUE* right_value_169;
struct sType* right_type_170;
struct sClass* klass_171;
void* right_value235;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
_Bool _if_conditional277;
void* right_value240;
_Bool _if_conditional282;
void* right_value241;
struct CVALUE* come_value_179;
_Bool _if_conditional283;
int i_180;
_Bool _for_condtionalA10;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value242;
void* right_value243;
struct buffer* buf_193;
struct list$1CVALUEph* o2_saved_194;
struct CVALUE* it_197;
_Bool _for_condtionalA11;
void* right_value244;
void* right_value245;
char* left_value_code_200;
void* right_value246;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
char* __dec_obj127;
_Bool _if_conditional312;
void* right_value247;
char* __dec_obj128;
_Bool _if_conditional313;
void* right_value248;
char* __dec_obj129;
void* right_value249;
char* __dec_obj130;
_Bool _if_conditional314;
void* right_value250;
char* __dec_obj131;
void* right_value251;
char* __dec_obj132;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
char* __dec_obj133;
_Bool _if_conditional318;
void* right_value252;
char* __dec_obj134;
_Bool _if_conditional319;
void* right_value253;
char* __dec_obj135;
void* right_value254;
char* __dec_obj136;
_Bool _if_conditional320;
void* right_value255;
char* __dec_obj137;
void* right_value256;
char* __dec_obj138;
_Bool __result147__;
int right_value_id_201;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value257;
char* __dec_obj139;
_Bool _if_conditional323;
void* right_value258;
char* __dec_obj140;
_Bool __result148__;
void* right_value259;
struct sType* result_type_202;
void* right_value260;
void* right_value261;
struct list$1sNodeph* __dec_obj141;
struct sType* __dec_obj142;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_154, 0, sizeof(struct sNode*));
memset(&right_155, 0, sizeof(struct sNode*));
memset(&array_num_nodes_156, 0, sizeof(struct list$1sNodeph*));
memset(&right_value230, 0, sizeof(void*));
memset(&left_value_157, 0, sizeof(struct CVALUE*));
memset(&left_type_158, 0, sizeof(struct sType*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&array_num_161, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_162, 0, sizeof(struct list$1sNodeph*));
memset(&it_165, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&c_value_168, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value_169, 0, sizeof(struct CVALUE*));
memset(&right_type_170, 0, sizeof(struct sType*));
memset(&klass_171, 0, sizeof(struct sClass*));
memset(&right_value235, 0, sizeof(void*));
memset(&type_172, 0, sizeof(struct sType*));
memset(&fun_name_173, 0, sizeof(char*));
memset(&calling_fun_174, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&come_value_179, 0, sizeof(struct CVALUE*));
memset(&i_180, 0, sizeof(int));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&buf_193, 0, sizeof(struct buffer*));
memset(&o2_saved_194, 0, sizeof(struct list$1CVALUEph*));
memset(&it_197, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&left_value_code_200, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value_id_201, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&result_type_202, 0, sizeof(struct sType*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    left_154=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 894))->mLeft;
    __freed_obj__ = 0;
    right_155=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 895))->mRight;
    __freed_obj__ = 0;
    array_num_nodes_156=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 896))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional270=!((struct sNode*)come_null_check(left_154, "18field.c", 902))->compile(((struct sNode*)come_null_check(left_154, "18field.c", 902))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional270) {
        __result121__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_158=((struct CVALUE*)come_null_check(left_value_157, "18field.c", 905))->type;
    __freed_obj__ = 0;
    array_num_161=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value232=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 907))))))));
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_162=(array_num_nodes_156),it_165=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_162), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_162), "18field.c", 920))) ,    __freed_obj__ = 0, 
    _for_condtionalA9;    it_165=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_162), "18field.c", 920))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional275=!((struct sNode*)come_null_check(it_165, "18field.c", 914))->compile(((struct sNode*)come_null_check(it_165, "18field.c", 914))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional275) {
            __result130__ = (_Bool)0;
            if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result130__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_161, "18field.c", 917)),(struct CVALUE*)come_increment_ref_count(c_value_168));
        __freed_obj__ = 0;
        if(c_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional276=!((struct sNode*)come_null_check(right_155, "18field.c", 924))->compile(((struct sNode*)come_null_check(right_155, "18field.c", 924))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional276) {
        __result131__ = (_Bool)0;
        if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result131__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_170=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 927))->type;
    __freed_obj__ = 0;
    klass_171=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 929))->type, "18field.c", 929))->mClass;
    __freed_obj__ = 0;
    type_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 931))->type))));
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_173="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional277=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 942))->mQuote,    __freed_obj__ = 0, 
    _if_conditional277) {
        calling_fun_174=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_174=operator_overload_fun2(type_172,fun_name_173,left_value_157,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 939),((struct optional$2CVALUEphbool*)(right_value240=list$1CVALUEphp_operator_load_element(array_num_161,0))))),right_value_169,info);
        come_pop_stackframe();
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional282=!calling_fun_174,    __freed_obj__ = 0, 
    _if_conditional282) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 943))));
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional283=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_158, "18field.c", 964))->mArrayNum, "18field.c", 964)))>0,        __freed_obj__ = 0, 
        _if_conditional283) {
            for(
            i_180=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA10=            i_180<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_161, "18field.c", 955))) ,            __freed_obj__ = 0, 
            _for_condtionalA10;            i_180++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_158, "18field.c", 953))->mArrayNum, "18field.c", 953)),-1,-1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional302=((struct sType*)come_null_check(left_type_158, "18field.c", 964))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional302) {
                ((struct sType*)come_null_check(left_type_158, "18field.c", 957))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_161, "18field.c", 957)));
                __freed_obj__ = 0;
                if(_if_conditional303=((struct sType*)come_null_check(left_type_158, "18field.c", 962))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional303) {
                    ((struct sType*)come_null_check(left_type_158, "18field.c", 960))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_193=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value242=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 964))))))));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_193, "18field.c", 966)),((struct CVALUE*)come_null_check(left_value_157, "18field.c", 966))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_194=(struct list$1CVALUEph*)come_increment_ref_count((array_num_161)),it_197=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_194), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_194), "18field.c", 972))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_197=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_194), "18field.c", 972))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_193, "18field.c", 969)),((char*)(right_value244=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_197, "18field.c", 969))->c_value))));
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_194 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_200=(char*)come_increment_ref_count(((char*)(right_value245=buffer_to_string(((struct buffer*)come_null_check(buf_193, "18field.c", 972))))));
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value246=xsprintf("array is assinged to"))),left_type_158,right_type_170,right_value_169,(_Bool)0,info);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional308=((struct sType*)come_null_check(left_type_158, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(right_type_170, "18field.c", 1057))->mHeap&&((struct sType*)come_null_check(left_type_158, "18field.c", 1057))->mPointerNum>0&&((struct sType*)come_null_check(right_type_170, "18field.c", 1057))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional308) {
            if(_if_conditional309=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional309) {
                decrement_ref_count_object(left_type_158,left_value_code_200,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional310=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1004))->var,                __freed_obj__ = 0, 
                _if_conditional310) {
                    if(_if_conditional311=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        __dec_obj127=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 981))->var, "18field.c", 981))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 981))->var, "18field.c", 981))->mCValueName=((void*)0);
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional312=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional312) {
                            __dec_obj128=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 984))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value247=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 984))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 984))->c_value,info))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional313=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 996))->var, "18field.c", 996))->mType, "18field.c", 996))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional313) {
                                __dec_obj129=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 987))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 987))->c_value=(char*)come_increment_ref_count(((char*)(right_value248=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 987))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 987))->c_value,info))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj130=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 990))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 990))->c_value=(char*)come_increment_ref_count(((char*)(right_value249=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 990))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 990))->c_value,info))));
                                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional314=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1003))->type, "18field.c", 1003))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional314) {
                    }
                    else {
                        __dec_obj131=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1001))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1001))->c_value=(char*)come_increment_ref_count(((char*)(right_value250=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1001))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1001))->c_value,info))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj132=((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1004))->c_value;
                ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1004))->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s=%s",left_value_code_200,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1004))->c_value))));
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional315=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional315) {
                    decrement_ref_count_object(left_type_158,left_value_code_200,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional316=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1033))->var,                    __freed_obj__ = 0, 
                    _if_conditional316) {
                        if(_if_conditional317=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1010))->var, "18field.c", 1010))->mCValueName=((void*)0);
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional318=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional318) {
                                __dec_obj134=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1013))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1013))->c_value=(char*)come_increment_ref_count(((char*)(right_value252=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1013))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1013))->c_value,info))));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional319=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1025))->var, "18field.c", 1025))->mType, "18field.c", 1025))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional319) {
                                    __dec_obj135=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1016))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1016))->c_value=(char*)come_increment_ref_count(((char*)(right_value253=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1016))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1016))->c_value,info))));
                                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj136=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1019))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1019))->c_value=(char*)come_increment_ref_count(((char*)(right_value254=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1019))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1019))->c_value,info))));
                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional320=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1032))->type, "18field.c", 1032))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional320) {
                        }
                        else {
                            __dec_obj137=((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1030))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1030))->c_value=(char*)come_increment_ref_count(((char*)(right_value255=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1030))->type,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1030))->c_value,info))));
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj138=((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1033))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1033))->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s=%s",left_value_code_200,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1033))->c_value))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_200,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1036))->type, "18field.c", 1036))->mPointerNum);
                    __freed_obj__ = 0;
                    __result147__ = (_Bool)0;
                    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result147__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_id_201=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1039))->c_value));
            __freed_obj__ = 0;
            if(_if_conditional321=right_value_id_201!=-1,            __freed_obj__ = 0, 
            _if_conditional321) {
                remove_object_from_right_values(right_value_id_201,info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional322=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional322) {
                __dec_obj139=((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1047))->c_value;
                ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1047))->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",left_value_code_200,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1047))->c_value))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional323=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional323) {
                    __dec_obj140=((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1050))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1050))->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s=%s",left_value_code_200,((struct CVALUE*)come_null_check(right_value_169, "18field.c", 1050))->c_value))));
                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_200,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "18field.c", 1053))->type, "18field.c", 1053))->mPointerNum);
                    __freed_obj__ = 0;
                    __result148__ = (_Bool)0;
                    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result148__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(left_type_158))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj141=((struct sType*)come_null_check(result_type_202, "18field.c", 1058))->mArrayNum;
        ((struct sType*)come_null_check(result_type_202, "18field.c", 1058))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1058))))))));
        if(__dec_obj141) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj142=((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1059))->type;
        ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1059))->type=(struct sType*)come_increment_ref_count(result_type_202);
        if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1060))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1062))->stack, "18field.c", 1062)),(struct CVALUE*)come_increment_ref_count(come_value_179));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_179, "18field.c", 1064))->c_value);
        __freed_obj__ = 0;
        if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_200 && !__freed_obj__) { left_value_code_200 = come_decrement_ref_count(left_value_code_200, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result149__ = (_Bool)1;
    if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
    if(left_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_161 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result122__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_159;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_160;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_159, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_160, 0, sizeof(struct list_item$1CVALUEph*));
            it_159=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_159!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_160=it_159;
                __freed_obj__ = 0;
                it_159=((struct list_item$1CVALUEph*)come_null_check(it_159, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_160 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional271;
struct sNode* result_163;
struct sNode* __result123__;
_Bool _if_conditional272;
struct sNode* __result124__;
struct sNode* result_164;
struct sNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_163, 0, sizeof(struct sNode*));
memset(&result_164, 0, sizeof(struct sNode*));
        if(_if_conditional271=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            __freed_obj__ = 0;
            memset(&result_163,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result123__ = __result_obj__ = result_163;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional272=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional272) {
            __result124__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_164,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result125__ = __result_obj__ = result_164;
        __freed_obj__ = 0;
        return __result125__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result126__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional273;
struct sNode* result_166;
struct sNode* __result127__;
_Bool _if_conditional274;
struct sNode* __result128__;
struct sNode* result_167;
struct sNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_166, 0, sizeof(struct sNode*));
memset(&result_167, 0, sizeof(struct sNode*));
        if(_if_conditional273=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            __freed_obj__ = 0;
            memset(&result_166,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result127__ = __result_obj__ = result_166;
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional274=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional274) {
            __result128__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result128__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_167,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result129__ = __result_obj__ = result_167;
        __freed_obj__ = 0;
        return __result129__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional278;
struct list_item$1CVALUEph* it_175;
int i_176;
_Bool _while_condtional15;
_Bool _if_conditional279;
void* right_value236;
void* right_value237;
struct optional$2CVALUEphbool* __result133__;
struct CVALUE* default_value_177;
void* right_value238;
void* right_value239;
struct optional$2CVALUEphbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_175, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_176, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&default_value_177, 0, sizeof(struct CVALUE*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
            if(_if_conditional278=position<0,            __freed_obj__ = 0, 
            _if_conditional278) {
                position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_175=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_176=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_175!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional279=position==i_176,                __freed_obj__ = 0, 
                _if_conditional279) {
                    __result133__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value237=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value236=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_175, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result133__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_175=((struct list_item$1CVALUEph*)come_null_check(it_175, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_176++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_177,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result134__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value239=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value238=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_177),(_Bool)0))));
            if(default_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result134__;
            __freed_obj__ = 0;
            if(default_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj126;
struct optional$2CVALUEphbool* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj126=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj126) { come_call_finalizer(CVALUE_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result132__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result132__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional280=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional281;
struct CVALUE* default_value_178;
struct CVALUE* __result135__;
struct CVALUE* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_178, 0, sizeof(struct CVALUE*));
            if(_if_conditional281=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional281) {
                __freed_obj__ = 0;
                memset(&default_value_178,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result135__ = __result_obj__ = default_value_178;
                __freed_obj__ = 0;
                return __result135__;
                __freed_obj__ = 0;
            }
            else {
                __result136__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result136__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result137__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
                __freed_obj__ = 0;
                return __result137__;
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
int tmp_181;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct list$1sNodeph* __result138__;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct list_item$1sNodeph* it_182;
int i_183;
_Bool _while_condtional16;
_Bool _if_conditional292;
struct list_item$1sNodeph* prev_it_184;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list_item$1sNodeph* it_185;
int i_186;
_Bool _while_condtional17;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list_item$1sNodeph* prev_it_187;
struct list_item$1sNodeph* it_188;
struct list_item$1sNodeph* head_prev_it_189;
struct list_item$1sNodeph* tail_it_190;
int i_191;
_Bool _while_condtional18;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1sNodeph* prev_it_192;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_181, 0, sizeof(int));
memset(&it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_186, 0, sizeof(int));
memset(&prev_it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_188, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional284=head<0,                    __freed_obj__ = 0, 
                    _if_conditional284) {
                        head+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 508))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional285=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional285) {
                        tail+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 511))->len+1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional286=head>tail,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        tmp_181=tail;
                        __freed_obj__ = 0;
                        tail=head;
                        __freed_obj__ = 0;
                        head=tmp_181;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional287=head<0,                    __freed_obj__ = 0, 
                    _if_conditional287) {
                        head=0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional288=tail>((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 528))->len,                    __freed_obj__ = 0, 
                    _if_conditional288) {
                        tail=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 525))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional289=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        __result138__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result138__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional290=head==0&&tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 534)));
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional291=head==0,                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            it_182=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 537))->head;
                            __freed_obj__ = 0;
                            i_183=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_182!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional292=i_183<tail,                                __freed_obj__ = 0, 
                                _if_conditional292) {
                                    prev_it_184=it_182;
                                    __freed_obj__ = 0;
                                    it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 543))->next;
                                    __freed_obj__ = 0;
                                    i_183++;
                                    __freed_obj__ = 0;
                                    if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 548))->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional293=i_183==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional293) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 551))->head=it_182;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 556))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional294=tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 627))->len,                            __freed_obj__ = 0, 
                            _if_conditional294) {
                                it_185=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 562))->head;
                                __freed_obj__ = 0;
                                i_186=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_185!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional295=i_186==head,                                    __freed_obj__ = 0, 
                                    _if_conditional295) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 566))->prev;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional296=i_186>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional296) {
                                        prev_it_187=it_185;
                                        __freed_obj__ = 0;
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 573))->next;
                                        __freed_obj__ = 0;
                                        i_186++;
                                        __freed_obj__ = 0;
                                        if(prev_it_187 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 578))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 581))->next;
                                        __freed_obj__ = 0;
                                        i_186++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_188=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 587))->head;
                                __freed_obj__ = 0;
                                head_prev_it_189=((void*)0);
                                __freed_obj__ = 0;
                                tail_it_190=((void*)0);
                                __freed_obj__ = 0;
                                i_191=0;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_188!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional297=i_191==head,                                    __freed_obj__ = 0, 
                                    _if_conditional297) {
                                        head_prev_it_189=((struct list_item$1sNodeph*)come_null_check(it_188, "./comelang2.h", 596))->prev;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional298=i_191==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional298) {
                                        tail_it_190=it_188;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional299=i_191>=head&&i_191<tail,                                    __freed_obj__ = 0, 
                                    _if_conditional299) {
                                        prev_it_192=it_188;
                                        __freed_obj__ = 0;
                                        it_188=((struct list_item$1sNodeph*)come_null_check(it_188, "./comelang2.h", 606))->next;
                                        __freed_obj__ = 0;
                                        i_191++;
                                        __freed_obj__ = 0;
                                        if(prev_it_192 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 611))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_188=((struct list_item$1sNodeph*)come_null_check(it_188, "./comelang2.h", 614))->next;
                                        __freed_obj__ = 0;
                                        i_191++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional300=head_prev_it_189!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional300) {
                                    ((struct list_item$1sNodeph*)come_null_check(head_prev_it_189, "./comelang2.h", 620))->next=tail_it_190;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional301=tail_it_190!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional301) {
                                    ((struct list_item$1sNodeph*)come_null_check(tail_it_190, "./comelang2.h", 623))->prev=head_prev_it_189;
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

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional304;
struct CVALUE* result_195;
struct CVALUE* __result140__;
_Bool _if_conditional305;
struct CVALUE* __result141__;
struct CVALUE* result_196;
struct CVALUE* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_195, 0, sizeof(struct CVALUE*));
memset(&result_196, 0, sizeof(struct CVALUE*));
            if(_if_conditional304=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional304) {
                __freed_obj__ = 0;
                memset(&result_195,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result140__ = __result_obj__ = result_195;
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional305=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional305) {
                __result141__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result141__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_196,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result142__ = __result_obj__ = result_196;
            __freed_obj__ = 0;
            return __result142__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result143__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional306;
struct CVALUE* result_198;
struct CVALUE* __result144__;
_Bool _if_conditional307;
struct CVALUE* __result145__;
struct CVALUE* result_199;
struct CVALUE* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_198, 0, sizeof(struct CVALUE*));
memset(&result_199, 0, sizeof(struct CVALUE*));
            if(_if_conditional306=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional306) {
                __freed_obj__ = 0;
                memset(&result_198,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result144__ = __result_obj__ = result_198;
                __freed_obj__ = 0;
                return __result144__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional307=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional307) {
                __result145__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_199,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result146__ = __result_obj__ = result_199;
            __freed_obj__ = 0;
            return __result146__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result150__ = ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1072))->sline;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value262;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
    __result151__ = __result_obj__ = ((char*)(right_value262=__builtin_string(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1077))->sname)));
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value263;
char* __dec_obj143;
void* right_value264;
struct list$1sNodeph* __dec_obj144;
void* right_value265;
struct sNode* __dec_obj145;
struct sLoadArrayNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1092))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1092))->sline;
    __freed_obj__ = 0;
    __dec_obj143=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1093))->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1093))->sname))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj144=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=list$1sNodephp_clone(array_num))));
    if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj145=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->mQuote=quote;
    __freed_obj__ = 0;
    __result152__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value266;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
    __result154__ = __result_obj__ = ((char*)(right_value266=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_203;
struct list$1sNodeph* array_num_nodes_204;
_Bool _if_conditional327;
_Bool __result155__;
void* right_value267;
struct CVALUE* left_value_205;
void* right_value268;
struct sType* left_type_206;
void* right_value269;
void* right_value270;
struct list$1CVALUEph* array_num_207;
struct list$1sNodeph* o2_saved_208;
struct sNode* it_209;
_Bool _for_condtionalA12;
_Bool _if_conditional328;
_Bool __result156__;
void* right_value271;
struct CVALUE* c_value_210;
void* right_value272;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional329;
void* right_value273;
_Bool _if_conditional330;
void* right_value274;
struct CVALUE* come_value_214;
void* right_value275;
void* right_value276;
struct buffer* buf_215;
struct list$1CVALUEph* o2_saved_216;
struct CVALUE* it_217;
_Bool _for_condtionalA13;
void* right_value277;
void* right_value278;
char* left_value_code_218;
void* right_value279;
char* __dec_obj146;
void* right_value280;
struct sType* result_type_219;
_Bool _if_conditional331;
struct sType* __dec_obj147;
_Bool _if_conditional332;
int n_220;
_Bool _if_conditional333;
void* right_value281;
struct sType* __dec_obj148;
_Bool _if_conditional334;
void* right_value282;
struct sType* __dec_obj149;
_Bool _if_conditional335;
int i_221;
_Bool _for_condtionalA14;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value283;
struct sType* __dec_obj150;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_203, 0, sizeof(struct sNode*));
memset(&array_num_nodes_204, 0, sizeof(struct list$1sNodeph*));
memset(&right_value267, 0, sizeof(void*));
memset(&left_value_205, 0, sizeof(struct CVALUE*));
memset(&right_value268, 0, sizeof(void*));
memset(&left_type_206, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&array_num_207, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_208, 0, sizeof(struct list$1sNodeph*));
memset(&it_209, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&c_value_210, 0, sizeof(struct CVALUE*));
memset(&right_value272, 0, sizeof(void*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&come_value_214, 0, sizeof(struct CVALUE*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&buf_215, 0, sizeof(struct buffer*));
memset(&o2_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&it_217, 0, sizeof(struct CVALUE*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&left_value_code_218, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&n_220, 0, sizeof(int));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&i_221, 0, sizeof(int));
memset(&right_value283, 0, sizeof(void*));
    left_203=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1115))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_204=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1116))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional327=!((struct sNode*)come_null_check(left_203, "18field.c", 1122))->compile(((struct sNode*)come_null_check(left_203, "18field.c", 1122))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional327) {
        __result155__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result155__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_206=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(((struct CVALUE*)come_null_check(left_value_205, "18field.c", 1125))->type))));
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    array_num_207=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value270=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value269=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1127))))))));
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_208=(array_num_nodes_204),it_209=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_208), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA12=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_208), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    _for_condtionalA12;    it_209=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_208), "18field.c", 1140))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional328=!((struct sNode*)come_null_check(it_209, "18field.c", 1134))->compile(((struct sNode*)come_null_check(it_209, "18field.c", 1134))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional328) {
            __result156__ = (_Bool)0;
            if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result156__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_207, "18field.c", 1137)),(struct CVALUE*)come_increment_ref_count(c_value_210));
        __freed_obj__ = 0;
        if(c_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(((struct CVALUE*)come_null_check(left_value_205, "18field.c", 1140))->type))));
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_212="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional329=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1151))->mQuote,    __freed_obj__ = 0, 
    _if_conditional329) {
        calling_fun_213=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_205,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1148),((struct optional$2CVALUEphbool*)(right_value273=list$1CVALUEphp_operator_load_element(array_num_207,0))))),info);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional330=!calling_fun_213,    __freed_obj__ = 0, 
    _if_conditional330) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1152))));
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buf_215=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1154))))))));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_215, "18field.c", 1156)),((struct CVALUE*)come_null_check(left_value_205, "18field.c", 1156))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((array_num_207)),it_217=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        _for_condtionalA13;        it_217=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "18field.c", 1162))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_215, "18field.c", 1159)),((char*)(right_value277=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_217, "18field.c", 1159))->c_value))));
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_216 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_218=(char*)come_increment_ref_count(((char*)(right_value278=buffer_to_string(((struct buffer*)come_null_check(buf_215, "18field.c", 1162))))));
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj146=((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1164))->c_value;
        ((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1164))->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s",left_value_code_218))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_206))));
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional331=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1172))->mOriginalLoadVarType, "18field.c", 1172))->v1,        __freed_obj__ = 0, 
        _if_conditional331) {
            __dec_obj147=result_type_219;
            result_type_219=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1169))->mOriginalLoadVarType, "18field.c", 1169))->v1);
            if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional332=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1206))->mArrayNum, "18field.c", 1206)))>0,        __freed_obj__ = 0, 
        _if_conditional332) {
            n_220=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1173))->mArrayNum, "18field.c", 1173)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_207, "18field.c", 1173)));
            __freed_obj__ = 0;
            if(_if_conditional333=n_220==0,            __freed_obj__ = 0, 
            _if_conditional333) {
                __dec_obj148=result_type_219;
                result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_206))));
                if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional334=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_206, "18field.c", 1180))->mOriginalLoadVarType, "18field.c", 1180))->v1,                __freed_obj__ = 0, 
                _if_conditional334) {
                    __dec_obj149=result_type_219;
                    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_206, "18field.c", 1178))->mOriginalLoadVarType, "18field.c", 1178))->v1))));
                    if(__dec_obj149) { come_call_finalizer(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1180))->mArrayNum, "18field.c", 1180)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional335=n_220>0,                __freed_obj__ = 0, 
                _if_conditional335) {
                    for(
                    i_221=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA14=                    i_221<n_220 ,                    __freed_obj__ = 0, 
                    _for_condtionalA14;                    i_221++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1184))->mArrayNum, "18field.c", 1184)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional336=n_220<0,                    __freed_obj__ = 0, 
                    _if_conditional336) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_219, "18field.c", 1188))->mArrayNum, "18field.c", 1188)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_219, "18field.c", 1189))->mPointerNum+=n_220;
                        __freed_obj__ = 0;
                        if(_if_conditional337=((struct sType*)come_null_check(result_type_219, "18field.c", 1194))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional337) {
                            ((struct sType*)come_null_check(result_type_219, "18field.c", 1192))->mPointerNum=0;
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
            if(_if_conditional338=((struct sType*)come_null_check(result_type_219, "18field.c", 1204))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional338) {
                ((struct sType*)come_null_check(result_type_219, "18field.c", 1198))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_207, "18field.c", 1198)));
                __freed_obj__ = 0;
                if(_if_conditional339=((struct sType*)come_null_check(result_type_219, "18field.c", 1203))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional339) {
                    ((struct sType*)come_null_check(result_type_219, "18field.c", 1201))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj150=((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1206))->type;
        ((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1206))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(result_type_219))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1207))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1209))->stack, "18field.c", 1209)),(struct CVALUE*)come_increment_ref_count(come_value_214));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_214, "18field.c", 1211))->c_value);
        __freed_obj__ = 0;
        if(come_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_215 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_215, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_218 && !__freed_obj__) { left_value_code_218 = come_decrement_ref_count(left_value_code_218, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result157__ = (_Bool)1;
    if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
    if(left_value_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1219))->sline;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value284;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value284=__builtin_string(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1224))->sname)));
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value285;
char* __dec_obj151;
void* right_value286;
struct list$1sNodeph* __dec_obj152;
void* right_value287;
struct sNode* __dec_obj153;
struct sLoadRangeArrayNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1239))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1239))->sline;
    __freed_obj__ = 0;
    __dec_obj151=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1240))->sname;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1240))->sname=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1240))->sname))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj152=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1242))->mArrayNum;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1242))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value286=list$1sNodephp_clone(array_num))));
    if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj153=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1244))->mLeft;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1244))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->mQuote=quote;
    __freed_obj__ = 0;
    __result160__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result161__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value288;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value288, 0, sizeof(void*));
    __result162__ = __result_obj__ = ((char*)(right_value288=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_222;
struct list$1sNodeph* array_num_nodes_223;
_Bool _if_conditional343;
_Bool __result163__;
void* right_value289;
struct CVALUE* left_value_224;
void* right_value290;
struct sType* left_type_225;
void* right_value291;
void* right_value292;
struct list$1CVALUEph* array_num_226;
struct list$1sNodeph* o2_saved_227;
struct sNode* it_228;
_Bool _for_condtionalA15;
_Bool _if_conditional344;
_Bool __result164__;
void* right_value293;
struct CVALUE* c_value_229;
void* right_value294;
struct sType* type_230;
char* fun_name_231;
_Bool calling_fun_232;
_Bool _if_conditional345;
void* right_value295;
void* right_value296;
_Bool _if_conditional346;
void* right_value297;
struct CVALUE* come_value_233;
void* right_value298;
void* right_value299;
struct buffer* buf_234;
struct list$1CVALUEph* o2_saved_235;
struct CVALUE* it_236;
_Bool _for_condtionalA16;
void* right_value300;
void* right_value301;
char* left_value_code_237;
void* right_value302;
char* __dec_obj154;
void* right_value303;
struct sType* result_type_238;
_Bool _if_conditional347;
struct sType* __dec_obj155;
_Bool _if_conditional348;
int n_239;
_Bool _if_conditional349;
void* right_value304;
struct sType* __dec_obj156;
_Bool _if_conditional350;
void* right_value305;
struct sType* __dec_obj157;
_Bool _if_conditional351;
int i_240;
_Bool _for_condtionalA17;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value306;
struct sType* __dec_obj158;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_222, 0, sizeof(struct sNode*));
memset(&array_num_nodes_223, 0, sizeof(struct list$1sNodeph*));
memset(&right_value289, 0, sizeof(void*));
memset(&left_value_224, 0, sizeof(struct CVALUE*));
memset(&right_value290, 0, sizeof(void*));
memset(&left_type_225, 0, sizeof(struct sType*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&array_num_226, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_227, 0, sizeof(struct list$1sNodeph*));
memset(&it_228, 0, sizeof(struct sNode*));
memset(&right_value293, 0, sizeof(void*));
memset(&c_value_229, 0, sizeof(struct CVALUE*));
memset(&right_value294, 0, sizeof(void*));
memset(&type_230, 0, sizeof(struct sType*));
memset(&fun_name_231, 0, sizeof(char*));
memset(&calling_fun_232, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&come_value_233, 0, sizeof(struct CVALUE*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&buf_234, 0, sizeof(struct buffer*));
memset(&o2_saved_235, 0, sizeof(struct list$1CVALUEph*));
memset(&it_236, 0, sizeof(struct CVALUE*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&left_value_code_237, 0, sizeof(char*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&result_type_238, 0, sizeof(struct sType*));
memset(&n_239, 0, sizeof(int));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&i_240, 0, sizeof(int));
memset(&right_value306, 0, sizeof(void*));
    left_222=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1262))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_223=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1263))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional343=!((struct sNode*)come_null_check(left_222, "18field.c", 1269))->compile(((struct sNode*)come_null_check(left_222, "18field.c", 1269))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional343) {
        __result163__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result163__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(((struct CVALUE*)come_null_check(left_value_224, "18field.c", 1272))->type))));
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    array_num_226=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value292=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value291=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1274))))))));
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_227=(array_num_nodes_223),it_228=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_227), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_227), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    it_228=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_227), "18field.c", 1287))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional344=!((struct sNode*)come_null_check(it_228, "18field.c", 1281))->compile(((struct sNode*)come_null_check(it_228, "18field.c", 1281))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional344) {
            __result164__ = (_Bool)0;
            if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result164__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_226, "18field.c", 1284)),(struct CVALUE*)come_increment_ref_count(c_value_229));
        __freed_obj__ = 0;
        if(c_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(((struct CVALUE*)come_null_check(left_value_224, "18field.c", 1287))->type))));
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_231="operator_load_range_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional345=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1298))->mQuote,    __freed_obj__ = 0, 
    _if_conditional345) {
        calling_fun_232=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        come_clear_stackframe();
        calling_fun_232=operator_overload_fun2(type_230,fun_name_231,left_value_224,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1295),((struct optional$2CVALUEphbool*)(right_value295=list$1CVALUEphp_operator_load_element(array_num_226,0))))),optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1295),((struct optional$2CVALUEphbool*)(right_value296=list$1CVALUEphp_operator_load_element(array_num_226,1))))),info);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional346=!calling_fun_232,    __freed_obj__ = 0, 
    _if_conditional346) {
        come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1299))));
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buf_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1301))))))));
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_234, "18field.c", 1303)),((struct CVALUE*)come_null_check(left_value_224, "18field.c", 1303))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_235=(struct list$1CVALUEph*)come_increment_ref_count((array_num_226)),it_236=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_235), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_235), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        _for_condtionalA16;        it_236=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_235), "18field.c", 1309))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_234, "18field.c", 1306)),((char*)(right_value300=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_236, "18field.c", 1306))->c_value))));
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_235 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_235, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_237=(char*)come_increment_ref_count(((char*)(right_value301=buffer_to_string(((struct buffer*)come_null_check(buf_234, "18field.c", 1309))))));
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj154=((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1311))->c_value;
        ((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1311))->c_value=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("%s",left_value_code_237))));
        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0,0); }
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_type_225))));
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional347=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1319))->mOriginalLoadVarType, "18field.c", 1319))->v1,        __freed_obj__ = 0, 
        _if_conditional347) {
            __dec_obj155=result_type_238;
            result_type_238=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1316))->mOriginalLoadVarType, "18field.c", 1316))->v1);
            if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional348=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1353))->mArrayNum, "18field.c", 1353)))>0,        __freed_obj__ = 0, 
        _if_conditional348) {
            n_239=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1320))->mArrayNum, "18field.c", 1320)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_226, "18field.c", 1320)));
            __freed_obj__ = 0;
            if(_if_conditional349=n_239==0,            __freed_obj__ = 0, 
            _if_conditional349) {
                __dec_obj156=result_type_238;
                result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_225))));
                if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional350=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_225, "18field.c", 1327))->mOriginalLoadVarType, "18field.c", 1327))->v1,                __freed_obj__ = 0, 
                _if_conditional350) {
                    __dec_obj157=result_type_238;
                    result_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_225, "18field.c", 1325))->mOriginalLoadVarType, "18field.c", 1325))->v1))));
                    if(__dec_obj157) { come_call_finalizer(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1327))->mArrayNum, "18field.c", 1327)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional351=n_239>0,                __freed_obj__ = 0, 
                _if_conditional351) {
                    for(
                    i_240=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA17=                    i_240<n_239 ,                    __freed_obj__ = 0, 
                    _for_condtionalA17;                    i_240++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1331))->mArrayNum, "18field.c", 1331)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional352=n_239<0,                    __freed_obj__ = 0, 
                    _if_conditional352) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_238, "18field.c", 1335))->mArrayNum, "18field.c", 1335)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_238, "18field.c", 1336))->mPointerNum+=n_239;
                        __freed_obj__ = 0;
                        if(_if_conditional353=((struct sType*)come_null_check(result_type_238, "18field.c", 1341))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional353) {
                            ((struct sType*)come_null_check(result_type_238, "18field.c", 1339))->mPointerNum=0;
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
            if(_if_conditional354=((struct sType*)come_null_check(result_type_238, "18field.c", 1351))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional354) {
                ((struct sType*)come_null_check(result_type_238, "18field.c", 1345))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_226, "18field.c", 1345)));
                __freed_obj__ = 0;
                if(_if_conditional355=((struct sType*)come_null_check(result_type_238, "18field.c", 1350))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional355) {
                    ((struct sType*)come_null_check(result_type_238, "18field.c", 1348))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj158=((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1353))->type;
        ((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1353))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(result_type_238))));
        if(__dec_obj158) { come_call_finalizer(sType_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1354))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1356))->stack, "18field.c", 1356)),(struct CVALUE*)come_increment_ref_count(come_value_233));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_233, "18field.c", 1358))->c_value);
        __freed_obj__ = 0;
        if(come_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_234 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_234, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_237 && !__freed_obj__) { left_value_code_237 = come_decrement_ref_count(left_value_code_237, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result165__ = (_Bool)1;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_226 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result166__ = ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1366))->sline;
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value307;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
    __result167__ = __result_obj__ = ((char*)(right_value307=__builtin_string(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1371))->sname)));
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result168__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    __freed_obj__ = 0;
    exit(2);
    __freed_obj__ = 0;
    __result169__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional356;
char* p_241;
int sline_242;
_Bool _if_conditional357;
void* right_value308;
char* word_243;
_Bool _if_conditional358;
void* right_value309;
void* right_value310;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value314;
struct sNode* __dec_obj161;
void* right_value315;
void* right_value316;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value320;
struct sNode* __dec_obj164;
_Bool _if_conditional371;
_Bool _if_conditional372;
void* right_value321;
void* right_value322;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value326;
struct sNode* __dec_obj167;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
memset(&right_value308, 0, sizeof(void*));
memset(&word_243, 0, sizeof(char*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
    if(_if_conditional356=(*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional356) {
        p_241=((struct sInfo*)come_null_check(info, "18field.c", 1390))->p;
        __freed_obj__ = 0;
        sline_242=((struct sInfo*)come_null_check(info, "18field.c", 1391))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "18field.c", 1393))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional357=xisalpha(*((struct sInfo*)come_null_check(info, "18field.c", 1416))->p)||*((struct sInfo*)come_null_check(info, "18field.c", 1416))->p==95,        __freed_obj__ = 0, 
        _if_conditional357) {
            come_clear_stackframe();
            word_243=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1397),((struct optional$2charphbool*)(right_value308=parse_word(info))))));
            come_pop_stackframe();
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional358=(string_operator_equals(word_243,"expect")||string_operator_equals(word_243,"value")||string_operator_equals(word_243,"catch"))&&(*((struct sInfo*)come_null_check(info, "18field.c", 1409))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1409))->p==123),            __freed_obj__ = 0, 
            _if_conditional358) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1400))->p=p_241;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1401))->sline=sline_242;
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "18field.c", 1404))->p=p_241;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1405))->sline=sline_242;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1407);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value310=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value309=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1407)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj161=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=_inf_value2)));
                if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0); }
                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_243 && !__freed_obj__) { word_243 = come_decrement_ref_count(word_243, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "18field.c", 1411))->p=p_241;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1412))->sline=sline_242;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1414);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value316=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value315=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1414)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj164=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=_inf_value3)));
            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0); }
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional371=*((struct sInfo*)come_null_check(info, "18field.c", 1425))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1425))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional371) {
        }
        else {
            if(_if_conditional372=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional372) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1422);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value322=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value321=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1422)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj167=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=_inf_value4)));
                if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result176__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result176__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional373=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional373) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional374=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional374) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional375;
struct sExceptionGetValueNode* __result174__;
void* right_value323;
struct sExceptionGetValueNode* result_246;
_Bool _if_conditional376;
void* right_value324;
struct sNode* __dec_obj165;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value325;
char* __dec_obj166;
struct sExceptionGetValueNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                    if(_if_conditional375=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional375) {
                        __result174__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result174__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_246=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value323=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional376=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional376) {
                        __dec_obj165=((struct sExceptionGetValueNode*)come_null_check(result_246, "sExceptionGetValueNode_clone", 4))->mLeft;
                        ((struct sExceptionGetValueNode*)come_null_check(result_246, "sExceptionGetValueNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft))));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional377=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional377) {
                        ((struct sExceptionGetValueNode*)come_null_check(result_246, "sExceptionGetValueNode_clone", 5))->sline=((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional378=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 7))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional378) {
                        __dec_obj166=((struct sExceptionGetValueNode*)come_null_check(result_246, "sExceptionGetValueNode_clone", 6))->sname;
                        ((struct sExceptionGetValueNode*)come_null_check(result_246, "sExceptionGetValueNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname))));
                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result175__ = __result_obj__ = result_246;
                    if(result_246 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result175__;
                    __freed_obj__ = 0;
                    if(result_246 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _while_condtional19;
_Bool _if_conditional379;
_Bool quote_247;
_Bool _if_conditional380;
_Bool range_248;
void* right_value327;
void* right_value328;
struct list$1sNodeph* array_num_249;
_Bool _while_condtional20;
_Bool _if_conditional381;
void* right_value329;
struct sNode* node_250;
_Bool _if_conditional384;
void* right_value333;
struct sNode* node2_254;
void* right_value334;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value335;
void* right_value336;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value341;
struct sNode* __dec_obj174;
_Bool _if_conditional397;
void* right_value342;
struct sNode* right_node_257;
void* right_value343;
void* right_value344;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value350;
struct sNode* __dec_obj179;
void* right_value351;
void* right_value352;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value357;
struct sNode* __dec_obj183;
void* right_value358;
struct sNode* __dec_obj184;
_Bool _if_conditional418;
void* right_value359;
void* right_value360;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value364;
struct sNode* __dec_obj187;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value365;
void* right_value366;
void* right_value367;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value371;
struct sNode* __dec_obj190;
void* right_value372;
char* field_name_262;
_Bool _if_conditional435;
void* right_value373;
struct sNode* right_node_263;
void* right_value374;
void* right_value375;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* right_value381;
struct sNode* __dec_obj195;
_Bool _if_conditional446;
_Bool _if_conditional447;
void* right_value382;
void* right_value383;
struct sNode* __dec_obj196;
_Bool _if_conditional448;
void* right_value384;
void* right_value385;
struct sNode* __dec_obj197;
void* right_value386;
void* right_value387;
struct sNode* __dec_obj198;
void* right_value388;
void* right_value389;
struct sNode* _inf_value11;
struct sLoadFieldNode* _inf_obj_value11;
void* right_value394;
struct sNode* __dec_obj202;
void* right_value395;
struct sNode* node2_266;
_Bool _if_conditional457;
struct sNode* __dec_obj203;
struct sNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&quote_247, 0, sizeof(_Bool));
memset(&range_248, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&array_num_249, 0, sizeof(struct list$1sNodeph*));
memset(&right_value329, 0, sizeof(void*));
memset(&node_250, 0, sizeof(struct sNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&node2_254, 0, sizeof(struct sNode*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_node_257, 0, sizeof(struct sNode*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&field_name_262, 0, sizeof(char*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_node_263, 0, sizeof(struct sNode*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&node2_266, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional379=*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==91,        __freed_obj__ = 0, 
        _if_conditional379) {
            quote_247=*((struct sInfo*)come_null_check(info, "18field.c", 1432))->p==92;
            __freed_obj__ = 0;
            if(_if_conditional380=quote_247,            __freed_obj__ = 0, 
            _if_conditional380) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1434))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            range_248=(_Bool)0;
            __freed_obj__ = 0;
            array_num_249=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value328=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value327=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1438))))))));
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional20=1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional381=*((struct sInfo*)come_null_check(info, "18field.c", 1480))->p==91,                __freed_obj__ = 0, 
                _if_conditional381) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1441))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    node_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_249, "18field.c", 1448)),(struct sNode*)come_increment_ref_count(node_250));
                    __freed_obj__ = 0;
                    if(_if_conditional384=*((struct sInfo*)come_null_check(info, "18field.c", 1476))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1476))->p+1)==46,                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1451))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        node2_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_v13(info))));
                        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_249, "18field.c", 1458)),(struct sNode*)come_increment_ref_count(node2_254));
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        optional$2intbool_value((come_push_stackframe("18field.c", 1460),((struct optional$2intbool*)(right_value334=expected_next_character(93,info)))));
                        come_pop_stackframe();
                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        range_248=(_Bool)1;
                        __freed_obj__ = 0;
                        if(node2_254 && !__freed_obj__) { node2_254 = come_decrement_ref_count(node2_254, ((struct sNode*)node2_254)->finalize, ((struct sNode*)node2_254)->_protocol_obj, 0, 0, 0); } 
                        if(node_250 && !__freed_obj__) { node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                        if(node2_254 && !__freed_obj__) { node2_254 = come_decrement_ref_count(node2_254, ((struct sNode*)node2_254)->finalize, ((struct sNode*)node2_254)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional386=*((struct sInfo*)come_null_check(info, "18field.c", 1475))->p==93,                        __freed_obj__ = 0, 
                        _if_conditional386) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1468))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        else {
                            err_msg(info,"require ] character");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(node_250 && !__freed_obj__) { node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional387=range_248,            __freed_obj__ = 0, 
            _if_conditional387) {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1483);
                _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value336=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value335=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1483)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_249),quote_247,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
                _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
                _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
                _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
                _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
                _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
                __dec_obj174=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=_inf_value5)));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional397=*((struct sInfo*)come_null_check(info, "18field.c", 1504))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1504))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional397) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1488))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_v13(info))));
                    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1497);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value344=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value343=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1497)))),node,(struct sNode*)come_increment_ref_count(right_node_257),(struct list$1sNodeph*)come_increment_ref_count(array_num_249),quote_247,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj179=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=_inf_value6)));
                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(right_node_257 && !__freed_obj__) { right_node_257 = come_decrement_ref_count(right_node_257, ((struct sNode*)right_node_257)->finalize, ((struct sNode*)right_node_257)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1500);
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value352=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value351=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1500)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_249),quote_247,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj183=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=_inf_value7)));
                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0); }
                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    __dec_obj184=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(array_num_249 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_249, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional418=*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional418) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1506))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1511);
                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value360=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value359=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1511)))),node,(_Bool)0,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                _inf_value8->clone=(void*)sNullCheckNode_clone;
                _inf_value8->compile=(void*)sNullCheckNode_compile;
                _inf_value8->sline=(void*)sNullCheckNode_sline;
                _inf_value8->sname=(void*)sNullCheckNode_sname;
                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                _inf_value8->kind=(void*)sNullCheckNode_kind;
                __dec_obj187=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=_inf_value8)));
                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional426=(*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1565))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1565))->p+1)==62),                __freed_obj__ = 0, 
                _if_conditional426) {
                    if(_if_conditional427=*((struct sInfo*)come_null_check(info, "18field.c", 1523))->p==46,                    __freed_obj__ = 0, 
                    _if_conditional427) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1515))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1519))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1523);
                    _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value367=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value365=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1523)))),((struct sNode*)(right_value366=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value9->clone=(void*)sNullCheckNode_clone;
                    _inf_value9->compile=(void*)sNullCheckNode_compile;
                    _inf_value9->sline=(void*)sNullCheckNode_sline;
                    _inf_value9->sname=(void*)sNullCheckNode_sname;
                    _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                    _inf_value9->kind=(void*)sNullCheckNode_kind;
                    __dec_obj190=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value9)));
                    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    field_name_262=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1527),((struct optional$2charphbool*)(right_value372=parse_word(info))))));
                    come_pop_stackframe();
                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional435=*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+1)!=61,                    __freed_obj__ = 0, 
                    _if_conditional435) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1532))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        right_node_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=expression_v13(info))));
                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1539);
                        _inf_obj_value10=come_increment_ref_count(((struct sStoreFieldNode*)(right_value375=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value374=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1539)))),node,(struct sNode*)come_increment_ref_count(right_node_263),(char*)come_increment_ref_count(field_name_262),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                        _inf_value10->clone=(void*)sStoreFieldNode_clone;
                        _inf_value10->compile=(void*)sStoreFieldNode_compile;
                        _inf_value10->sline=(void*)sStoreFieldNode_sline;
                        _inf_value10->sname=(void*)sStoreFieldNode_sname;
                        _inf_value10->terminated=(void*)sStoreFieldNode_terminated;
                        _inf_value10->kind=(void*)sStoreFieldNode_kind;
                        __dec_obj195=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value10)));
                        if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0); }
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(right_node_263 && !__freed_obj__) { right_node_263 = come_decrement_ref_count(right_node_263, ((struct sNode*)right_node_263)->finalize, ((struct sNode*)right_node_263)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional446=*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==123||(*((struct sInfo*)come_null_check(info, "18field.c", 1555))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "18field.c", 1555))->p+2)==40),                        __freed_obj__ = 0, 
                        _if_conditional446) {
                            if(_if_conditional447=string_operator_equals(field_name_262,"if"),                            __freed_obj__ = 0, 
                            _if_conditional447) {
                                __dec_obj196=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=sNode_clone(node)))),info))));
                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                                if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional448=string_operator_equals(field_name_262,"elif"),                                __freed_obj__ = 0, 
                                _if_conditional448) {
                                    __dec_obj197=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(node)))),info))));
                                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0); }
                                    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj198=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_262),info))));
                                    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0); }
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1553);
                            _inf_obj_value11=come_increment_ref_count(((struct sLoadFieldNode*)(right_value389=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value388=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1553)))),node,(char*)come_increment_ref_count(field_name_262),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sLoadFieldNode_finalize;
                            _inf_value11->clone=(void*)sLoadFieldNode_clone;
                            _inf_value11->compile=(void*)sLoadFieldNode_compile;
                            _inf_value11->sline=(void*)sLoadFieldNode_sline;
                            _inf_value11->sname=(void*)sLoadFieldNode_sname;
                            _inf_value11->terminated=(void*)sLoadFieldNode_terminated;
                            _inf_value11->kind=(void*)sLoadFieldNode_kind;
                            __dec_obj202=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=_inf_value11)));
                            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(field_name_262 && !__freed_obj__) { field_name_262 = come_decrement_ref_count(field_name_262, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    node2_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    if(_if_conditional457=node2_266==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional457) {
                        if(node2_266 && !__freed_obj__) { node2_266 = come_decrement_ref_count(node2_266, ((struct sNode*)node2_266)->finalize, ((struct sNode*)node2_266)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj203=node;
                    node=(struct sNode*)come_increment_ref_count(node2_266);
                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    if(node2_266 && !__freed_obj__) { node2_266 = come_decrement_ref_count(node2_266, ((struct sNode*)node2_266)->finalize, ((struct sNode*)node2_266)->_protocol_obj, 0, 0, 0); } 
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result194__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional382;
void* right_value330;
struct list_item$1sNodeph* litem_251;
struct sNode* __dec_obj168;
_Bool _if_conditional383;
void* right_value331;
struct list_item$1sNodeph* litem_252;
struct sNode* __dec_obj169;
void* right_value332;
struct list_item$1sNodeph* litem_253;
struct sNode* __dec_obj170;
struct list$1sNodeph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value330, 0, sizeof(void*));
memset(&litem_251, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value331, 0, sizeof(void*));
memset(&litem_252, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value332, 0, sizeof(void*));
memset(&litem_253, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional382=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional382) {
                            litem_251=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value330=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_251, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_251, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj168=((struct list_item$1sNodeph*)come_null_check(litem_251, "./comelang2.h", 276))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_251, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_251;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_251;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional383=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional383) {
                                litem_252=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value331=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_252, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_252, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj169=((struct list_item$1sNodeph*)come_null_check(litem_252, "./comelang2.h", 286))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_252, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_252;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_252;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_253=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value332=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_253, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_253, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj170=((struct list_item$1sNodeph*)come_null_check(litem_253, "./comelang2.h", 296))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_253, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_253;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_253;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result177__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result177__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional385;
int default_value_255;
int __result178__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_255, 0, sizeof(int));
                            if(_if_conditional385=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional385) {
                                __freed_obj__ = 0;
                                memset(&default_value_255,0,sizeof(int));
                                __freed_obj__ = 0;
                                __result178__ = default_value_255;
                                __freed_obj__ = 0;
                                return __result178__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result179__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result179__;
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

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional388=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional389=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional389) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional390=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional390) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional391;
struct sLoadRangeArrayNode* __result180__;
void* right_value337;
struct sLoadRangeArrayNode* result_256;
_Bool _if_conditional392;
void* right_value338;
struct sNode* __dec_obj171;
_Bool _if_conditional393;
void* right_value339;
struct list$1sNodeph* __dec_obj172;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value340;
char* __dec_obj173;
struct sLoadRangeArrayNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value337, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
                    if(_if_conditional391=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional391) {
                        __result180__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result180__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_256=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value337=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional392=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional392) {
                        __dec_obj171=((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 4))->mLeft;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4))->mLeft))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional393=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional393) {
                        __dec_obj172=((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 5))->mArrayNum;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value339=list$1sNodephp_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mArrayNum))));
                        if(__dec_obj172) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional394=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional394) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 6))->mQuote=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional395=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional395) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 7))->sline=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional396=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional396) {
                        __dec_obj173=((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 8))->sname;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_256, "sLoadRangeArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8))->sname))));
                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result181__ = __result_obj__ = result_256;
                    if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result181__;
                    __freed_obj__ = 0;
                    if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional398=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional398) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional399=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional401=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 4))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional401) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional402;
struct sStoreArrayNode* __result182__;
void* right_value345;
struct sStoreArrayNode* result_258;
_Bool _if_conditional403;
void* right_value346;
struct sNode* __dec_obj175;
_Bool _if_conditional404;
void* right_value347;
struct sNode* __dec_obj176;
_Bool _if_conditional405;
void* right_value348;
struct list$1sNodeph* __dec_obj177;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value349;
char* __dec_obj178;
struct sStoreArrayNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value345, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
                        if(_if_conditional402=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional402) {
                            __result182__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result182__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_258=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value345=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional403=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional403) {
                            __dec_obj175=((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 4))->mLeft;
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional404=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional404) {
                            __dec_obj176=((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 5))->mRight;
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight))));
                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional405=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional405) {
                            __dec_obj177=((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 6))->mArrayNum;
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 6))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value348=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum))));
                            if(__dec_obj177) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional406=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional406) {
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 7))->mQuote=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional407=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional407) {
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 8))->sline=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional408=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 10))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional408) {
                            __dec_obj178=((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 9))->sname;
                            ((struct sStoreArrayNode*)come_null_check(result_258, "sStoreArrayNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname))));
                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result183__ = __result_obj__ = result_258;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result183__;
                        __freed_obj__ = 0;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional409=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional409) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional410=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional410) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional411=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional411) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional412;
struct sLoadArrayNode* __result184__;
void* right_value353;
struct sLoadArrayNode* result_259;
_Bool _if_conditional413;
void* right_value354;
struct sNode* __dec_obj180;
_Bool _if_conditional414;
void* right_value355;
struct list$1sNodeph* __dec_obj181;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value356;
char* __dec_obj182;
struct sLoadArrayNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value353, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
                        if(_if_conditional412=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional412) {
                            __result184__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result184__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_259=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value353=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional413=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            __dec_obj180=((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 4))->mLeft;
                            ((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional414=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional414) {
                            __dec_obj181=((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 5))->mArrayNum;
                            ((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value355=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum))));
                            if(__dec_obj181) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj181, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional415=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            ((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 6))->mQuote=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional416=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional416) {
                            ((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 7))->sline=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional417=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            __dec_obj182=((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 8))->sname;
                            ((struct sLoadArrayNode*)come_null_check(result_259, "sLoadArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname))));
                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result185__ = __result_obj__ = result_259;
                        if(result_259 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result185__;
                        __freed_obj__ = 0;
                        if(result_259 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional428=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional428) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional429=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional429) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional430;
struct sNullCheckNode* __result188__;
void* right_value368;
struct sNullCheckNode* result_261;
_Bool _if_conditional431;
void* right_value369;
struct sNode* __dec_obj188;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value370;
char* __dec_obj189;
struct sNullCheckNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&result_261, 0, sizeof(struct sNullCheckNode*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                        if(_if_conditional430=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            __result188__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result188__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_261=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value368=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional431=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional431) {
                            __dec_obj188=((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 4))->mLeft;
                            ((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional432=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional432) {
                            ((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 5))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mOnlyNullCecker;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional433=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional433) {
                            ((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 6))->sline=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional434=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional434) {
                            __dec_obj189=((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 7))->sname;
                            ((struct sNullCheckNode*)come_null_check(result_261, "sNullCheckNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result189__ = __result_obj__ = result_261;
                        if(result_261 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result189__;
                        __freed_obj__ = 0;
                        if(result_261 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional436=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional436) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional437=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional437) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional438=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional438) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional439=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 4))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional439) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional440;
struct sStoreFieldNode* __result190__;
void* right_value376;
struct sStoreFieldNode* result_264;
_Bool _if_conditional441;
void* right_value377;
struct sNode* __dec_obj191;
_Bool _if_conditional442;
void* right_value378;
struct sNode* __dec_obj192;
_Bool _if_conditional443;
void* right_value379;
char* __dec_obj193;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value380;
char* __dec_obj194;
struct sStoreFieldNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
                            if(_if_conditional440=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional440) {
                                __result190__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result190__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_264=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value376=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional441=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional441) {
                                __dec_obj191=((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 4))->mLeft;
                                ((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional442=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional442) {
                                __dec_obj192=((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 5))->mRight;
                                ((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional443=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional443) {
                                __dec_obj193=((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 6))->mName;
                                ((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 6))->mName=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName))));
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional444=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional444) {
                                ((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 7))->sline=((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional445=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional445) {
                                __dec_obj194=((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 8))->sname;
                                ((struct sStoreFieldNode*)come_null_check(result_264, "sStoreFieldNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname))));
                                if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result191__ = __result_obj__ = result_264;
                            if(result_264 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result191__;
                            __freed_obj__ = 0;
                            if(result_264 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional449=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional449) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional450=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional450) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional451=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional451) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional452;
struct sLoadFieldNode* __result192__;
void* right_value390;
struct sLoadFieldNode* result_265;
_Bool _if_conditional453;
void* right_value391;
struct sNode* __dec_obj199;
_Bool _if_conditional454;
void* right_value392;
char* __dec_obj200;
_Bool _if_conditional455;
_Bool _if_conditional456;
void* right_value393;
char* __dec_obj201;
struct sLoadFieldNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value390, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
                                if(_if_conditional452=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional452) {
                                    __result192__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result192__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_265=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value390=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional453=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional453) {
                                    __dec_obj199=((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 4))->mLeft;
                                    ((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft))));
                                    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional454=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional454) {
                                    __dec_obj200=((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 5))->mName;
                                    ((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 5))->mName=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName))));
                                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional455=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional455) {
                                    ((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional456=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional456) {
                                    __dec_obj201=((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 7))->sname;
                                    ((struct sLoadFieldNode*)come_null_check(result_265, "sLoadFieldNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname))));
                                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result193__ = __result_obj__ = result_265;
                                if(result_265 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result193__;
                                __freed_obj__ = 0;
                                if(result_265 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

