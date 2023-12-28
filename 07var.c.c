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
    _Bool* is_type_name_flag_200;
    _Bool* multiple_declare_201;
    _Bool* multiple_declare2_208;
    struct sFun** fun_215;
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












struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
_Bool _if_conditional5;
void* right_value35;
struct sType* __dec_obj24;
struct sType* __dec_obj25;
struct sNode* __dec_obj26;
_Bool _if_conditional92;
void* right_value36;
struct list$1charph* __dec_obj27;
struct list$1charph* __dec_obj28;
_Bool _if_conditional93;
void* right_value47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj35;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj36;
char* __dec_obj37;
void* right_value48;
char* __dec_obj38;
struct sStoreNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    __dec_obj1=((struct sStoreNode*)come_null_check(self, "07var.c", 18))->name;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 18))->name=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(name))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 19))->alloc=alloc;
    __freed_obj__ = 0;
    if(_if_conditional5=type,    __freed_obj__ = 0, 
    _if_conditional5) {
        __dec_obj24=((struct sStoreNode*)come_null_check(self, "07var.c", 21))->type;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 21))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(type))));
        if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj25=((struct sStoreNode*)come_null_check(self, "07var.c", 24))->type;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 24))->type=((void*)0);
        if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj26=((struct sStoreNode*)come_null_check(self, "07var.c", 26))->right_value;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 26))->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
    __freed_obj__ = 0;
    if(_if_conditional92=multiple_assign,    __freed_obj__ = 0, 
    _if_conditional92) {
        __dec_obj27=((struct sStoreNode*)come_null_check(self, "07var.c", 28))->multiple_assign;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 28))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charphp_clone(multiple_assign))));
        if(__dec_obj27) { come_call_finalizer(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj28=((struct sStoreNode*)come_null_check(self, "07var.c", 31))->multiple_assign;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 31))->multiple_assign=((void*)0);
        if(__dec_obj28) { come_call_finalizer(list$1charph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=multiple_declare,    __freed_obj__ = 0, 
    _if_conditional93) {
        __dec_obj35=((struct sStoreNode*)come_null_check(self, "07var.c", 34))->multiple_declare;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 34))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj35) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj36=((struct sStoreNode*)come_null_check(self, "07var.c", 37))->multiple_declare;
        ((struct sStoreNode*)come_null_check(self, "07var.c", 37))->multiple_declare=((void*)0);
        if(__dec_obj36) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj37=((struct sStoreNode*)come_null_check(self, "07var.c", 40))->array_initializer;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 40))->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 42))->sline=((struct sInfo*)come_null_check(info, "07var.c", 42))->sline;
    __freed_obj__ = 0;
    __dec_obj38=((struct sStoreNode*)come_null_check(self, "07var.c", 43))->sname;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 43))->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 43))->sname))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result38__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result38__;
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
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
struct sType* __result14__;
void* right_value1;
struct sType* result_8;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional28;
void* right_value5;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional29;
void* right_value6;
char* __dec_obj5;
_Bool _if_conditional30;
void* right_value13;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional34;
void* right_value21;
struct list$1sNodeph* __dec_obj13;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value22;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional49;
void* right_value29;
struct list$1charph* __dec_obj18;
_Bool _if_conditional53;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value31;
struct sNode* __dec_obj20;
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
void* right_value32;
struct sNode* __dec_obj21;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value33;
char* __dec_obj22;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value34;
char* __dec_obj23;
struct sType* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sType*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
            if(_if_conditional6=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional6) {
                __result14__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_8=(struct sType*)come_increment_ref_count(((struct sType*)(right_value1=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional23=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional23) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional24) {
                __dec_obj3=((struct sType*)come_null_check(result_8, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_8, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional28) {
                __dec_obj4=((struct sType*)come_null_check(result_8, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_8, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value5=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional29) {
                __dec_obj5=((struct sType*)come_null_check(result_8, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_8, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value6=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj9=((struct sType*)come_null_check(result_8, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_8, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj9) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional34) {
                __dec_obj13=((struct sType*)come_null_check(result_8, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_8, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value21=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj13) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional47=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional47) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional48) {
                __dec_obj14=((struct sType*)come_null_check(result_8, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_8, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional49) {
                __dec_obj18=((struct sType*)come_null_check(result_8, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_8, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value29=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj18) { come_call_finalizer(list$1charph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                __dec_obj19=((struct sType*)come_null_check(result_8, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_8, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional54=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional54) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                __dec_obj20=((struct sType*)come_null_check(result_8, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_8, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional56=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional56) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional58=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional58) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional59=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional59) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional60=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                __dec_obj21=((struct sType*)come_null_check(result_8, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_8, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                __dec_obj22=((struct sType*)come_null_check(result_8, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_8, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                ((struct sType*)come_null_check(result_8, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                __dec_obj23=((struct sType*)come_null_check(result_8, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_8, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value34=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional7) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional9) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional13) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional15) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional20) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional8) {
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
                        while(_while_condtional1=it_9!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional12=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional12) {
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
                        while(_while_condtional2=it_11!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional14=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional14) {
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
                        while(_while_condtional3=it_13!=((void*)0),                        __freed_obj__ = 0, 
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional17) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result15__;
void* right_value2;
struct tuple1$1sTypeph* result_15;
_Bool _if_conditional27;
void* right_value3;
struct sType* __dec_obj2;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value3, 0, sizeof(void*));
                    if(_if_conditional25=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        __result15__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result15__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_15=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value2=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional27=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional27) {
                        __dec_obj2=((struct tuple1$1sTypeph*)come_null_check(result_15, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_15, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional26) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result17__;
void* right_value7;
void* right_value8;
struct list$1sTypeph* result_16;
struct list_item$1sTypeph* it_17;
_Bool _while_condtional4;
void* right_value12;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_17, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                    if(_if_conditional31=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        __result17__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result17__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_16=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value7=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_17=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional4=it_17!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional4) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_16, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_17, "./comelang2.h", 192))->item)))));
                        if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
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
_Bool _if_conditional32;
void* right_value9;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj6;
_Bool _if_conditional33;
void* right_value10;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj7;
void* right_value11;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj8;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_18, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_18;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_18;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional33=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional33) {
                                    litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_19, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_19;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_19;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional35;
struct list$1sNodeph* __result21__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_21;
struct list_item$1sNodeph* it_22;
_Bool _while_condtional5;
void* right_value20;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value20, 0, sizeof(void*));
                    if(_if_conditional35=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        __result21__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result21__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_22=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_22!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_21, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_22, "./comelang2.h", 192))->item)))));
                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
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
_Bool _if_conditional36;
void* right_value16;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj10;
_Bool _if_conditional37;
void* right_value17;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj11;
void* right_value18;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj12;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_23;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_23;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional37=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_24;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_24;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional38;
struct sNode* __result24__;
void* right_value19;
struct sNode* result_26;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional38) {
                                __result24__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result24__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            if(_if_conditional39=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional39) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional40=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional41=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional41) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional42=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional42) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional43=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional43) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional44=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional45=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional45) {
                                ((struct sNode*)come_null_check(result_26, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional46=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional46) {
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
_Bool _if_conditional50;
struct list$1charph* __result27__;
void* right_value23;
void* right_value24;
struct list$1charph* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional6;
void* right_value28;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
memset(&right_value28, 0, sizeof(void*));
                    if(_if_conditional50=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        __result27__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value23=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_28=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_28!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_27, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value28=string_clone(((struct list_item$1charph*)come_null_check(it_28, "./comelang2.h", 192))->item)))));
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
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
_Bool _if_conditional51;
void* right_value25;
struct list_item$1charph* litem_29;
char* __dec_obj15;
_Bool _if_conditional52;
void* right_value26;
struct list_item$1charph* litem_30;
char* __dec_obj16;
void* right_value27;
struct list_item$1charph* litem_31;
char* __dec_obj17;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_29, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_29;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_29;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional52=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional52) {
                                    litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_30, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_30;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_30;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj17=((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional94;
struct list$1tuple3$3sTypephcharphsNodephph* __result32__;
void* right_value37;
void* right_value38;
struct list$1tuple3$3sTypephcharphsNodephph* result_34;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_35;
_Bool _while_condtional8;
void* right_value46;
struct list$1tuple3$3sTypephcharphsNodephph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value46, 0, sizeof(void*));
            if(_if_conditional94=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                __result32__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_34=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value38=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value37=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_35=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional8=it_35!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(result_34, "./comelang2.h", 192)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value46=tuple3$3sTypephcharphsNodephp_clone(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_35, "./comelang2.h", 192))->item)))));
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_35=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_35, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result37__ = __result_obj__ = result_34;
            if(result_34 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
            if(result_34 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                __freed_obj__ = 0;
                __result33__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_32=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_32!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        prev_it_33=it_32;
                        __freed_obj__ = 0;
                        it_32=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_32, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_33 && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional95=self!=((void*)0)&&((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional95) {
                                if(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional96=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional96) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional97=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional97) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional98=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 3))->v3!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional98) {
                                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2))->v3)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional99;
void* right_value39;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_36;
struct tuple3$3sTypephcharphsNodeph* __dec_obj29;
_Bool _if_conditional103;
void* right_value40;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_37;
struct tuple3$3sTypephcharphsNodeph* __dec_obj30;
void* right_value41;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_38;
struct tuple3$3sTypephcharphsNodeph* __dec_obj31;
struct list$1tuple3$3sTypephcharphsNodephph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        litem_36=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value39=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 202))));
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_36, "./comelang2.h", 204))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_36, "./comelang2.h", 205))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj29=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_36, "./comelang2.h", 206))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_36, "./comelang2.h", 206))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_36;
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_36;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional103=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional103) {
                            litem_37=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value40=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 212))));
                            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_37, "./comelang2.h", 214))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 214))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_37, "./comelang2.h", 215))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj30=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_37, "./comelang2.h", 216))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_37, "./comelang2.h", 216))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj30) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_37;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_37;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_38=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value41=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 222))));
                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_38, "./comelang2.h", 224))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_38, "./comelang2.h", 225))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj31=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_38, "./comelang2.h", 226))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_38, "./comelang2.h", 226))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj31) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_38;
                            __freed_obj__ = 0;
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_38;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                    __freed_obj__ = 0;
                    __result34__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result34__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional100=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional100) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional101=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional101) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional102=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 3))->v3!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional102) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3 && !__freed_obj__) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3 = come_decrement_ref_count(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2))->v3)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
struct tuple3$3sTypephcharphsNodeph* __result35__;
void* right_value42;
struct tuple3$3sTypephcharphsNodeph* result_39;
_Bool _if_conditional105;
void* right_value43;
struct sType* __dec_obj32;
_Bool _if_conditional106;
void* right_value44;
char* __dec_obj33;
_Bool _if_conditional107;
void* right_value45;
struct sNode* __dec_obj34;
struct tuple3$3sTypephcharphsNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
                    if(_if_conditional104=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional104) {
                        __result35__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result35__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_39=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value42=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3))));
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional105=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional105) {
                        __dec_obj32=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 4))->v1))));
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional106=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional106) {
                        __dec_obj33=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5))->v2))));
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional107=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 7))->v3!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional107) {
                        __dec_obj34=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_39, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6))->v3))));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0); }
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result36__ = __result_obj__ = result_39;
                    if(result_39 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
                    if(result_39 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result39__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}

char* sStoreNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value49;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
    __result40__ = __result_obj__ = ((char*)(right_value49=__builtin_string("sStoreNode")));
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value50;
char* array_initializer_40;
_Bool _if_conditional115;
void* right_value60;
struct sVar* var__46;
_Bool _if_conditional122;
_Bool __result50__;
_Bool _if_conditional123;
_Bool __result51__;
void* right_value61;
struct sType* type_47;
void* right_value62;
void* right_value63;
struct sType* var_type_48;
void* right_value64;
_Bool _if_conditional126;
void* right_value65;
struct sVar* var__50;
_Bool _if_conditional127;
_Bool __result54__;
_Bool _if_conditional128;
_Bool __result55__;
void* right_value66;
struct sType* type_51;
_Bool _if_conditional129;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_52;
struct tuple3$3sTypephcharphsNodeph* it_55;
_Bool _for_condtionalA2;
struct tuple3$3sTypephcharphsNodeph* multiple_assgin_var1;
struct sType* type_58;
char* var_name_59;
struct sNode* right_value_60;
void* right_value67;
_Bool _if_conditional134;
_Bool __result63__;
void* right_value68;
struct sType* left_type_61;
void* right_value69;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool __result64__;
void* right_value70;
struct CVALUE* come_value_62;
void* right_value71;
struct sType* left_type2_63;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value72;
struct list$1sNodeph* o2_saved_64;
struct sNode* it_67;
_Bool _for_condtionalA3;
_Bool _if_conditional146;
void* right_value73;
struct CVALUE* come_value_70;
void* right_value74;
void* right_value75;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool __result74__;
void* right_value76;
struct sType* left_type_71;
_Bool _if_conditional149;
void* right_value77;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value78;
struct list$1sNodeph* o2_saved_72;
struct sNode* it_73;
_Bool _for_condtionalA4;
_Bool _if_conditional152;
void* right_value79;
struct CVALUE* come_value_74;
void* right_value80;
void* right_value81;
struct sType* left_type2_75;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value82;
struct list$1sNodeph* o2_saved_76;
struct sNode* it_77;
_Bool _for_condtionalA5;
_Bool _if_conditional155;
void* right_value83;
struct CVALUE* come_value_78;
void* right_value84;
void* right_value85;
struct CVALUE* come_value_79;
void* right_value86;
char* __dec_obj39;
void* right_value87;
struct sType* __dec_obj40;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool __result76__;
void* right_value91;
struct CVALUE* right_value_83;
struct sType* right_type_84;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value92;
struct sVar* var__85;
_Bool _if_conditional164;
_Bool __result77__;
_Bool _if_conditional165;
int i_86;
struct list$1charph* o2_saved_87;
char* it_90;
_Bool _for_condtionalA6;
_Bool _if_conditional170;
void* right_value97;
struct sType* right_type2_97;
void* right_value98;
void* right_value99;
struct sType* var_type_98;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value100;
struct list$1sNodeph* o2_saved_99;
struct sNode* it_100;
_Bool _for_condtionalA7;
_Bool _if_conditional177;
void* right_value101;
struct CVALUE* come_value_101;
void* right_value102;
_Bool _if_conditional178;
void* right_value103;
void* right_value104;
struct sType* type_102;
void* right_value105;
void* right_value106;
struct sType* var_type_103;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value107;
struct list$1sNodeph* o2_saved_104;
struct sNode* it_105;
_Bool _for_condtionalA8;
_Bool _if_conditional181;
void* right_value108;
struct CVALUE* come_value_106;
void* right_value109;
struct sClass* current_stack_frame_struct_107;
void* right_value110;
struct optional$2sVarpbool* __exception_result_var_a1;
_Bool _if_conditional182;
struct sVar* parent_var_108;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value111;
struct CVALUE* come_value_109;
struct sType* left_type_110;
_Bool _if_conditional185;
void* right_value112;
char* c_value_111;
_Bool _if_conditional186;
_Bool _if_conditional187;
char* __dec_obj45;
_Bool _if_conditional188;
void* right_value113;
char* __dec_obj46;
_Bool _if_conditional189;
void* right_value114;
char* __dec_obj47;
void* right_value115;
char* __dec_obj48;
_Bool _if_conditional190;
void* right_value116;
char* __dec_obj49;
void* right_value117;
char* __dec_obj50;
int right_value_id_112;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value118;
char* c_value_113;
void* right_value119;
char* __dec_obj51;
void* right_value120;
char* __dec_obj52;
void* right_value121;
struct sType* __dec_obj53;
void* right_value122;
void* right_value123;
_Bool __result91__;
_Bool _if_conditional193;
static int num_multiple_var_114=0;
void* right_value124;
char* multiple_var_name_115;
void* right_value125;
void* right_value126;
char* __dec_obj54;
int i_116;
struct list$1charph* o2_saved_117;
char* it_118;
_Bool _for_condtionalA9;
_Bool _if_conditional194;
void* right_value127;
void* right_value128;
struct sType* right_type2_119;
struct sVar* var__120;
void* right_value129;
struct sType* var_type_121;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value130;
struct list$1sNodeph* o2_saved_122;
struct sNode* it_123;
_Bool _for_condtionalA10;
_Bool _if_conditional197;
void* right_value131;
struct CVALUE* come_value_124;
void* right_value132;
void* right_value133;
struct sType* left_type_125;
void* right_value134;
struct CVALUE* right_value2_126;
void* right_value135;
char* __dec_obj55;
void* right_value136;
struct sType* __dec_obj56;
void* right_value137;
struct CVALUE* come_value_127;
void* right_value138;
void* right_value139;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
char* __dec_obj57;
_Bool _if_conditional202;
void* right_value140;
char* __dec_obj58;
_Bool _if_conditional203;
void* right_value141;
char* __dec_obj59;
void* right_value142;
char* __dec_obj60;
_Bool _if_conditional204;
void* right_value143;
char* __dec_obj61;
void* right_value144;
char* __dec_obj62;
int right_value_id_128;
_Bool _if_conditional205;
void* right_value145;
char* __dec_obj63;
void* right_value146;
struct sType* __dec_obj64;
_Bool _if_conditional206;
void* right_value147;
struct sVar* var__129;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool __result92__;
_Bool _if_conditional209;
void* right_value148;
struct sType* __dec_obj65;
void* right_value149;
struct sType* left_type_130;
void* right_value150;
struct CVALUE* come_value_131;
_Bool _if_conditional210;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
char* __dec_obj66;
_Bool _if_conditional211;
void* right_value155;
void* right_value156;
_Bool _if_conditional212;
void* right_value157;
void* right_value158;
char* __dec_obj67;
_Bool _if_conditional213;
void* right_value159;
void* right_value160;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
char* __dec_obj68;
_Bool _if_conditional217;
void* right_value161;
char* __dec_obj69;
_Bool _if_conditional218;
void* right_value162;
char* __dec_obj70;
void* right_value163;
char* __dec_obj71;
_Bool _if_conditional219;
void* right_value164;
char* __dec_obj72;
void* right_value165;
char* __dec_obj73;
_Bool _if_conditional220;
_Bool _if_conditional221;
char* __dec_obj74;
_Bool _if_conditional222;
void* right_value166;
char* __dec_obj75;
_Bool _if_conditional223;
void* right_value167;
char* __dec_obj76;
void* right_value168;
char* __dec_obj77;
_Bool _if_conditional224;
void* right_value169;
char* __dec_obj78;
void* right_value170;
char* __dec_obj79;
int right_value_id_132;
_Bool _if_conditional225;
void* right_value171;
struct sType* __dec_obj80;
_Bool _if_conditional226;
void* right_value172;
void* right_value173;
_Bool _if_conditional227;
void* right_value174;
char* __dec_obj81;
void* right_value175;
char* __dec_obj82;
void* right_value176;
struct sType* __dec_obj83;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool __result93__;
void* right_value177;
void* right_value178;
void* right_value179;
char* __dec_obj84;
void* right_value180;
struct sType* __dec_obj85;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value181;
void* right_value182;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&array_initializer_40, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&var__46, 0, sizeof(struct sVar*));
memset(&right_value61, 0, sizeof(void*));
memset(&type_47, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&var_type_48, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&var__50, 0, sizeof(struct sVar*));
memset(&right_value66, 0, sizeof(void*));
memset(&type_51, 0, sizeof(struct sType*));
memset(&o2_saved_52, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_55, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_58, 0, sizeof(struct sType*));
memset(&var_name_59, 0, sizeof(char*));
memset(&right_value_60, 0, sizeof(struct sNode*));
memset(&type_58, 0, sizeof(struct sType*));
memset(&var_name_59, 0, sizeof(char*));
memset(&right_value_60, 0, sizeof(struct sNode*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&left_type_61, 0, sizeof(struct sType*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&come_value_62, 0, sizeof(struct CVALUE*));
memset(&right_value71, 0, sizeof(void*));
memset(&left_type2_63, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_67, 0, sizeof(struct sNode*));
memset(&right_value73, 0, sizeof(void*));
memset(&come_value_70, 0, sizeof(struct CVALUE*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&left_type_71, 0, sizeof(struct sType*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&o2_saved_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct sNode*));
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&left_type2_75, 0, sizeof(struct sType*));
memset(&right_value82, 0, sizeof(void*));
memset(&o2_saved_76, 0, sizeof(struct list$1sNodeph*));
memset(&it_77, 0, sizeof(struct sNode*));
memset(&right_value83, 0, sizeof(void*));
memset(&come_value_78, 0, sizeof(struct CVALUE*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_79, 0, sizeof(struct CVALUE*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value_83, 0, sizeof(struct CVALUE*));
memset(&right_type_84, 0, sizeof(struct sType*));
memset(&right_value92, 0, sizeof(void*));
memset(&var__85, 0, sizeof(struct sVar*));
memset(&i_86, 0, sizeof(int));
memset(&o2_saved_87, 0, sizeof(struct list$1charph*));
memset(&it_90, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_type2_97, 0, sizeof(struct sType*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&var_type_98, 0, sizeof(struct sType*));
memset(&right_value100, 0, sizeof(void*));
memset(&o2_saved_99, 0, sizeof(struct list$1sNodeph*));
memset(&it_100, 0, sizeof(struct sNode*));
memset(&right_value101, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&var_type_103, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&o2_saved_104, 0, sizeof(struct list$1sNodeph*));
memset(&it_105, 0, sizeof(struct sNode*));
memset(&right_value108, 0, sizeof(void*));
memset(&come_value_106, 0, sizeof(struct CVALUE*));
memset(&right_value109, 0, sizeof(void*));
memset(&current_stack_frame_struct_107, 0, sizeof(struct sClass*));
memset(&right_value110, 0, sizeof(void*));
memset(&parent_var_108, 0, sizeof(struct sVar*));
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_109, 0, sizeof(struct CVALUE*));
memset(&left_type_110, 0, sizeof(struct sType*));
memset(&right_value112, 0, sizeof(void*));
memset(&c_value_111, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value_id_112, 0, sizeof(int));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_113, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&multiple_var_name_115, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&i_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1charph*));
memset(&it_118, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_type2_119, 0, sizeof(struct sType*));
memset(&var__120, 0, sizeof(struct sVar*));
memset(&right_value129, 0, sizeof(void*));
memset(&var_type_121, 0, sizeof(struct sType*));
memset(&right_value130, 0, sizeof(void*));
memset(&o2_saved_122, 0, sizeof(struct list$1sNodeph*));
memset(&it_123, 0, sizeof(struct sNode*));
memset(&right_value131, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&left_type_125, 0, sizeof(struct sType*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value2_126, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&come_value_127, 0, sizeof(struct CVALUE*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value_id_128, 0, sizeof(int));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&var__129, 0, sizeof(struct sVar*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&left_type_130, 0, sizeof(struct sType*));
memset(&right_value150, 0, sizeof(void*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
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
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value_id_132, 0, sizeof(int));
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
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    array_initializer_40=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(((struct sStoreNode*)come_null_check(self, "07var.c", 60))->array_initializer))));
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional115=array_initializer_40,    __freed_obj__ = 0, 
    _if_conditional115) {
        come_clear_stackframe();
        var__46=optional$2sVarpbool_value((come_push_stackframe("07var.c", 63),((struct optional$2sVarpbool*)(right_value60=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 63))->lv_table, "07var.c", 63))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 63))->name)))));
        come_pop_stackframe();
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional122=var__46,        __freed_obj__ = 0, 
        _if_conditional122) {
            err_msg(info,"Already appended this var name(%s)(2)",((struct sStoreNode*)come_null_check(self, "07var.c", 65))->name);
            __freed_obj__ = 0;
            __result50__ = (_Bool)0;
            if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=((struct sStoreNode*)come_null_check(self, "07var.c", 80))->type==((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            err_msg(info,"Require type name(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 70))->name);
            __freed_obj__ = 0;
            __result51__ = (_Bool)0;
            if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
        }
        else {
            type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 74))->type,((struct sInfo*)come_null_check(info, "07var.c", 74))->generics_type,info))));
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_47, "07var.c", 76))->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 77))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(type_47)))),info);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(type_47 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        var__46=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 80))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 80))->name);
        __freed_obj__ = 0;
        var_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(((struct sVar*)come_null_check(var__46, "07var.c", 82))->mType))));
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(var_type_48, "07var.c", 83))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        add_come_code(info,"%s=%s;\n",optional$2charphbool_value((come_push_stackframe("07var.c", 85),((struct optional$2charphbool*)(right_value64=make_define_var(var_type_48,((struct sVar*)come_null_check(var__46, "07var.c", 85))->mCValueName,(_Bool)0,info))))),array_initializer_40);
        come_pop_stackframe();
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(var_type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional126=((struct sStoreNode*)come_null_check(self, "07var.c", 670))->right_value==((void*)0),        __freed_obj__ = 0, 
        _if_conditional126) {
            come_clear_stackframe();
            var__50=optional$2sVarpbool_value((come_push_stackframe("07var.c", 88),((struct optional$2sVarpbool*)(right_value65=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 88))->lv_table, "07var.c", 88))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 88))->name)))));
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional127=var__50,            __freed_obj__ = 0, 
            _if_conditional127) {
                err_msg(info,"Already appended this var name(%s)(1)",((struct sStoreNode*)come_null_check(self, "07var.c", 90))->name);
                __freed_obj__ = 0;
                __result54__ = (_Bool)0;
                if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result54__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional128=((struct sStoreNode*)come_null_check(self, "07var.c", 99))->type==((void*)0),            __freed_obj__ = 0, 
            _if_conditional128) {
                err_msg(info,"Require concrete variable type(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 95))->name);
                __freed_obj__ = 0;
                __result55__ = (_Bool)0;
                if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 99))->type,((struct sInfo*)come_null_check(info, "07var.c", 99))->generics_type,info))));
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_51, "07var.c", 100))->mFunctionParam=(_Bool)0;
            __freed_obj__ = 0;
            if(_if_conditional129=((struct sStoreNode*)come_null_check(self, "07var.c", 228))->multiple_declare,            __freed_obj__ = 0, 
            _if_conditional129) {
                for(
                o2_saved_52=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 151))->multiple_declare)),it_55=list$1tuple3$3sTypephcharphsNodephph_begin(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_52), "07var.c", 151))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA2=                !list$1tuple3$3sTypephcharphsNodephph_end(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_52), "07var.c", 151))) ,                __freed_obj__ = 0, 
                _for_condtionalA2;                it_55=list$1tuple3$3sTypephcharphsNodephph_next(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_52), "07var.c", 151))) ,                __freed_obj__ = 0, 
                0                ){
                    multiple_assgin_var1=it_55;
                    type_58=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
                    var_name_59=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                    right_value_60=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v3);
                    __freed_obj__ = 0;
                    add_variable_to_table(var_name_59,(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(type_58)))),info);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    var__50=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 107))->lv_table,var_name_59);
                    __freed_obj__ = 0;
                    if(_if_conditional134=var__50==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_55);
                        __freed_obj__ = 0;
                        __result63__ = (_Bool)1;
                        if(type_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_59 && !__freed_obj__) { var_name_59 = come_decrement_ref_count(var_name_59, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_60 && !__freed_obj__) { right_value_60 = come_decrement_ref_count(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_52 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result63__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    left_type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(((struct sVar*)come_null_check(var__50, "07var.c", 114))->mType))));
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("07var.c", 116),((struct optional$2charphbool*)(right_value69=make_define_var(left_type_61,((struct sVar*)come_null_check(var__50, "07var.c", 116))->mCValueName,(_Bool)0,info))))));
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional135=right_value_60,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        if(_if_conditional136=!((struct sNode*)come_null_check(right_value_60, "07var.c", 122))->compile(((struct sNode*)come_null_check(right_value_60, "07var.c", 122))->_protocol_obj,info),                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            __result64__ = (_Bool)0;
                            if(type_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_59 && !__freed_obj__) { var_name_59 = come_decrement_ref_count(var_name_59, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_60 && !__freed_obj__) { right_value_60 = come_decrement_ref_count(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_52 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=get_value_from_stack(-1,info))));
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        __freed_obj__ = 0;
                        add_come_code(info,"%s=%s;\n",((struct sVar*)come_null_check(var__50, "07var.c", 125))->mCValueName,((struct CVALUE*)come_null_check(come_value_62, "07var.c", 125))->c_value);
                        __freed_obj__ = 0;
                        if(come_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    left_type2_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(left_type_61))));
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(left_type2_63, "07var.c", 129))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional139=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__50, "07var.c", 150))->mType, "07var.c", 150))->mConstant&&!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__50, "07var.c", 150))->mType, "07var.c", 150))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        if(_if_conditional140=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type2_63, "07var.c", 149))->mArrayNum, "07var.c", 149)))>0,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__50, "07var.c", 133))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 133),((struct optional$2charphbool*)(right_value72=make_type_name_string(left_type2_63,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type2_63, "07var.c", 144))->mArrayNum)),it_67=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA3=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA3;                            it_67=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_64), "07var.c", 144))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional146=!((struct sNode*)come_null_check(it_67, "07var.c", 140))->compile(((struct sNode*)come_null_check(it_67, "07var.c", 140))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional146) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=get_value_from_stack(-1,info))));
                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_70, "07var.c", 142))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_64 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__50, "07var.c", 147))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 147),((struct optional$2charphbool*)(right_value74=make_type_name_string(left_type2_63,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_59 && !__freed_obj__) { var_name_59 = come_decrement_ref_count(var_name_59, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_60 && !__freed_obj__) { right_value_60 = come_decrement_ref_count(right_value_60, ((struct sNode*)right_value_60)->finalize, ((struct sNode*)right_value_60)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_52 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            else {
                add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 153))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(type_51)))),info);
                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                var__50=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 155))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 155))->name);
                __freed_obj__ = 0;
                if(_if_conditional147=var__50==((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    var__50=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 158))->gv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 158))->name);
                    __freed_obj__ = 0;
                    if(_if_conditional148=var__50==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional148) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",((struct sStoreNode*)come_null_check(self, "07var.c", 161))->name);
                        __freed_obj__ = 0;
                        __result74__ = (_Bool)1;
                        if(type_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result74__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(((struct sVar*)come_null_check(var__50, "07var.c", 166))->mType))));
                if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional149=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_71, "07var.c", 216))->mArrayNum, "07var.c", 216)))>0,                __freed_obj__ = 0, 
                _if_conditional149) {
                    come_clear_stackframe();
                    add_come_code(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 168),((struct optional$2charphbool*)(right_value77=make_define_var(left_type_71,((struct sVar*)come_null_check(var__50, "07var.c", 168))->mCValueName,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional150=!((struct sType*)come_null_check(left_type_71, "07var.c", 188))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional150) {
                        if(_if_conditional151=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_71, "07var.c", 187))->mArrayNum, "07var.c", 187)))>0,                        __freed_obj__ = 0, 
                        _if_conditional151) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__50, "07var.c", 171))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 171),((struct optional$2charphbool*)(right_value78=make_type_name_string(left_type_71,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_72=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type_71, "07var.c", 182))->mArrayNum)),it_73=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_72), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA4=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_72), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA4;                            it_73=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_72), "07var.c", 182))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional152=!((struct sNode*)come_null_check(it_73, "07var.c", 178))->compile(((struct sNode*)come_null_check(it_73, "07var.c", 178))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional152) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=get_value_from_stack(-1,info))));
                                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_74, "07var.c", 180))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_72 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_72, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",((struct sVar*)come_null_check(var__50, "07var.c", 185))->mCValueName,((struct sVar*)come_null_check(var__50, "07var.c", 185))->mCValueName);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 190),((struct optional$2charphbool*)(right_value80=make_define_var(left_type_71,((struct sVar*)come_null_check(var__50, "07var.c", 190))->mCValueName,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    left_type2_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_type_71))));
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(left_type2_75, "07var.c", 193))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional153=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__50, "07var.c", 214))->mType, "07var.c", 214))->mConstant&&!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__50, "07var.c", 214))->mType, "07var.c", 214))->mStatic,                    __freed_obj__ = 0, 
                    _if_conditional153) {
                        if(_if_conditional154=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type2_75, "07var.c", 213))->mArrayNum, "07var.c", 213)))>0,                        __freed_obj__ = 0, 
                        _if_conditional154) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__50, "07var.c", 197))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 197),((struct optional$2charphbool*)(right_value82=make_type_name_string(left_type2_75,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_76=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(left_type2_75, "07var.c", 208))->mArrayNum)),it_77=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_76), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA5=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_76), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA5;                            it_77=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_76), "07var.c", 208))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional155=!((struct sNode*)come_null_check(it_77, "07var.c", 204))->compile(((struct sNode*)come_null_check(it_77, "07var.c", 204))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional155) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
                                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_78, "07var.c", 206))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_76 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__50, "07var.c", 211))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 211),((struct optional$2charphbool*)(right_value84=make_type_name_string(left_type2_75,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(left_type2_75 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_75, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                come_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj39=((struct CVALUE*)come_null_check(come_value_79, "07var.c", 218))->c_value;
                ((struct CVALUE*)come_null_check(come_value_79, "07var.c", 218))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s",((struct sVar*)come_null_check(var__50, "07var.c", 218))->mCValueName))));
                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj40=((struct CVALUE*)come_null_check(come_value_79, "07var.c", 219))->type;
                ((struct CVALUE*)come_null_check(come_value_79, "07var.c", 219))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(left_type_71))));
                if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_79, "07var.c", 220))->var=var__50;
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 222))->stack, "07var.c", 222)),(struct CVALUE*)come_increment_ref_count(come_value_79));
                __freed_obj__ = 0;
                if(_if_conditional159=((struct sStoreNode*)come_null_check(self, "07var.c", 227))->alloc&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type_71, "07var.c", 227))->mClass, "07var.c", 227))->mNumber&&((struct sType*)come_null_check(left_type_71, "07var.c", 227))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional159) {
                    ((struct sType*)come_null_check(((struct sVar*)come_null_check(var__50, "07var.c", 225))->mType, "07var.c", 225))->mAllocaValue=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(type_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional160=!((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 234))->right_value, "07var.c", 234))->compile(((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 234))->right_value, "07var.c", 234))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional160) {
                __result76__ = (_Bool)0;
                if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=get_value_from_stack(-1,info))));
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            right_type_84=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 236))->type;
            __freed_obj__ = 0;
            if(_if_conditional161=((struct sStoreNode*)come_null_check(self, "07var.c", 244))->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional161) {
                if(_if_conditional162=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 242))->mNoSolvedGenericsType, "07var.c", 242))->v1,                __freed_obj__ = 0, 
                _if_conditional162) {
                    right_type_84=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 240))->mNoSolvedGenericsType, "07var.c", 240))->v1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional163=((struct sStoreNode*)come_null_check(self, "07var.c", 328))->alloc,            __freed_obj__ = 0, 
            _if_conditional163) {
                come_clear_stackframe();
                var__85=optional$2sVarpbool_value((come_push_stackframe("07var.c", 245),((struct optional$2sVarpbool*)(right_value92=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 245))->lv_table, "07var.c", 245))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 245))->name)))));
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional164=var__85,                __freed_obj__ = 0, 
                _if_conditional164) {
                    err_msg(info,"Already appended this var name(%s)(2)",((struct sStoreNode*)come_null_check(self, "07var.c", 247))->name);
                    __freed_obj__ = 0;
                    __result77__ = (_Bool)0;
                    if(right_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result77__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional165=((struct sStoreNode*)come_null_check(self, "07var.c", 326))->multiple_assign,                __freed_obj__ = 0, 
                _if_conditional165) {
                    i_86=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_87=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 288))->multiple_assign)),it_90=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_87), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_87), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_90=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_87), "07var.c", 288))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional170=i_86<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 286))->mGenericsTypes, "07var.c", 286))),                        __freed_obj__ = 0, 
                        _if_conditional170) {
                            come_clear_stackframe();
                            right_type2_97=optional$2sTypephbool_value((come_push_stackframe("07var.c", 255),((struct optional$2sTypephbool*)(right_value97=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_type_84, "07var.c", 255))->mGenericsTypes,i_86)))));
                            come_pop_stackframe();
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(right_type2_97, "07var.c", 256))->mFunctionParam=(_Bool)0;
                            __freed_obj__ = 0;
                            add_variable_to_table(it_90,(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(right_type2_97)))),info);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            var__85=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 260))->lv_table,it_90);
                            __freed_obj__ = 0;
                            var_type_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(((struct sVar*)come_null_check(var__85, "07var.c", 262))->mType))));
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(var_type_98, "07var.c", 263))->mStatic=(_Bool)0;
                            __freed_obj__ = 0;
                            if(_if_conditional175=!((struct sType*)come_null_check(var_type_98, "07var.c", 284))->mConstant&&!((struct sType*)come_null_check(var_type_98, "07var.c", 284))->mStatic,                            __freed_obj__ = 0, 
                            _if_conditional175) {
                                if(_if_conditional176=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_98, "07var.c", 283))->mArrayNum, "07var.c", 283)))>0,                                __freed_obj__ = 0, 
                                _if_conditional176) {
                                    come_clear_stackframe();
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__85, "07var.c", 267))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 267),((struct optional$2charphbool*)(right_value100=make_type_name_string(var_type_98,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                    come_pop_stackframe();
                                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_99=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_98, "07var.c", 278))->mArrayNum)),it_100=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_99), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    0;                                    _for_condtionalA7=                                    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_99), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    _for_condtionalA7;                                    it_100=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_99), "07var.c", 278))) ,                                    __freed_obj__ = 0, 
                                    0                                    ){
                                        if(_if_conditional177=!((struct sNode*)come_null_check(it_100, "07var.c", 274))->compile(((struct sNode*)come_null_check(it_100, "07var.c", 274))->_protocol_obj,info),                                        __freed_obj__ = 0, 
                                        _if_conditional177) {
                                            err_msg(info,"invalid array num");
                                            __freed_obj__ = 0;
                                            exit(1);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
                                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        __freed_obj__ = 0;
                                        add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_101, "07var.c", 276))->c_value);
                                        __freed_obj__ = 0;
                                        if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_99 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    add_come_code(info,");\n");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    come_clear_stackframe();
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__85, "07var.c", 281))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 281),((struct optional$2charphbool*)(right_value102=make_type_name_string(var_type_98,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                    come_pop_stackframe();
                                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(var_type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        i_86++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_87 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional178=((struct sStoreNode*)come_null_check(self, "07var.c", 301))->type==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional178) {
                        ((struct sType*)come_null_check(right_type_84, "07var.c", 291))->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 292))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(right_type_84)))),info);
                        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=solve_generics(((struct sStoreNode*)come_null_check(self, "07var.c", 295))->type,((struct sInfo*)come_null_check(info, "07var.c", 295))->generics_type,info))));
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_102, "07var.c", 297))->mFunctionParam=(_Bool)0;
                        __freed_obj__ = 0;
                        add_variable_to_table(((struct sStoreNode*)come_null_check(self, "07var.c", 298))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(type_102)))),info);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(type_102 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    var__85=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 301))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 301))->name);
                    __freed_obj__ = 0;
                    var_type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(((struct sVar*)come_null_check(var__85, "07var.c", 303))->mType))));
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(var_type_103, "07var.c", 304))->mStatic=(_Bool)0;
                    __freed_obj__ = 0;
                    if(_if_conditional179=!((struct sType*)come_null_check(((struct sVar*)come_null_check(var__85, "07var.c", 325))->mType, "07var.c", 325))->mStatic&&!((struct sType*)come_null_check(var_type_103, "07var.c", 325))->mConstant&&list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_103, "07var.c", 325))->mArrayNum, "07var.c", 325)))==0,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        if(_if_conditional180=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_103, "07var.c", 324))->mArrayNum, "07var.c", 324)))>0,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            come_clear_stackframe();
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__85, "07var.c", 308))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 308),((struct optional$2charphbool*)(right_value107=make_type_name_string(var_type_103,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            o2_saved_104=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_103, "07var.c", 319))->mArrayNum)),it_105=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_104), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA8=                            !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_104), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA8;                            it_105=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_104), "07var.c", 319))) ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional181=!((struct sNode*)come_null_check(it_105, "07var.c", 315))->compile(((struct sNode*)come_null_check(it_105, "07var.c", 315))->_protocol_obj,info),                                __freed_obj__ = 0, 
                                _if_conditional181) {
                                    err_msg(info,"invalid array num");
                                    __freed_obj__ = 0;
                                    exit(1);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
                                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                __freed_obj__ = 0;
                                add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_106, "07var.c", 317))->c_value);
                                __freed_obj__ = 0;
                                if(come_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_104 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,");\n");
                            __freed_obj__ = 0;
                        }
                        else {
                            come_clear_stackframe();
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__85, "07var.c", 322))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 322),((struct optional$2charphbool*)(right_value109=make_type_name_string(var_type_103,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(var_type_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            current_stack_frame_struct_107=((struct sInfo*)come_null_check(info, "07var.c", 328))->current_stack_frame_struct;
            __freed_obj__ = 0;
            if(_if_conditional182=current_stack_frame_struct_107&&optional$2sVarpbool_value((come_clear_stackframe(), come_push_stackframe("07var.c", 400),__exception_result_var_a1=((struct optional$2sVarpbool*)(right_value110=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 400))->lv_table, "07var.c", 400))->mVars,((struct sStoreNode*)come_null_check(self, "07var.c", 400))->name))), come_pop_stackframe(), __exception_result_var_a1))==((void*)0),            (right_value110 && right_value110 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional182) {
                parent_var_108=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 331))->lv_table, "07var.c", 331))->mParent,((struct sStoreNode*)come_null_check(self, "07var.c", 331))->name);
                __freed_obj__ = 0;
                if(_if_conditional183=parent_var_108!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=string_operator_not_equals(((struct sVar*)come_null_check(parent_var_108, "07var.c", 397))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 397))->come_fun, "07var.c", 397))->mName),                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335))));
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        left_type_110=((struct sVar*)come_null_check(parent_var_108, "07var.c", 337))->mType;
                        __freed_obj__ = 0;
                        if(_if_conditional185=((struct sType*)come_null_check(left_type_110, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_84, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_84, "07var.c", 386))->mHeap&&((struct sType*)come_null_check(left_type_110, "07var.c", 386))->mHeap,                        __freed_obj__ = 0, 
                        _if_conditional185) {
                            c_value_111=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(parent_var_108, "07var.c", 340))->mCValueName))));
                            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            decrement_ref_count_object(((struct sVar*)come_null_check(parent_var_108, "07var.c", 341))->mType,c_value_111,info,(_Bool)0);
                            __freed_obj__ = 0;
                            if(_if_conditional186=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 368))->var,                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                if(_if_conditional187=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional187) {
                                    __dec_obj45=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 345))->var, "07var.c", 345))->mCValueName;
                                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 345))->var, "07var.c", 345))->mCValueName=((void*)0);
                                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional188=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mShare,                                    __freed_obj__ = 0, 
                                    _if_conditional188) {
                                        __dec_obj46=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 348))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 348))->c_value=(char*)come_increment_ref_count(((char*)(right_value113=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 348))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 348))->c_value,info))));
                                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional189=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 360))->var, "07var.c", 360))->mType, "07var.c", 360))->mClone,                                        __freed_obj__ = 0, 
                                        _if_conditional189) {
                                            __dec_obj47=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 351))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 351))->c_value=(char*)come_increment_ref_count(((char*)(right_value114=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 351))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 351))->c_value,info))));
                                            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj48=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 354))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 354))->c_value=(char*)come_increment_ref_count(((char*)(right_value115=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 354))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 354))->c_value,info))));
                                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional190=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 367))->type, "07var.c", 367))->mDelegate,                                __freed_obj__ = 0, 
                                _if_conditional190) {
                                }
                                else {
                                    __dec_obj49=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 365))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 365))->c_value=(char*)come_increment_ref_count(((char*)(right_value116=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 365))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 365))->c_value,info))));
                                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj50=((struct CVALUE*)come_null_check(come_value_109, "07var.c", 368))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_109, "07var.c", 368))->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_108, "07var.c", 368))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 368))->c_value))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            right_value_id_112=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 370))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional191=right_value_id_112!=-1,                            __freed_obj__ = 0, 
                            _if_conditional191) {
                                remove_object_from_right_values(right_value_id_112,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(c_value_111 && !__freed_obj__) { c_value_111 = come_decrement_ref_count(c_value_111, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional192=((struct sType*)come_null_check(left_type_110, "07var.c", 386))->mPointerNum>0&&((struct sType*)come_null_check(right_type_84, "07var.c", 386))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 386))->mClass, "07var.c", 386))->mName,"void")&&((struct sType*)come_null_check(left_type_110, "07var.c", 386))->mHeap,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                c_value_113=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(parent_var_108, "07var.c", 377))->mCValueName))));
                                if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                decrement_ref_count_object(((struct sVar*)come_null_check(parent_var_108, "07var.c", 378))->mType,c_value_113,info,(_Bool)0);
                                __freed_obj__ = 0;
                                __dec_obj51=((struct CVALUE*)come_null_check(come_value_109, "07var.c", 380))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_109, "07var.c", 380))->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_108, "07var.c", 380))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 380))->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(c_value_113 && !__freed_obj__) { c_value_113 = come_decrement_ref_count(c_value_113, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj52=((struct CVALUE*)come_null_check(come_value_109, "07var.c", 383))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_109, "07var.c", 383))->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(parent_var_108, "07var.c", 383))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 383))->c_value))));
                                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj53=((struct CVALUE*)come_null_check(come_value_109, "07var.c", 386))->type;
                        ((struct CVALUE*)come_null_check(come_value_109, "07var.c", 386))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_type_110))));
                        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(come_value_109, "07var.c", 387))->var=((void*)0);
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value123=xsprintf("\%s is assigning to",((char*)(right_value122=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 389))->name)))))),left_type_110,right_type_84,come_value_109,(_Bool)0,info);
                        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_109, "07var.c", 391))->c_value);
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 393))->stack, "07var.c", 393)),(struct CVALUE*)come_increment_ref_count(come_value_109));
                        __freed_obj__ = 0;
                        __result91__ = (_Bool)1;
                        if(come_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result91__;
                        __freed_obj__ = 0;
                        if(come_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional193=((struct sStoreNode*)come_null_check(self, "07var.c", 668))->multiple_assign,            __freed_obj__ = 0, 
            _if_conditional193) {
                __freed_obj__ = 0;
                multiple_var_name_115=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("multiple_assgin_var%d",++num_multiple_var_114))));
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 403),((struct optional$2charphbool*)(right_value125=make_define_var(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 403))->type,multiple_var_name_115,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_115,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 405))->c_value);
                __freed_obj__ = 0;
                __dec_obj54=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 407))->c_value;
                ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 407))->c_value=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(multiple_var_name_115))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                i_116=0;
                __freed_obj__ = 0;
                for(
                o2_saved_117=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(self, "07var.c", 504))->multiple_assign)),it_118=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_117), "07var.c", 504))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA9=                !list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_117), "07var.c", 504))) ,                __freed_obj__ = 0, 
                _for_condtionalA9;                it_118=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_117), "07var.c", 504))) ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional194=i_116<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 502))->mGenericsTypes, "07var.c", 502))),                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        come_clear_stackframe();
                        right_type2_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(optional$2sTypephbool_value((come_push_stackframe("07var.c", 412),((struct optional$2sTypephbool*)(right_value127=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_type_84, "07var.c", 412))->mGenericsTypes,i_116)))))))));
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        var__120=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 414))->lv_table,it_118);
                        __freed_obj__ = 0;
                        var_type_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(((struct sVar*)come_null_check(var__120, "07var.c", 416))->mType))));
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(var_type_121, "07var.c", 417))->mStatic=(_Bool)0;
                        __freed_obj__ = 0;
                        if(_if_conditional195=!((struct sType*)come_null_check(var_type_121, "07var.c", 439))->mConstant,                        __freed_obj__ = 0, 
                        _if_conditional195) {
                            if(_if_conditional196=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(var_type_121, "07var.c", 437))->mArrayNum, "07var.c", 437)))>0,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                come_clear_stackframe();
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(var__120, "07var.c", 421))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 421),((struct optional$2charphbool*)(right_value130=make_type_name_string(var_type_121,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                come_pop_stackframe();
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                for(
                                o2_saved_122=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(var_type_121, "07var.c", 432))->mArrayNum)),it_123=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_122), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA10=                                !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_122), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA10;                                it_123=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_122), "07var.c", 432))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional197=!((struct sNode*)come_null_check(it_123, "07var.c", 428))->compile(((struct sNode*)come_null_check(it_123, "07var.c", 428))->_protocol_obj,info),                                    __freed_obj__ = 0, 
                                    _if_conditional197) {
                                        err_msg(info,"invalid array num");
                                        __freed_obj__ = 0;
                                        exit(1);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
                                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    __freed_obj__ = 0;
                                    add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(come_value_124, "07var.c", 430))->c_value);
                                    __freed_obj__ = 0;
                                    if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_122 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                add_come_code(info,");\n");
                                __freed_obj__ = 0;
                            }
                            else {
                                come_clear_stackframe();
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(var__120, "07var.c", 435))->mCValueName,optional$2charphbool_expect((come_push_stackframe("07var.c", 435),((struct optional$2charphbool*)(right_value132=make_type_name_string(var_type_121,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                                come_pop_stackframe();
                                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        left_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(((struct sVar*)come_null_check(var__120, "07var.c", 439))->mType))));
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        right_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 441))));
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj55=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 443))->c_value;
                        ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 443))->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s->v%d",((struct CVALUE*)come_null_check(right_value_83, "07var.c", 443))->c_value,i_116+1))));
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj56=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 444))->type;
                        ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 444))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(right_type2_119))));
                        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 445))->var=((void*)0);
                        __freed_obj__ = 0;
                        come_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 447))));
                        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value139=xsprintf("\%s is assining to}",((char*)(right_value138=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 449))->name)))))),left_type_125,right_type2_119,come_value_127,(_Bool)0,info);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional198=((struct sType*)come_null_check(right_type2_119, "07var.c", 490))->mHeap&&((struct sType*)come_null_check(left_type_125, "07var.c", 490))->mHeap&&((struct sType*)come_null_check(left_type_125, "07var.c", 490))->mPointerNum>0&&((struct sType*)come_null_check(right_type2_119, "07var.c", 490))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional198) {
                            if(_if_conditional199=((struct sStoreNode*)come_null_check(self, "07var.c", 481))->alloc,                            __freed_obj__ = 0, 
                            _if_conditional199) {
                                if(_if_conditional200=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 478))->var,                                __freed_obj__ = 0, 
                                _if_conditional200) {
                                    if(_if_conditional201=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional201) {
                                        __dec_obj57=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 455))->var, "07var.c", 455))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 455))->var, "07var.c", 455))->mCValueName=((void*)0);
                                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional202=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional202) {
                                            __dec_obj58=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 458))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 458))->c_value=(char*)come_increment_ref_count(((char*)(right_value140=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 458))->type,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 458))->c_value,info))));
                                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional203=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 470))->var, "07var.c", 470))->mType, "07var.c", 470))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional203) {
                                                __dec_obj59=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 461))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 461))->c_value=(char*)come_increment_ref_count(((char*)(right_value141=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 461))->type,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 461))->c_value,info))));
                                                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj60=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 464))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 464))->c_value=(char*)come_increment_ref_count(((char*)(right_value142=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 464))->type,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 464))->c_value,info))));
                                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional204=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 477))->type, "07var.c", 477))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional204) {
                                    }
                                    else {
                                        __dec_obj61=((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 475))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 475))->type,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 475))->c_value,info))));
                                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj62=((struct CVALUE*)come_null_check(come_value_127, "07var.c", 478))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_127, "07var.c", 478))->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s=%s",((struct sVar*)come_null_check(var__120, "07var.c", 478))->mCValueName,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 478))->c_value))));
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_128=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 481))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional205=right_value_id_128!=-1,                            __freed_obj__ = 0, 
                            _if_conditional205) {
                                remove_object_from_right_values(right_value_id_128,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj63=((struct CVALUE*)come_null_check(come_value_127, "07var.c", 488))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_127, "07var.c", 488))->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s=%s",((struct sVar*)come_null_check(var__120, "07var.c", 488))->mCValueName,((struct CVALUE*)come_null_check(right_value2_126, "07var.c", 488))->c_value))));
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj64=((struct CVALUE*)come_null_check(come_value_127, "07var.c", 490))->type;
                        ((struct CVALUE*)come_null_check(come_value_127, "07var.c", 490))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(left_type_125))));
                        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct CVALUE*)come_null_check(come_value_127, "07var.c", 491))->var=var__120;
                        __freed_obj__ = 0;
                        if(_if_conditional206=((struct sStoreNode*)come_null_check(self, "07var.c", 500))->alloc,                        __freed_obj__ = 0, 
                        _if_conditional206) {
                            come_clear_stackframe();
                            add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 494),((struct optional$2charphbool*)(right_value147=make_define_var(left_type_125,((struct sVar*)come_null_check(var__120, "07var.c", 494))->mCValueName,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_127, "07var.c", 495))->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_127, "07var.c", 498))->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(right_type2_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_121 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_126, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    i_116++;
                    __freed_obj__ = 0;
                }
                if(o2_saved_117 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(multiple_var_name_115 && !__freed_obj__) { multiple_var_name_115 = come_decrement_ref_count(multiple_var_name_115, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__129=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 506))->lv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 506))->name);
                __freed_obj__ = 0;
                if(_if_conditional207=var__129==((void*)0),                __freed_obj__ = 0, 
                _if_conditional207) {
                    var__129=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 509))->gv_table,((struct sStoreNode*)come_null_check(self, "07var.c", 509))->name);
                    __freed_obj__ = 0;
                    if(_if_conditional208=var__129==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional208) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",((struct sStoreNode*)come_null_check(self, "07var.c", 512))->name);
                        __freed_obj__ = 0;
                        __result92__ = (_Bool)1;
                        if(right_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result92__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional209=((struct sVar*)come_null_check(var__129, "07var.c", 520))->mType==((void*)0),                __freed_obj__ = 0, 
                _if_conditional209) {
                    __dec_obj65=((struct sVar*)come_null_check(var__129, "07var.c", 518))->mType;
                    ((struct sVar*)come_null_check(var__129, "07var.c", 518))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(right_type_84))));
                    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                left_type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(((struct sVar*)come_null_check(var__129, "07var.c", 520))->mType))));
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 522))));
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional210=((struct sType*)come_null_check(((struct sVar*)come_null_check(var__129, "07var.c", 659))->mType, "07var.c", 659))->mStatic,                __freed_obj__ = 0, 
                _if_conditional210) {
                    check_assign_type(((char*)(right_value152=xsprintf("\%s is assining to",((char*)(right_value151=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 525))->name)))))),left_type_130,right_type_84,right_value_83,(_Bool)0,info);
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 526),((struct optional$2charphbool*)(right_value153=make_define_var(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 526))->mCValueName,(_Bool)0,info))))),((struct CVALUE*)come_null_check(right_value_83, "07var.c", 526))->c_value);
                    come_pop_stackframe();
                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj66=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 527))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 527))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(""))));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 529))->stack, "07var.c", 529)),(struct CVALUE*)come_increment_ref_count(come_value_131));
                    __freed_obj__ = 0;
                    transpiler_clear_last_code(info);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional211=((struct sType*)come_null_check(((struct sVar*)come_null_check(var__129, "07var.c", 659))->mType, "07var.c", 659))->mConstant,                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        check_assign_type(((char*)(right_value156=xsprintf("\%s is assining to",((char*)(right_value155=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 534))->name)))))),left_type_130,right_type_84,right_value_83,(_Bool)0,info);
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional212=((struct sStoreNode*)come_null_check(self, "07var.c", 541))->alloc,                        __freed_obj__ = 0, 
                        _if_conditional212) {
                            come_clear_stackframe();
                            add_come_code_at_function_head(info,"%s=%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 536),((struct optional$2charphbool*)(right_value157=make_define_var(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 536))->mCValueName,(_Bool)0,info))))),((struct CVALUE*)come_null_check(right_value_83, "07var.c", 536))->c_value);
                            come_pop_stackframe();
                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",((struct sVar*)come_null_check(var__129, "07var.c", 539))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 539))->c_value);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj67=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 541))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 541))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(""))));
                        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 543))->stack, "07var.c", 543)),(struct CVALUE*)come_increment_ref_count(come_value_131));
                        __freed_obj__ = 0;
                        transpiler_clear_last_code(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional213=((struct sType*)come_null_check(right_type_84, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_130, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_130, "07var.c", 659))->mPointerNum>0&&((struct sType*)come_null_check(right_type_84, "07var.c", 659))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional213) {
                            check_assign_type(((char*)(right_value160=xsprintf("\%s is assining to",((char*)(right_value159=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 549))->name)))))),left_type_130,right_type_84,right_value_83,(_Bool)0,info);
                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional214=((struct sStoreNode*)come_null_check(self, "07var.c", 607))->alloc,                            __freed_obj__ = 0, 
                            _if_conditional214) {
                                if(_if_conditional215=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 576))->var,                                __freed_obj__ = 0, 
                                _if_conditional215) {
                                    if(_if_conditional216=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional216) {
                                        __dec_obj68=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 553))->var, "07var.c", 553))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 553))->var, "07var.c", 553))->mCValueName=((void*)0);
                                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional217=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional217) {
                                            __dec_obj69=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 556))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 556))->c_value=(char*)come_increment_ref_count(((char*)(right_value161=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 556))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 556))->c_value,info))));
                                            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional218=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 568))->var, "07var.c", 568))->mType, "07var.c", 568))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional218) {
                                                __dec_obj70=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 559))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 559))->c_value=(char*)come_increment_ref_count(((char*)(right_value162=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 559))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 559))->c_value,info))));
                                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj71=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 562))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 562))->c_value=(char*)come_increment_ref_count(((char*)(right_value163=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 562))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 562))->c_value,info))));
                                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional219=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 575))->type, "07var.c", 575))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional219) {
                                    }
                                    else {
                                        __dec_obj72=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 573))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 573))->c_value=(char*)come_increment_ref_count(((char*)(right_value164=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 573))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 573))->c_value,info))));
                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj73=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 576))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 576))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("%s=%s",((struct sVar*)come_null_check(var__129, "07var.c", 576))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 576))->c_value))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 579))->mCValueName,info,(_Bool)0);
                                __freed_obj__ = 0;
                                if(_if_conditional220=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 605))->var,                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    if(_if_conditional221=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional221) {
                                        __dec_obj74=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 582))->var, "07var.c", 582))->mCValueName;
                                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 582))->var, "07var.c", 582))->mCValueName=((void*)0);
                                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional222=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional222) {
                                            __dec_obj75=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 585))->c_value;
                                            ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 585))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 585))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 585))->c_value,info))));
                                            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional223=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 597))->var, "07var.c", 597))->mType, "07var.c", 597))->mClone,                                            __freed_obj__ = 0, 
                                            _if_conditional223) {
                                                __dec_obj76=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 588))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 588))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 588))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 588))->c_value,info))));
                                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 591))->c_value;
                                                ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 591))->c_value=(char*)come_increment_ref_count(((char*)(right_value168=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 591))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 591))->c_value,info))));
                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional224=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 604))->type, "07var.c", 604))->mDelegate,                                    __freed_obj__ = 0, 
                                    _if_conditional224) {
                                    }
                                    else {
                                        __dec_obj78=((struct CVALUE*)come_null_check(right_value_83, "07var.c", 602))->c_value;
                                        ((struct CVALUE*)come_null_check(right_value_83, "07var.c", 602))->c_value=(char*)come_increment_ref_count(((char*)(right_value169=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 602))->type,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 602))->c_value,info))));
                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj79=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 605))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 605))->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s=%s",((struct sVar*)come_null_check(var__129, "07var.c", 605))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 605))->c_value))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_value_id_132=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_83, "07var.c", 607))->c_value));
                            __freed_obj__ = 0;
                            if(_if_conditional225=right_value_id_132!=-1,                            __freed_obj__ = 0, 
                            _if_conditional225) {
                                remove_object_from_right_values(right_value_id_132,info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj80=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 612))->type;
                            ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 612))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_type_130))));
                            if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 613))->var=var__129;
                            __freed_obj__ = 0;
                            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 615))->stack, "07var.c", 615)),(struct CVALUE*)come_increment_ref_count(come_value_131));
                            __freed_obj__ = 0;
                            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_131, "07var.c", 617))->c_value);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional226=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 659))->mClass, "07var.c", 659))->mName,"void")&&((struct sType*)come_null_check(left_type_130, "07var.c", 659))->mHeap&&((struct sType*)come_null_check(left_type_130, "07var.c", 659))->mPointerNum>0&&((struct sType*)come_null_check(right_type_84, "07var.c", 659))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional226) {
                                check_assign_type(((char*)(right_value173=xsprintf("\%s is assining to",((char*)(right_value172=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 621))->name)))))),left_type_130,right_type_84,right_value_83,(_Bool)0,info);
                                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional227=((struct sStoreNode*)come_null_check(self, "07var.c", 629))->alloc,                                __freed_obj__ = 0, 
                                _if_conditional227) {
                                    __dec_obj81=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 623))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 623))->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s=%s",((struct sVar*)come_null_check(var__129, "07var.c", 623))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 623))->c_value))));
                                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 626))->mCValueName,info,(_Bool)0);
                                    __freed_obj__ = 0;
                                    __dec_obj82=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 627))->c_value;
                                    ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 627))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s=%s",((struct sVar*)come_null_check(var__129, "07var.c", 627))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 627))->c_value))));
                                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj83=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 629))->type;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 629))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(left_type_130))));
                                if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 630))->var=var__129;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 632))->stack, "07var.c", 632)),(struct CVALUE*)come_increment_ref_count(come_value_131));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_131, "07var.c", 634))->c_value);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional228=((struct sType*)come_null_check(left_type_130, "07var.c", 649))->mHeap&&!((struct sType*)come_null_check(right_type_84, "07var.c", 649))->mHeap,                                __freed_obj__ = 0, 
                                _if_conditional228) {
                                    if(_if_conditional229=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_84, "07var.c", 647))->mClass, "07var.c", 647))->mName,"void")&&((struct sType*)come_null_check(right_type_84, "07var.c", 647))->mPointerNum==1,                                    __freed_obj__ = 0, 
                                    _if_conditional229) {
                                    }
                                    else {
                                        if(_if_conditional230=!((struct sType*)come_null_check(right_type_84, "07var.c", 646))->mDelegate&&!((struct sType*)come_null_check(right_type_84, "07var.c", 646))->mShare,                                        __freed_obj__ = 0, 
                                        _if_conditional230) {
                                            err_msg(info,"require right value as heap object(%s)",((struct sStoreNode*)come_null_check(self, "07var.c", 643))->name);
                                            __freed_obj__ = 0;
                                            __result93__ = (_Bool)0;
                                            if(left_type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result93__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                check_assign_type(((char*)(right_value178=xsprintf("\%s is assining to",((char*)(right_value177=string_to_string(((struct sStoreNode*)come_null_check(self, "07var.c", 649))->name)))))),left_type_130,right_type_84,right_value_83,(_Bool)0,info);
                                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                __dec_obj84=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 650))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 650))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s=%s",((struct sVar*)come_null_check(var__129, "07var.c", 650))->mCValueName,((struct CVALUE*)come_null_check(right_value_83, "07var.c", 650))->c_value))));
                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                __dec_obj85=((struct CVALUE*)come_null_check(come_value_131, "07var.c", 651))->type;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 651))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(left_type_130))));
                                if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct CVALUE*)come_null_check(come_value_131, "07var.c", 652))->var=var__129;
                                __freed_obj__ = 0;
                                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 654))->stack, "07var.c", 654)),(struct CVALUE*)come_increment_ref_count(come_value_131));
                                __freed_obj__ = 0;
                                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_131, "07var.c", 656))->c_value);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional231=((struct sStoreNode*)come_null_check(self, "07var.c", 667))->alloc&&!((struct sType*)come_null_check(left_type_130, "07var.c", 667))->mConstant&&!((struct sType*)come_null_check(left_type_130, "07var.c", 667))->mStatic,                __freed_obj__ = 0, 
                _if_conditional231) {
                    if(_if_conditional232=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_130, "07var.c", 666))->mArrayNum, "07var.c", 666)))>0,                    __freed_obj__ = 0, 
                    _if_conditional232) {
                        come_clear_stackframe();
                        add_come_code(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 661),((struct optional$2charphbool*)(right_value181=make_define_var(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 661))->mCValueName,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        come_clear_stackframe();
                        add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("07var.c", 664),((struct optional$2charphbool*)(right_value182=make_define_var(left_type_130,((struct sVar*)come_null_check(var__129, "07var.c", 664))->mCValueName,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(left_type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(right_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result94__ = (_Bool)1;
    if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(array_initializer_40 && !__freed_obj__) { array_initializer_40 = come_decrement_ref_count(array_initializer_40, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional9;
_Bool _if_conditional116;
void* right_value51;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional118;
void* right_value52;
void* right_value53;
struct optional$2sVarpbool* __result44__;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value54;
void* right_value55;
struct optional$2sVarpbool* __result45__;
void* right_value56;
void* right_value57;
struct optional$2sVarpbool* __result46__;
void* right_value58;
void* right_value59;
struct optional$2sVarpbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_41,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_42=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_43=hash_42;
            __freed_obj__ = 0;
            while(_while_condtional9=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional116=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_43],                __freed_obj__ = 0, 
                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value51=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_43], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional118) {
                        __result44__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value53=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value52=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_43],(_Bool)1)));
                        if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result44__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_43++;
                    __freed_obj__ = 0;
                    if(_if_conditional119=it_43>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional119) {
                        it_43=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional120=it_43==hash_42,                        __freed_obj__ = 0, 
                        _if_conditional120) {
                            __result45__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value55=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value54=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_41,(_Bool)0))));
                            if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result45__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result46__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value57=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value56=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_41,(_Bool)0))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result47__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value59=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value58=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_41,(_Bool)0))));
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
_Bool default_value_44;
_Bool __result41__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(_Bool));
                        if(_if_conditional117=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional117) {
                            __freed_obj__ = 0;
                            memset(&default_value_44,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result41__ = default_value_44;
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result42__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result42__;
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
struct optional$2sVarpbool* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result43__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result43__;
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
_Bool _if_conditional121;
struct sVar* default_value_45;
struct sVar* __result48__;
struct sVar* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_45, 0, sizeof(struct sVar*));
            if(_if_conditional121=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __freed_obj__ = 0;
                memset(&default_value_45,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result48__ = __result_obj__ = default_value_45;
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            else {
                __result49__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
char* default_value_49;
char* __result52__;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_49, 0, sizeof(char*));
            if(_if_conditional124=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional124) {
                __freed_obj__ = 0;
                memset(&default_value_49,0,sizeof(char*));
                __freed_obj__ = 0;
                __result52__ = __result_obj__ = default_value_49;
                __freed_obj__ = 0;
                return __result52__;
                __freed_obj__ = 0;
            }
            else {
                __result53__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional125=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional125) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional130;
struct tuple3$3sTypephcharphsNodeph* result_53;
struct tuple3$3sTypephcharphsNodeph* __result56__;
_Bool _if_conditional131;
struct tuple3$3sTypephcharphsNodeph* __result57__;
struct tuple3$3sTypephcharphsNodeph* result_54;
struct tuple3$3sTypephcharphsNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_53, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_54, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional130=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional130) {
                        __freed_obj__ = 0;
                        memset(&result_53,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = result_53;
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional131=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 342))->it,                    __freed_obj__ = 0, 
                    _if_conditional131) {
                        __result57__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_54,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = result_54;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result59__ = self==((void*)0)||((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional132;
struct tuple3$3sTypephcharphsNodeph* result_56;
struct tuple3$3sTypephcharphsNodeph* __result60__;
_Bool _if_conditional133;
struct tuple3$3sTypephcharphsNodeph* __result61__;
struct tuple3$3sTypephcharphsNodeph* result_57;
struct tuple3$3sTypephcharphsNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_56, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_57, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional132=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        __freed_obj__ = 0;
                        memset(&result_56,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __freed_obj__ = 0;
                        __result60__ = __result_obj__ = result_56;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional133=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 360))->it,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __result61__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_57,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __freed_obj__ = 0;
                    __result62__ = __result_obj__ = result_57;
                    __freed_obj__ = 0;
                    return __result62__;
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional137=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional137) {
                                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional138=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional138) {
                                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result65__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                            __freed_obj__ = 0;
                            return __result65__;
                            __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional141=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                                __freed_obj__ = 0, 
                                _if_conditional141) {
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
                                __result66__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                                __freed_obj__ = 0;
                                return __result66__;
                                __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional142;
struct sNode* result_65;
struct sNode* __result67__;
_Bool _if_conditional143;
struct sNode* __result68__;
struct sNode* result_66;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
                                if(_if_conditional142=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional142) {
                                    __freed_obj__ = 0;
                                    memset(&result_65,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result67__ = __result_obj__ = result_65;
                                    __freed_obj__ = 0;
                                    return __result67__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
                                __freed_obj__ = 0;
                                if(_if_conditional143=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,                                __freed_obj__ = 0, 
                                _if_conditional143) {
                                    __result68__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                    __freed_obj__ = 0;
                                    return __result68__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_66,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result69__ = __result_obj__ = result_66;
                                __freed_obj__ = 0;
                                return __result69__;
                                __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __result70__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                __freed_obj__ = 0;
                                return __result70__;
                                __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional144;
struct sNode* result_68;
struct sNode* __result71__;
_Bool _if_conditional145;
struct sNode* __result72__;
struct sNode* result_69;
struct sNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
                                if(_if_conditional144=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional144) {
                                    __freed_obj__ = 0;
                                    memset(&result_68,0,sizeof(struct sNode*));
                                    __freed_obj__ = 0;
                                    __result71__ = __result_obj__ = result_68;
                                    __freed_obj__ = 0;
                                    return __result71__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                __freed_obj__ = 0;
                                if(_if_conditional145=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,                                __freed_obj__ = 0, 
                                _if_conditional145) {
                                    __result72__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                    __freed_obj__ = 0;
                                    return __result72__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&result_69,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result73__ = __result_obj__ = result_69;
                                __freed_obj__ = 0;
                                return __result73__;
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional156;
void* right_value88;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj41;
_Bool _if_conditional158;
void* right_value89;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj42;
void* right_value90;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value89, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional156=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_80, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_80, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj41=((struct list_item$1CVALUEph*)come_null_check(litem_80, "./comelang2.h", 276))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(litem_80, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_80;
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_80;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional158=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional158) {
                            litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_81, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_81, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj42=((struct list_item$1CVALUEph*)come_null_check(litem_81, "./comelang2.h", 286))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_81, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_81;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_81;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_82, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_82, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj43=((struct list_item$1CVALUEph*)come_null_check(litem_82, "./comelang2.h", 296))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(litem_82, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_82;
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_82;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result75__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result75__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional157=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional157) {
                                if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional166;
char* result_88;
char* __result78__;
_Bool _if_conditional167;
char* __result79__;
char* result_89;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_88, 0, sizeof(char*));
memset(&result_89, 0, sizeof(char*));
                        if(_if_conditional166=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            __freed_obj__ = 0;
                            memset(&result_88,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result78__ = __result_obj__ = result_88;
                            __freed_obj__ = 0;
                            return __result78__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional167=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional167) {
                            __result79__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result79__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_89,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result80__ = __result_obj__ = result_89;
                        __freed_obj__ = 0;
                        return __result80__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result81__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional168;
char* result_91;
char* __result82__;
_Bool _if_conditional169;
char* __result83__;
char* result_92;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_91, 0, sizeof(char*));
memset(&result_92, 0, sizeof(char*));
                        if(_if_conditional168=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional168) {
                            __freed_obj__ = 0;
                            memset(&result_91,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result82__ = __result_obj__ = result_91;
                            __freed_obj__ = 0;
                            return __result82__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional169=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional169) {
                            __result83__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result83__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_92,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result84__ = __result_obj__ = result_92;
                        __freed_obj__ = 0;
                        return __result84__;
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result85__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                            __freed_obj__ = 0;
                            return __result85__;
                            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional171;
struct list_item$1sTypeph* it_93;
int i_94;
_Bool _while_condtional10;
_Bool _if_conditional172;
void* right_value93;
void* right_value94;
struct optional$2sTypephbool* __result87__;
struct sType* default_value_95;
void* right_value95;
void* right_value96;
struct optional$2sTypephbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_93, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_94, 0, sizeof(int));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&default_value_95, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
                                if(_if_conditional171=position<0,                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_93=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                                __freed_obj__ = 0;
                                i_94=0;
                                __freed_obj__ = 0;
                                while(_while_condtional10=it_93!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional10) {
                                    if(_if_conditional172=position==i_94,                                    __freed_obj__ = 0, 
                                    _if_conditional172) {
                                        __result87__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value94=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value93=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_93, "./comelang2.h", 742))->item),(_Bool)1)));
                                        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result87__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_93=((struct list_item$1sTypeph*)come_null_check(it_93, "./comelang2.h", 744))->next;
                                    __freed_obj__ = 0;
                                    i_94++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                memset(&default_value_95,0,sizeof(struct sType*));
                                __freed_obj__ = 0;
                                __result88__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value96=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value95=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_95),(_Bool)0))));
                                if(default_value_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result88__;
                                __freed_obj__ = 0;
                                if(default_value_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj44;
struct optional$2sTypephbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            __dec_obj44=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                            __freed_obj__ = 0;
                                            __result86__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result86__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional173=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional173) {
                                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional174;
struct sType* default_value_96;
struct sType* __result89__;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_96, 0, sizeof(struct sType*));
                                if(_if_conditional174=self==((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional174) {
                                    __freed_obj__ = 0;
                                    memset(&default_value_96,0,sizeof(struct sType*));
                                    __freed_obj__ = 0;
                                    __result89__ = __result_obj__ = default_value_96;
                                    __freed_obj__ = 0;
                                    return __result89__;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result90__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                    __freed_obj__ = 0;
                                    return __result90__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = ((struct sStoreNode*)come_null_check(self, "07var.c", 675))->sline;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value183;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value183=__builtin_string(((struct sStoreNode*)come_null_check(self, "07var.c", 680))->sname)));
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value184;
void* right_value185;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value194;
struct sNode* result_134;
struct sNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 685);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value185=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value184=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 685)))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_134=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=_inf_value1)));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = result_134;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_134 && !__freed_obj__) { result_134 = come_decrement_ref_count(result_134, ((struct sNode*)result_134)->finalize, ((struct sNode*)result_134)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_134 && !__freed_obj__) { result_134 = come_decrement_ref_count(result_134, ((struct sNode*)result_134)->finalize, ((struct sNode*)result_134)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value195;
char* __dec_obj93;
void* right_value196;
char* __dec_obj94;
struct sLoadNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    __dec_obj93=((struct sLoadNode*)come_null_check(self, "07var.c", 701))->name;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 701))->name=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(name))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 703))->sline=((struct sInfo*)come_null_check(info, "07var.c", 703))->sline;
    __freed_obj__ = 0;
    __dec_obj94=((struct sLoadNode*)come_null_check(self, "07var.c", 704))->sname;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 704))->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 704))->sname))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

char* sLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value197;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sLoadNode")));
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* current_stack_frame_struct_135;
void* right_value198;
struct optional$2sVarpbool* __exception_result_var_a2;
_Bool _if_conditional252;
struct sVar* parent_var_136;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value199;
struct CVALUE* come_value_137;
struct sType* type_138;
void* right_value200;
char* __dec_obj95;
void* right_value201;
struct sType* __dec_obj96;
_Bool __result103__;
struct sVar* var__139;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value211;
struct sFun* fun_144;
_Bool _if_conditional262;
void* right_value212;
struct CVALUE* come_value_145;
void* right_value213;
char* __dec_obj97;
struct sType* __dec_obj98;
_Bool __result111__;
_Bool __result112__;
void* right_value214;
struct CVALUE* come_value_146;
void* right_value215;
char* __dec_obj99;
void* right_value216;
struct sType* __dec_obj100;
_Bool _if_conditional263;
void* right_value217;
struct sType* __dec_obj101;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_135, 0, sizeof(struct sClass*));
memset(&right_value198, 0, sizeof(void*));
memset(&parent_var_136, 0, sizeof(struct sVar*));
memset(&right_value199, 0, sizeof(void*));
memset(&come_value_137, 0, sizeof(struct CVALUE*));
memset(&type_138, 0, sizeof(struct sType*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&var__139, 0, sizeof(struct sVar*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_144, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_145, 0, sizeof(struct CVALUE*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&come_value_146, 0, sizeof(struct CVALUE*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
    current_stack_frame_struct_135=((struct sInfo*)come_null_check(info, "07var.c", 721))->current_stack_frame_struct;
    __freed_obj__ = 0;
    if(_if_conditional252=current_stack_frame_struct_135&&optional$2sVarpbool_value((come_clear_stackframe(), come_push_stackframe("07var.c", 746),__exception_result_var_a2=((struct optional$2sVarpbool*)(right_value198=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 746))->lv_table, "07var.c", 746))->mVars,((struct sLoadNode*)come_null_check(self, "07var.c", 746))->name))), come_pop_stackframe(), __exception_result_var_a2))==((void*)0),    (right_value198 && right_value198 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sVarpboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional252) {
        parent_var_136=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 724))->lv_table, "07var.c", 724))->mParent,((struct sLoadNode*)come_null_check(self, "07var.c", 724))->name);
        __freed_obj__ = 0;
        if(_if_conditional253=parent_var_136!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional253) {
            if(_if_conditional254=string_operator_not_equals(((struct sVar*)come_null_check(parent_var_136, "07var.c", 743))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 743))->come_fun, "07var.c", 743))->mName),            __freed_obj__ = 0, 
            _if_conditional254) {
                come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 728))));
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                type_138=((struct sVar*)come_null_check(parent_var_136, "07var.c", 730))->mType;
                __freed_obj__ = 0;
                __dec_obj95=((struct CVALUE*)come_null_check(come_value_137, "07var.c", 732))->c_value;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 732))->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("(*(parent->%s))",((struct sVar*)come_null_check(parent_var_136, "07var.c", 732))->mCValueName))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj96=((struct CVALUE*)come_null_check(come_value_137, "07var.c", 734))->type;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 734))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(type_138))));
                if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_137, "07var.c", 735))->var=((void*)0);
                __freed_obj__ = 0;
                add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_137, "07var.c", 737))->c_value);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 739))->stack, "07var.c", 739)),(struct CVALUE*)come_increment_ref_count(come_value_137));
                __freed_obj__ = 0;
                __result103__ = (_Bool)1;
                if(come_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
                if(come_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var__139=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 746))->lv_table,((struct sLoadNode*)come_null_check(self, "07var.c", 746))->name);
    __freed_obj__ = 0;
    if(_if_conditional255=var__139==((void*)0),    __freed_obj__ = 0, 
    _if_conditional255) {
        var__139=get_variable_from_table(((struct sInfo*)come_null_check(info, "07var.c", 749))->gv_table,((struct sLoadNode*)come_null_check(self, "07var.c", 749))->name);
        __freed_obj__ = 0;
        if(_if_conditional256=var__139==((void*)0),        __freed_obj__ = 0, 
        _if_conditional256) {
            come_clear_stackframe();
            fun_144=optional$2sFunpbool_value((come_push_stackframe("07var.c", 752),((struct optional$2sFunpbool*)(right_value211=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 752))->funcs,((struct sLoadNode*)come_null_check(self, "07var.c", 752))->name)))));
            come_pop_stackframe();
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional262=fun_144,            __freed_obj__ = 0, 
            _if_conditional262) {
                come_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 755))));
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj97=((struct CVALUE*)come_null_check(come_value_145, "07var.c", 757))->c_value;
                ((struct CVALUE*)come_null_check(come_value_145, "07var.c", 757))->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s",((struct sFun*)come_null_check(fun_144, "07var.c", 757))->mName))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj98=((struct CVALUE*)come_null_check(come_value_145, "07var.c", 758))->type;
                ((struct CVALUE*)come_null_check(come_value_145, "07var.c", 758))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(fun_144, "07var.c", 758))->mLambdaType);
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_145, "07var.c", 759))->var=((void*)0);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 761))->stack, "07var.c", 761)),(struct CVALUE*)come_increment_ref_count(come_value_145));
                __freed_obj__ = 0;
                __result111__ = (_Bool)1;
                if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result111__;
                __freed_obj__ = 0;
                if(come_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",((struct sLoadNode*)come_null_check(self, "07var.c", 766))->name);
                __freed_obj__ = 0;
                __result112__ = (_Bool)1;
                __freed_obj__ = 0;
                return __result112__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 772))));
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj99=((struct CVALUE*)come_null_check(come_value_146, "07var.c", 773))->c_value;
    ((struct CVALUE*)come_null_check(come_value_146, "07var.c", 773))->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s",((struct sVar*)come_null_check(var__139, "07var.c", 773))->mCValueName))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj100=((struct CVALUE*)come_null_check(come_value_146, "07var.c", 774))->type;
    ((struct CVALUE*)come_null_check(come_value_146, "07var.c", 774))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(((struct sVar*)come_null_check(var__139, "07var.c", 774))->mType))));
    if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_146, "07var.c", 775))->var=var__139;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 777))->stack, "07var.c", 777)),(struct CVALUE*)come_increment_ref_count(come_value_146));
    __freed_obj__ = 0;
    if(_if_conditional263=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 787))->type, "07var.c", 787))->mArrayNum, "07var.c", 787)))==1,    __freed_obj__ = 0, 
    _if_conditional263) {
        __dec_obj101=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 780))->type, "07var.c", 780))->mOriginalLoadVarType, "07var.c", 780))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 780))->type, "07var.c", 780))->mOriginalLoadVarType, "07var.c", 780))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 780))->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 782))->type, "07var.c", 782))->mArrayNum, "07var.c", 782)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 783))->type, "07var.c", 783))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 784))->type, "07var.c", 784))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "07var.c", 784))->type, "07var.c", 784))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result114__ = (_Bool)1;
    if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
    if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_140;
unsigned int hash_141;
unsigned int it_142;
_Bool _while_condtional11;
_Bool _if_conditional257;
void* right_value202;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional258;
void* right_value203;
void* right_value204;
struct optional$2sFunpbool* __result105__;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value205;
void* right_value206;
struct optional$2sFunpbool* __result106__;
void* right_value207;
void* right_value208;
struct optional$2sFunpbool* __result107__;
void* right_value209;
void* right_value210;
struct optional$2sFunpbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_140, 0, sizeof(struct sFun*));
memset(&hash_141, 0, sizeof(unsigned int));
memset(&it_142, 0, sizeof(unsigned int));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_140,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_141=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_142=hash_141;
                __freed_obj__ = 0;
                while(_while_condtional11=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional11) {
                    if(_if_conditional257=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_142],                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        if(_if_conditional258=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value202=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_142], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                        (right_value202 && right_value202 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional258) {
                            __result105__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value204=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value203=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_142],(_Bool)1)));
                            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result105__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_142++;
                        __freed_obj__ = 0;
                        if(_if_conditional259=it_142>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional259) {
                            it_142=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional260=it_142==hash_141,                            __freed_obj__ = 0, 
                            _if_conditional260) {
                                __result106__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value206=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value205=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_140,(_Bool)0))));
                                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result106__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result107__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value208=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value207=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_140,(_Bool)0))));
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result107__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result108__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value210=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value209=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_140,(_Bool)0))));
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result108__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result104__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result104__;
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
_Bool _if_conditional261;
struct sFun* default_value_143;
struct sFun* __result109__;
struct sFun* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_143, 0, sizeof(struct sFun*));
                if(_if_conditional261=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional261) {
                    __freed_obj__ = 0;
                    memset(&default_value_143,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result109__ = __result_obj__ = default_value_143;
                    __freed_obj__ = 0;
                    return __result109__;
                    __freed_obj__ = 0;
                }
                else {
                    __result110__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result110__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_148;
struct list$1sNodeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_148, 0, sizeof(struct list_item$1sNodeph*));
            it_147=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional12=it_147!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                prev_it_148=it_147;
                __freed_obj__ = 0;
                it_147=((struct list_item$1sNodeph*)come_null_check(it_147, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_148 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result113__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = ((struct sLoadNode*)come_null_check(self, "07var.c", 792))->sline;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value218;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
    __result116__ = __result_obj__ = ((char*)(right_value218=__builtin_string(((struct sLoadNode*)come_null_check(self, "07var.c", 797))->sname)));
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value219;
void* right_value220;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value224;
struct sNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 802);
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value220=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value219=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 802)))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result119__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value225;
char* __dec_obj104;
void* right_value226;
char* __dec_obj105;
struct sFunLoadNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
    __dec_obj104=((struct sFunLoadNode*)come_null_check(self, "07var.c", 814))->name;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 814))->name=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(name))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 816))->sline=((struct sInfo*)come_null_check(info, "07var.c", 816))->sline;
    __freed_obj__ = 0;
    __dec_obj105=((struct sFunLoadNode*)come_null_check(self, "07var.c", 817))->sname;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 817))->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(((struct sInfo*)come_null_check(info, "07var.c", 817))->sname))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result120__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional270=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional270) {
            if(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name && !__freed_obj__) { ((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name = come_decrement_ref_count(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional271=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname && !__freed_obj__) { ((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname = come_decrement_ref_count(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value227;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
    __result122__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sFunLoadNode")));
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value228;
struct sFun* fun_150;
_Bool _if_conditional272;
_Bool __result123__;
void* right_value229;
struct CVALUE* come_value_151;
void* right_value230;
char* __dec_obj106;
struct sType* __dec_obj107;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&fun_150, 0, sizeof(struct sFun*));
memset(&right_value229, 0, sizeof(void*));
memset(&come_value_151, 0, sizeof(struct CVALUE*));
memset(&right_value230, 0, sizeof(void*));
    come_clear_stackframe();
    fun_150=optional$2sFunpbool_value((come_push_stackframe("07var.c", 834),((struct optional$2sFunpbool*)(right_value228=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 834))->funcs,((struct sFunLoadNode*)come_null_check(self, "07var.c", 834))->name)))));
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional272=fun_150==((void*)0),    __freed_obj__ = 0, 
    _if_conditional272) {
        err_msg(info,"fun not found(%s) at loading variable\n",((struct sFunLoadNode*)come_null_check(self, "07var.c", 837))->name);
        __freed_obj__ = 0;
        __result123__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
    }
    else {
        come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 841))));
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj106=((struct CVALUE*)come_null_check(come_value_151, "07var.c", 843))->c_value;
        ((struct CVALUE*)come_null_check(come_value_151, "07var.c", 843))->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%s",((struct sFun*)come_null_check(fun_150, "07var.c", 843))->mName))));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj107=((struct CVALUE*)come_null_check(come_value_151, "07var.c", 844))->type;
        ((struct CVALUE*)come_null_check(come_value_151, "07var.c", 844))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(fun_150, "07var.c", 844))->mLambdaType);
        if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_151, "07var.c", 845))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 847))->stack, "07var.c", 847)),(struct CVALUE*)come_increment_ref_count(come_value_151));
        __freed_obj__ = 0;
        if(come_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result124__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = ((struct sFunLoadNode*)come_null_check(self, "07var.c", 855))->sline;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value231;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value231, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value231=__builtin_string(((struct sFunLoadNode*)come_null_check(self, "07var.c", 860))->sname)));
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value232;
struct sVar* self_152;
void* right_value233;
char* __dec_obj108;
void* right_value234;
struct sType* __dec_obj109;
_Bool _if_conditional277;
void* right_value235;
char* __dec_obj110;
static int n_153=0;
void* right_value236;
char* __dec_obj111;
_Bool _if_conditional278;
void* right_value237;
char* __dec_obj112;
char* __dec_obj113;
void* right_value250;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
memset(&self_152, 0, sizeof(struct sVar*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    self_152=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value232=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 866))));
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj108=((struct sVar*)come_null_check(self_152, "07var.c", 868))->mName;
    ((struct sVar*)come_null_check(self_152, "07var.c", 868))->mName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj109=((struct sVar*)come_null_check(self_152, "07var.c", 869))->mType;
    ((struct sVar*)come_null_check(self_152, "07var.c", 869))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(type))));
    if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional277=((struct sType*)come_null_check(type, "07var.c", 879))->mFunctionParam,    __freed_obj__ = 0, 
    _if_conditional277) {
        __dec_obj110=((struct sVar*)come_null_check(self_152, "07var.c", 872))->mCValueName;
        ((struct sVar*)come_null_check(self_152, "07var.c", 872))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(name))));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        __dec_obj111=((struct sVar*)come_null_check(self_152, "07var.c", 876))->mCValueName;
        ((struct sVar*)come_null_check(self_152, "07var.c", 876))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s_%d",name,n_153++))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_152, "07var.c", 879))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 879))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_152, "07var.c", 880))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_152, "07var.c", 881))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_152, "07var.c", 882))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional278=((struct sInfo*)come_null_check(info, "07var.c", 890))->come_fun,    __freed_obj__ = 0, 
    _if_conditional278) {
        __dec_obj112=((struct sVar*)come_null_check(self_152, "07var.c", 884))->mFunName;
        ((struct sVar*)come_null_check(self_152, "07var.c", 884))->mFunName=(char*)come_increment_ref_count(((char*)(right_value237=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 884))->come_fun, "07var.c", 884))->mName))));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        __dec_obj113=((struct sVar*)come_null_check(self_152, "07var.c", 887))->mFunName;
        ((struct sVar*)come_null_check(self_152, "07var.c", 887))->mFunName=((void*)0);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 890))->lv_table, "07var.c", 890))->mVars, "07var.c", 890)),(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_152));
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_152 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional273=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional274=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional276=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional276) {
            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional279;
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional15;
_Bool _if_conditional291;
void* right_value244;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool same_key_exist_189;
char* it2_192;
_Bool _for_condtionalA12;
void* right_value246;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct map$2charphsVarph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
memset(&right_value244, 0, sizeof(void*));
memset(&same_key_exist_189, 0, sizeof(_Bool));
memset(&it2_192, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
        if(_if_conditional279=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional279) {
            map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_171=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_172=hash_171;
        __freed_obj__ = 0;
        while(_while_condtional15=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional15) {
            if(_if_conditional291=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_172],            __freed_obj__ = 0, 
            _if_conditional291) {
                if(_if_conditional292=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a4=((struct optional$2boolbool*)(right_value244=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_172], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a4)),                (right_value244 && right_value244 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional292) {
                    if(_if_conditional293=1,                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_172]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_172] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_172] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_172], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_172]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_172]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_172]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional313=1,                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1442))->items[it_172] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1442))->items[it_172], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1443))->items[it_172]=(struct sVar*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1446))->items[it_172]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_172++;
                __freed_obj__ = 0;
                if(_if_conditional314=it_172>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional314) {
                    it_172=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=it_172==hash_171,                    __freed_obj__ = 0, 
                    _if_conditional315) {
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
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_172]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional316=1,                __freed_obj__ = 0, 
                _if_conditional316) {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_172]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_172]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional317=1,                __freed_obj__ = 0, 
                _if_conditional317) {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1470))->items[it_172]=(struct sVar*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1473))->items[it_172]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_189=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_192=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it2_192=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional322=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a6=((struct optional$2boolbool*)(right_value246=string_equals(((char*)come_null_check(it2_192, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a6)),            (right_value246 && right_value246 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional322) {
                same_key_exist_189=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional323=!same_key_exist_189,        __freed_obj__ = 0, 
        _if_conditional323) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result150__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_154;
void* right_value238;
char** keys_155;
void* right_value239;
struct sVar** items_156;
void* right_value240;
_Bool* item_existance_157;
int len_158;
char* it_161;
_Bool _for_condtionalA11;
struct sVar* default_value_164;
void* right_value242;
struct sVar* it2_167;
unsigned int hash_168;
int n_169;
_Bool _while_condtional14;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct sVar* default_value_170;
void* right_value243;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_154, 0, sizeof(int));
memset(&right_value238, 0, sizeof(void*));
memset(&keys_155, 0, sizeof(char**));
memset(&right_value239, 0, sizeof(void*));
memset(&items_156, 0, sizeof(struct sVar**));
memset(&right_value240, 0, sizeof(void*));
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sVar*));
memset(&right_value242, 0, sizeof(void*));
memset(&it2_167, 0, sizeof(struct sVar*));
memset(&hash_168, 0, sizeof(unsigned int));
memset(&n_169, 0, sizeof(int));
memset(&default_value_170, 0, sizeof(struct sVar*));
memset(&right_value243, 0, sizeof(void*));
                size_154=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_155=(char**)come_increment_ref_count(((char**)(right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1370))));
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_156=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value239=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_154)), "./comelang2.h", 1371))));
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1372))));
                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_158=0;
                __freed_obj__ = 0;
                for(
                it_161=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA11=                !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA11;                it_161=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_164,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    it2_167=((struct sVar*)(right_value242=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_161,default_value_164)));
                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_168=string_get_hash_key(((char*)come_null_check(it_161, "./comelang2.h", 1380)))%size_154;
                    __freed_obj__ = 0;
                    n_169=hash_168;
                    __freed_obj__ = 0;
                    while(_while_condtional14=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional288=item_existance_157[n_169],                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            n_169++;
                            __freed_obj__ = 0;
                            if(_if_conditional289=n_169>=size_154,                            __freed_obj__ = 0, 
                            _if_conditional289) {
                                n_169=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional290=n_169==hash_168,                                __freed_obj__ = 0, 
                                _if_conditional290) {
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
                            item_existance_157[n_169]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_155[n_169]=it_161;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_156[n_169]=((struct sVar*)(right_value243=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_161,default_value_170)));
                            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_158++;
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
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_155;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_156;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_157;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_154;
                __freed_obj__ = 0;
                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_158;
                __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional280;
char* result_159;
char* __result127__;
_Bool _if_conditional281;
char* __result128__;
char* result_160;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional280=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional280) {
                        __freed_obj__ = 0;
                        memset(&result_159,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result127__ = __result_obj__ = result_159;
                        __freed_obj__ = 0;
                        return __result127__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional281=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        __result128__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result128__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_160,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result129__ = __result_obj__ = result_160;
                    __freed_obj__ = 0;
                    return __result129__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result130__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result130__;
                    __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional282;
char* result_162;
char* __result131__;
_Bool _if_conditional283;
char* __result132__;
char* result_163;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    if(_if_conditional282=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        __freed_obj__ = 0;
                        memset(&result_162,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result131__ = __result_obj__ = result_162;
                        __freed_obj__ = 0;
                        return __result131__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional283=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional283) {
                        __result132__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result132__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_163,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result133__ = __result_obj__ = result_163;
                    __freed_obj__ = 0;
                    return __result133__;
                    __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional13;
_Bool _if_conditional284;
void* right_value241;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional285;
struct sVar* __result134__;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct sVar* __result135__;
struct sVar* __result136__;
struct sVar* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
memset(&right_value241, 0, sizeof(void*));
                        hash_165=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_166=hash_165;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional284=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_166],                            __freed_obj__ = 0, 
                            _if_conditional284) {
                                if(_if_conditional285=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a3=((struct optional$2boolbool*)(right_value241=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_166], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value241 && right_value241 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional285) {
                                    __result134__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_166];
                                    __freed_obj__ = 0;
                                    return __result134__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_166++;
                                __freed_obj__ = 0;
                                if(_if_conditional286=it_166>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional286) {
                                    it_166=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional287=it_166==hash_165,                                    __freed_obj__ = 0, 
                                    _if_conditional287) {
                                        __result135__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result135__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result136__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result136__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result137__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result137__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_173;
struct list_item$1charp* it_174;
_Bool _while_condtional16;
void* right_value245;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional294;
struct list$1charp* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_173, 0, sizeof(int));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&right_value245, 0, sizeof(void*));
                            it2_173=0;
                            __freed_obj__ = 0;
                            it_174=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_174!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional294=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a5=((struct optional$2boolbool*)(right_value245=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_174, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a5)),                                (right_value245 && right_value245 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional294) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_173,it2_173+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_173++;
                                __freed_obj__ = 0;
                                it_174=((struct list_item$1charp*)come_null_check(it_174, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result141__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result141__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
int tmp_175;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list$1charp* __result138__;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list_item$1charp* it_178;
int i_179;
_Bool _while_condtional18;
_Bool _if_conditional303;
struct list_item$1charp* prev_it_180;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1charp* it_181;
int i_182;
_Bool _while_condtional19;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct list_item$1charp* prev_it_183;
struct list_item$1charp* it_184;
struct list_item$1charp* head_prev_it_185;
struct list_item$1charp* tail_it_186;
int i_187;
_Bool _while_condtional20;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1charp* prev_it_188;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_175, 0, sizeof(int));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
memset(&it_181, 0, sizeof(struct list_item$1charp*));
memset(&i_182, 0, sizeof(int));
memset(&prev_it_183, 0, sizeof(struct list_item$1charp*));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_185, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_186, 0, sizeof(struct list_item$1charp*));
memset(&i_187, 0, sizeof(int));
memset(&prev_it_188, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional295=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional295) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional296=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional296) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional297=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional297) {
                                            tmp_175=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_175;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional298=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional298) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional299=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional299) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional300=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional300) {
                                            __result138__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result138__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional301=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional301) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional302=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional302) {
                                                it_178=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_179=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional18=it_178!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional18) {
                                                    if(_if_conditional303=i_179<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional303) {
                                                        prev_it_180=it_178;
                                                        __freed_obj__ = 0;
                                                        it_178=((struct list_item$1charp*)come_null_check(it_178, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_179++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_180 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional304=i_179==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional304) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_178;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_178=((struct list_item$1charp*)come_null_check(it_178, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_179++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional305=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional305) {
                                                    it_181=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_182=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_181!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional306=i_182==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional306) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_181, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional307=i_182>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional307) {
                                                            prev_it_183=it_181;
                                                            __freed_obj__ = 0;
                                                            it_181=((struct list_item$1charp*)come_null_check(it_181, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_182++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_183 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_181=((struct list_item$1charp*)come_null_check(it_181, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_182++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_184=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_185=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_186=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_187=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional20=it_184!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional20) {
                                                        if(_if_conditional308=i_187==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional308) {
                                                            head_prev_it_185=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional309=i_187==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional309) {
                                                            tail_it_186=it_184;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional310=i_187>=head&&i_187<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional310) {
                                                            prev_it_188=it_184;
                                                            __freed_obj__ = 0;
                                                            it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_187++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_188 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_187++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional311=head_prev_it_185!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional311) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_185, "./comelang2.h", 620))->next=tail_it_186;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional312=tail_it_186!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional312) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_186, "./comelang2.h", 623))->prev=head_prev_it_185;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result140__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result140__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_176;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_177;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_177, 0, sizeof(struct list_item$1charp*));
                                                it_176=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_176!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    prev_it_177=it_176;
                                                    __freed_obj__ = 0;
                                                    it_176=((struct list_item$1charp*)come_null_check(it_176, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_177 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result139__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result139__;
                                                __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional318;
char* result_190;
char* __result142__;
_Bool _if_conditional319;
char* __result143__;
char* result_191;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
            if(_if_conditional318=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional318) {
                __freed_obj__ = 0;
                memset(&result_190,0,sizeof(char*));
                __freed_obj__ = 0;
                __result142__ = __result_obj__ = result_190;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional319=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional319) {
                __result143__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result143__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_191,0,sizeof(char*));
            __freed_obj__ = 0;
            __result144__ = __result_obj__ = result_191;
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result145__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result145__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional320;
char* result_193;
char* __result146__;
_Bool _if_conditional321;
char* __result147__;
char* result_194;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
            if(_if_conditional320=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional320) {
                __freed_obj__ = 0;
                memset(&result_193,0,sizeof(char*));
                __freed_obj__ = 0;
                __result146__ = __result_obj__ = result_193;
                __freed_obj__ = 0;
                return __result146__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional321=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional321) {
                __result147__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result147__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_194,0,sizeof(char*));
            __freed_obj__ = 0;
            __result148__ = __result_obj__ = result_194;
            __freed_obj__ = 0;
            return __result148__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional324;
void* right_value247;
struct list_item$1charp* litem_195;
_Bool _if_conditional325;
void* right_value248;
struct list_item$1charp* litem_196;
void* right_value249;
struct list_item$1charp* litem_197;
struct list$1charp* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
memset(&litem_195, 0, sizeof(struct list_item$1charp*));
memset(&right_value248, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
memset(&right_value249, 0, sizeof(void*));
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional324=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional324) {
                    litem_195=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value247=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_195, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_195;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_195;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional325=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value248=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_196, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_196, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_196, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_196;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_196;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value249=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_197, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_197, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_197, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_197;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_197;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result149__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value251;
struct sVar* self_198;
void* right_value252;
char* __dec_obj114;
void* right_value253;
struct sType* __dec_obj115;
void* right_value254;
char* __dec_obj116;
void* right_value255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&self_198, 0, sizeof(struct sVar*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
    self_198=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value251=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 895))));
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj114=((struct sVar*)come_null_check(self_198, "07var.c", 897))->mName;
    ((struct sVar*)come_null_check(self_198, "07var.c", 897))->mName=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(name))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj115=((struct sVar*)come_null_check(self_198, "07var.c", 898))->mType;
    ((struct sVar*)come_null_check(self_198, "07var.c", 898))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(type))));
    if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_198, "07var.c", 900))->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj116=((struct sVar*)come_null_check(self_198, "07var.c", 902))->mCValueName;
    ((struct sVar*)come_null_check(self_198, "07var.c", 902))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(name))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_198, "07var.c", 904))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 904))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_198, "07var.c", 905))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_198, "07var.c", 906))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_198, "07var.c", 907))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 909))->gv_table, "07var.c", 909))->mVars, "07var.c", 909)),(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_198));
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_198 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_198, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value256;
struct sVar* self_199;
void* right_value257;
char* __dec_obj117;
void* right_value258;
struct sType* __dec_obj118;
void* right_value259;
char* __dec_obj119;
void* right_value260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&self_199, 0, sizeof(struct sVar*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    self_199=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value256=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 914))));
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj117=((struct sVar*)come_null_check(self_199, "07var.c", 916))->mName;
    ((struct sVar*)come_null_check(self_199, "07var.c", 916))->mName=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj118=((struct sVar*)come_null_check(self_199, "07var.c", 917))->mType;
    ((struct sVar*)come_null_check(self_199, "07var.c", 917))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(type))));
    if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_199, "07var.c", 919))->mGlobal=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj119=((struct sVar*)come_null_check(self_199, "07var.c", 921))->mCValueName;
    ((struct sVar*)come_null_check(self_199, "07var.c", 921))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(c_value))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_199, "07var.c", 923))->mBlockLevel=((struct sInfo*)come_null_check(info, "07var.c", 923))->block_level;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_199, "07var.c", 924))->mAllocaValue=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_199, "07var.c", 925))->mFunctionParam=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sVar*)come_null_check(self_199, "07var.c", 926))->mNoFree=(_Bool)0;
    __freed_obj__ = 0;
    map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 928))->gv_table, "07var.c", 928))->mVars, "07var.c", 928)),(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_199));
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_199 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_199, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2sNodephbool* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool is_type_name_flag_200;
_Bool multiple_declare_201;
_Bool _if_conditional326;
char* p_202;
int sline_203;
void* right_value261;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type_205;
char* name_206;
_Bool err_207;
_Bool _if_conditional331;
_Bool multiple_declare2_208;
_Bool _if_conditional332;
char* p_209;
int sline_210;
void* right_value262;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_211;
char* name_212;
_Bool err_213;
_Bool _if_conditional333;
void* right_value263;
struct sNode* exp_214;
_Bool _if_conditional334;
void* right_value264;
struct sFun* fun_215;
_Bool _if_conditional335;
void* right_value265;
char* buf2_216;
struct list$1charph* multiple_assign_217;
_Bool _if_conditional336;
void* right_value266;
void* right_value267;
struct list$1charph* __dec_obj120;
void* right_value271;
_Bool _while_condtional21;
void* right_value272;
char* buf3_221;
void* right_value273;
_Bool _if_conditional339;
void* right_value274;
struct sNode* right_value_222;
void* right_value275;
struct sNode* __dec_obj124;
void* right_value276;
void* right_value277;
void* right_value278;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value287;
struct sNode* result_224;
void* right_value288;
void* right_value289;
struct optional$2sNodephbool* __result157__;
void* right_value290;
void* right_value291;
struct optional$2sNodephbool* __result159__;
_Bool _if_conditional358;
void* right_value292;
void* right_value293;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_225;
void* right_value294;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* base_type_226;
char* name_227;
_Bool err_228;
void* right_value295;
struct tuple2$2sTypephcharph* variable_name_229;
void* right_value296;
void* right_value299;
struct tuple3$3sTypephcharphsNodeph* variable_name2_230;
_Bool _while_condtional22;
void* right_value303;
struct tuple2$2sTypephcharph* variable_name_234;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphsNodeph* variable_name2_235;
void* right_value306;
void* right_value307;
void* right_value308;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value317;
struct sNode* result_237;
void* right_value318;
void* right_value319;
struct optional$2sNodephbool* __result164__;
_Bool _if_conditional382;
void* right_value320;
void* right_value321;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_238;
void* right_value322;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_239;
char* name_240;
_Bool err_241;
void* right_value323;
struct tuple2$2sTypephcharph* variable_name_242;
_Bool _if_conditional383;
void* right_value324;
struct sNode* exp_243;
void* right_value325;
void* right_value329;
struct tuple3$3sTypephcharphsNodeph* variable_name2_244;
_Bool _while_condtional23;
void* right_value330;
struct tuple2$2sTypephcharph* variable_name_245;
_Bool _if_conditional384;
void* right_value331;
struct sNode* exp_246;
void* right_value332;
void* right_value333;
struct tuple3$3sTypephcharphsNodeph* variable_name2_247;
void* right_value334;
void* right_value335;
void* right_value336;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value345;
struct sNode* result_249;
void* right_value346;
void* right_value347;
struct optional$2sNodephbool* __result168__;
_Bool _if_conditional402;
void* right_value348;
struct sNode* right_value_250;
void* right_value349;
struct sNode* __dec_obj155;
void* right_value350;
void* right_value351;
void* right_value352;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value361;
struct sNode* result_252;
void* right_value362;
void* right_value363;
struct optional$2sNodephbool* __result171__;
void* right_value364;
struct optional$2sFunpbool* __exception_result_var_b3;
_Bool _if_conditional420;
void* right_value365;
void* right_value366;
void* right_value367;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value371;
struct sNode* node_254;
void* right_value372;
struct sNode* __dec_obj165;
void* right_value373;
struct sNode* __dec_obj166;
void* right_value374;
void* right_value375;
struct optional$2sNodephbool* __result174__;
void* right_value376;
char* word_255;
_Bool _if_conditional427;
void* right_value377;
char* __dec_obj167;
_Bool is_type_name_flag_256;
_Bool _if_conditional428;
void* right_value378;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_257;
char* name_258;
_Bool err_259;
_Bool _if_conditional429;
void* right_value379;
void* right_value380;
struct optional$2sNodephbool* __result175__;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value381;
void* right_value382;
struct buffer* buf2_260;
_Bool squort_261;
_Bool dquort_262;
int nest_263;
_Bool _while_condtional24;
_Bool _if_conditional432;
void* right_value383;
void* right_value384;
struct optional$2sNodephbool* __result176__;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
void* right_value385;
char* array_initializer_264;
void* right_value386;
void* right_value387;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value396;
struct sNode* result_266;
void* right_value397;
void* right_value398;
struct optional$2sNodephbool* __result179__;
void* right_value399;
struct sNode* right_value_267;
void* right_value400;
void* right_value401;
struct list$1sNodeph* right_values_268;
_Bool _while_condtional25;
char* anonymous_var_nameX1369_269;
void* right_value402;
struct sNode* __dec_obj175;
void* right_value403;
void* right_value404;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value413;
struct sNode* result_271;
void* right_value414;
void* right_value415;
struct optional$2sNodephbool* __result182__;
void* right_value416;
void* right_value417;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value426;
struct sNode* result_273;
void* right_value427;
void* right_value428;
struct optional$2sNodephbool* __result185__;
void* right_value429;
struct __current_stack1__ __current_stack1__;
void* right_value432;
struct sNode* result_274;
void* right_value433;
void* right_value434;
struct optional$2sNodephbool* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_200, 0, sizeof(_Bool));
memset(&multiple_declare_201, 0, sizeof(_Bool));
memset(&p_202, 0, sizeof(char*));
memset(&sline_203, 0, sizeof(int));
memset(&right_value261, 0, sizeof(void*));
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
memset(&type_205, 0, sizeof(struct sType*));
memset(&name_206, 0, sizeof(char*));
memset(&err_207, 0, sizeof(_Bool));
memset(&multiple_declare2_208, 0, sizeof(_Bool));
memset(&p_209, 0, sizeof(char*));
memset(&sline_210, 0, sizeof(int));
memset(&right_value262, 0, sizeof(void*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&exp_214, 0, sizeof(struct sNode*));
memset(&right_value264, 0, sizeof(void*));
memset(&fun_215, 0, sizeof(struct sFun*));
memset(&right_value265, 0, sizeof(void*));
memset(&buf2_216, 0, sizeof(char*));
memset(&multiple_assign_217, 0, sizeof(struct list$1charph*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&buf3_221, 0, sizeof(char*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value_222, 0, sizeof(struct sNode*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&result_224, 0, sizeof(struct sNode*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&multiple_declare_225, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value294, 0, sizeof(void*));
memset(&base_type_226, 0, sizeof(struct sType*));
memset(&name_227, 0, sizeof(char*));
memset(&err_228, 0, sizeof(_Bool));
memset(&base_type_226, 0, sizeof(struct sType*));
memset(&name_227, 0, sizeof(char*));
memset(&err_228, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&variable_name_229, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&variable_name2_230, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value303, 0, sizeof(void*));
memset(&variable_name_234, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&variable_name2_235, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&result_237, 0, sizeof(struct sNode*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&multiple_declare_238, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value322, 0, sizeof(void*));
memset(&base_type_239, 0, sizeof(struct sType*));
memset(&name_240, 0, sizeof(char*));
memset(&err_241, 0, sizeof(_Bool));
memset(&base_type_239, 0, sizeof(struct sType*));
memset(&name_240, 0, sizeof(char*));
memset(&err_241, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&variable_name_242, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value324, 0, sizeof(void*));
memset(&exp_243, 0, sizeof(struct sNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&variable_name2_244, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value330, 0, sizeof(void*));
memset(&variable_name_245, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value331, 0, sizeof(void*));
memset(&exp_246, 0, sizeof(struct sNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&variable_name2_247, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&result_249, 0, sizeof(struct sNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value_250, 0, sizeof(struct sNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&result_252, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&node_254, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&word_255, 0, sizeof(char*));
memset(&right_value377, 0, sizeof(void*));
memset(&is_type_name_flag_256, 0, sizeof(_Bool));
memset(&right_value378, 0, sizeof(void*));
memset(&type_257, 0, sizeof(struct sType*));
memset(&name_258, 0, sizeof(char*));
memset(&err_259, 0, sizeof(_Bool));
memset(&type_257, 0, sizeof(struct sType*));
memset(&name_258, 0, sizeof(char*));
memset(&err_259, 0, sizeof(_Bool));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&buf2_260, 0, sizeof(struct buffer*));
memset(&squort_261, 0, sizeof(_Bool));
memset(&dquort_262, 0, sizeof(_Bool));
memset(&nest_263, 0, sizeof(int));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&array_initializer_264, 0, sizeof(char*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sNode*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value_267, 0, sizeof(struct sNode*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_values_268, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1369_269, 0, sizeof(char*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sNode*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&result_273, 0, sizeof(struct sNode*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value432, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct sNode*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
    is_type_name_flag_200=is_type_name(buf,info);
    __freed_obj__ = 0;
    multiple_declare_201=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional326=is_type_name_flag_200,    __freed_obj__ = 0, 
    _if_conditional326) {
        p_202=((struct sInfo*)come_null_check(info, "07var.c", 939))->p;
        __freed_obj__ = 0;
        sline_203=((struct sInfo*)come_null_check(info, "07var.c", 940))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 942))->p=head;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 943))->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 945),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value261=parse_type(info,(_Bool)1,(_Bool)1)))));
        type_205=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_206=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_207=multiple_assgin_var2->v3;
        come_pop_stackframe();
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional331=err_207&&*((struct sInfo*)come_null_check(info, "07var.c", 951))->p==44,        __freed_obj__ = 0, 
        _if_conditional331) {
            multiple_declare_201=(_Bool)1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 951))->p=p_202;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 952))->sline=sline_203;
        __freed_obj__ = 0;
        if(type_205 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_205, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_206 && !__freed_obj__) { name_206 = come_decrement_ref_count(name_206, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    multiple_declare2_208=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional332=is_type_name_flag_200,    __freed_obj__ = 0, 
    _if_conditional332) {
        p_209=((struct sInfo*)come_null_check(info, "07var.c", 958))->p;
        __freed_obj__ = 0;
        sline_210=((struct sInfo*)come_null_check(info, "07var.c", 959))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 961))->p=head;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 962))->sline=head_sline;
        __freed_obj__ = 0;
        multiple_assgin_var3=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 964),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value262=parse_type(info,(_Bool)1,(_Bool)1)))));
        type_211=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_212=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_213=multiple_assgin_var3->v3;
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional333=err_213&&*((struct sInfo*)come_null_check(info, "07var.c", 987))->p==61,        __freed_obj__ = 0, 
        _if_conditional333) {
            ((struct sInfo*)come_null_check(info, "07var.c", 969))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 974))->no_output_err=(_Bool)1;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 975))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 976))->no_output_come_code=(_Bool)1;
            __freed_obj__ = 0;
            exp_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=expression_v13(info))));
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 978))->no_comma=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 979))->no_output_err=(_Bool)0;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 980))->no_output_come_code=(_Bool)0;
            __freed_obj__ = 0;
            if(_if_conditional334=*((struct sInfo*)come_null_check(info, "07var.c", 985))->p==44,            __freed_obj__ = 0, 
            _if_conditional334) {
                multiple_declare2_208=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(exp_214 && !__freed_obj__) { exp_214 = come_decrement_ref_count(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 987))->p=p_209;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "07var.c", 988))->sline=sline_210;
        __freed_obj__ = 0;
        if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    fun_215=optional$2sFunpbool_value((come_push_stackframe("07var.c", 992),((struct optional$2sFunpbool*)(right_value264=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 992))->funcs,buf)))));
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional335=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    __freed_obj__ = 0, 
    _if_conditional335) {
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        buf2_216=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 996),((struct optional$2charphbool*)(right_value265=parse_word(info))))));
        come_pop_stackframe();
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        multiple_assign_217=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional336=*((struct sInfo*)come_null_check(info, "07var.c", 1016))->p==44,        __freed_obj__ = 0, 
        _if_conditional336) {
            __dec_obj120=multiple_assign_217;
            multiple_assign_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value267=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value266=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1002))))))));
            if(__dec_obj120) { come_call_finalizer(list$1charph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(multiple_assign_217, "07var.c", 1003)),(char*)come_increment_ref_count(((char*)(right_value271=string_clone(buf2_216)))));
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional21=*((struct sInfo*)come_null_check(info, "07var.c", 1015))->p==44,            __freed_obj__ = 0, 
            _while_condtional21) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1006))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                buf3_221=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 1010),((struct optional$2charphbool*)(right_value272=parse_word(info))))));
                come_pop_stackframe();
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(multiple_assign_217, "07var.c", 1013)),(char*)come_increment_ref_count(((char*)(right_value273=string_clone(buf3_221)))));
                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(buf3_221 && !__freed_obj__) { buf3_221 = come_decrement_ref_count(buf3_221, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional339=*((struct sInfo*)come_null_check(info, "07var.c", 1041))->p==61&&*(((struct sInfo*)come_null_check(info, "07var.c", 1041))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional339) {
            ((struct sInfo*)come_null_check(info, "07var.c", 1019))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1023))->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            right_value_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1025))->no_comma=(_Bool)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj124=right_value_222;
            right_value_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_222),info))));
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1031);
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value278=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value276=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1031)))),(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(buf2_216)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_217),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_222),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=_inf_value3)));
            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            __result157__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value289=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value288=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1035)))),(struct sNode*)come_increment_ref_count(result_224),(_Bool)1)));
            if(right_value_222 && !__freed_obj__) { right_value_222 = come_decrement_ref_count(right_value_222, ((struct sNode*)right_value_222)->finalize, ((struct sNode*)right_value_222)->_protocol_obj, 0, 0, 0); } 
            if(result_224 && !__freed_obj__) { result_224 = come_decrement_ref_count(result_224, ((struct sNode*)result_224)->finalize, ((struct sNode*)result_224)->_protocol_obj, 0, 0, 0); } 
            if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result157__;
            __freed_obj__ = 0;
            if(right_value_222 && !__freed_obj__) { right_value_222 = come_decrement_ref_count(right_value_222, ((struct sNode*)right_value_222)->finalize, ((struct sNode*)right_value_222)->_protocol_obj, 0, 0, 0); } 
            if(result_224 && !__freed_obj__) { result_224 = come_decrement_ref_count(result_224, ((struct sNode*)result_224)->finalize, ((struct sNode*)result_224)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*((struct sInfo*)come_null_check(info, "07var.c", 1038))->p);
            __freed_obj__ = 0;
            __result159__ = __result_obj__ = (come_save_stackframe("07var.c", 1039), ((struct optional$2voidpbool*)(right_value291=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value290=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1039))),((void*)0),(_Bool)0))));
            if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result159__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf2_216 && !__freed_obj__) { buf2_216 = come_decrement_ref_count(buf2_216, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_217 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional358=multiple_declare_201,        __freed_obj__ = 0, 
        _if_conditional358) {
            ((struct sInfo*)come_null_check(info, "07var.c", 1043))->p=head;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "07var.c", 1044))->sline=head_sline;
            __freed_obj__ = 0;
            multiple_declare_225=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value293=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value292=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1046))))))));
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1048),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value294=parse_type(info,(_Bool)0,(_Bool)1)))));
            base_type_226=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_227=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_228=multiple_assgin_var4->v3;
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            variable_name_229=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value295=parse_variable_name((struct sType*)come_increment_ref_count(base_type_226),(_Bool)1,info))));
            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            variable_name2_230=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value299=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value296=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1052)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_229, "07var.c", 1052))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_229, "07var.c", 1052))->v2),((void*)0)))));
            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_225, "07var.c", 1054)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_230));
            __freed_obj__ = 0;
            while(_while_condtional22=*((struct sInfo*)come_null_check(info, "07var.c", 1067))->p==44,            __freed_obj__ = 0, 
            _while_condtional22) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1057))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                variable_name_234=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value303=parse_variable_name((struct sType*)come_increment_ref_count(base_type_226),(_Bool)0,info))));
                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                variable_name2_235=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value305=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value304=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1062)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_234, "07var.c", 1062))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_234, "07var.c", 1062))->v2),((void*)0)))));
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_225, "07var.c", 1064)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_235));
                __freed_obj__ = 0;
                if(variable_name_234 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_235 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_235, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1067);
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value308=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value306=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1067)))),(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_225),(struct sType*)come_increment_ref_count(base_type_226),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=_inf_value4)));
            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            __result164__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value319=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value318=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1071)))),(struct sNode*)come_increment_ref_count(result_237),(_Bool)1)));
            if(multiple_declare_225 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_226 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_227 && !__freed_obj__) { name_227 = come_decrement_ref_count(name_227, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_229 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_229, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_230 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_237 && !__freed_obj__) { result_237 = come_decrement_ref_count(result_237, ((struct sNode*)result_237)->finalize, ((struct sNode*)result_237)->_protocol_obj, 0, 0, 0); } 
            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result164__;
            __freed_obj__ = 0;
            if(multiple_declare_225 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_226 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_227 && !__freed_obj__) { name_227 = come_decrement_ref_count(name_227, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_229 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_229, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_230 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_237 && !__freed_obj__) { result_237 = come_decrement_ref_count(result_237, ((struct sNode*)result_237)->finalize, ((struct sNode*)result_237)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional382=multiple_declare2_208,            __freed_obj__ = 0, 
            _if_conditional382) {
                ((struct sInfo*)come_null_check(info, "07var.c", 1074))->p=head;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "07var.c", 1075))->sline=head_sline;
                __freed_obj__ = 0;
                multiple_declare_238=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value321=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value320=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1077))))))));
                if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1079),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value322=parse_type(info,(_Bool)0,(_Bool)1)))));
                base_type_239=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_240=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_241=multiple_assgin_var5->v3;
                if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                variable_name_242=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_239),(_Bool)1,info))));
                if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional383=*((struct sInfo*)come_null_check(info, "07var.c", 1100))->p==61,                __freed_obj__ = 0, 
                _if_conditional383) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1086))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "07var.c", 1091))->no_comma=(_Bool)1;
                    __freed_obj__ = 0;
                    exp_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=expression_v13(info))));
                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "07var.c", 1093))->no_comma=(_Bool)0;
                    __freed_obj__ = 0;
                    variable_name2_244=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value329=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value325=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1095)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_242, "07var.c", 1095))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_242, "07var.c", 1095))->v2),(struct sNode*)come_increment_ref_count(exp_243)))));
                    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_238, "07var.c", 1097)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_244));
                    __freed_obj__ = 0;
                    if(exp_243 && !__freed_obj__) { exp_243 = come_decrement_ref_count(exp_243, ((struct sNode*)exp_243)->finalize, ((struct sNode*)exp_243)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_244 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_244, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                while(_while_condtional23=*((struct sInfo*)come_null_check(info, "07var.c", 1127))->p==44,                __freed_obj__ = 0, 
                _while_condtional23) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1101))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    variable_name_245=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value330=parse_variable_name((struct sType*)come_increment_ref_count(base_type_239),(_Bool)0,info))));
                    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional384=*((struct sInfo*)come_null_check(info, "07var.c", 1125))->p==61,                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        ((struct sInfo*)come_null_check(info, "07var.c", 1109))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1114))->no_comma=(_Bool)1;
                        __freed_obj__ = 0;
                        exp_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=expression_v13(info))));
                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1116))->no_comma=(_Bool)0;
                        __freed_obj__ = 0;
                        variable_name2_247=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value333=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value332=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1118)))),(struct sType*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_245, "07var.c", 1118))->v1),(char*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(variable_name_245, "07var.c", 1118))->v2),(struct sNode*)come_increment_ref_count(exp_246)))));
                        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_238, "07var.c", 1120)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_247));
                        __freed_obj__ = 0;
                        if(exp_246 && !__freed_obj__) { exp_246 = come_decrement_ref_count(exp_246, ((struct sNode*)exp_246)->finalize, ((struct sNode*)exp_246)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_247 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_245 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(variable_name_245 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1127);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value336=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value334=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1127)))),(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_238),(struct sType*)come_increment_ref_count(base_type_239),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=_inf_value5)));
                if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                __result168__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value347=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value346=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1131)))),(struct sNode*)come_increment_ref_count(result_249),(_Bool)1)));
                if(multiple_declare_238 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_240 && !__freed_obj__) { name_240 = come_decrement_ref_count(name_240, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_249 && !__freed_obj__) { result_249 = come_decrement_ref_count(result_249, ((struct sNode*)result_249)->finalize, ((struct sNode*)result_249)->_protocol_obj, 0, 0, 0); } 
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result168__;
                __freed_obj__ = 0;
                if(multiple_declare_238 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_240 && !__freed_obj__) { name_240 = come_decrement_ref_count(name_240, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_249 && !__freed_obj__) { result_249 = come_decrement_ref_count(result_249, ((struct sNode*)result_249)->finalize, ((struct sNode*)result_249)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional402=!is_type_name_flag_200&&*((struct sInfo*)come_null_check(info, "07var.c", 1281))->p==61&&*(((struct sInfo*)come_null_check(info, "07var.c", 1281))->p+1)!=61&&!((struct sInfo*)come_null_check(info, "07var.c", 1281))->no_assign,                __freed_obj__ = 0, 
                _if_conditional402) {
                    ((struct sInfo*)come_null_check(info, "07var.c", 1134))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_value_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj155=right_value_250;
                    right_value_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_250),info))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0); }
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1145);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value352=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value350=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1145)))),(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_250),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value6)));
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    __result171__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value363=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value362=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1149)))),(struct sNode*)come_increment_ref_count(result_252),(_Bool)1)));
                    if(right_value_250 && !__freed_obj__) { right_value_250 = come_decrement_ref_count(right_value_250, ((struct sNode*)right_value_250)->finalize, ((struct sNode*)right_value_250)->_protocol_obj, 0, 0, 0); } 
                    if(result_252 && !__freed_obj__) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result171__;
                    __freed_obj__ = 0;
                    if(right_value_250 && !__freed_obj__) { right_value_250 = come_decrement_ref_count(right_value_250, ((struct sNode*)right_value_250)->finalize, ((struct sNode*)right_value_250)->_protocol_obj, 0, 0, 0); } 
                    if(result_252 && !__freed_obj__) { result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional420=!is_type_name_flag_200||optional$2sFunpbool_value((come_push_stackframe("07var.c", 1281),__exception_result_var_b3=((struct optional$2sFunpbool*)(right_value364=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "07var.c", 1281))->funcs,buf))), come_pop_stackframe(), __exception_result_var_b3)),                    (right_value364 && right_value364 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sFunpboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional420) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1152);
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value367=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value365=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1152)))),(char*)come_increment_ref_count(((char*)(right_value366=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value7)));
                        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __dec_obj165=node_254;
                        node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_254),info))));
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __dec_obj166=node_254;
                        node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_254),info))));
                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __result174__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value375=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value374=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1158)))),(struct sNode*)come_increment_ref_count(node_254),(_Bool)1)));
                        if(node_254 && !__freed_obj__) { node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0); } 
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result174__;
                        __freed_obj__ = 0;
                        if(node_254 && !__freed_obj__) { node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "07var.c", 1161))->p=head;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1162))->sline=head_sline;
                        __freed_obj__ = 0;
                        word_255=(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(""))));
                        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional427=xisalpha(*((struct sInfo*)come_null_check(info, "07var.c", 1169))->p)||*((struct sInfo*)come_null_check(info, "07var.c", 1169))->p==95,                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            __dec_obj167=word_255;
                            word_255=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("07var.c", 1166),((struct optional$2charphbool*)(right_value377=parse_word(info))))));
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        is_type_name_flag_256=is_type_name(word_255,info);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1171))->p=head;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "07var.c", 1172))->sline=head_sline;
                        __freed_obj__ = 0;
                        if(_if_conditional428=is_type_name_flag_256,                        __freed_obj__ = 0, 
                        _if_conditional428) {
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("07var.c", 1176),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value378=parse_type(info,(_Bool)1,(_Bool)1)))));
                            type_257=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                            name_258=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                            err_259=multiple_assgin_var6->v3;
                            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional429=!err_259,                            __freed_obj__ = 0, 
                            _if_conditional429) {
                                printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "07var.c", 1179))->sname,((struct sInfo*)come_null_check(info, "07var.c", 1179))->sline);
                                __freed_obj__ = 0;
                                __result175__ = __result_obj__ = (come_save_stackframe("07var.c", 1180), ((struct optional$2voidpbool*)(right_value380=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value379=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1180))),((void*)0),(_Bool)0))));
                                if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result175__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            if(_if_conditional430=*((struct sInfo*)come_null_check(info, "07var.c", 1278))->p==61,                            __freed_obj__ = 0, 
                            _if_conditional430) {
                                ((struct sInfo*)come_null_check(info, "07var.c", 1185))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                parse_sharp_v5(info);
                                __freed_obj__ = 0;
                                if(_if_conditional431=*((struct sInfo*)come_null_check(info, "07var.c", 1270))->p==123,                                __freed_obj__ = 0, 
                                _if_conditional431) {
                                    buf2_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value382=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1191))))))));
                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1193)),*((struct sInfo*)come_null_check(info, "07var.c", 1193))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "07var.c", 1194))->p++;
                                    __freed_obj__ = 0;
                                    squort_261=(_Bool)0;
                                    __freed_obj__ = 0;
                                    dquort_262=(_Bool)0;
                                    __freed_obj__ = 0;
                                    nest_263=1;
                                    __freed_obj__ = 0;
                                    while(_while_condtional24=1,                                    __freed_obj__ = 0, 
                                    _while_condtional24) {
                                        if(_if_conditional432=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional432) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            __freed_obj__ = 0;
                                            __result176__ = __result_obj__ = (come_save_stackframe("07var.c", 1202), ((struct optional$2voidpbool*)(right_value384=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value383=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1202))),((void*)0),(_Bool)0))));
                                            if(buf2_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                                            if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
                                            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0, 0); }
                                            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result176__;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional433=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==92,                                            __freed_obj__ = 0, 
                                            _if_conditional433) {
                                                buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1205)),*((struct sInfo*)come_null_check(info, "07var.c", 1205))->p);
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "07var.c", 1206))->p++;
                                                __freed_obj__ = 0;
                                                buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1207)),*((struct sInfo*)come_null_check(info, "07var.c", 1207))->p);
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "07var.c", 1208))->p++;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional434=!squort_261&&*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==34,                                                __freed_obj__ = 0, 
                                                _if_conditional434) {
                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1211)),*((struct sInfo*)come_null_check(info, "07var.c", 1211))->p);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1212))->p++;
                                                    __freed_obj__ = 0;
                                                    dquort_262=!dquort_262;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional435=!dquort_262&&*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==39,                                                    __freed_obj__ = 0, 
                                                    _if_conditional435) {
                                                        buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1216)),*((struct sInfo*)come_null_check(info, "07var.c", 1216))->p);
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "07var.c", 1217))->p++;
                                                        __freed_obj__ = 0;
                                                        squort_261=!squort_261;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional436=squort_261||dquort_262,                                                        __freed_obj__ = 0, 
                                                        _if_conditional436) {
                                                            buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1221)),*((struct sInfo*)come_null_check(info, "07var.c", 1221))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "07var.c", 1222))->p++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional437=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional437) {
                                                                nest_263++;
                                                                __freed_obj__ = 0;
                                                                buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1226)),*((struct sInfo*)come_null_check(info, "07var.c", 1226))->p);
                                                                __freed_obj__ = 0;
                                                                ((struct sInfo*)come_null_check(info, "07var.c", 1227))->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional438=*((struct sInfo*)come_null_check(info, "07var.c", 1243))->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional438) {
                                                                    nest_263--;
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1231)),*((struct sInfo*)come_null_check(info, "07var.c", 1231))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1232))->p++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional439=nest_263==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional439) {
                                                                        skip_spaces_and_lf(info);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    buffer_append_char(((struct buffer*)come_null_check(buf2_260, "07var.c", 1240)),*((struct sInfo*)come_null_check(info, "07var.c", 1240))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "07var.c", 1241))->p++;
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
                                    array_initializer_264=(char*)come_increment_ref_count(((char*)(right_value385=buffer_to_string(((struct buffer*)come_null_check(buf2_260, "07var.c", 1244))))));
                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1246);
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value387=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value386=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1246)))),(char*)come_increment_ref_count(name_258),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_257),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_264),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=_inf_value8)));
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    __result179__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value398=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value397=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1250)))),(struct sNode*)come_increment_ref_count(result_266),(_Bool)1)));
                                    if(buf2_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_264 && !__freed_obj__) { array_initializer_264 = come_decrement_ref_count(array_initializer_264, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_266 && !__freed_obj__) { result_266 = come_decrement_ref_count(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 0, 0); } 
                                    if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result179__;
                                    __freed_obj__ = 0;
                                    if(buf2_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_264 && !__freed_obj__) { array_initializer_264 = come_decrement_ref_count(array_initializer_264, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_266 && !__freed_obj__) { result_266 = come_decrement_ref_count(result_266, ((struct sNode*)result_266)->finalize, ((struct sNode*)result_266)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_value_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=expression_v13(info))));
                                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    __freed_obj__ = 0;
                                    right_values_268=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value401=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value400=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1257))))))));
                                    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*((struct sInfo*)come_null_check(info, "07var.c", 1262))->p==44,                                    __freed_obj__ = 0, 
                                    _while_condtional25) {
                                        __freed_obj__ = 0;
                                        if(anonymous_var_nameX1369_269 && !__freed_obj__) { anonymous_var_nameX1369_269 = come_decrement_ref_count(anonymous_var_nameX1369_269, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                    __dec_obj175=right_value_267;
                                    right_value_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_267),info))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1264);
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value404=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value403=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1264)))),(char*)come_increment_ref_count(name_258),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_257),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_267),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=_inf_value9)));
                                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    __result182__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value415=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value414=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1268)))),(struct sNode*)come_increment_ref_count(result_271),(_Bool)1)));
                                    if(right_value_267 && !__freed_obj__) { right_value_267 = come_decrement_ref_count(right_value_267, ((struct sNode*)right_value_267)->finalize, ((struct sNode*)right_value_267)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_268 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 0, 0); } 
                                    if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result182__;
                                    __freed_obj__ = 0;
                                    if(right_value_267 && !__freed_obj__) { right_value_267 = come_decrement_ref_count(right_value_267, ((struct sNode*)right_value_267)->finalize, ((struct sNode*)right_value_267)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_268 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 0, 0); } 
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1272);
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value417=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value416=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1272)))),(char*)come_increment_ref_count(name_258),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_257),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=_inf_value10)));
                                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                __result185__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value428=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value427=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1276)))),(struct sNode*)come_increment_ref_count(result_273),(_Bool)1)));
                                if(result_273 && !__freed_obj__) { result_273 = come_decrement_ref_count(result_273, ((struct sNode*)result_273)->finalize, ((struct sNode*)result_273)->_protocol_obj, 0, 0, 0); } 
                                if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result185__;
                                __freed_obj__ = 0;
                                if(result_273 && !__freed_obj__) { result_273 = come_decrement_ref_count(result_273, ((struct sNode*)result_273)->finalize, ((struct sNode*)result_273)->_protocol_obj, 0, 0, 0); } 
                            }
                            __freed_obj__ = 0;
                            if(type_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_258 && !__freed_obj__) { name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(word_255 && !__freed_obj__) { word_255 = come_decrement_ref_count(word_255, (void*)0, (void*)0, 0, 0, 0); }
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
    __current_stack1__.is_type_name_flag_200 = &is_type_name_flag_200;
    __current_stack1__.multiple_declare_201 = &multiple_declare_201;
    __current_stack1__.multiple_declare2_208 = &multiple_declare2_208;
    __current_stack1__.fun_215 = &fun_215;
    result_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("07var.c", 1285),((struct optional$2sNodephbool*)(right_value429=string_node_v5(buf,head,head_sline,info)))), "07var.c", 1285)),&__current_stack1__,(void*)method_block1_07varc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result188__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value434=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value433=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "07var.c", 1285)))),(struct sNode*)come_increment_ref_count(result_274),(_Bool)1)));
    if(result_274 && !__freed_obj__) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result188__;
    __freed_obj__ = 0;
    if(result_274 && !__freed_obj__) { result_274 = come_decrement_ref_count(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional327;
struct tuple3$3sTypephcharphbool* default_value_204;
struct tuple3$3sTypephcharphbool* __result151__;
struct tuple3$3sTypephcharphbool* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_204, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional327=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional327) {
                __freed_obj__ = 0;
                memset(&default_value_204,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __freed_obj__ = 0;
                __result151__ = __result_obj__ = default_value_204;
                __freed_obj__ = 0;
                return __result151__;
                __freed_obj__ = 0;
            }
            else {
                __result152__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional328=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional328) {
                if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional329=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional329) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional330=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional337;
void* right_value268;
struct list_item$1charph* litem_218;
char* __dec_obj121;
_Bool _if_conditional338;
void* right_value269;
struct list_item$1charph* litem_219;
char* __dec_obj122;
void* right_value270;
struct list_item$1charph* litem_220;
char* __dec_obj123;
struct list$1charph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
memset(&right_value269, 0, sizeof(void*));
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
memset(&right_value270, 0, sizeof(void*));
memset(&litem_220, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional337=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional337) {
                    litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value268=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_218, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_218, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj121=((struct list_item$1charph*)come_null_check(litem_218, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_218, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_218;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_218;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional338=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional338) {
                        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value269=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_219, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_219, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj122=((struct list_item$1charph*)come_null_check(litem_219, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_219, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_219;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_219;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value270=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_220, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_220, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj123=((struct list_item$1charph*)come_null_check(litem_220, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_220, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_220;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_220;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result153__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj132;
struct optional$2sNodephbool* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj132=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
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
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional357=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional357) {
                        if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                __freed_obj__ = 0;
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result158__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result158__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional359=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional359) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional360=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional360) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value297;
struct sType* __dec_obj133;
void* right_value298;
char* __dec_obj134;
struct tuple3$3sTypephcharphvoidp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
                __dec_obj133=((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1841))->v1;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(v1))));
                if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj134=((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1842))->v2;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value298=string_clone(v2))));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                __freed_obj__ = 0;
                __result160__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result160__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional361=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional361) {
                        if(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional362=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional362) {
                        if(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional363;
void* right_value300;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_231;
struct tuple3$3sTypephcharphsNodeph* __dec_obj135;
_Bool _if_conditional364;
void* right_value301;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_232;
struct tuple3$3sTypephcharphsNodeph* __dec_obj136;
void* right_value302;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_233;
struct tuple3$3sTypephcharphsNodeph* __dec_obj137;
struct list$1tuple3$3sTypephcharphsNodephph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&litem_231, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value301, 0, sizeof(void*));
memset(&litem_232, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value302, 0, sizeof(void*));
memset(&litem_233, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional363=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional363) {
                    litem_231=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value300=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 272))));
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_231, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_231, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj135=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_231, "./comelang2.h", 276))->item;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_231, "./comelang2.h", 276))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj135) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_231;
                    __freed_obj__ = 0;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_231;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional364=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional364) {
                        litem_232=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value301=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 282))));
                        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_232, "./comelang2.h", 284))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_232, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj136=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_232, "./comelang2.h", 286))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_232, "./comelang2.h", 286))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj136) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_232;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_232;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_233=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value302=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 292))));
                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_233, "./comelang2.h", 294))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_233, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj137=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_233, "./comelang2.h", 296))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_233, "./comelang2.h", 296))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj137) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_233;
                        __freed_obj__ = 0;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_233;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result161__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result161__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value326;
struct sType* __dec_obj145;
void* right_value327;
char* __dec_obj146;
void* right_value328;
struct sNode* __dec_obj147;
struct tuple3$3sTypephcharphsNodeph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
                        __dec_obj145=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1841))->v1;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(v1))));
                        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj146=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1842))->v2;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value327=string_clone(v2))));
                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        __dec_obj147=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1843))->v3;
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./comelang2.h", 1843))->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(v3))));
                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        __result165__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result165__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional421;
_Bool _if_conditional422;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional421=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional421) {
                                if(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name && !__freed_obj__) { ((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name = come_decrement_ref_count(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional422=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 2))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional422) {
                                if(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname && !__freed_obj__) { ((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname = come_decrement_ref_count(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional423;
struct sLoadNode* __result172__;
void* right_value368;
struct sLoadNode* result_253;
_Bool _if_conditional424;
void* right_value369;
char* __dec_obj163;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value370;
char* __dec_obj164;
struct sLoadNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sLoadNode*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                            if(_if_conditional423=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional423) {
                                __result172__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result172__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_253=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value368=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3))));
                            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional424=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5))->name!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional424) {
                                __dec_obj163=((struct sLoadNode*)come_null_check(result_253, "sLoadNode_clone", 4))->name;
                                ((struct sLoadNode*)come_null_check(result_253, "sLoadNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value369=string_clone(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 4))->name))));
                                if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
                                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional425=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional425) {
                                ((struct sLoadNode*)come_null_check(result_253, "sLoadNode_clone", 5))->sline=((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional426=self!=((void*)0)&&((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional426) {
                                __dec_obj164=((struct sLoadNode*)come_null_check(result_253, "sLoadNode_clone", 6))->sname;
                                ((struct sLoadNode*)come_null_check(result_253, "sLoadNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 6))->sname))));
                                if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result173__ = __result_obj__ = result_253;
                            if(result_253 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result173__;
                            __freed_obj__ = 0;
                            if(result_253 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional474;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional474=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional474) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional475=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional475) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1))->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional476=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional476) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2))->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional477=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional477) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value, ((struct sNode*)((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value)->finalize, ((struct sNode*)((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3))->right_value)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional478=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional478) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional479=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional479) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5))->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional480=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 7))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional480) {
                                        if(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname && !__freed_obj__) { ((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname = come_decrement_ref_count(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 6))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional481;
struct sStoreNode* __result183__;
void* right_value418;
struct sStoreNode* result_272;
_Bool _if_conditional482;
void* right_value419;
char* __dec_obj183;
_Bool _if_conditional483;
void* right_value420;
struct list$1charph* __dec_obj184;
_Bool _if_conditional484;
void* right_value421;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj185;
_Bool _if_conditional485;
void* right_value422;
struct sNode* __dec_obj186;
_Bool _if_conditional486;
void* right_value423;
struct sType* __dec_obj187;
_Bool _if_conditional487;
void* right_value424;
char* __dec_obj188;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
void* right_value425;
char* __dec_obj189;
struct sStoreNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value418, 0, sizeof(void*));
memset(&result_272, 0, sizeof(struct sStoreNode*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
                                    if(_if_conditional481=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional481) {
                                        __result183__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result183__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_272=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value418=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3))));
                                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional482=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5))->name!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional482) {
                                        __dec_obj183=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 4))->name;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 4))->name))));
                                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional483=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6))->multiple_assign!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional483) {
                                        __dec_obj184=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 5))->multiple_assign;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 5))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=list$1charphp_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5))->multiple_assign))));
                                        if(__dec_obj184) { come_call_finalizer(list$1charph_finalize,__dec_obj184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional484=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 7))->multiple_declare!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional484) {
                                        __dec_obj185=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 6))->multiple_declare;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 6))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value421=list$1tuple3$3sTypephcharphsNodephphp_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6))->multiple_declare))));
                                        if(__dec_obj185) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj185, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional485=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8))->right_value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional485) {
                                        __dec_obj186=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 7))->right_value;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 7))->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=sNode_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 7))->right_value))));
                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0); }
                                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional486=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9))->type!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional486) {
                                        __dec_obj187=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 8))->type;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 8))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value423=sType_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8))->type))));
                                        if(__dec_obj187) { come_call_finalizer(sType_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional487=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10))->array_initializer!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional487) {
                                        __dec_obj188=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 9))->array_initializer;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 9))->array_initializer=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9))->array_initializer))));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional488=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional488) {
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 10))->alloc=((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10))->alloc;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional489=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional489) {
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 11))->sline=((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 11))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional490=self!=((void*)0)&&((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 13))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional490) {
                                        __dec_obj189=((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 12))->sname;
                                        ((struct sStoreNode*)come_null_check(result_272, "sStoreNode_clone", 12))->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 12))->sname))));
                                        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result184__ = __result_obj__ = result_272;
                                    if(result_272 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result184__;
                                    __freed_obj__ = 0;
                                    if(result_272 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional491;
_Bool _if_conditional492;
struct sNode* __result186__;
struct sNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional491=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional491) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional492=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional492) {
                __result186__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result186__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result187__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result187__;
        __freed_obj__ = 0;
}

void method_block1_07varc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value430;
void* right_value431;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("07var.c", 1283), ((struct optional$2voidpbool*)(right_value431=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value430=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "07var.c", 1283))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

