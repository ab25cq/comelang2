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












struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
struct sStrNode* __result14__;
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
    __result14__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
void* right_value3;
struct buffer* buf_8;
char* p_9;
_Bool _while_condtional1;
_Bool _if_conditional7;
void* right_value4;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&buf_8, 0, sizeof(struct buffer*));
memset(&p_9, 0, sizeof(char*));
memset(&right_value4, 0, sizeof(void*));
    buf_8=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28))))))));
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    p_9=str;
    __freed_obj__ = 0;
    while(_while_condtional1=*p_9,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional7=*p_9==34,        __freed_obj__ = 0, 
        _if_conditional7) {
            p_9++;
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_8, "06str.c", 34)),92);
            __freed_obj__ = 0;
            buffer_append_char(((struct buffer*)come_null_check(buf_8, "06str.c", 35)),34);
            __freed_obj__ = 0;
        }
        else {
            buffer_append_char(((struct buffer*)come_null_check(buf_8, "06str.c", 38)),*p_9);
            __freed_obj__ = 0;
            p_9++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result16__ = __result_obj__ = ((char*)(right_value4=buffer_to_string(((struct buffer*)come_null_check(buf_8, "06str.c", 43)))));
    if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
    if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value5;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value5=__builtin_string("sStrNode")));
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value6;
struct CVALUE* come_value_10;
void* right_value7;
char* __dec_obj3;
void* right_value8;
void* right_value9;
struct sType* __dec_obj4;
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&come_value_10, 0, sizeof(struct CVALUE*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
    come_value_10=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value6=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53))));
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj3=((struct CVALUE*)come_null_check(come_value_10, "06str.c", 55))->c_value;
    ((struct CVALUE*)come_null_check(come_value_10, "06str.c", 55))->c_value=(char*)come_increment_ref_count(((char*)(right_value7=xsprintf("\"%s\"",((struct sStrNode*)come_null_check(self, "06str.c", 55))->value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj4=((struct CVALUE*)come_null_check(come_value_10, "06str.c", 56))->type;
    ((struct CVALUE*)come_null_check(come_value_10, "06str.c", 56))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value9=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value8=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))));
    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_10, "06str.c", 58))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 60))->stack, "06str.c", 60)),(struct CVALUE*)come_increment_ref_count(come_value_10));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_10, "06str.c", 62))->c_value);
    __freed_obj__ = 0;
    __result19__ = (_Bool)1;
    if(come_value_10 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
    if(come_value_10 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_10, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional8=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional8) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional9=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional9) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional12) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional13) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional24) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional25) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional11=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional11) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_11;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sTypeph*));
                        it_11=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_11!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_12=it_11;
                            __freed_obj__ = 0;
                            it_11=((struct list_item$1sTypeph*)come_null_check(it_11, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional15) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_13;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                        it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_13!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_14=it_13;
                            __freed_obj__ = 0;
                            it_13=((struct list_item$1sNodeph*)come_null_check(it_13, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional17) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_15;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1charph*));
                        it_15=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional4=it_15!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional4) {
                            prev_it_16=it_15;
                            __freed_obj__ = 0;
                            it_15=((struct list_item$1charph*)come_null_check(it_15, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional20=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional20) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
void* right_value10;
struct list_item$1CVALUEph* litem_17;
struct CVALUE* __dec_obj5;
_Bool _if_conditional28;
void* right_value11;
struct list_item$1CVALUEph* litem_18;
struct CVALUE* __dec_obj6;
void* right_value12;
struct list_item$1CVALUEph* litem_19;
struct CVALUE* __dec_obj7;
struct list$1CVALUEph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional26=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional26) {
            litem_17=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value10=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj5=((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj5) { come_call_finalizer(CVALUE_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_17;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_17;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional28=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional28) {
                litem_18=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value11=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_18, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_18, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj6=((struct list_item$1CVALUEph*)come_null_check(litem_18, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_18, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj6) { come_call_finalizer(CVALUE_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_18;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_18;
                __freed_obj__ = 0;
            }
            else {
                litem_19=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value12=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_19, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_19, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj7=((struct list_item$1CVALUEph*)come_null_check(litem_19, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_19, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj7) { come_call_finalizer(CVALUE_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_19;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_19;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result18__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result18__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional27=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result20__ = ((struct sStrNode*)come_null_check(self, "06str.c", 69))->sline;
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value13;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((char*)(right_value13=__builtin_string(((struct sStrNode*)come_null_check(self, "06str.c", 74))->sname)));
    __freed_obj__ = 0;
    return __result21__;
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
struct sSStringNode* __result28__;
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
    __result28__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional29;
struct list$1sNodeph* __result22__;
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_20;
struct list_item$1sNodeph* it_21;
_Bool _while_condtional5;
void* right_value21;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct list$1sNodeph*));
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value21, 0, sizeof(void*));
        if(_if_conditional29=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __result22__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result22__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_20=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_21=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
        __freed_obj__ = 0;
        while(_while_condtional5=it_21!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional5) {
            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_20, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_21, "./comelang2.h", 192))->item)))));
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            it_21=((struct list_item$1sNodeph*)come_null_check(it_21, "./comelang2.h", 194))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result27__ = __result_obj__ = result_20;
        if(result_20 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result27__;
        __freed_obj__ = 0;
        if(result_20 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
            __freed_obj__ = 0;
            __result23__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result23__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
void* right_value17;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj9;
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj10;
void* right_value19;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional30=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                __freed_obj__ = 0, 
                _if_conditional30) {
                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 204))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 205))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 206))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_22;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_22;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 215))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 216))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_23, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_23;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_23;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 225))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 226))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_24, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_24;
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_24;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                __freed_obj__ = 0;
                __result24__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result24__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
struct sNode* __result25__;
void* right_value20;
struct sNode* result_25;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&result_25, 0, sizeof(struct sNode*));
                if(_if_conditional32=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional32) {
                    __result25__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_25=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional33) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional35=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional35) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional37=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional37) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional38=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional38) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional39=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional39) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional40=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    ((struct sNode*)come_null_check(result_25, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result26__ = __result_obj__ = result_25;
                if(result_25 && !__freed_obj__) { result_25 = come_decrement_ref_count(result_25, ((struct sNode*)result_25)->finalize, ((struct sNode*)result_25)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result26__;
                __freed_obj__ = 0;
                if(result_25 && !__freed_obj__) { result_25 = come_decrement_ref_count(result_25, ((struct sNode*)result_25)->finalize, ((struct sNode*)result_25)->_protocol_obj, 0, 0, 0); } 
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
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
}

char* sSStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
char* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    __result30__ = __result_obj__ = ((char*)(right_value24=__builtin_string("sSStringNode")));
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
struct CVALUE* come_value_26;
void* right_value26;
void* right_value27;
struct buffer* buf_27;
_Bool _if_conditional44;
struct list$1sNodeph* o2_saved_28;
struct sNode* it_31;
_Bool _for_condtionalA2;
_Bool _if_conditional49;
_Bool __result39__;
void* right_value28;
struct CVALUE* come_value_34;
void* right_value29;
char* method_name_35;
void* right_value31;
_Bool _if_conditional55;
struct sType* obj_type_39;
_Bool _if_conditional71;
struct sType* obj_type2_40;
void* right_value32;
void* right_value33;
char* __dec_obj14;
void* right_value34;
void* right_value35;
struct buffer* buf2_41;
void* right_value36;
void* right_value37;
struct sType* type_42;
void* right_value38;
void* right_value39;
char* c_value_43;
void* right_value40;
void* right_value41;
struct sType* type2_44;
void* right_value42;
char* __dec_obj15;
void* right_value43;
char* __dec_obj16;
void* right_value71;
struct sType* __dec_obj36;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&come_value_26, 0, sizeof(struct CVALUE*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&buf_27, 0, sizeof(struct buffer*));
memset(&o2_saved_28, 0, sizeof(struct list$1sNodeph*));
memset(&it_31, 0, sizeof(struct sNode*));
memset(&right_value28, 0, sizeof(void*));
memset(&come_value_34, 0, sizeof(struct CVALUE*));
memset(&right_value29, 0, sizeof(void*));
memset(&method_name_35, 0, sizeof(char*));
memset(&right_value31, 0, sizeof(void*));
memset(&obj_type_39, 0, sizeof(struct sType*));
memset(&obj_type2_40, 0, sizeof(struct sType*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&buf2_41, 0, sizeof(struct buffer*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&type_42, 0, sizeof(struct sType*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&c_value_43, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&type2_44, 0, sizeof(struct sType*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    come_value_26=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value25=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buf_27=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111))))))));
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 113)),"xsprintf(\"");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 114)),((struct sSStringNode*)come_null_check(self, "06str.c", 114))->value);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 115)),"\"");
    __freed_obj__ = 0;
    if(_if_conditional44=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 157))->exps, "06str.c", 157)))>0,    __freed_obj__ = 0, 
    _if_conditional44) {
        for(
        o2_saved_28=(struct list$1sNodeph*)come_increment_ref_count((((struct sSStringNode*)come_null_check(self, "06str.c", 155))->exps)),it_31=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_28), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_28), "06str.c", 155))) ,        __freed_obj__ = 0, 
        _for_condtionalA2;        it_31=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_28), "06str.c", 155))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional49=!((struct sNode*)come_null_check(it_31, "06str.c", 123))->compile(((struct sNode*)come_null_check(it_31, "06str.c", 123))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional49) {
                __result39__ = (_Bool)0;
                if(o2_saved_28 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_26 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_27 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_34=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value28=get_value_from_stack(-1,info))));
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_name_35=(char*)come_increment_ref_count(((char*)(right_value29=create_method_name(((struct CVALUE*)come_null_check(come_value_34, "06str.c", 126))->type,(_Bool)0,"to_string",info))));
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional55=((struct sFun*)(right_value31=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 140))->funcs, "06str.c", 140)),method_name_35,((void*)0))))==((void*)0),            (right_value31 && right_value31 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional55) {
                obj_type_39=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_34, "06str.c", 129))->type, "06str.c", 129))->mNoSolvedGenericsType, "06str.c", 129))->v1;
                __freed_obj__ = 0;
                if(_if_conditional71=obj_type_39&&list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_39, "06str.c", 138))->mGenericsTypes, "06str.c", 138)))>0,                __freed_obj__ = 0, 
                _if_conditional71) {
                    obj_type2_40=((struct CVALUE*)come_null_check(come_value_34, "06str.c", 131))->type;
                    __freed_obj__ = 0;
                    __dec_obj14=method_name_35;
                    method_name_35=(char*)come_increment_ref_count(((char*)(right_value33=make_generics_function(obj_type2_40,(char*)come_increment_ref_count(((char*)(right_value32=__builtin_string("to_string")))),info))));
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_34, "06str.c", 135))->type, "06str.c", 135))->mClass, "06str.c", 135))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buf2_41=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value34=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))));
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_41, "06str.c", 142)),method_name_35);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_41, "06str.c", 143)),"(");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_41, "06str.c", 144)),((struct CVALUE*)come_null_check(come_value_34, "06str.c", 144))->c_value);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf2_41, "06str.c", 145)),")");
            __freed_obj__ = 0;
            type_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value36=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))));
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_42, "06str.c", 148))->mHeap=(_Bool)1;
            __freed_obj__ = 0;
            c_value_43=(char*)come_increment_ref_count(((char*)(right_value39=append_object_to_right_values(((char*)(right_value38=buffer_to_string(((struct buffer*)come_null_check(buf2_41, "06str.c", 150))))),(struct sType*)come_increment_ref_count(type_42),info))));
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 152)),",");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 153)),c_value_43);
            __freed_obj__ = 0;
            if(come_value_34 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_34, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_35 && !__freed_obj__) { method_name_35 = come_decrement_ref_count(method_name_35, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_41 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_42, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_43 && !__freed_obj__) { c_value_43 = come_decrement_ref_count(c_value_43, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_28 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_27, "06str.c", 157)),")");
    __freed_obj__ = 0;
    type2_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value40=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_44, "06str.c", 160))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj15=((struct CVALUE*)come_null_check(come_value_26, "06str.c", 162))->c_value;
    ((struct CVALUE*)come_null_check(come_value_26, "06str.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value42=buffer_to_string(((struct buffer*)come_null_check(buf_27, "06str.c", 162))))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj16=((struct CVALUE*)come_null_check(come_value_26, "06str.c", 163))->c_value;
    ((struct CVALUE*)come_null_check(come_value_26, "06str.c", 163))->c_value=(char*)come_increment_ref_count(((char*)(right_value43=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_26, "06str.c", 163))->c_value,(struct sType*)come_increment_ref_count(type2_44),info))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj36=((struct CVALUE*)come_null_check(come_value_26, "06str.c", 164))->type;
    ((struct CVALUE*)come_null_check(come_value_26, "06str.c", 164))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(type2_44))));
    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_26, "06str.c", 165))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 167))->stack, "06str.c", 167)),(struct CVALUE*)come_increment_ref_count(come_value_26));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_26, "06str.c", 169))->c_value);
    __freed_obj__ = 0;
    __result59__ = (_Bool)1;
    if(come_value_26 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_27 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
    if(come_value_26 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_27 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result31__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result31__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional45;
struct sNode* result_29;
struct sNode* __result32__;
_Bool _if_conditional46;
struct sNode* __result33__;
struct sNode* result_30;
struct sNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            if(_if_conditional45=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional45) {
                __freed_obj__ = 0;
                memset(&result_29,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result32__ = __result_obj__ = result_29;
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional46=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional46) {
                __result33__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_30,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result34__ = __result_obj__ = result_30;
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result35__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional47;
struct sNode* result_32;
struct sNode* __result36__;
_Bool _if_conditional48;
struct sNode* __result37__;
struct sNode* result_33;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_32, 0, sizeof(struct sNode*));
memset(&result_33, 0, sizeof(struct sNode*));
            if(_if_conditional47=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional47) {
                __freed_obj__ = 0;
                memset(&result_32,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result36__ = __result_obj__ = result_32;
                __freed_obj__ = 0;
                return __result36__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional48=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional48) {
                __result37__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_33,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result38__ = __result_obj__ = result_33;
            __freed_obj__ = 0;
            return __result38__;
            __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_36;
unsigned int it_37;
_Bool _while_condtional6;
_Bool _if_conditional50;
void* right_value30;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional52;
struct sFun* __result42__;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result43__;
struct sFun* __result44__;
struct sFun* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_36, 0, sizeof(unsigned int));
memset(&it_37, 0, sizeof(unsigned int));
memset(&right_value30, 0, sizeof(void*));
                hash_36=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                __freed_obj__ = 0;
                it_37=hash_36;
                __freed_obj__ = 0;
                while(_while_condtional6=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional6) {
                    if(_if_conditional50=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_37],                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        if(_if_conditional52=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value30=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_37], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                        (right_value30 && right_value30 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional52) {
                            __result42__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_37];
                            __freed_obj__ = 0;
                            return __result42__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_37++;
                        __freed_obj__ = 0;
                        if(_if_conditional53=it_37>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                        __freed_obj__ = 0, 
                        _if_conditional53) {
                            it_37=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional54=it_37==hash_36,                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                __result43__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result43__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result44__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result44__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result45__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result45__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional51;
_Bool default_value_38;
_Bool __result40__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_38, 0, sizeof(_Bool));
                            if(_if_conditional51=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                __freed_obj__ = 0;
                                memset(&default_value_38,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result40__ = default_value_38;
                                __freed_obj__ = 0;
                                return __result40__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result41__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result41__;
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
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional56=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional56) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional57=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional57) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional58=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional58) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional59=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional59) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional60=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional60) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional61=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional61) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional65=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional65) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional66=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional66) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional67=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional67) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional68=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional68) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional69=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional69) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional70=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional70) {
                    if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional63=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional63) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional64=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional64) {
                            if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result46__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional72;
struct sType* __result47__;
void* right_value44;
struct sType* result_45;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional78;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional79;
void* right_value49;
char* __dec_obj20;
_Bool _if_conditional80;
void* right_value56;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional84;
void* right_value57;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value58;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional87;
void* right_value65;
struct list$1charph* __dec_obj30;
_Bool _if_conditional91;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value67;
struct sNode* __dec_obj32;
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
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value68;
struct sNode* __dec_obj33;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value69;
char* __dec_obj34;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value70;
char* __dec_obj35;
struct sType* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&result_45, 0, sizeof(struct sType*));
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
        if(_if_conditional72=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional72) {
            __result47__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj18=((struct sType*)come_null_check(result_45, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_45, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj19=((struct sType*)come_null_check(result_45, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_45, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            __dec_obj20=((struct sType*)come_null_check(result_45, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_45, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            __dec_obj24=((struct sType*)come_null_check(result_45, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_45, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj24) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            __dec_obj25=((struct sType*)come_null_check(result_45, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_45, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj25) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            __dec_obj26=((struct sType*)come_null_check(result_45, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_45, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value58=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj26) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            __dec_obj30=((struct sType*)come_null_check(result_45, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_45, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj30) { come_call_finalizer(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            __dec_obj31=((struct sType*)come_null_check(result_45, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_45, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional92=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional92) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional93=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional93) {
            __dec_obj32=((struct sType*)come_null_check(result_45, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_45, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional94=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional94) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional95=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional95) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional96=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional96) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional97=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional97) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional98=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional98) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional99=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional99) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional100=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional100) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional101=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional101) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional102=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional102) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional103=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional103) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional104=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional104) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional105=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional105) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional106=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional106) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional107) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional109=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional109) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional110=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional110) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional111=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional111) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional112=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional112) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional113=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional113) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional114=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional114) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional115=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional115) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional116=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional117=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional117) {
            __dec_obj33=((struct sType*)come_null_check(result_45, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_45, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional118=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional119=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional119) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional120=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional120) {
            __dec_obj34=((struct sType*)come_null_check(result_45, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_45, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional121=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional121) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional122=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional125=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional125) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional126=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional126) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional127=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional127) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional128=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional128) {
            ((struct sType*)come_null_check(result_45, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional129=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional129) {
            __dec_obj35=((struct sType*)come_null_check(result_45, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_45, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result58__ = __result_obj__ = result_45;
        if(result_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
        if(result_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional75;
struct tuple1$1sTypeph* __result48__;
void* right_value45;
struct tuple1$1sTypeph* result_46;
_Bool _if_conditional77;
void* right_value46;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_46, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value46, 0, sizeof(void*));
                if(_if_conditional75=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional75) {
                    __result48__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_46=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional77=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional77) {
                    __dec_obj17=((struct tuple1$1sTypeph*)come_null_check(result_46, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_46, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = result_46;
                if(result_46 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_46, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
                if(result_46 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_46, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional76=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional76) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional81;
struct list$1sTypeph* __result50__;
void* right_value50;
void* right_value51;
struct list$1sTypeph* result_47;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
void* right_value55;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct list$1sTypeph*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
                if(_if_conditional81=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional81) {
                    __result50__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result50__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_47=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_48=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional7=it_48!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_47, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_48, "./comelang2.h", 192))->item)))));
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_48=((struct list_item$1sTypeph*)come_null_check(it_48, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result53__ = __result_obj__ = result_47;
                if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
                if(result_47 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result51__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result51__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional82;
void* right_value52;
struct list_item$1sTypeph* litem_49;
struct sType* __dec_obj21;
_Bool _if_conditional83;
void* right_value53;
struct list_item$1sTypeph* litem_50;
struct sType* __dec_obj22;
void* right_value54;
struct list_item$1sTypeph* litem_51;
struct sType* __dec_obj23;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional82=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional82) {
                            litem_49=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_49, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_49, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_49, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_49, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_49;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_49;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional83=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional83) {
                                litem_50=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_50, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_50, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_50, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_50, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_50;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_50;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_51=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_51, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_51, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj23=((struct list_item$1sTypeph*)come_null_check(litem_51, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_51, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_51;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_51;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result52__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result52__;
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
_Bool _if_conditional88;
struct list$1charph* __result54__;
void* right_value59;
void* right_value60;
struct list$1charph* result_52;
struct list_item$1charph* it_53;
_Bool _while_condtional8;
void* right_value64;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_52, 0, sizeof(struct list$1charph*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
                if(_if_conditional88=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional88) {
                    __result54__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result54__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_52=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value60=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value59=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_53=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_53!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_52, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value64=string_clone(((struct list_item$1charph*)come_null_check(it_53, "./comelang2.h", 192))->item)))));
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_53=((struct list_item$1charph*)come_null_check(it_53, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result57__ = __result_obj__ = result_52;
                if(result_52 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result57__;
                __freed_obj__ = 0;
                if(result_52 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result55__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result55__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional89;
void* right_value61;
struct list_item$1charph* litem_54;
char* __dec_obj27;
_Bool _if_conditional90;
void* right_value62;
struct list_item$1charph* litem_55;
char* __dec_obj28;
void* right_value63;
struct list_item$1charph* litem_56;
char* __dec_obj29;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional89=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional89) {
                            litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj27=((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_54, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_54;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_54;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional90=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional90) {
                                litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value62=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj28=((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_55, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_55;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_55;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj29=((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_56;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_56;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result56__;
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
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result60__ = ((struct sSStringNode*)come_null_check(self, "06str.c", 176))->sline;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value72;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
    __result61__ = __result_obj__ = ((char*)(right_value72=__builtin_string(((struct sSStringNode*)come_null_check(self, "06str.c", 181))->sname)));
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value73;
char* __dec_obj37;
struct sCharNode* __result62__;
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
    __result62__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result63__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value74;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
    __result64__ = __result_obj__ = ((char*)(right_value74=__builtin_string("sCharNode")));
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value75;
struct CVALUE* come_value_57;
void* right_value76;
char* __dec_obj38;
void* right_value77;
void* right_value78;
struct sType* __dec_obj39;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj38=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 215))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 215))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%d",((struct sCharNode*)come_null_check(self, "06str.c", 215))->value))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj39=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 216))->type;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 216))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value77=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 217))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 219))->stack, "06str.c", 219)),(struct CVALUE*)come_increment_ref_count(come_value_57));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_57, "06str.c", 221))->c_value);
    __freed_obj__ = 0;
    __result65__ = (_Bool)1;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result66__ = ((struct sCharNode*)come_null_check(self, "06str.c", 228))->sline;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value79;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(right_value79=__builtin_string(((struct sCharNode*)come_null_check(self, "06str.c", 233))->sname)));
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value80;
char* __dec_obj40;
struct sWCharNode* __result68__;
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
    __result68__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value81;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
    __result70__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sWCharNode")));
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value82;
struct CVALUE* come_value_58;
void* right_value83;
char* __dec_obj41;
void* right_value84;
void* right_value85;
struct sType* __dec_obj42;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&come_value_58, 0, sizeof(struct CVALUE*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
    come_value_58=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj41=((struct CVALUE*)come_null_check(come_value_58, "06str.c", 267))->c_value;
    ((struct CVALUE*)come_null_check(come_value_58, "06str.c", 267))->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("L'%lc'",((struct sWCharNode*)come_null_check(self, "06str.c", 267))->value))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj42=((struct CVALUE*)come_null_check(come_value_58, "06str.c", 268))->type;
    ((struct CVALUE*)come_null_check(come_value_58, "06str.c", 268))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_58, "06str.c", 269))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 271))->stack, "06str.c", 271)),(struct CVALUE*)come_increment_ref_count(come_value_58));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_58, "06str.c", 273))->c_value);
    __freed_obj__ = 0;
    __result71__ = (_Bool)1;
    if(come_value_58 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
    if(come_value_58 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = ((struct sWCharNode*)come_null_check(self, "06str.c", 280))->sline;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value86;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
    __result73__ = __result_obj__ = ((char*)(right_value86=__builtin_string(((struct sWCharNode*)come_null_check(self, "06str.c", 285))->sname)));
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int* __dec_obj43;
void* right_value87;
char* __dec_obj44;
struct sWStringNode* __result74__;
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
    __result74__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value88;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    __result76__ = __result_obj__ = ((char*)(right_value88=__builtin_string("sWStringNode")));
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value89;
struct CVALUE* come_value_59;
void* right_value90;
char* __dec_obj45;
void* right_value91;
void* right_value92;
struct sType* __dec_obj46;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj45=((struct CVALUE*)come_null_check(come_value_59, "06str.c", 319))->c_value;
    ((struct CVALUE*)come_null_check(come_value_59, "06str.c", 319))->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("L'%ls'",((struct sWStringNode*)come_null_check(self, "06str.c", 319))->value))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_59, "06str.c", 320))->type;
    ((struct CVALUE*)come_null_check(come_value_59, "06str.c", 320))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_59, "06str.c", 321))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 323))->stack, "06str.c", 323)),(struct CVALUE*)come_increment_ref_count(come_value_59));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_59, "06str.c", 325))->c_value);
    __freed_obj__ = 0;
    __result77__ = (_Bool)1;
    if(come_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
    if(come_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = ((struct sWStringNode*)come_null_check(self, "06str.c", 332))->sline;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value93;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
    __result79__ = __result_obj__ = ((char*)(right_value93=__builtin_string(((struct sWStringNode*)come_null_check(self, "06str.c", 337))->sname)));
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value94;
char* __dec_obj47;
void* right_value95;
char* __dec_obj48;
struct sRegexNode* __result80__;
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
    __result80__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value96;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sRegexNode")));
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value97;
struct CVALUE* come_value_60;
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
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_60, 0, sizeof(struct CVALUE*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj49=((struct CVALUE*)come_null_check(come_value_60, "06str.c", 376))->c_value;
    ((struct CVALUE*)come_null_check(come_value_60, "06str.c", 376))->c_value=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",((struct sRegexNode*)come_null_check(self, "06str.c", 376))->str,((struct sRegexNode*)come_null_check(self, "06str.c", 376))->ignore_case?((char*)(right_value98=__builtin_string("1"))):((char*)(right_value99=__builtin_string("0"))),((struct sRegexNode*)come_null_check(self, "06str.c", 376))->global?((char*)(right_value100=__builtin_string("1"))):((char*)(right_value101=__builtin_string("0")))))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_60, "06str.c", 377))->type;
    ((struct CVALUE*)come_null_check(come_value_60, "06str.c", 377))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))));
    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_60, "06str.c", 378))->type, "06str.c", 378))->mPointerNum=1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_60, "06str.c", 379))->type, "06str.c", 379))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_60, "06str.c", 380))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 382))->stack, "06str.c", 382)),(struct CVALUE*)come_increment_ref_count(come_value_60));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_60, "06str.c", 384))->c_value);
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_60, "06str.c", 386))->c_value;
    ((struct CVALUE*)come_null_check(come_value_60, "06str.c", 386))->c_value=(char*)come_increment_ref_count(((char*)(right_value105=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_60, "06str.c", 386))->c_value,(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_60, "06str.c", 386))->type),info))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result83__ = (_Bool)1;
    if(come_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
    if(come_value_60 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = ((struct sRegexNode*)come_null_check(self, "06str.c", 393))->sline;
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value106;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result85__ = __result_obj__ = ((char*)(right_value106=__builtin_string(((struct sRegexNode*)come_null_check(self, "06str.c", 398))->sname)));
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj52;
void* right_value107;
char* __dec_obj53;
struct sListNode* __result86__;
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
    __result86__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value108;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(right_value108=__builtin_string("sListNode")));
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* list_elements_61;
void* right_value109;
void* right_value110;
struct list$1CVALUEph* params_64;
struct sType* list_element_type_65;
struct list$1sNodeph* o2_saved_66;
struct sNode* it_67;
_Bool _for_condtionalA3;
_Bool _if_conditional138;
_Bool __result90__;
void* right_value111;
struct CVALUE* come_value_68;
void* right_value112;
struct sType* __dec_obj54;
void* right_value113;
struct sType* type_values_69;
void* right_value117;
static int list_value_num_73=0;
void* right_value118;
char* var_name_74;
void* right_value119;
struct sVar* var__75;
void* right_value120;
void* right_value121;
void* right_value122;
struct buffer* source_77;
int i_78;
struct list$1CVALUEph* o2_saved_79;
struct CVALUE* it_82;
_Bool _for_condtionalA4;
_Bool _if_conditional147;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
struct sType* list_type_89;
void* right_value137;
void* right_value138;
struct sType* obj_type_93;
char* fun_name_94;
void* right_value139;
void* right_value140;
void* right_value141;
char* generics_fun_name_95;
void* right_value142;
struct sFun* fun_96;
_Bool _if_conditional154;
void* right_value143;
void* right_value144;
char* __dec_obj62;
void* right_value145;
_Bool _if_conditional155;
_Bool __result108__;
void* right_value146;
struct sType* result_type_97;
struct sType* type_98;
void* right_value147;
struct CVALUE* obj_value_99;
void* right_value148;
void* right_value149;
struct buffer* num_string_100;
void* right_value150;
struct sType* type2_101;
void* right_value151;
char* type_name_102;
void* right_value152;
void* right_value153;
char* __dec_obj63;
void* right_value154;
struct sType* type3_103;
void* right_value155;
struct sType* __dec_obj64;
void* right_value156;
char* __dec_obj65;
void* right_value157;
void* right_value158;
struct list$1CVALUEph* come_params_104;
void* right_value163;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
char* __dec_obj67;
_Bool _if_conditional164;
void* right_value164;
char* __dec_obj68;
_Bool _if_conditional165;
void* right_value165;
char* __dec_obj69;
void* right_value166;
char* __dec_obj70;
_Bool _if_conditional166;
void* right_value167;
char* __dec_obj71;
void* right_value168;
struct CVALUE* come_value2_109;
void* right_value169;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value170;
struct CVALUE* come_value3_110;
void* right_value171;
char* __dec_obj74;
struct sType* __dec_obj75;
void* right_value172;
void* right_value173;
struct buffer* buf_111;
int j_112;
struct list$1CVALUEph* o2_saved_113;
struct CVALUE* it_114;
_Bool _for_condtionalA5;
_Bool _if_conditional167;
void* right_value174;
struct CVALUE* come_value4_115;
void* right_value175;
char* __dec_obj76;
_Bool _if_conditional168;
void* right_value176;
void* right_value177;
char* __dec_obj77;
void* right_value178;
struct sType* __dec_obj78;
void* right_value179;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_61, 0, sizeof(struct list$1sNodeph*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&params_64, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_65, 0, sizeof(struct sType*));
memset(&o2_saved_66, 0, sizeof(struct list$1sNodeph*));
memset(&it_67, 0, sizeof(struct sNode*));
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&type_values_69, 0, sizeof(struct sType*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&var_name_74, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&var__75, 0, sizeof(struct sVar*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&source_77, 0, sizeof(struct buffer*));
memset(&i_78, 0, sizeof(int));
memset(&o2_saved_79, 0, sizeof(struct list$1CVALUEph*));
memset(&it_82, 0, sizeof(struct CVALUE*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&list_type_89, 0, sizeof(struct sType*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&obj_type_93, 0, sizeof(struct sType*));
memset(&fun_name_94, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&generics_fun_name_95, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&fun_96, 0, sizeof(struct sFun*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&result_type_97, 0, sizeof(struct sType*));
memset(&type_98, 0, sizeof(struct sType*));
memset(&right_value147, 0, sizeof(void*));
memset(&obj_value_99, 0, sizeof(struct CVALUE*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&num_string_100, 0, sizeof(struct buffer*));
memset(&right_value150, 0, sizeof(void*));
memset(&type2_101, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&type_name_102, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&type3_103, 0, sizeof(struct sType*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&come_params_104, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&come_value2_109, 0, sizeof(struct CVALUE*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&come_value3_110, 0, sizeof(struct CVALUE*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&buf_111, 0, sizeof(struct buffer*));
memset(&j_112, 0, sizeof(int));
memset(&o2_saved_113, 0, sizeof(struct list$1CVALUEph*));
memset(&it_114, 0, sizeof(struct CVALUE*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value4_115, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    list_elements_61=((struct sListNode*)come_null_check(self, "06str.c", 430))->list_elements;
    __freed_obj__ = 0;
    params_64=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value110=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value109=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))));
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    o2_saved_66=(list_elements_61),it_67=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_66), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_66), "06str.c", 448))) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_67=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_66), "06str.c", 448))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional138=!((struct sNode*)come_null_check(it_67, "06str.c", 440))->compile(((struct sNode*)come_null_check(it_67, "06str.c", 440))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional138) {
            __result90__ = (_Bool)0;
            if(params_64 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(params_64, "06str.c", 443)),(struct CVALUE*)come_increment_ref_count(come_value_68));
        __freed_obj__ = 0;
        __dec_obj54=list_element_type_65;
        list_element_type_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(((struct CVALUE*)come_null_check(come_value_68, "06str.c", 445))->type))));
        if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_values_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(list_element_type_65))));
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_values_69, "06str.c", 449))->mArrayNum, "06str.c", 449)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_64, "06str.c", 449))),info)))));
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_values_69, "06str.c", 450))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    var_name_74=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("__list_values%d__",++list_value_num_73))));
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name_74,(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type_values_69)))),info);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var__75=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 457))->lv_table,var_name_74);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_value((come_push_stackframe("06str.c", 459),((struct optional$2charphbool*)(right_value120=make_define_var(type_values_69,((struct sVar*)come_null_check(var__75, "06str.c", 459))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    source_77=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))));
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_77, "06str.c", 463)),"{");
    __freed_obj__ = 0;
    i_78=0;
    __freed_obj__ = 0;
    for(
    o2_saved_79=(struct list$1CVALUEph*)come_increment_ref_count((params_64)),it_82=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_79), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_79), "06str.c", 476))) ,    __freed_obj__ = 0, 
    _for_condtionalA4;    it_82=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_79), "06str.c", 476))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional147=((struct sType*)come_null_check(list_element_type_65, "06str.c", 473))->mHeap,        __freed_obj__ = 0, 
        _if_conditional147) {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_77, "06str.c", 468)),((char*)(right_value128=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__75, "06str.c", 468))->mCValueName,i_78,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 468),((struct optional$2CVALUEphbool*)(right_value127=list$1CVALUEphp_operator_load_element(params_64,i_78))))), "06str.c", 468))->c_value))));
            come_pop_stackframe();
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(source_77, "06str.c", 471)),((char*)(right_value130=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__75, "06str.c", 471))->mCValueName,i_78,((struct CVALUE*)come_null_check(optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 471),((struct optional$2CVALUEphbool*)(right_value129=list$1CVALUEphp_operator_load_element(params_64,i_78))))), "06str.c", 471))->c_value))));
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_78++;
        __freed_obj__ = 0;
    }
    if(o2_saved_79 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_77, "06str.c", 476)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value131=buffer_to_string(((struct buffer*)come_null_check(source_77, "06str.c", 478))))));
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list_type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))));
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(list_type_89, "06str.c", 481))->mGenericsTypes, "06str.c", 481)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(list_element_type_65)))));
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    obj_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(list_type_89))));
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_94="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_95=(char*)come_increment_ref_count(((char*)(right_value141=string_to_string(((char*)come_null_check(((char*)(right_value140=make_generics_function(obj_type_93,(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(fun_name_94)))),info))), "06str.c", 486))))));
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_96=((struct sFun*)(right_value142=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 488))->funcs, "06str.c", 488)),generics_fun_name_95,((void*)0))));
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional154=fun_96==((void*)0),    __freed_obj__ = 0, 
    _if_conditional154) {
        __dec_obj62=generics_fun_name_95;
        generics_fun_name_95=(char*)come_increment_ref_count(((char*)(right_value144=create_method_name(obj_type_93,(_Bool)0,((char*)(right_value143=__builtin_string(fun_name_94))),info))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_96=((struct sFun*)(right_value145=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 493))->funcs, "06str.c", 493)),generics_fun_name_95,((void*)0))));
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional155=fun_96==((void*)0),        __freed_obj__ = 0, 
        _if_conditional155) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_95,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 496))->come_fun, "06str.c", 496))->mName);
            __freed_obj__ = 0;
            __result108__ = (_Bool)1;
            if(params_64 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_69, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_74 && !__freed_obj__) { var_name_74 = come_decrement_ref_count(var_name_74, (void*)0, (void*)0, 0, 0, 0); }
            if(source_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_77, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_95 && !__freed_obj__) { generics_fun_name_95 = come_decrement_ref_count(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(((struct sFun*)come_null_check(fun_96, "06str.c", 501))->mResultType))));
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_97, "06str.c", 502))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_98=list_type_89;
    __freed_obj__ = 0;
    obj_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_100=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))));
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_100, "06str.c", 510)),"1");
    __freed_obj__ = 0;
    type2_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=solve_generics(type_98,type_98,info))));
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_102=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 514),((struct optional$2charphbool*)(right_value151=make_type_name_string(type2_101,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj63=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 516))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 516))->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_102,type_name_102,((char*)(right_value152=buffer_to_string(((struct buffer*)come_null_check(num_string_100, "06str.c", 516))))),((struct sInfo*)come_null_check(info, "06str.c", 516))->sname,((struct sInfo*)come_null_check(info, "06str.c", 516))->sline))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type2_101))));
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_103, "06str.c", 519))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_103, "06str.c", 520))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_101, "06str.c", 521))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj64=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 522))->type;
    ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 522))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type2_101))));
    if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj65=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 523))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 523))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 523))->c_value,(struct sType*)come_increment_ref_count(type3_103),info))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 524))->type, "06str.c", 524))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 525))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_104=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value158=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value157=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))));
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    if(_if_conditional161=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("06str.c", 556),((struct optional$2sTypephbool*)(right_value163=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_96, "06str.c", 556))->mParamTypes,0))))), "06str.c", 556))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 556))->type, "06str.c", 556))->mHeap,    come_pop_stackframe() ,    (right_value163 && right_value163 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional161) {
        if(_if_conditional162=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 555))->var,        __freed_obj__ = 0, 
        _if_conditional162) {
            if(_if_conditional163=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional163) {
                __dec_obj67=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 532))->var, "06str.c", 532))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 532))->var, "06str.c", 532))->mCValueName=((void*)0);
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional164=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mShare,                __freed_obj__ = 0, 
                _if_conditional164) {
                    __dec_obj68=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 535))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 535))->c_value=(char*)come_increment_ref_count(((char*)(right_value164=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 535))->type,((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 535))->c_value,info))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional165=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 547))->var, "06str.c", 547))->mType, "06str.c", 547))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional165) {
                        __dec_obj69=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 538))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 538))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 538))->type,((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 538))->c_value,info))));
                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj70=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 541))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 541))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 541))->type,((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 541))->c_value,info))));
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
            if(_if_conditional166=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 554))->type, "06str.c", 554))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional166) {
            }
            else {
                __dec_obj71=((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 552))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 552))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 552))->type,((struct CVALUE*)come_null_check(obj_value_99, "06str.c", 552))->c_value,info))));
                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_104, "06str.c", 556)),(struct CVALUE*)come_increment_ref_count(obj_value_99));
    __freed_obj__ = 0;
    come_value2_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 558))));
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj72=((struct CVALUE*)come_null_check(come_value2_109, "06str.c", 560))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_109, "06str.c", 560))->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_64, "06str.c", 560)))))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj73=((struct CVALUE*)come_null_check(come_value2_109, "06str.c", 561))->type;
    ((struct CVALUE*)come_null_check(come_value2_109, "06str.c", 561))->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_109, "06str.c", 562))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_104, "06str.c", 564)),(struct CVALUE*)come_increment_ref_count(come_value2_109));
    __freed_obj__ = 0;
    come_value3_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 566))));
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj74=((struct CVALUE*)come_null_check(come_value3_110, "06str.c", 568))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_110, "06str.c", 568))->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s",((struct sVar*)come_null_check(var__75, "06str.c", 568))->mCValueName))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj75=((struct CVALUE*)come_null_check(come_value3_110, "06str.c", 569))->type;
    ((struct CVALUE*)come_null_check(come_value3_110, "06str.c", 569))->type=((void*)0);
    if(__dec_obj75) { come_call_finalizer(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_110, "06str.c", 570))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_104, "06str.c", 572)),(struct CVALUE*)come_increment_ref_count(come_value3_110));
    __freed_obj__ = 0;
    buf_111=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 574))))))));
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_111, "06str.c", 576)),generics_fun_name_95);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_111, "06str.c", 577)),"(");
    __freed_obj__ = 0;
    j_112=0;
    __freed_obj__ = 0;
    for(
    o2_saved_113=(struct list$1CVALUEph*)come_increment_ref_count((come_params_104)),it_114=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_113), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_113), "06str.c", 589))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    it_114=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_113), "06str.c", 589))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_111, "06str.c", 581)),((struct CVALUE*)come_null_check(it_114, "06str.c", 581))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional167=j_112!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_104, "06str.c", 587)))-1,        __freed_obj__ = 0, 
        _if_conditional167) {
            buffer_append_str(((struct buffer*)come_null_check(buf_111, "06str.c", 584)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_112++;
        __freed_obj__ = 0;
    }
    if(o2_saved_113 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_111, "06str.c", 589)),")");
    __freed_obj__ = 0;
    come_value4_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 591))));
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj76=((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 593))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 593))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(((struct buffer*)come_null_check(buf_111, "06str.c", 593))))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional168=((struct sType*)come_null_check(result_type_97, "06str.c", 599))->mHeap,    __freed_obj__ = 0, 
    _if_conditional168) {
        __dec_obj77=((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 596))->c_value;
        ((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 596))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=append_object_to_right_values(((char*)(right_value176=buffer_to_string(((struct buffer*)come_null_check(buf_111, "06str.c", 596))))),(struct sType*)come_increment_ref_count(result_type_97),info))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj78=((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 599))->type;
    ((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 599))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(result_type_97))));
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 600))->type, "06str.c", 600))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_115, "06str.c", 601))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value179=buffer_to_string(((struct buffer*)come_null_check(buf_111, "06str.c", 603))))));
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 605))->stack, "06str.c", 605)),(struct CVALUE*)come_increment_ref_count(come_value4_115));
    __freed_obj__ = 0;
    __result115__ = (_Bool)1;
    if(params_64 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_74 && !__freed_obj__) { var_name_74 = come_decrement_ref_count(var_name_74, (void*)0, (void*)0, 0, 0, 0); }
    if(source_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_95 && !__freed_obj__) { generics_fun_name_95 = come_decrement_ref_count(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_100 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_102 && !__freed_obj__) { type_name_102 = come_decrement_ref_count(type_name_102, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_104 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_111 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(params_64 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_74 && !__freed_obj__) { var_name_74 = come_decrement_ref_count(var_name_74, (void*)0, (void*)0, 0, 0, 0); }
    if(source_77 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_93 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_95 && !__freed_obj__) { generics_fun_name_95 = come_decrement_ref_count(generics_fun_name_95, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_100 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_102 && !__freed_obj__) { type_name_102 = come_decrement_ref_count(type_name_102, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_104 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_111 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_115, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result89__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result89__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_62;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_62, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1CVALUEph*));
            it_62=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional9=it_62!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                prev_it_63=it_62;
                __freed_obj__ = 0;
                it_62=((struct list_item$1CVALUEph*)come_null_check(it_62, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional139;
void* right_value114;
struct list_item$1sNodeph* litem_70;
struct sNode* __dec_obj55;
_Bool _if_conditional140;
void* right_value115;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj56;
void* right_value116;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional139=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional139) {
            litem_70=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj55=((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 276))->item;
            ((struct list_item$1sNodeph*)come_null_check(litem_70, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_70;
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_70;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional140=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional140) {
                litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj56=((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 286))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_71, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_71;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_71;
                __freed_obj__ = 0;
            }
            else {
                litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj57=((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 296))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_72, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_72;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_72;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result91__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result91__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result92__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result92__;
        __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional141;
char* default_value_76;
char* __result93__;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_76, 0, sizeof(char*));
        if(_if_conditional141=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional141) {
            __freed_obj__ = 0;
            memset(&default_value_76,0,sizeof(char*));
            __freed_obj__ = 0;
            __result93__ = __result_obj__ = default_value_76;
            __freed_obj__ = 0;
            return __result93__;
            __freed_obj__ = 0;
        }
        else {
            __result94__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result94__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional142=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional142) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional143;
struct CVALUE* result_80;
struct CVALUE* __result95__;
_Bool _if_conditional144;
struct CVALUE* __result96__;
struct CVALUE* result_81;
struct CVALUE* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(struct CVALUE*));
memset(&result_81, 0, sizeof(struct CVALUE*));
        if(_if_conditional143=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional143) {
            __freed_obj__ = 0;
            memset(&result_80,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result95__ = __result_obj__ = result_80;
            __freed_obj__ = 0;
            return __result95__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional144=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional144) {
            __result96__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result96__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_81,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result97__ = __result_obj__ = result_81;
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result98__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional145;
struct CVALUE* result_83;
struct CVALUE* __result99__;
_Bool _if_conditional146;
struct CVALUE* __result100__;
struct CVALUE* result_84;
struct CVALUE* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(struct CVALUE*));
memset(&result_84, 0, sizeof(struct CVALUE*));
        if(_if_conditional145=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional145) {
            __freed_obj__ = 0;
            memset(&result_83,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result99__ = __result_obj__ = result_83;
            __freed_obj__ = 0;
            return __result99__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional146=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional146) {
            __result100__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result100__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_84,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result101__ = __result_obj__ = result_84;
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional148;
struct list_item$1CVALUEph* it_85;
int i_86;
_Bool _while_condtional10;
_Bool _if_conditional149;
void* right_value123;
void* right_value124;
struct optional$2CVALUEphbool* __result103__;
struct CVALUE* default_value_87;
void* right_value125;
void* right_value126;
struct optional$2CVALUEphbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_86, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&default_value_87, 0, sizeof(struct CVALUE*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
                if(_if_conditional148=position<0,                __freed_obj__ = 0, 
                _if_conditional148) {
                    position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_85=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_86=0;
                __freed_obj__ = 0;
                while(_while_condtional10=it_85!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional10) {
                    if(_if_conditional149=position==i_86,                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        __result103__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value124=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value123=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_85, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result103__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_85=((struct list_item$1CVALUEph*)come_null_check(it_85, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_86++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_87,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result104__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value126=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value125=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_87),(_Bool)0))));
                if(default_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
                if(default_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj58;
struct optional$2CVALUEphbool* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj58=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                            if(__dec_obj58) { come_call_finalizer(CVALUE_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result102__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result102__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional150=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional150) {
                                    if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional151;
struct CVALUE* default_value_88;
struct CVALUE* __result105__;
struct CVALUE* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_88, 0, sizeof(struct CVALUE*));
                if(_if_conditional151=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional151) {
                    __freed_obj__ = 0;
                    memset(&default_value_88,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    __result105__ = __result_obj__ = default_value_88;
                    __freed_obj__ = 0;
                    return __result105__;
                    __freed_obj__ = 0;
                }
                else {
                    __result106__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result106__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
void* right_value134;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj59;
_Bool _if_conditional153;
void* right_value135;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj60;
void* right_value136;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj61;
struct list$1sTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value135, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value136, 0, sizeof(void*));
memset(&litem_92, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional152=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional152) {
            litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_90, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_90, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj59=((struct list_item$1sTypeph*)come_null_check(litem_90, "./comelang2.h", 276))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_90, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_90;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_90;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional153=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional153) {
                litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj60=((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 286))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_91, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_91;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_91;
                __freed_obj__ = 0;
            }
            else {
                litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 296))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_92, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_92;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_92;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result107__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional156;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional156=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional156) {
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
        __result109__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional157;
struct list_item$1sTypeph* it_105;
int i_106;
_Bool _while_condtional11;
_Bool _if_conditional158;
void* right_value159;
void* right_value160;
struct optional$2sTypephbool* __result111__;
struct sType* default_value_107;
void* right_value161;
void* right_value162;
struct optional$2sTypephbool* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_105, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_106, 0, sizeof(int));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&default_value_107, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
        if(_if_conditional157=position<0,        __freed_obj__ = 0, 
        _if_conditional157) {
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_105=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
        __freed_obj__ = 0;
        i_106=0;
        __freed_obj__ = 0;
        while(_while_condtional11=it_105!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional158=position==i_106,            __freed_obj__ = 0, 
            _if_conditional158) {
                __result111__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value160=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value159=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_105, "./comelang2.h", 742))->item),(_Bool)1)));
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result111__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_105=((struct list_item$1sTypeph*)come_null_check(it_105, "./comelang2.h", 744))->next;
            __freed_obj__ = 0;
            i_106++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_107,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value162=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value161=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_107),(_Bool)0))));
        if(default_value_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result112__;
        __freed_obj__ = 0;
        if(default_value_107 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj66;
struct optional$2sTypephbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj66=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result110__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result110__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional159=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional159) {
                            if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional160;
struct sType* default_value_108;
struct sType* __result113__;
struct sType* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_108, 0, sizeof(struct sType*));
        if(_if_conditional160=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional160) {
            __freed_obj__ = 0;
            memset(&default_value_108,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result113__ = __result_obj__ = default_value_108;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
        }
        else {
            __result114__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = ((struct sListNode*)come_null_check(self, "06str.c", 612))->sline;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value180;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(right_value180=__builtin_string(((struct sListNode*)come_null_check(self, "06str.c", 617))->sname)));
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj79;
void* right_value181;
char* __dec_obj80;
struct sTupleNode* __result118__;
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
    __result118__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
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

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value182;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value182=__builtin_string("sTupleNode")));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* tuple_elements_116;
void* right_value183;
void* right_value184;
struct list$1sTypeph* tuple_types_117;
void* right_value185;
void* right_value186;
struct list$1CVALUEph* tuple_values_118;
struct list$1sNodeph* o2_saved_119;
struct sNode* it_120;
_Bool _for_condtionalA6;
_Bool _if_conditional171;
_Bool __result121__;
void* right_value187;
struct CVALUE* come_value_121;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
struct sType* type_123;
struct list$1sTypeph* o2_saved_124;
struct sType* it_127;
_Bool _for_condtionalA7;
void* right_value196;
void* right_value197;
struct CVALUE* obj_value_130;
void* right_value198;
void* right_value199;
struct buffer* num_string_131;
void* right_value200;
struct sType* type2_132;
void* right_value201;
char* type_name_133;
void* right_value202;
void* right_value203;
char* __dec_obj83;
void* right_value204;
struct sType* type3_134;
void* right_value205;
struct sType* __dec_obj84;
void* right_value206;
char* __dec_obj85;
void* right_value207;
struct sType* obj_type_135;
char* fun_name_136;
void* right_value208;
void* right_value209;
void* right_value210;
char* generics_fun_name_137;
void* right_value211;
struct sFun* fun_138;
_Bool _if_conditional180;
void* right_value212;
void* right_value213;
char* __dec_obj86;
void* right_value214;
_Bool _if_conditional181;
_Bool __result131__;
void* right_value215;
struct sType* result_type_139;
void* right_value216;
void* right_value217;
struct list$1CVALUEph* come_params_140;
void* right_value218;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
char* __dec_obj87;
_Bool _if_conditional185;
void* right_value219;
char* __dec_obj88;
_Bool _if_conditional186;
void* right_value220;
char* __dec_obj89;
void* right_value221;
char* __dec_obj90;
_Bool _if_conditional187;
void* right_value222;
char* __dec_obj91;
int i_141;
struct list$1CVALUEph* o2_saved_142;
struct CVALUE* it_143;
_Bool _for_condtionalA8;
void* right_value223;
struct CVALUE* come_value_144;
void* right_value224;
struct optional$2sTypephbool* __exception_result_var_a3;
void* right_value225;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
char* __dec_obj92;
_Bool _if_conditional191;
void* right_value226;
char* __dec_obj93;
_Bool _if_conditional192;
void* right_value227;
char* __dec_obj94;
void* right_value228;
char* __dec_obj95;
_Bool _if_conditional193;
void* right_value229;
char* __dec_obj96;
void* right_value230;
void* right_value231;
struct buffer* buf_145;
int j_146;
struct list$1CVALUEph* o2_saved_147;
struct CVALUE* it_148;
_Bool _for_condtionalA9;
_Bool _if_conditional194;
void* right_value232;
struct CVALUE* come_value2_149;
void* right_value233;
char* __dec_obj97;
_Bool _if_conditional195;
void* right_value234;
void* right_value235;
char* __dec_obj98;
void* right_value236;
struct sType* __dec_obj99;
void* right_value237;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_116, 0, sizeof(struct list$1sNodeph*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&tuple_types_117, 0, sizeof(struct list$1sTypeph*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&tuple_values_118, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_119, 0, sizeof(struct list$1sNodeph*));
memset(&it_120, 0, sizeof(struct sNode*));
memset(&right_value187, 0, sizeof(void*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&type_123, 0, sizeof(struct sType*));
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_127, 0, sizeof(struct sType*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&obj_value_130, 0, sizeof(struct CVALUE*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&num_string_131, 0, sizeof(struct buffer*));
memset(&right_value200, 0, sizeof(void*));
memset(&type2_132, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&type_name_133, 0, sizeof(char*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&type3_134, 0, sizeof(struct sType*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&obj_type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&generics_fun_name_137, 0, sizeof(char*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_138, 0, sizeof(struct sFun*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&come_params_140, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&i_141, 0, sizeof(int));
memset(&o2_saved_142, 0, sizeof(struct list$1CVALUEph*));
memset(&it_143, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&come_value_144, 0, sizeof(struct CVALUE*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&buf_145, 0, sizeof(struct buffer*));
memset(&j_146, 0, sizeof(int));
memset(&o2_saved_147, 0, sizeof(struct list$1CVALUEph*));
memset(&it_148, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&come_value2_149, 0, sizeof(struct CVALUE*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
    tuple_elements_116=((struct sTupleNode*)come_null_check(self, "06str.c", 649))->tuple_elements;
    __freed_obj__ = 0;
    tuple_types_117=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value184=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 650))))))));
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_118=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value186=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651))))))));
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_119=(tuple_elements_116),it_120=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_119), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA6=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_119), "06str.c", 665))) ,    __freed_obj__ = 0, 
    _for_condtionalA6;    it_120=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_119), "06str.c", 665))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional171=!((struct sNode*)come_null_check(it_120, "06str.c", 658))->compile(((struct sNode*)come_null_check(it_120, "06str.c", 658))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional171) {
            __result121__ = (_Bool)0;
            if(tuple_types_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_118 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_118, "06str.c", 661)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=CVALUE_clone(come_value_121)))));
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_117, "06str.c", 662)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(((struct CVALUE*)come_null_check(come_value_121, "06str.c", 662))->type)))));
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 665)))),((char*)(right_value194=xsprintf("tuple%d",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(tuple_types_117, "06str.c", 665)))))),(_Bool)0,info))));
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_117)),it_127=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_124), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_124), "06str.c", 671))) ,    __freed_obj__ = 0, 
    _for_condtionalA7;    it_127=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_124), "06str.c", 671))) ,    __freed_obj__ = 0, 
    0    ){
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_123, "06str.c", 668))->mGenericsTypes, "06str.c", 668)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(it_127)))));
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    if(o2_saved_124 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    obj_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 671))));
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_131=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 673))))))));
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_131, "06str.c", 675)),"1");
    __freed_obj__ = 0;
    type2_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type_123,type_123,info))));
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_133=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 679),((struct optional$2charphbool*)(right_value201=make_type_name_string(type2_132,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj83=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 681))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 681))->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_133,type_name_133,((char*)(right_value202=buffer_to_string(((struct buffer*)come_null_check(num_string_131, "06str.c", 681))))),((struct sInfo*)come_null_check(info, "06str.c", 681))->sname,((struct sInfo*)come_null_check(info, "06str.c", 681))->sline))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type2_132))));
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_134, "06str.c", 684))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_134, "06str.c", 685))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_132, "06str.c", 686))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj84=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 687))->type;
    ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 687))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type2_132))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj85=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 688))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 688))->c_value=(char*)come_increment_ref_count(((char*)(right_value206=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 688))->c_value,(struct sType*)come_increment_ref_count(type3_134),info))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 689))->type, "06str.c", 689))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 690))->var=((void*)0);
    __freed_obj__ = 0;
    obj_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(type2_132))));
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_136="initialize";
    __freed_obj__ = 0;
    generics_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value210=string_to_string(((char*)come_null_check(((char*)(right_value209=make_generics_function(obj_type_135,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(fun_name_136)))),info))), "06str.c", 695))))));
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_138=((struct sFun*)(right_value211=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 697))->funcs, "06str.c", 697)),generics_fun_name_137,((void*)0))));
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional180=fun_138==((void*)0),    __freed_obj__ = 0, 
    _if_conditional180) {
        __dec_obj86=generics_fun_name_137;
        generics_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value213=create_method_name(obj_type_135,(_Bool)0,((char*)(right_value212=__builtin_string(fun_name_136))),info))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_138=((struct sFun*)(right_value214=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 702))->funcs, "06str.c", 702)),generics_fun_name_137,((void*)0))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional181=fun_138==((void*)0),        __freed_obj__ = 0, 
        _if_conditional181) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_137,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 705))->come_fun, "06str.c", 705))->mName);
            __freed_obj__ = 0;
            __result131__ = (_Bool)1;
            if(tuple_types_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_118 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_118, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_131 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_133 && !__freed_obj__) { type_name_133 = come_decrement_ref_count(type_name_133, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_134, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_137 && !__freed_obj__) { generics_fun_name_137 = come_decrement_ref_count(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result131__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(((struct sFun*)come_null_check(fun_138, "06str.c", 710))->mResultType))));
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_139, "06str.c", 711))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    come_params_140=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value217=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value216=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 713))))))));
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional182=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 742),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value218=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_138, "06str.c", 742))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "06str.c", 742))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 742))->type, "06str.c", 742))->mHeap,    (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional182) {
        if(_if_conditional183=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 741))->var,        __freed_obj__ = 0, 
        _if_conditional183) {
            if(_if_conditional184=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional184) {
                __dec_obj87=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 718))->var, "06str.c", 718))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 718))->var, "06str.c", 718))->mCValueName=((void*)0);
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mShare,                __freed_obj__ = 0, 
                _if_conditional185) {
                    __dec_obj88=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 721))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 721))->c_value=(char*)come_increment_ref_count(((char*)(right_value219=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 721))->type,((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 721))->c_value,info))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 733))->var, "06str.c", 733))->mType, "06str.c", 733))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        __dec_obj89=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 724))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 724))->c_value=(char*)come_increment_ref_count(((char*)(right_value220=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 724))->type,((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 724))->c_value,info))));
                        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj90=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 727))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 727))->c_value=(char*)come_increment_ref_count(((char*)(right_value221=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 727))->type,((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 727))->c_value,info))));
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
            if(_if_conditional187=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 740))->type, "06str.c", 740))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional187) {
            }
            else {
                __dec_obj91=((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 738))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 738))->c_value=(char*)come_increment_ref_count(((char*)(right_value222=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 738))->type,((struct CVALUE*)come_null_check(obj_value_130, "06str.c", 738))->c_value,info))));
                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_140, "06str.c", 742)),(struct CVALUE*)come_increment_ref_count(obj_value_130));
    __freed_obj__ = 0;
    i_141=1;
    __freed_obj__ = 0;
    for(
    o2_saved_142=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_118)),it_143=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_142), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_142), "06str.c", 780))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_143=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_142), "06str.c", 780))) ,    __freed_obj__ = 0, 
    0    ){
        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=CVALUE_clone(it_143))));
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional188=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value224=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_138, "06str.c", 775))->mParamTypes,i_141))), come_pop_stackframe(), __exception_result_var_a3))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 775),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value225=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_138, "06str.c", 775))->mParamTypes,i_141))), come_pop_stackframe(), __exception_result_var_a4)), "06str.c", 775))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 775))->type, "06str.c", 775))->mHeap,        (right_value224 && right_value224 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0):0,
        (right_value225 && right_value225 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional188) {
            if(_if_conditional189=((struct CVALUE*)come_null_check(come_value_144, "06str.c", 774))->var,            __freed_obj__ = 0, 
            _if_conditional189) {
                if(_if_conditional190=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional190) {
                    __dec_obj92=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 751))->var, "06str.c", 751))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 751))->var, "06str.c", 751))->mCValueName=((void*)0);
                    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional191=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional191) {
                        __dec_obj93=((struct CVALUE*)come_null_check(come_value_144, "06str.c", 754))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_144, "06str.c", 754))->c_value=(char*)come_increment_ref_count(((char*)(right_value226=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 754))->type,((struct CVALUE*)come_null_check(come_value_144, "06str.c", 754))->c_value,info))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional192=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 766))->var, "06str.c", 766))->mType, "06str.c", 766))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            __dec_obj94=((struct CVALUE*)come_null_check(come_value_144, "06str.c", 757))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_144, "06str.c", 757))->c_value=(char*)come_increment_ref_count(((char*)(right_value227=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 757))->type,((struct CVALUE*)come_null_check(come_value_144, "06str.c", 757))->c_value,info))));
                            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                            if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj95=((struct CVALUE*)come_null_check(come_value_144, "06str.c", 760))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_144, "06str.c", 760))->c_value=(char*)come_increment_ref_count(((char*)(right_value228=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 760))->type,((struct CVALUE*)come_null_check(come_value_144, "06str.c", 760))->c_value,info))));
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
                if(_if_conditional193=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 773))->type, "06str.c", 773))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional193) {
                }
                else {
                    __dec_obj96=((struct CVALUE*)come_null_check(come_value_144, "06str.c", 771))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_144, "06str.c", 771))->c_value=(char*)come_increment_ref_count(((char*)(right_value229=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_144, "06str.c", 771))->type,((struct CVALUE*)come_null_check(come_value_144, "06str.c", 771))->c_value,info))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_140, "06str.c", 775)),(struct CVALUE*)come_increment_ref_count(come_value_144));
        __freed_obj__ = 0;
        i_141++;
        __freed_obj__ = 0;
        if(come_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_142 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buf_145=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value231=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value230=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 780))))))));
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_145, "06str.c", 782)),generics_fun_name_137);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_145, "06str.c", 783)),"(");
    __freed_obj__ = 0;
    j_146=0;
    __freed_obj__ = 0;
    for(
    o2_saved_147=(struct list$1CVALUEph*)come_increment_ref_count((come_params_140)),it_148=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_147), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA9=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_147), "06str.c", 795))) ,    __freed_obj__ = 0, 
    _for_condtionalA9;    it_148=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_147), "06str.c", 795))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_145, "06str.c", 787)),((struct CVALUE*)come_null_check(it_148, "06str.c", 787))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional194=j_146!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_140, "06str.c", 793)))-1,        __freed_obj__ = 0, 
        _if_conditional194) {
            buffer_append_str(((struct buffer*)come_null_check(buf_145, "06str.c", 790)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_146++;
        __freed_obj__ = 0;
    }
    if(o2_saved_147 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_145, "06str.c", 795)),")");
    __freed_obj__ = 0;
    come_value2_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 797))));
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj97=((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 799))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 799))->c_value=(char*)come_increment_ref_count(((char*)(right_value233=buffer_to_string(((struct buffer*)come_null_check(buf_145, "06str.c", 799))))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional195=((struct sType*)come_null_check(result_type_139, "06str.c", 805))->mHeap,    __freed_obj__ = 0, 
    _if_conditional195) {
        __dec_obj98=((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 802))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 802))->c_value=(char*)come_increment_ref_count(((char*)(right_value235=append_object_to_right_values(((char*)(right_value234=buffer_to_string(((struct buffer*)come_null_check(buf_145, "06str.c", 802))))),(struct sType*)come_increment_ref_count(result_type_139),info))));
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj99=((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 805))->type;
    ((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 805))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(result_type_139))));
    if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 806))->type, "06str.c", 806))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_149, "06str.c", 807))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value237=buffer_to_string(((struct buffer*)come_null_check(buf_145, "06str.c", 809))))));
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 811))->stack, "06str.c", 811)),(struct CVALUE*)come_increment_ref_count(come_value2_149));
    __freed_obj__ = 0;
    __result132__ = (_Bool)1;
    if(tuple_types_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_118 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_131 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_133 && !__freed_obj__) { type_name_133 = come_decrement_ref_count(type_name_133, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_137 && !__freed_obj__) { generics_fun_name_137 = come_decrement_ref_count(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_140 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_145 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
    if(tuple_types_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_118 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_131 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_133 && !__freed_obj__) { type_name_133 = come_decrement_ref_count(type_name_133, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_137 && !__freed_obj__) { generics_fun_name_137 = come_decrement_ref_count(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_140 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_145 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_149, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional172;
struct CVALUE* __result122__;
void* right_value188;
struct CVALUE* result_122;
_Bool _if_conditional173;
void* right_value189;
char* __dec_obj81;
_Bool _if_conditional174;
void* right_value190;
struct sType* __dec_obj82;
_Bool _if_conditional175;
struct CVALUE* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct CVALUE*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
            if(_if_conditional172=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional172) {
                __result122__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result122__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional173=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional173) {
                __dec_obj81=((struct CVALUE*)come_null_check(result_122, "CVALUE_clone", 4))->c_value;
                ((struct CVALUE*)come_null_check(result_122, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional174=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                __dec_obj82=((struct CVALUE*)come_null_check(result_122, "CVALUE_clone", 5))->type;
                ((struct CVALUE*)come_null_check(result_122, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional175=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                ((struct CVALUE*)come_null_check(result_122, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result123__ = __result_obj__ = result_122;
            if(result_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
            if(result_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional176;
struct sType* result_125;
struct sType* __result124__;
_Bool _if_conditional177;
struct sType* __result125__;
struct sType* result_126;
struct sType* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional176=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional176) {
            __freed_obj__ = 0;
            memset(&result_125,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result124__ = __result_obj__ = result_125;
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional177=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional177) {
            __result125__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_126,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result126__ = __result_obj__ = result_126;
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result127__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result127__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional178;
struct sType* result_128;
struct sType* __result128__;
_Bool _if_conditional179;
struct sType* __result129__;
struct sType* result_129;
struct sType* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_128, 0, sizeof(struct sType*));
memset(&result_129, 0, sizeof(struct sType*));
        if(_if_conditional178=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional178) {
            __freed_obj__ = 0;
            memset(&result_128,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result128__ = __result_obj__ = result_128;
            __freed_obj__ = 0;
            return __result128__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional179=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional179) {
            __result129__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_129,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result130__ = __result_obj__ = result_129;
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = ((struct sTupleNode*)come_null_check(self, "06str.c", 818))->sline;
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value238;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value238=__builtin_string(((struct sTupleNode*)come_null_check(self, "06str.c", 823))->sname)));
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value239;
struct sNode* __dec_obj100;
void* right_value240;
char* __dec_obj101;
struct sNoneNode* __result135__;
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
    __result135__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result135__;
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
struct sNode* __result138__;
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
    __result138__ = __result_obj__ = ((struct sNode*)(right_value246=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional198;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional198=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional200;
struct sNoneNode* __result136__;
void* right_value243;
struct sNoneNode* result_150;
_Bool _if_conditional201;
void* right_value244;
struct sNode* __dec_obj102;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value245;
char* __dec_obj103;
struct sNoneNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct sNoneNode*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
        if(_if_conditional200=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional200) {
            __result136__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result136__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_150=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value243=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional201=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional201) {
            __dec_obj102=((struct sNoneNode*)come_null_check(result_150, "sNoneNode_clone", 4))->value;
            ((struct sNoneNode*)come_null_check(result_150, "sNoneNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 4))->value))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional202=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional202) {
            ((struct sNoneNode*)come_null_check(result_150, "sNoneNode_clone", 5))->sline=((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            __dec_obj103=((struct sNoneNode*)come_null_check(result_150, "sNoneNode_clone", 6))->sname;
            ((struct sNoneNode*)come_null_check(result_150, "sNoneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 6))->sname))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result137__ = __result_obj__ = result_150;
        if(result_150 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result137__;
        __freed_obj__ = 0;
        if(result_150 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value247;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
    __result140__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sNoneNode")));
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value248;
void* right_value249;
struct list$1sTypeph* tuple_types_151;
void* right_value250;
void* right_value251;
struct list$1CVALUEph* tuple_values_152;
_Bool _if_conditional204;
_Bool __result141__;
void* right_value252;
struct CVALUE* come_value_153;
_Bool _if_conditional205;
void* right_value256;
void* right_value257;
void* right_value258;
struct sNode* false_node_157;
_Bool _if_conditional208;
_Bool __result143__;
void* right_value259;
struct CVALUE* come_value2_158;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
struct sType* type_159;
struct list$1sTypeph* o2_saved_160;
struct sType* it_161;
_Bool _for_condtionalA10;
void* right_value264;
void* right_value265;
struct CVALUE* obj_value_162;
void* right_value266;
void* right_value267;
struct buffer* num_string_163;
void* right_value268;
struct sType* type2_164;
void* right_value269;
char* type_name_165;
void* right_value270;
void* right_value271;
char* __dec_obj107;
void* right_value272;
struct sType* type3_166;
void* right_value273;
struct sType* __dec_obj108;
void* right_value274;
char* __dec_obj109;
void* right_value275;
struct sType* obj_type_167;
char* fun_name_168;
void* right_value276;
void* right_value277;
void* right_value278;
char* generics_fun_name_169;
void* right_value279;
struct sFun* fun_170;
_Bool _if_conditional209;
void* right_value280;
void* right_value281;
char* __dec_obj110;
void* right_value282;
_Bool _if_conditional210;
_Bool __result144__;
void* right_value283;
struct sType* result_type_171;
void* right_value284;
void* right_value285;
struct list$1CVALUEph* come_params_172;
void* right_value286;
struct optional$2sTypephbool* __exception_result_var_a5;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
char* __dec_obj111;
_Bool _if_conditional214;
void* right_value287;
char* __dec_obj112;
_Bool _if_conditional215;
void* right_value288;
char* __dec_obj113;
void* right_value289;
char* __dec_obj114;
_Bool _if_conditional216;
void* right_value290;
char* __dec_obj115;
int i_173;
struct list$1CVALUEph* o2_saved_174;
struct CVALUE* it_175;
_Bool _for_condtionalA11;
void* right_value291;
struct CVALUE* come_value_176;
void* right_value292;
struct optional$2sTypephbool* __exception_result_var_a6;
void* right_value293;
struct optional$2sTypephbool* __exception_result_var_a7;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* __dec_obj116;
_Bool _if_conditional220;
void* right_value294;
char* __dec_obj117;
_Bool _if_conditional221;
void* right_value295;
char* __dec_obj118;
void* right_value296;
char* __dec_obj119;
_Bool _if_conditional222;
void* right_value297;
char* __dec_obj120;
void* right_value298;
void* right_value299;
struct buffer* buf_177;
int j_178;
struct list$1CVALUEph* o2_saved_179;
struct CVALUE* it_180;
_Bool _for_condtionalA12;
_Bool _if_conditional223;
void* right_value300;
struct CVALUE* come_value3_181;
void* right_value301;
char* __dec_obj121;
_Bool _if_conditional224;
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
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&tuple_types_151, 0, sizeof(struct list$1sTypeph*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&tuple_values_152, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value252, 0, sizeof(void*));
memset(&come_value_153, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&false_node_157, 0, sizeof(struct sNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&come_value2_158, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&o2_saved_160, 0, sizeof(struct list$1sTypeph*));
memset(&it_161, 0, sizeof(struct sType*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&obj_value_162, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&num_string_163, 0, sizeof(struct buffer*));
memset(&right_value268, 0, sizeof(void*));
memset(&type2_164, 0, sizeof(struct sType*));
memset(&right_value269, 0, sizeof(void*));
memset(&type_name_165, 0, sizeof(char*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&type3_166, 0, sizeof(struct sType*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&obj_type_167, 0, sizeof(struct sType*));
memset(&fun_name_168, 0, sizeof(char*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&generics_fun_name_169, 0, sizeof(char*));
memset(&right_value279, 0, sizeof(void*));
memset(&fun_170, 0, sizeof(struct sFun*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&result_type_171, 0, sizeof(struct sType*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&come_params_172, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&i_173, 0, sizeof(int));
memset(&o2_saved_174, 0, sizeof(struct list$1CVALUEph*));
memset(&it_175, 0, sizeof(struct CVALUE*));
memset(&right_value291, 0, sizeof(void*));
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&buf_177, 0, sizeof(struct buffer*));
memset(&j_178, 0, sizeof(int));
memset(&o2_saved_179, 0, sizeof(struct list$1CVALUEph*));
memset(&it_180, 0, sizeof(struct CVALUE*));
memset(&right_value300, 0, sizeof(void*));
memset(&come_value3_181, 0, sizeof(struct CVALUE*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    tuple_types_151=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value249=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value248=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 860))))))));
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_152=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value250=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 861))))))));
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional204=!((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->compile(((struct sNode*)come_null_check(((struct sNoneNode*)come_null_check(self, "06str.c", 867))->value, "06str.c", 867))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional204) {
        __result141__ = (_Bool)0;
        if(tuple_types_151 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_152 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result141__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional205=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "06str.c", 1041))->type, "06str.c", 1041))->mNoSolvedGenericsType, "06str.c", 1041))->v1, "06str.c", 1041))->mClass, "06str.c", 1041))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional205) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 871))->stack, "06str.c", 871)),(struct CVALUE*)come_increment_ref_count(come_value_153));
        __freed_obj__ = 0;
    }
    else {
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_152, "06str.c", 874)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=CVALUE_clone(come_value_153)))));
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_151, "06str.c", 875)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(((struct CVALUE*)come_null_check(come_value_153, "06str.c", 875))->type)))));
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        false_node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=create_false_object(info))));
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        if(_if_conditional208=!((struct sNode*)come_null_check(false_node_157, "06str.c", 883))->compile(((struct sNode*)come_null_check(false_node_157, "06str.c", 883))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional208) {
            __result143__ = (_Bool)0;
            if(false_node_157 && !__freed_obj__) { false_node_157 = come_decrement_ref_count(false_node_157, ((struct sNode*)false_node_157)->finalize, ((struct sNode*)false_node_157)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_151 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_151, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_152 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_152, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result143__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_152, "06str.c", 886)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=CVALUE_clone(come_value2_158)))));
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_151, "06str.c", 887)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(((struct CVALUE*)come_null_check(come_value2_158, "06str.c", 887))->type)))));
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 889)))),"optional",(_Bool)0,info))));
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_160=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_151)),it_161=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_160), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_160), "06str.c", 895))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_161=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_160), "06str.c", 895))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_159, "06str.c", 892))->mGenericsTypes, "06str.c", 892)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(it_161)))));
            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_160 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_160, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 895))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        num_string_163=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value266=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 897))))))));
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_163, "06str.c", 899)),"1");
        __freed_obj__ = 0;
        type2_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=solve_generics(type_159,type_159,info))));
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_165=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 903),((struct optional$2charphbool*)(right_value269=make_type_name_string(type2_164,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj107=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 905))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 905))->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_165,type_name_165,((char*)(right_value270=buffer_to_string(((struct buffer*)come_null_check(num_string_163, "06str.c", 905))))),((struct sInfo*)come_null_check(info, "06str.c", 905))->sname,((struct sInfo*)come_null_check(info, "06str.c", 905))->sline))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(type2_164))));
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_166, "06str.c", 908))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_166, "06str.c", 909))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_164, "06str.c", 910))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj108=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 911))->type;
        ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 911))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(type_159))));
        if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj109=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 912))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 912))->c_value=(char*)come_increment_ref_count(((char*)(right_value274=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 912))->c_value,(struct sType*)come_increment_ref_count(type3_166),info))));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 913))->type, "06str.c", 913))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 914))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(type2_164))));
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name_168="initialize";
        __freed_obj__ = 0;
        generics_fun_name_169=(char*)come_increment_ref_count(((char*)(right_value278=string_to_string(((char*)come_null_check(((char*)(right_value277=make_generics_function(obj_type_167,(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(fun_name_168)))),info))), "06str.c", 919))))));
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_170=((struct sFun*)(right_value279=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 921))->funcs, "06str.c", 921)),generics_fun_name_169,((void*)0))));
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional209=fun_170==((void*)0),        __freed_obj__ = 0, 
        _if_conditional209) {
            __dec_obj110=generics_fun_name_169;
            generics_fun_name_169=(char*)come_increment_ref_count(((char*)(right_value281=create_method_name(obj_type_167,(_Bool)0,((char*)(right_value280=__builtin_string(fun_name_168))),info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fun_170=((struct sFun*)(right_value282=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 926))->funcs, "06str.c", 926)),generics_fun_name_169,((void*)0))));
            if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional210=fun_170==((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_169,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 929))->come_fun, "06str.c", 929))->mName);
                __freed_obj__ = 0;
                __result144__ = (_Bool)1;
                if(false_node_157 && !__freed_obj__) { false_node_157 = come_decrement_ref_count(false_node_157, ((struct sNode*)false_node_157)->finalize, ((struct sNode*)false_node_157)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_163 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_165 && !__freed_obj__) { type_name_165 = come_decrement_ref_count(type_name_165, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_167, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_169 && !__freed_obj__) { generics_fun_name_169 = come_decrement_ref_count(generics_fun_name_169, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_151 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_152 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result144__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(((struct sFun*)come_null_check(fun_170, "06str.c", 934))->mResultType))));
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_171, "06str.c", 935))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_172=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value285=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value284=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 937))))))));
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional211=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 966),__exception_result_var_a5=((struct optional$2sTypephbool*)(right_value286=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_170, "06str.c", 966))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a5)), "06str.c", 966))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 966))->type, "06str.c", 966))->mHeap,        (right_value286 && right_value286 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional211) {
            if(_if_conditional212=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 965))->var,            __freed_obj__ = 0, 
            _if_conditional212) {
                if(_if_conditional213=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional213) {
                    __dec_obj111=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 942))->var, "06str.c", 942))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 942))->var, "06str.c", 942))->mCValueName=((void*)0);
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional214=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional214) {
                        __dec_obj112=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 945))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 945))->c_value=(char*)come_increment_ref_count(((char*)(right_value287=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 945))->type,((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 945))->c_value,info))));
                        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional215=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 957))->var, "06str.c", 957))->mType, "06str.c", 957))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional215) {
                            __dec_obj113=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 948))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 948))->c_value=(char*)come_increment_ref_count(((char*)(right_value288=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 948))->type,((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 948))->c_value,info))));
                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj114=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 951))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 951))->c_value=(char*)come_increment_ref_count(((char*)(right_value289=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 951))->type,((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 951))->c_value,info))));
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
                if(_if_conditional216=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 964))->type, "06str.c", 964))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional216) {
                }
                else {
                    __dec_obj115=((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 962))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 962))->c_value=(char*)come_increment_ref_count(((char*)(right_value290=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 962))->type,((struct CVALUE*)come_null_check(obj_value_162, "06str.c", 962))->c_value,info))));
                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_172, "06str.c", 966)),(struct CVALUE*)come_increment_ref_count(obj_value_162));
        __freed_obj__ = 0;
        i_173=1;
        __freed_obj__ = 0;
        for(
        o2_saved_174=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_152)),it_175=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_174), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_174), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_175=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_174), "06str.c", 1004))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=CVALUE_clone(it_175))));
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional217=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a6=((struct optional$2sTypephbool*)(right_value292=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_170, "06str.c", 999))->mParamTypes,i_173))), come_pop_stackframe(), __exception_result_var_a6))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 999),__exception_result_var_a7=((struct optional$2sTypephbool*)(right_value293=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_170, "06str.c", 999))->mParamTypes,i_173))), come_pop_stackframe(), __exception_result_var_a7)), "06str.c", 999))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 999))->type, "06str.c", 999))->mHeap,            (right_value292 && right_value292 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0):0,
            (right_value293 && right_value293 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional217) {
                if(_if_conditional218=((struct CVALUE*)come_null_check(come_value_176, "06str.c", 998))->var,                __freed_obj__ = 0, 
                _if_conditional218) {
                    if(_if_conditional219=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional219) {
                        __dec_obj116=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 975))->var, "06str.c", 975))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 975))->var, "06str.c", 975))->mCValueName=((void*)0);
                        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional220=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional220) {
                            __dec_obj117=((struct CVALUE*)come_null_check(come_value_176, "06str.c", 978))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_176, "06str.c", 978))->c_value=(char*)come_increment_ref_count(((char*)(right_value294=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 978))->type,((struct CVALUE*)come_null_check(come_value_176, "06str.c", 978))->c_value,info))));
                            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional221=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 990))->var, "06str.c", 990))->mType, "06str.c", 990))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional221) {
                                __dec_obj118=((struct CVALUE*)come_null_check(come_value_176, "06str.c", 981))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_176, "06str.c", 981))->c_value=(char*)come_increment_ref_count(((char*)(right_value295=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 981))->type,((struct CVALUE*)come_null_check(come_value_176, "06str.c", 981))->c_value,info))));
                                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj119=((struct CVALUE*)come_null_check(come_value_176, "06str.c", 984))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_176, "06str.c", 984))->c_value=(char*)come_increment_ref_count(((char*)(right_value296=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 984))->type,((struct CVALUE*)come_null_check(come_value_176, "06str.c", 984))->c_value,info))));
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
                    if(_if_conditional222=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 997))->type, "06str.c", 997))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional222) {
                    }
                    else {
                        __dec_obj120=((struct CVALUE*)come_null_check(come_value_176, "06str.c", 995))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_176, "06str.c", 995))->c_value=(char*)come_increment_ref_count(((char*)(right_value297=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_176, "06str.c", 995))->type,((struct CVALUE*)come_null_check(come_value_176, "06str.c", 995))->c_value,info))));
                        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
                        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_172, "06str.c", 999)),(struct CVALUE*)come_increment_ref_count(come_value_176));
            __freed_obj__ = 0;
            i_173++;
            __freed_obj__ = 0;
            if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_174 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_174, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_177=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1004))))))));
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_177, "06str.c", 1006)),generics_fun_name_169);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_177, "06str.c", 1007)),"(");
        __freed_obj__ = 0;
        j_178=0;
        __freed_obj__ = 0;
        for(
        o2_saved_179=(struct list$1CVALUEph*)come_increment_ref_count((come_params_172)),it_180=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_179), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_179), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_180=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_179), "06str.c", 1019))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_177, "06str.c", 1011)),((struct CVALUE*)come_null_check(it_180, "06str.c", 1011))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional223=j_178!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_172, "06str.c", 1017)))-1,            __freed_obj__ = 0, 
            _if_conditional223) {
                buffer_append_str(((struct buffer*)come_null_check(buf_177, "06str.c", 1014)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_178++;
            __freed_obj__ = 0;
        }
        if(o2_saved_179 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_177, "06str.c", 1019)),")");
        __freed_obj__ = 0;
        come_value3_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1021))));
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj121=((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1023))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1023))->c_value=(char*)come_increment_ref_count(((char*)(right_value301=buffer_to_string(((struct buffer*)come_null_check(buf_177, "06str.c", 1023))))));
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional224=((struct sType*)come_null_check(result_type_171, "06str.c", 1029))->mHeap,        __freed_obj__ = 0, 
        _if_conditional224) {
            __dec_obj122=((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1026))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1026))->c_value=(char*)come_increment_ref_count(((char*)(right_value303=append_object_to_right_values(((char*)(right_value302=buffer_to_string(((struct buffer*)come_null_check(buf_177, "06str.c", 1026))))),(struct sType*)come_increment_ref_count(result_type_171),info))));
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj123=((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1031))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1031))->c_value=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value304=string_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sname))),((char*)(right_value305=int_to_string(((struct sInfo*)come_null_check(info, "06str.c", 1031))->sline))),((char*)(right_value306=string_to_string(((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1031))->c_value)))))));
        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj124=((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1031))->type;
        ((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1031))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(result_type_171))));
        if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1032))->type, "06str.c", 1032))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1033))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value3_181, "06str.c", 1035))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1038))->stack, "06str.c", 1038)),(struct CVALUE*)come_increment_ref_count(come_value3_181));
        __freed_obj__ = 0;
        if(false_node_157 && !__freed_obj__) { false_node_157 = come_decrement_ref_count(false_node_157, ((struct sNode*)false_node_157)->finalize, ((struct sNode*)false_node_157)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_163 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_165 && !__freed_obj__) { type_name_165 = come_decrement_ref_count(type_name_165, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_169 && !__freed_obj__) { generics_fun_name_169 = come_decrement_ref_count(generics_fun_name_169, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_172 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_177 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_181 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result145__ = (_Bool)1;
    if(tuple_types_151 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_152 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
    if(tuple_types_151 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_152 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional206;
void* right_value253;
struct list_item$1CVALUEph* litem_154;
struct CVALUE* __dec_obj104;
_Bool _if_conditional207;
void* right_value254;
struct list_item$1CVALUEph* litem_155;
struct CVALUE* __dec_obj105;
void* right_value255;
struct list_item$1CVALUEph* litem_156;
struct CVALUE* __dec_obj106;
struct list$1CVALUEph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
memset(&litem_154, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value254, 0, sizeof(void*));
memset(&litem_155, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value255, 0, sizeof(void*));
memset(&litem_156, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional206=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==0,            __freed_obj__ = 0, 
            _if_conditional206) {
                litem_154=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value253=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 202))));
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_154, "./comelang2.h", 204))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_154, "./comelang2.h", 205))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj104=((struct list_item$1CVALUEph*)come_null_check(litem_154, "./comelang2.h", 206))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_154, "./comelang2.h", 206))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj104) { come_call_finalizer(CVALUE_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_154;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 209))->head=litem_154;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional207=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len==1,                __freed_obj__ = 0, 
                _if_conditional207) {
                    litem_155=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value254=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 212))));
                    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_155, "./comelang2.h", 214))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 214))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_155, "./comelang2.h", 215))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj105=((struct list_item$1CVALUEph*)come_null_check(litem_155, "./comelang2.h", 216))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_155, "./comelang2.h", 216))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj105) { come_call_finalizer(CVALUE_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_155;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_155;
                    __freed_obj__ = 0;
                }
                else {
                    litem_156=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value255=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 222))));
                    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_156, "./comelang2.h", 224))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 224))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_156, "./comelang2.h", 225))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj106=((struct list_item$1CVALUEph*)come_null_check(litem_156, "./comelang2.h", 226))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_156, "./comelang2.h", 226))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj106) { come_call_finalizer(CVALUE_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_156;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_156;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 232))->len++;
            __freed_obj__ = 0;
            __result142__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result142__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = ((struct sNoneNode*)come_null_check(self, "06str.c", 1046))->sline;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value309;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(right_value309=__builtin_string(((struct sNoneNode*)come_null_check(self, "06str.c", 1051))->sname)));
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj125;
void* right_value310;
char* __dec_obj126;
struct sSomeNode* __result148__;
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
    __result148__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result148__;
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
struct sNode* __result151__;
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
    __result151__ = __result_obj__ = ((struct sNode*)(right_value316=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional227=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional227) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional228=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional228) {
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional229;
struct sSomeNode* __result149__;
void* right_value313;
struct sSomeNode* result_182;
_Bool _if_conditional230;
void* right_value314;
struct sNode* __dec_obj127;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value315;
char* __dec_obj128;
struct sSomeNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
memset(&result_182, 0, sizeof(struct sSomeNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
        if(_if_conditional229=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional229) {
            __result149__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result149__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_182=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value313=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional230=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional230) {
            __dec_obj127=((struct sSomeNode*)come_null_check(result_182, "sSomeNode_clone", 4))->value;
            ((struct sSomeNode*)come_null_check(result_182, "sSomeNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 4))->value))));
            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0); }
            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional231=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            ((struct sSomeNode*)come_null_check(result_182, "sSomeNode_clone", 5))->sline=((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional232=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional232) {
            __dec_obj128=((struct sSomeNode*)come_null_check(result_182, "sSomeNode_clone", 6))->sname;
            ((struct sSomeNode*)come_null_check(result_182, "sSomeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value315=string_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 6))->sname))));
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result150__ = __result_obj__ = result_182;
        if(result_182 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_182, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
        if(result_182 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result152__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value317;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
    __result153__ = __result_obj__ = ((char*)(right_value317=__builtin_string("sSomeNode")));
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value318;
void* right_value319;
struct list$1sTypeph* tuple_types_183;
void* right_value320;
void* right_value321;
struct list$1CVALUEph* tuple_values_184;
_Bool _if_conditional233;
_Bool __result154__;
void* right_value322;
struct CVALUE* come_value_185;
_Bool _if_conditional234;
struct tuple1$1sTypeph* mNoSolvedGenericsType_186;
void* right_value323;
void* right_value324;
void* right_value325;
struct sNode* true_node_187;
_Bool _if_conditional235;
_Bool __result155__;
void* right_value326;
struct CVALUE* come_value2_188;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
struct sType* type_189;
struct list$1sTypeph* o2_saved_190;
struct sType* it_191;
_Bool _for_condtionalA13;
void* right_value331;
void* right_value332;
struct CVALUE* obj_value_192;
void* right_value333;
void* right_value334;
struct buffer* num_string_193;
void* right_value335;
struct sType* type2_194;
void* right_value336;
char* type_name_195;
void* right_value337;
void* right_value338;
char* __dec_obj129;
void* right_value339;
struct sType* type3_196;
void* right_value340;
struct sType* __dec_obj130;
void* right_value341;
char* __dec_obj131;
void* right_value342;
struct sType* obj_type_197;
char* fun_name_198;
void* right_value343;
void* right_value344;
void* right_value345;
char* generics_fun_name_199;
void* right_value346;
struct sFun* fun_200;
_Bool _if_conditional236;
void* right_value347;
void* right_value348;
char* __dec_obj132;
void* right_value349;
_Bool _if_conditional237;
_Bool __result156__;
void* right_value350;
struct sType* result_type_201;
void* right_value351;
void* right_value352;
struct list$1CVALUEph* come_params_202;
void* right_value353;
struct optional$2sTypephbool* __exception_result_var_a8;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
char* __dec_obj133;
_Bool _if_conditional242;
void* right_value354;
char* __dec_obj134;
_Bool _if_conditional243;
void* right_value355;
char* __dec_obj135;
void* right_value356;
char* __dec_obj136;
_Bool _if_conditional244;
void* right_value357;
char* __dec_obj137;
int i_203;
struct list$1CVALUEph* o2_saved_204;
struct CVALUE* it_205;
_Bool _for_condtionalA14;
void* right_value358;
struct CVALUE* come_value_206;
void* right_value359;
struct optional$2sTypephbool* __exception_result_var_a9;
void* right_value360;
struct optional$2sTypephbool* __exception_result_var_a10;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* __dec_obj138;
_Bool _if_conditional248;
void* right_value361;
char* __dec_obj139;
_Bool _if_conditional249;
void* right_value362;
char* __dec_obj140;
void* right_value363;
char* __dec_obj141;
_Bool _if_conditional250;
void* right_value364;
char* __dec_obj142;
void* right_value365;
void* right_value366;
struct buffer* buf_207;
int j_208;
struct list$1CVALUEph* o2_saved_209;
struct CVALUE* it_210;
_Bool _for_condtionalA15;
_Bool _if_conditional251;
void* right_value367;
struct CVALUE* come_value3_211;
void* right_value368;
char* __dec_obj143;
_Bool _if_conditional252;
void* right_value369;
void* right_value370;
char* __dec_obj144;
void* right_value371;
struct sType* __dec_obj145;
void* right_value372;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&tuple_types_183, 0, sizeof(struct list$1sTypeph*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&tuple_values_184, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value322, 0, sizeof(void*));
memset(&come_value_185, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_186, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&true_node_187, 0, sizeof(struct sNode*));
memset(&right_value326, 0, sizeof(void*));
memset(&come_value2_188, 0, sizeof(struct CVALUE*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&type_189, 0, sizeof(struct sType*));
memset(&o2_saved_190, 0, sizeof(struct list$1sTypeph*));
memset(&it_191, 0, sizeof(struct sType*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&obj_value_192, 0, sizeof(struct CVALUE*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&num_string_193, 0, sizeof(struct buffer*));
memset(&right_value335, 0, sizeof(void*));
memset(&type2_194, 0, sizeof(struct sType*));
memset(&right_value336, 0, sizeof(void*));
memset(&type_name_195, 0, sizeof(char*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&type3_196, 0, sizeof(struct sType*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&obj_type_197, 0, sizeof(struct sType*));
memset(&fun_name_198, 0, sizeof(char*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&generics_fun_name_199, 0, sizeof(char*));
memset(&right_value346, 0, sizeof(void*));
memset(&fun_200, 0, sizeof(struct sFun*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&result_type_201, 0, sizeof(struct sType*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&come_params_202, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1CVALUEph*));
memset(&it_205, 0, sizeof(struct CVALUE*));
memset(&right_value358, 0, sizeof(void*));
memset(&come_value_206, 0, sizeof(struct CVALUE*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&buf_207, 0, sizeof(struct buffer*));
memset(&j_208, 0, sizeof(int));
memset(&o2_saved_209, 0, sizeof(struct list$1CVALUEph*));
memset(&it_210, 0, sizeof(struct CVALUE*));
memset(&right_value367, 0, sizeof(void*));
memset(&come_value3_211, 0, sizeof(struct CVALUE*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
    tuple_types_183=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value319=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1088))))))));
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    tuple_values_184=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value321=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value320=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1089))))))));
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional233=!((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->compile(((struct sNode*)come_null_check(((struct sSomeNode*)come_null_check(self, "06str.c", 1095))->value, "06str.c", 1095))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional233) {
        __result154__ = (_Bool)0;
        if(tuple_types_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_184 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result154__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional234=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_185, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_185, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_185, "06str.c", 1270))->type, "06str.c", 1270))->mNoSolvedGenericsType, "06str.c", 1270))->v1, "06str.c", 1270))->mClass, "06str.c", 1270))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional234) {
        list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1099))->stack, "06str.c", 1099)),(struct CVALUE*)come_increment_ref_count(come_value_185));
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_184, "06str.c", 1104)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=CVALUE_clone(come_value_185)))));
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_183, "06str.c", 1105)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(((struct CVALUE*)come_null_check(come_value_185, "06str.c", 1105))->type)))));
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        true_node_187=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=create_true_object(info))));
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        if(_if_conditional235=!((struct sNode*)come_null_check(true_node_187, "06str.c", 1113))->compile(((struct sNode*)come_null_check(true_node_187, "06str.c", 1113))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional235) {
            __result155__ = (_Bool)0;
            if(mNoSolvedGenericsType_186 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_186, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_187 && !__freed_obj__) { true_node_187 = come_decrement_ref_count(true_node_187, ((struct sNode*)true_node_187)->finalize, ((struct sNode*)true_node_187)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_183, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_184 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_184, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result155__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=get_value_from_stack(-1,info))));
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_184, "06str.c", 1116)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=CVALUE_clone(come_value2_188)))));
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_183, "06str.c", 1117)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 1117))->type)))));
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1119)))),"optional",(_Bool)0,info))));
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_190=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_183)),it_191=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_190), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_190), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        _for_condtionalA13;        it_191=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_190), "06str.c", 1125))) ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_189, "06str.c", 1122))->mGenericsTypes, "06str.c", 1122)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(it_191)))));
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        if(o2_saved_190 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        obj_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1125))));
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        num_string_193=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value334=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1127))))))));
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_193, "06str.c", 1129)),"1");
        __freed_obj__ = 0;
        type2_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=solve_generics(type_189,type_189,info))));
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_195=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1133),((struct optional$2charphbool*)(right_value336=make_type_name_string(type2_194,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj129=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1135))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1135))->c_value=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_195,type_name_195,((char*)(right_value337=buffer_to_string(((struct buffer*)come_null_check(num_string_193, "06str.c", 1135))))),((struct sInfo*)come_null_check(info, "06str.c", 1135))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1135))->sline))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_clone(type2_194))));
        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_196, "06str.c", 1138))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type3_196, "06str.c", 1139))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_194, "06str.c", 1140))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj130=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1141))->type;
        ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1141))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(type2_194))));
        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj131=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1142))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1142))->c_value=(char*)come_increment_ref_count(((char*)(right_value341=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1142))->c_value,(struct sType*)come_increment_ref_count(type3_196),info))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
        if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1143))->type, "06str.c", 1143))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1144))->var=((void*)0);
        __freed_obj__ = 0;
        obj_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(type2_194))));
        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name_198="initialize";
        __freed_obj__ = 0;
        generics_fun_name_199=(char*)come_increment_ref_count(((char*)(right_value345=string_to_string(((char*)come_null_check(((char*)(right_value344=make_generics_function(obj_type_197,(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(fun_name_198)))),info))), "06str.c", 1149))))));
        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_200=((struct sFun*)(right_value346=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1151))->funcs, "06str.c", 1151)),generics_fun_name_199,((void*)0))));
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional236=fun_200==((void*)0),        __freed_obj__ = 0, 
        _if_conditional236) {
            __dec_obj132=generics_fun_name_199;
            generics_fun_name_199=(char*)come_increment_ref_count(((char*)(right_value348=create_method_name(obj_type_197,(_Bool)0,((char*)(right_value347=__builtin_string(fun_name_198))),info))));
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fun_200=((struct sFun*)(right_value349=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1156))->funcs, "06str.c", 1156)),generics_fun_name_199,((void*)0))));
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional237=fun_200==((void*)0),            __freed_obj__ = 0, 
            _if_conditional237) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_199,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1159))->come_fun, "06str.c", 1159))->mName);
                __freed_obj__ = 0;
                __result156__ = (_Bool)1;
                if(mNoSolvedGenericsType_186 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_187 && !__freed_obj__) { true_node_187 = come_decrement_ref_count(true_node_187, ((struct sNode*)true_node_187)->finalize, ((struct sNode*)true_node_187)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_195 && !__freed_obj__) { type_name_195 = come_decrement_ref_count(type_name_195, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_199 && !__freed_obj__) { generics_fun_name_199 = come_decrement_ref_count(generics_fun_name_199, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_184 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result156__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(((struct sFun*)come_null_check(fun_200, "06str.c", 1164))->mResultType))));
        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_201, "06str.c", 1165))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_202=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value352=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value351=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1167))))))));
        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional238=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1198),__exception_result_var_a8=((struct optional$2sTypephbool*)(right_value353=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_200, "06str.c", 1198))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a8)), "06str.c", 1198))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1198))->type, "06str.c", 1198))->mHeap,        (right_value353 && right_value353 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional238) {
            if(_if_conditional239=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1197))->var,            __freed_obj__ = 0, 
            _if_conditional239) {
                if(_if_conditional240=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1189))->var,                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(_if_conditional241=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1173))->var, "06str.c", 1173))->mCValueName=((void*)0);
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional242=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            __dec_obj134=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1176))->c_value;
                            ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1176))->c_value=(char*)come_increment_ref_count(((char*)(right_value354=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1176))->type,((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1176))->c_value,info))));
                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                            if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional243=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1188))->var, "06str.c", 1188))->mType, "06str.c", 1188))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                __dec_obj135=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1179))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1179))->c_value=(char*)come_increment_ref_count(((char*)(right_value355=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1179))->type,((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1179))->c_value,info))));
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj136=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1182))->c_value;
                                ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1182))->c_value=(char*)come_increment_ref_count(((char*)(right_value356=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1182))->type,((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1182))->c_value,info))));
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
                if(_if_conditional244=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1196))->type, "06str.c", 1196))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional244) {
                }
                else {
                    __dec_obj137=((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1194))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1194))->c_value=(char*)come_increment_ref_count(((char*)(right_value357=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1194))->type,((struct CVALUE*)come_null_check(obj_value_192, "06str.c", 1194))->c_value,info))));
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_202, "06str.c", 1198)),(struct CVALUE*)come_increment_ref_count(obj_value_192));
        __freed_obj__ = 0;
        i_203=1;
        __freed_obj__ = 0;
        for(
        o2_saved_204=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_184)),it_205=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_204), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_204), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        _for_condtionalA14;        it_205=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_204), "06str.c", 1236))) ,        __freed_obj__ = 0, 
        0        ){
            come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=CVALUE_clone(it_205))));
            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional245=optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a9=((struct optional$2sTypephbool*)(right_value359=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_200, "06str.c", 1231))->mParamTypes,i_203))), come_pop_stackframe(), __exception_result_var_a9))&&((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1231),__exception_result_var_a10=((struct optional$2sTypephbool*)(right_value360=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_200, "06str.c", 1231))->mParamTypes,i_203))), come_pop_stackframe(), __exception_result_var_a10)), "06str.c", 1231))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1231))->type, "06str.c", 1231))->mHeap,            (right_value359 && right_value359 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0):0,
            (right_value360 && right_value360 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional245) {
                if(_if_conditional246=((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1230))->var,                __freed_obj__ = 0, 
                _if_conditional246) {
                    if(_if_conditional247=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional247) {
                        __dec_obj138=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1207))->var, "06str.c", 1207))->mCValueName=((void*)0);
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional248=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional248) {
                            __dec_obj139=((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1210))->c_value;
                            ((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1210))->c_value=(char*)come_increment_ref_count(((char*)(right_value361=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1210))->type,((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1210))->c_value,info))));
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional249=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1222))->var, "06str.c", 1222))->mType, "06str.c", 1222))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional249) {
                                __dec_obj140=((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1213))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1213))->c_value=(char*)come_increment_ref_count(((char*)(right_value362=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1213))->type,((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1213))->c_value,info))));
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj141=((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1216))->c_value;
                                ((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1216))->c_value=(char*)come_increment_ref_count(((char*)(right_value363=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1216))->type,((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1216))->c_value,info))));
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
                    if(_if_conditional250=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1229))->type, "06str.c", 1229))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional250) {
                    }
                    else {
                        __dec_obj142=((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1227))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1227))->c_value=(char*)come_increment_ref_count(((char*)(right_value364=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1227))->type,((struct CVALUE*)come_null_check(come_value_206, "06str.c", 1227))->c_value,info))));
                        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_202, "06str.c", 1231)),(struct CVALUE*)come_increment_ref_count(come_value_206));
            __freed_obj__ = 0;
            i_203++;
            __freed_obj__ = 0;
            if(come_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_204, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buf_207=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1236))))))));
        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_207, "06str.c", 1238)),generics_fun_name_199);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_207, "06str.c", 1239)),"(");
        __freed_obj__ = 0;
        j_208=0;
        __freed_obj__ = 0;
        for(
        o2_saved_209=(struct list$1CVALUEph*)come_increment_ref_count((come_params_202)),it_210=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_209), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_209), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_210=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_209), "06str.c", 1251))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_207, "06str.c", 1243)),((struct CVALUE*)come_null_check(it_210, "06str.c", 1243))->c_value);
            __freed_obj__ = 0;
            if(_if_conditional251=j_208!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_202, "06str.c", 1249)))-1,            __freed_obj__ = 0, 
            _if_conditional251) {
                buffer_append_str(((struct buffer*)come_null_check(buf_207, "06str.c", 1246)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_208++;
            __freed_obj__ = 0;
        }
        if(o2_saved_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_209, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_207, "06str.c", 1251)),")");
        __freed_obj__ = 0;
        come_value3_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value367=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1253))));
        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj143=((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1255))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1255))->c_value=(char*)come_increment_ref_count(((char*)(right_value368=buffer_to_string(((struct buffer*)come_null_check(buf_207, "06str.c", 1255))))));
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional252=((struct sType*)come_null_check(result_type_201, "06str.c", 1261))->mHeap,        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj144=((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1258))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1258))->c_value=(char*)come_increment_ref_count(((char*)(right_value370=append_object_to_right_values(((char*)(right_value369=buffer_to_string(((struct buffer*)come_null_check(buf_207, "06str.c", 1258))))),(struct sType*)come_increment_ref_count(result_type_201),info))));
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj145=((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1261))->type;
        ((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1261))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(result_type_201))));
        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1262))->type, "06str.c", 1262))->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value3_211, "06str.c", 1263))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((char*)(right_value372=buffer_to_string(((struct buffer*)come_null_check(buf_207, "06str.c", 1265))))));
        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1267))->stack, "06str.c", 1267)),(struct CVALUE*)come_increment_ref_count(come_value3_211));
        __freed_obj__ = 0;
        if(mNoSolvedGenericsType_186 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_187 && !__freed_obj__) { true_node_187 = come_decrement_ref_count(true_node_187, ((struct sNode*)true_node_187)->finalize, ((struct sNode*)true_node_187)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_193 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_195 && !__freed_obj__) { type_name_195 = come_decrement_ref_count(type_name_195, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_199 && !__freed_obj__) { generics_fun_name_199 = come_decrement_ref_count(generics_fun_name_199, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_202 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_207 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result157__ = (_Bool)1;
    if(tuple_types_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_183, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_184 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
    if(tuple_types_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_183, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_184 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = ((struct sSomeNode*)come_null_check(self, "06str.c", 1275))->sline;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value373;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value373, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value373=__builtin_string(((struct sSomeNode*)come_null_check(self, "06str.c", 1280))->sname)));
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __dec_obj146;
struct list$1sNodeph* __dec_obj147;
void* right_value374;
char* __dec_obj148;
struct sMapNode* __result160__;
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
    __result160__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
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

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value375;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value375, 0, sizeof(void*));
    __result162__ = __result_obj__ = ((char*)(right_value375=__builtin_string("sMapNode")));
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* map_key_elements_212;
struct list$1sNodeph* map_elements_213;
void* right_value376;
void* right_value377;
struct list$1CVALUEph* key_params_214;
void* right_value378;
void* right_value379;
struct list$1CVALUEph* element_params_215;
struct sType* map_key_type_216;
struct sType* map_element_type_217;
int i_218;
_Bool _for_condtionalA16;
void* right_value384;
struct sNode* key_elements_223;
void* right_value385;
struct sNode* elements_224;
_Bool _if_conditional260;
_Bool __result168__;
void* right_value386;
struct CVALUE* come_value_225;
_Bool _if_conditional261;
_Bool __result169__;
void* right_value387;
struct CVALUE* come_value2_226;
void* right_value388;
struct sType* __dec_obj150;
void* right_value389;
struct sType* __dec_obj151;
static int map_value_num_227=0;
void* right_value390;
struct sType* key_type_values_228;
void* right_value391;
void* right_value392;
char* var_name_229;
void* right_value393;
struct sVar* var__230;
void* right_value394;
void* right_value395;
struct sType* element_type_values_231;
void* right_value396;
void* right_value397;
char* var_name2_232;
void* right_value398;
struct sVar* var2__233;
void* right_value399;
void* right_value400;
void* right_value401;
struct buffer* source_234;
int i_235;
_Bool _for_condtionalA17;
void* right_value402;
struct CVALUE* key_param_236;
void* right_value403;
struct CVALUE* element_param_237;
_Bool _if_conditional262;
void* right_value404;
void* right_value405;
_Bool _if_conditional263;
void* right_value406;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sType* map_type_238;
void* right_value411;
void* right_value412;
void* right_value413;
struct sType* obj_type_239;
char* fun_name_240;
void* right_value414;
void* right_value415;
void* right_value416;
char* generics_fun_name_241;
void* right_value417;
struct sFun* fun_242;
_Bool _if_conditional264;
void* right_value418;
void* right_value419;
char* __dec_obj152;
void* right_value420;
_Bool _if_conditional265;
_Bool __result170__;
void* right_value421;
struct sType* result_type_243;
struct sType* type_244;
void* right_value422;
struct CVALUE* obj_value_245;
void* right_value423;
void* right_value424;
struct buffer* num_string_246;
void* right_value425;
struct sType* type2_247;
void* right_value426;
char* type_name_248;
void* right_value427;
void* right_value428;
char* __dec_obj153;
void* right_value429;
struct sType* type3_249;
void* right_value430;
struct sType* __dec_obj154;
void* right_value431;
char* __dec_obj155;
void* right_value432;
void* right_value433;
struct list$1CVALUEph* come_params_250;
void* right_value434;
struct optional$2sTypephbool* __exception_result_var_a11;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
char* __dec_obj156;
_Bool _if_conditional269;
void* right_value435;
char* __dec_obj157;
_Bool _if_conditional270;
void* right_value436;
char* __dec_obj158;
void* right_value437;
char* __dec_obj159;
_Bool _if_conditional271;
void* right_value438;
char* __dec_obj160;
void* right_value439;
struct CVALUE* come_value2_251;
void* right_value440;
char* __dec_obj161;
struct sType* __dec_obj162;
void* right_value441;
struct CVALUE* come_value3_252;
void* right_value442;
char* __dec_obj163;
struct sType* __dec_obj164;
void* right_value443;
struct CVALUE* come_value4_253;
void* right_value444;
char* __dec_obj165;
struct sType* __dec_obj166;
void* right_value445;
void* right_value446;
struct buffer* buf_254;
int j_255;
struct list$1CVALUEph* o2_saved_256;
struct CVALUE* it_257;
_Bool _for_condtionalA18;
_Bool _if_conditional272;
void* right_value447;
struct CVALUE* come_value5_258;
void* right_value448;
char* __dec_obj167;
_Bool _if_conditional273;
void* right_value449;
void* right_value450;
char* __dec_obj168;
void* right_value451;
struct sType* __dec_obj169;
void* right_value452;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_212, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_213, 0, sizeof(struct list$1sNodeph*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&key_params_214, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&element_params_215, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_216, 0, sizeof(struct sType*));
memset(&map_element_type_217, 0, sizeof(struct sType*));
memset(&i_218, 0, sizeof(int));
memset(&right_value384, 0, sizeof(void*));
memset(&key_elements_223, 0, sizeof(struct sNode*));
memset(&right_value385, 0, sizeof(void*));
memset(&elements_224, 0, sizeof(struct sNode*));
memset(&right_value386, 0, sizeof(void*));
memset(&come_value_225, 0, sizeof(struct CVALUE*));
memset(&right_value387, 0, sizeof(void*));
memset(&come_value2_226, 0, sizeof(struct CVALUE*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&key_type_values_228, 0, sizeof(struct sType*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&var_name_229, 0, sizeof(char*));
memset(&right_value393, 0, sizeof(void*));
memset(&var__230, 0, sizeof(struct sVar*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&element_type_values_231, 0, sizeof(struct sType*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&var_name2_232, 0, sizeof(char*));
memset(&right_value398, 0, sizeof(void*));
memset(&var2__233, 0, sizeof(struct sVar*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&source_234, 0, sizeof(struct buffer*));
memset(&i_235, 0, sizeof(int));
memset(&right_value402, 0, sizeof(void*));
memset(&key_param_236, 0, sizeof(struct CVALUE*));
memset(&right_value403, 0, sizeof(void*));
memset(&element_param_237, 0, sizeof(struct CVALUE*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&map_type_238, 0, sizeof(struct sType*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&obj_type_239, 0, sizeof(struct sType*));
memset(&fun_name_240, 0, sizeof(char*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&generics_fun_name_241, 0, sizeof(char*));
memset(&right_value417, 0, sizeof(void*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&result_type_243, 0, sizeof(struct sType*));
memset(&type_244, 0, sizeof(struct sType*));
memset(&right_value422, 0, sizeof(void*));
memset(&obj_value_245, 0, sizeof(struct CVALUE*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&num_string_246, 0, sizeof(struct buffer*));
memset(&right_value425, 0, sizeof(void*));
memset(&type2_247, 0, sizeof(struct sType*));
memset(&right_value426, 0, sizeof(void*));
memset(&type_name_248, 0, sizeof(char*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&type3_249, 0, sizeof(struct sType*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&come_params_250, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&come_value2_251, 0, sizeof(struct CVALUE*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&come_value3_252, 0, sizeof(struct CVALUE*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&come_value4_253, 0, sizeof(struct CVALUE*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&buf_254, 0, sizeof(struct buffer*));
memset(&j_255, 0, sizeof(int));
memset(&o2_saved_256, 0, sizeof(struct list$1CVALUEph*));
memset(&it_257, 0, sizeof(struct CVALUE*));
memset(&right_value447, 0, sizeof(void*));
memset(&come_value5_258, 0, sizeof(struct CVALUE*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
    map_key_elements_212=((struct sMapNode*)come_null_check(self, "06str.c", 1314))->map_key_elements;
    __freed_obj__ = 0;
    map_elements_213=((struct sMapNode*)come_null_check(self, "06str.c", 1315))->map_elements;
    __freed_obj__ = 0;
    key_params_214=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value377=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value376=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1317))))))));
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    element_params_215=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value379=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value378=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1318))))))));
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    for(
    i_218=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    i_218<list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(map_key_elements_212, "06str.c", 1348))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    i_218++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_elements_223=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1323),((struct optional$2sNodephbool*)(right_value384=list$1sNodephp_operator_load_element(map_key_elements_212,i_218)))));
        come_pop_stackframe();
        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        elements_224=optional$2sNodephbool_value((come_push_stackframe("06str.c", 1324),((struct optional$2sNodephbool*)(right_value385=list$1sNodephp_operator_load_element(map_elements_213,i_218)))));
        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional260=!((struct sNode*)come_null_check(key_elements_223, "06str.c", 1330))->compile(((struct sNode*)come_null_check(key_elements_223, "06str.c", 1330))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional260) {
            __result168__ = (_Bool)0;
            if(key_params_214 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_215 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_215, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result168__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value386=get_value_from_stack(-1,info))));
        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(key_params_214, "06str.c", 1333)),(struct CVALUE*)come_increment_ref_count(come_value_225));
        __freed_obj__ = 0;
        if(_if_conditional261=!((struct sNode*)come_null_check(elements_224, "06str.c", 1339))->compile(((struct sNode*)come_null_check(elements_224, "06str.c", 1339))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional261) {
            __result169__ = (_Bool)0;
            if(come_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_214 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_215 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_215, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result169__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value2_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value387=get_value_from_stack(-1,info))));
        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(element_params_215, "06str.c", 1342)),(struct CVALUE*)come_increment_ref_count(come_value2_226));
        __freed_obj__ = 0;
        __dec_obj150=map_key_type_216;
        map_key_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(((struct CVALUE*)come_null_check(come_value_225, "06str.c", 1344))->type))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj151=map_element_type_217;
        map_element_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(((struct CVALUE*)come_null_check(come_value2_226, "06str.c", 1345))->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    key_type_values_228=(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_clone(map_key_type_216))));
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(key_type_values_228, "06str.c", 1351))->mArrayNum, "06str.c", 1351)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_214, "06str.c", 1351))),info)))));
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(key_type_values_228, "06str.c", 1352))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name_229=(char*)come_increment_ref_count(((char*)(right_value392=xsprintf("__map_keys%d__",++map_value_num_227))));
    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name_229,(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(key_type_values_228)))),info);
    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var__230=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1358))->lv_table,var_name_229);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1360),((struct optional$2charphbool*)(right_value394=make_define_var(key_type_values_228,((struct sVar*)come_null_check(var__230, "06str.c", 1360))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    element_type_values_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value395=sType_clone(map_element_type_217))));
    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(element_type_values_231, "06str.c", 1363))->mArrayNum, "06str.c", 1363)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=create_int_node(list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(element_params_215, "06str.c", 1363))),info)))));
    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(element_type_values_231, "06str.c", 1364))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    var_name2_232=(char*)come_increment_ref_count(((char*)(right_value397=xsprintf("__map_element%d__",map_value_num_227))));
    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_232,(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(element_type_values_231)))),info);
    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    var2__233=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1370))->lv_table,var_name2_232);
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("06str.c", 1372),((struct optional$2charphbool*)(right_value399=make_define_var(element_type_values_231,((struct sVar*)come_null_check(var2__233, "06str.c", 1372))->mCValueName,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    source_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value401=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value400=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1374))))))));
    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1376)),"{");
    __freed_obj__ = 0;
    for(
    i_235=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    i_235<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_214, "06str.c", 1397))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    i_235++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        key_param_236=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1379),((struct optional$2CVALUEphbool*)(right_value402=list$1CVALUEphp_operator_load_element(key_params_214,i_235)))));
        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        element_param_237=optional$2CVALUEphbool_value((come_push_stackframe("06str.c", 1380),((struct optional$2CVALUEphbool*)(right_value403=list$1CVALUEphp_operator_load_element(element_params_215,i_235)))));
        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional262=((struct sType*)come_null_check(map_key_type_216, "06str.c", 1389))->mHeap,        __freed_obj__ = 0, 
        _if_conditional262) {
            buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1383)),((char*)(right_value404=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__230, "06str.c", 1383))->mCValueName,i_235,((struct CVALUE*)come_null_check(key_param_236, "06str.c", 1383))->c_value))));
            if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1386)),((char*)(right_value405=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__230, "06str.c", 1386))->mCValueName,i_235,((struct CVALUE*)come_null_check(key_param_236, "06str.c", 1386))->c_value))));
            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional263=((struct sType*)come_null_check(map_element_type_217, "06str.c", 1395))->mHeap,        __freed_obj__ = 0, 
        _if_conditional263) {
            buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1390)),((char*)(right_value406=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var2__233, "06str.c", 1390))->mCValueName,i_235,((struct CVALUE*)come_null_check(element_param_237, "06str.c", 1390))->c_value))));
            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1393)),((char*)(right_value407=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var2__233, "06str.c", 1393))->mCValueName,i_235,((struct CVALUE*)come_null_check(element_param_237, "06str.c", 1393))->c_value))));
            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(source_234, "06str.c", 1397)),"}");
    __freed_obj__ = 0;
    add_come_code(info,"%s",((char*)(right_value408=buffer_to_string(((struct buffer*)come_null_check(source_234, "06str.c", 1399))))));
    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    map_type_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value410=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value409=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1401)))),"map",(_Bool)0,info))));
    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_238, "06str.c", 1402))->mGenericsTypes, "06str.c", 1402)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value411=sType_clone(map_key_type_216)))));
    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_238, "06str.c", 1403))->mGenericsTypes, "06str.c", 1403)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value412=sType_clone(map_element_type_217)))));
    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    obj_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value413=sType_clone(map_type_238))));
    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_name_240="initialize_with_values";
    __freed_obj__ = 0;
    generics_fun_name_241=(char*)come_increment_ref_count(((char*)(right_value416=string_to_string(((char*)come_null_check(((char*)(right_value415=make_generics_function(obj_type_239,(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(fun_name_240)))),info))), "06str.c", 1408))))));
    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fun_242=((struct sFun*)(right_value417=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1410))->funcs, "06str.c", 1410)),generics_fun_name_241,((void*)0))));
    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional264=fun_242==((void*)0),    __freed_obj__ = 0, 
    _if_conditional264) {
        __dec_obj152=generics_fun_name_241;
        generics_fun_name_241=(char*)come_increment_ref_count(((char*)(right_value419=create_method_name(obj_type_239,(_Bool)0,((char*)(right_value418=__builtin_string(fun_name_240))),info))));
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
        if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_242=((struct sFun*)(right_value420=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1415))->funcs, "06str.c", 1415)),generics_fun_name_241,((void*)0))));
        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional265=fun_242==((void*)0),        __freed_obj__ = 0, 
        _if_conditional265) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_241,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1418))->come_fun, "06str.c", 1418))->mName);
            __freed_obj__ = 0;
            __result170__ = (_Bool)1;
            if(key_params_214 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_214, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_215 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_215, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_229 && !__freed_obj__) { var_name_229 = come_decrement_ref_count(var_name_229, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_232 && !__freed_obj__) { var_name2_232 = come_decrement_ref_count(var_name2_232, (void*)0, (void*)0, 0, 0, 0); }
            if(source_234 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_234, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_241 && !__freed_obj__) { generics_fun_name_241 = come_decrement_ref_count(generics_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result170__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(((struct sFun*)come_null_check(fun_242, "06str.c", 1423))->mResultType))));
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(result_type_243, "06str.c", 1424))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    type_244=map_type_238;
    __freed_obj__ = 0;
    obj_value_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value422=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1428))));
    if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    num_string_246=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1430))))))));
    if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_246, "06str.c", 1432)),"1");
    __freed_obj__ = 0;
    type2_247=(struct sType*)come_increment_ref_count(((struct sType*)(right_value425=solve_generics(type_244,type_244,info))));
    if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_248=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("06str.c", 1436),((struct optional$2charphbool*)(right_value426=make_type_name_string(type2_247,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj153=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1438))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1438))->c_value=(char*)come_increment_ref_count(((char*)(right_value428=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_248,type_name_248,((char*)(right_value427=buffer_to_string(((struct buffer*)come_null_check(num_string_246, "06str.c", 1438))))),((struct sInfo*)come_null_check(info, "06str.c", 1438))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1438))->sline))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type3_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value429=sType_clone(type2_247))));
    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_249, "06str.c", 1441))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_249, "06str.c", 1442))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_247, "06str.c", 1443))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj154=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1444))->type;
    ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1444))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value430=sType_clone(type2_247))));
    if(__dec_obj154) { come_call_finalizer(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj155=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1445))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1445))->c_value=(char*)come_increment_ref_count(((char*)(right_value431=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1445))->c_value,(struct sType*)come_increment_ref_count(type3_249),info))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1446))->type, "06str.c", 1446))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1447))->var=((void*)0);
    __freed_obj__ = 0;
    come_params_250=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value433=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value432=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1449))))))));
    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional266=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("06str.c", 1478),__exception_result_var_a11=((struct optional$2sTypephbool*)(right_value434=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_242, "06str.c", 1478))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a11)), "06str.c", 1478))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1478))->type, "06str.c", 1478))->mHeap,    (right_value434 && right_value434 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __freed_obj__ = 0, 
    _if_conditional266) {
        if(_if_conditional267=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1477))->var,        __freed_obj__ = 0, 
        _if_conditional267) {
            if(_if_conditional268=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional268) {
                __dec_obj156=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName;
                ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1454))->var, "06str.c", 1454))->mCValueName=((void*)0);
                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional269=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mShare,                __freed_obj__ = 0, 
                _if_conditional269) {
                    __dec_obj157=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1457))->c_value;
                    ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1457))->c_value=(char*)come_increment_ref_count(((char*)(right_value435=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1457))->type,((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1457))->c_value,info))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
                    if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional270=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1469))->var, "06str.c", 1469))->mType, "06str.c", 1469))->mClone,                    __freed_obj__ = 0, 
                    _if_conditional270) {
                        __dec_obj158=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1460))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1460))->c_value=(char*)come_increment_ref_count(((char*)(right_value436=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1460))->type,((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1460))->c_value,info))));
                        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
                        if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj159=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1463))->c_value;
                        ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1463))->c_value=(char*)come_increment_ref_count(((char*)(right_value437=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1463))->type,((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1463))->c_value,info))));
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
            if(_if_conditional271=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1476))->type, "06str.c", 1476))->mDelegate,            __freed_obj__ = 0, 
            _if_conditional271) {
            }
            else {
                __dec_obj160=((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1474))->c_value;
                ((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1474))->c_value=(char*)come_increment_ref_count(((char*)(right_value438=increment_ref_count_object(((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1474))->type,((struct CVALUE*)come_null_check(obj_value_245, "06str.c", 1474))->c_value,info))));
                if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_250, "06str.c", 1478)),(struct CVALUE*)come_increment_ref_count(obj_value_245));
    __freed_obj__ = 0;
    come_value2_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value439=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1480))));
    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj161=((struct CVALUE*)come_null_check(come_value2_251, "06str.c", 1482))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_251, "06str.c", 1482))->c_value=(char*)come_increment_ref_count(((char*)(right_value440=xsprintf("%d",list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_214, "06str.c", 1482)))))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj162=((struct CVALUE*)come_null_check(come_value2_251, "06str.c", 1483))->type;
    ((struct CVALUE*)come_null_check(come_value2_251, "06str.c", 1483))->type=((void*)0);
    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_251, "06str.c", 1484))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_250, "06str.c", 1486)),(struct CVALUE*)come_increment_ref_count(come_value2_251));
    __freed_obj__ = 0;
    come_value3_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value441=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1488))));
    if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj163=((struct CVALUE*)come_null_check(come_value3_252, "06str.c", 1490))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_252, "06str.c", 1490))->c_value=(char*)come_increment_ref_count(((char*)(right_value442=xsprintf("%s",((struct sVar*)come_null_check(var__230, "06str.c", 1490))->mCValueName))));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj164=((struct CVALUE*)come_null_check(come_value3_252, "06str.c", 1491))->type;
    ((struct CVALUE*)come_null_check(come_value3_252, "06str.c", 1491))->type=((void*)0);
    if(__dec_obj164) { come_call_finalizer(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value3_252, "06str.c", 1492))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_250, "06str.c", 1494)),(struct CVALUE*)come_increment_ref_count(come_value3_252));
    __freed_obj__ = 0;
    come_value4_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value443=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1496))));
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj165=((struct CVALUE*)come_null_check(come_value4_253, "06str.c", 1498))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_253, "06str.c", 1498))->c_value=(char*)come_increment_ref_count(((char*)(right_value444=xsprintf("%s",((struct sVar*)come_null_check(var2__233, "06str.c", 1498))->mCValueName))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
    if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj166=((struct CVALUE*)come_null_check(come_value4_253, "06str.c", 1499))->type;
    ((struct CVALUE*)come_null_check(come_value4_253, "06str.c", 1499))->type=((void*)0);
    if(__dec_obj166) { come_call_finalizer(sType_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value4_253, "06str.c", 1500))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_250, "06str.c", 1502)),(struct CVALUE*)come_increment_ref_count(come_value4_253));
    __freed_obj__ = 0;
    buf_254=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value446=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value445=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1504))))))));
    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_254, "06str.c", 1506)),generics_fun_name_241);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_254, "06str.c", 1507)),"(");
    __freed_obj__ = 0;
    j_255=0;
    __freed_obj__ = 0;
    for(
    o2_saved_256=(struct list$1CVALUEph*)come_increment_ref_count((come_params_250)),it_257=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_256), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA18=    !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_256), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    _for_condtionalA18;    it_257=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_256), "06str.c", 1519))) ,    __freed_obj__ = 0, 
    0    ){
        buffer_append_str(((struct buffer*)come_null_check(buf_254, "06str.c", 1511)),((struct CVALUE*)come_null_check(it_257, "06str.c", 1511))->c_value);
        __freed_obj__ = 0;
        if(_if_conditional272=j_255!=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_250, "06str.c", 1517)))-1,        __freed_obj__ = 0, 
        _if_conditional272) {
            buffer_append_str(((struct buffer*)come_null_check(buf_254, "06str.c", 1514)),",");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        j_255++;
        __freed_obj__ = 0;
    }
    if(o2_saved_256 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_256, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_254, "06str.c", 1519)),")");
    __freed_obj__ = 0;
    come_value5_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value447=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1521))));
    if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj167=((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1523))->c_value;
    ((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1523))->c_value=(char*)come_increment_ref_count(((char*)(right_value448=buffer_to_string(((struct buffer*)come_null_check(buf_254, "06str.c", 1523))))));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
    if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional273=((struct sType*)come_null_check(result_type_243, "06str.c", 1529))->mHeap,    __freed_obj__ = 0, 
    _if_conditional273) {
        __dec_obj168=((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1526))->c_value;
        ((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1526))->c_value=(char*)come_increment_ref_count(((char*)(right_value450=append_object_to_right_values(((char*)(right_value449=buffer_to_string(((struct buffer*)come_null_check(buf_254, "06str.c", 1526))))),(struct sType*)come_increment_ref_count(result_type_243),info))));
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
        if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj169=((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1529))->type;
    ((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1529))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value451=sType_clone(result_type_243))));
    if(__dec_obj169) { come_call_finalizer(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1530))->type, "06str.c", 1530))->mStatic=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value5_258, "06str.c", 1531))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((char*)(right_value452=buffer_to_string(((struct buffer*)come_null_check(buf_254, "06str.c", 1533))))));
    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1535))->stack, "06str.c", 1535)),(struct CVALUE*)come_increment_ref_count(come_value5_258));
    __freed_obj__ = 0;
    __result171__ = (_Bool)1;
    if(key_params_214 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_215 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_229 && !__freed_obj__) { var_name_229 = come_decrement_ref_count(var_name_229, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_232 && !__freed_obj__) { var_name2_232 = come_decrement_ref_count(var_name2_232, (void*)0, (void*)0, 0, 0, 0); }
    if(source_234 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_241 && !__freed_obj__) { generics_fun_name_241 = come_decrement_ref_count(generics_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_243 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_247 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_248 && !__freed_obj__) { type_name_248 = come_decrement_ref_count(type_name_248, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_251 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_252 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_252, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_253 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_254 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_254, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_258, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
    if(key_params_214 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_215 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_228 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_229 && !__freed_obj__) { var_name_229 = come_decrement_ref_count(var_name_229, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_232 && !__freed_obj__) { var_name2_232 = come_decrement_ref_count(var_name2_232, (void*)0, (void*)0, 0, 0, 0); }
    if(source_234 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_241 && !__freed_obj__) { generics_fun_name_241 = come_decrement_ref_count(generics_fun_name_241, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_243 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_247 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_248 && !__freed_obj__) { type_name_248 = come_decrement_ref_count(type_name_248, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_249 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_251 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_252 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_252, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_253 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_254 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_254, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional256;
struct list_item$1sNodeph* it_219;
int i_220;
_Bool _while_condtional12;
_Bool _if_conditional257;
void* right_value380;
void* right_value381;
struct optional$2sNodephbool* __result164__;
struct sNode* default_value_221;
void* right_value382;
void* right_value383;
struct optional$2sNodephbool* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_219, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_220, 0, sizeof(int));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&default_value_221, 0, sizeof(struct sNode*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
            if(_if_conditional256=position<0,            __freed_obj__ = 0, 
            _if_conditional256) {
                position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_219=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_220=0;
            __freed_obj__ = 0;
            while(_while_condtional12=it_219!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional257=position==i_220,                __freed_obj__ = 0, 
                _if_conditional257) {
                    __result164__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value381=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value380=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 742)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_219, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result164__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_219=((struct list_item$1sNodeph*)come_null_check(it_219, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_220++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_221,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result165__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sNodephbool*)(right_value383=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value382=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 750))),(struct sNode*)come_increment_ref_count(default_value_221),(_Bool)0))));
            if(default_value_221 && !__freed_obj__) { default_value_221 = come_decrement_ref_count(default_value_221, ((struct sNode*)default_value_221)->finalize, ((struct sNode*)default_value_221)->_protocol_obj, 0, 0, 0); } 
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result165__;
            __freed_obj__ = 0;
            if(default_value_221 && !__freed_obj__) { default_value_221 = come_decrement_ref_count(default_value_221, ((struct sNode*)default_value_221)->finalize, ((struct sNode*)default_value_221)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj149;
struct optional$2sNodephbool* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj149=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result163__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result163__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional258;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional258=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional258) {
                                if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional259;
struct sNode* default_value_222;
struct sNode* __result166__;
struct sNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_222, 0, sizeof(struct sNode*));
            if(_if_conditional259=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                __freed_obj__ = 0;
                memset(&default_value_222,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result166__ = __result_obj__ = default_value_222;
                __freed_obj__ = 0;
                return __result166__;
                __freed_obj__ = 0;
            }
            else {
                __result167__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result167__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result172__ = ((struct sMapNode*)come_null_check(self, "06str.c", 1542))->sline;
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value453;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value453, 0, sizeof(void*));
    __result173__ = __result_obj__ = ((char*)(right_value453=__builtin_string(((struct sMapNode*)come_null_check(self, "06str.c", 1547))->sname)));
    __freed_obj__ = 0;
    return __result173__;
    __freed_obj__ = 0;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional274;
int sline_259;
void* right_value454;
void* right_value455;
struct list$1sNodeph* exps_260;
void* right_value456;
void* right_value457;
struct buffer* value_261;
char* head_of_last_line_262;
_Bool _while_condtional13;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
int len_263;
_Bool _while_condtional14;
_Bool _if_conditional281;
_Bool _while_condtional15;
_Bool _if_conditional282;
void* right_value458;
struct sNode* exp_264;
_Bool _if_conditional283;
_Bool _if_conditional284;
int sline2_265;
_Bool _if_conditional285;
void* right_value459;
void* right_value460;
void* right_value461;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value466;
struct sNode* __result176__;
_Bool _if_conditional294;
int sline_267;
void* right_value467;
void* right_value468;
struct buffer* value_268;
_Bool _while_condtional16;
_Bool _if_conditional295;
char* p_269;
int sline_270;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
int sline2_271;
_Bool _if_conditional300;
void* right_value469;
void* right_value470;
void* right_value471;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value475;
struct sNode* __result179__;
_Bool _if_conditional307;
int sline_273;
void* right_value476;
void* right_value477;
struct buffer* buf_274;
_Bool _while_condtional17;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool global_275;
_Bool ignore_case_276;
_Bool _while_condtional18;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value478;
void* right_value479;
void* right_value480;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value484;
struct sNode* __result182__;
_Bool _if_conditional321;
int c_278;
_Bool _if_conditional322;
_Bool _if_conditional323;
int n_279;
_Bool _while_condtional19;
_Bool _if_conditional324;
int n_280;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_283;
_Bool _if_conditional325;
void* right_value485;
void* right_value486;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value489;
struct sNode* __result185__;
_Bool _if_conditional331;
unsigned int c_285;
_Bool _if_conditional332;
_Bool _if_conditional333;
int n_286;
_Bool _while_condtional22;
_Bool _if_conditional334;
int n_287;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_290;
unsigned char p2_291;
_Bool _if_conditional335;
int size_292;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value490;
void* right_value491;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value494;
struct sNode* __result188__;
_Bool _if_conditional344;
int sline_295;
void* right_value495;
void* right_value496;
struct buffer* value_296;
_Bool _while_condtional25;
_Bool _if_conditional345;
char* p_297;
int sline_298;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
int len_299;
int n_300;
_Bool _while_condtional26;
_Bool _if_conditional349;
_Bool _while_condtional27;
unsigned long int lont_303;
int n_304;
_Bool _if_conditional350;
int sline2_305;
_Bool _if_conditional351;
int len_306;
void* right_value497;
unsigned int* wstr_307;
char* str_308;
_Bool _if_conditional352;
void* right_value498;
void* right_value499;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value503;
struct sNode* __result191__;
_Bool _if_conditional359;
int sline_310;
void* right_value504;
void* right_value505;
struct list$1sNodeph* exps_311;
void* right_value506;
void* right_value507;
struct buffer* value_312;
_Bool _while_condtional28;
_Bool _if_conditional360;
char* p_313;
int sline_314;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value508;
struct sNode* exp_315;
_Bool _if_conditional364;
_Bool _if_conditional365;
int len_316;
_Bool _while_condtional29;
_Bool _if_conditional366;
_Bool _while_condtional30;
_Bool _if_conditional367;
void* right_value509;
struct sNode* exp_317;
_Bool _if_conditional368;
_Bool _if_conditional369;
int sline2_318;
_Bool _if_conditional370;
void* right_value510;
void* right_value511;
void* right_value512;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value517;
struct sNode* __result194__;
_Bool _if_conditional379;
char* p_320;
_Bool no_comma_321;
void* right_value518;
struct sNode* node_322;
char* p2_323;
void* right_value519;
void* right_value520;
struct buffer* first_element_source_324;
void* right_value521;
void* right_value522;
struct list$1sNodeph* list_elements_325;
void* right_value523;
void* right_value524;
struct list$1sNodeph* map_keys_326;
void* right_value525;
void* right_value526;
struct list$1sNodeph* map_elements_327;
_Bool _if_conditional380;
_Bool no_comma_328;
void* right_value527;
struct sNode* node2_329;
_Bool _if_conditional381;
void* right_value528;
void* right_value529;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value534;
struct sNode* __result197__;
void* right_value535;
_Bool _while_condtional31;
_Bool no_comma_332;
void* right_value536;
struct sNode* node2_333;
void* right_value537;
void* right_value538;
struct sNode* node3_334;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value539;
void* right_value540;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value545;
struct sNode* __result202__;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _while_condtional32;
_Bool no_comma_336;
void* right_value546;
struct sNode* node2_337;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value547;
void* right_value548;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value552;
struct sNode* __result205__;
void* right_value553;
struct sNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_259, 0, sizeof(int));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&exps_260, 0, sizeof(struct list$1sNodeph*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&value_261, 0, sizeof(struct buffer*));
memset(&head_of_last_line_262, 0, sizeof(char*));
memset(&len_263, 0, sizeof(int));
memset(&right_value458, 0, sizeof(void*));
memset(&exp_264, 0, sizeof(struct sNode*));
memset(&sline2_265, 0, sizeof(int));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value466, 0, sizeof(void*));
memset(&sline_267, 0, sizeof(int));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&value_268, 0, sizeof(struct buffer*));
memset(&p_269, 0, sizeof(char*));
memset(&sline_270, 0, sizeof(int));
memset(&sline2_271, 0, sizeof(int));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&sline_273, 0, sizeof(int));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&buf_274, 0, sizeof(struct buffer*));
memset(&global_275, 0, sizeof(_Bool));
memset(&ignore_case_276, 0, sizeof(_Bool));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&c_278, 0, sizeof(int));
memset(&n_279, 0, sizeof(int));
memset(&n_280, 0, sizeof(int));
memset(&n_283, 0, sizeof(unsigned long long int));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&c_285, 0, sizeof(unsigned int));
memset(&n_286, 0, sizeof(int));
memset(&n_287, 0, sizeof(int));
memset(&n_290, 0, sizeof(unsigned long long int));
memset(&p2_291, 0, sizeof(unsigned char));
memset(&size_292, 0, sizeof(int));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&sline_295, 0, sizeof(int));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&value_296, 0, sizeof(struct buffer*));
memset(&p_297, 0, sizeof(char*));
memset(&sline_298, 0, sizeof(int));
memset(&len_299, 0, sizeof(int));
memset(&n_300, 0, sizeof(int));
memset(&lont_303, 0, sizeof(unsigned long int));
memset(&n_304, 0, sizeof(int));
memset(&sline2_305, 0, sizeof(int));
memset(&len_306, 0, sizeof(int));
memset(&right_value497, 0, sizeof(void*));
memset(&wstr_307, 0, sizeof(unsigned int*));
memset(&str_308, 0, sizeof(char*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value503, 0, sizeof(void*));
memset(&sline_310, 0, sizeof(int));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&exps_311, 0, sizeof(struct list$1sNodeph*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_value507, 0, sizeof(void*));
memset(&value_312, 0, sizeof(struct buffer*));
memset(&p_313, 0, sizeof(char*));
memset(&sline_314, 0, sizeof(int));
memset(&right_value508, 0, sizeof(void*));
memset(&exp_315, 0, sizeof(struct sNode*));
memset(&len_316, 0, sizeof(int));
memset(&right_value509, 0, sizeof(void*));
memset(&exp_317, 0, sizeof(struct sNode*));
memset(&sline2_318, 0, sizeof(int));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
memset(&p_320, 0, sizeof(char*));
memset(&no_comma_321, 0, sizeof(_Bool));
memset(&right_value518, 0, sizeof(void*));
memset(&node_322, 0, sizeof(struct sNode*));
memset(&p2_323, 0, sizeof(char*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_value520, 0, sizeof(void*));
memset(&first_element_source_324, 0, sizeof(struct buffer*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&list_elements_325, 0, sizeof(struct list$1sNodeph*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&map_keys_326, 0, sizeof(struct list$1sNodeph*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&map_elements_327, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_328, 0, sizeof(_Bool));
memset(&right_value527, 0, sizeof(void*));
memset(&node2_329, 0, sizeof(struct sNode*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&no_comma_332, 0, sizeof(_Bool));
memset(&right_value536, 0, sizeof(void*));
memset(&node2_333, 0, sizeof(struct sNode*));
memset(&right_value537, 0, sizeof(void*));
memset(&right_value538, 0, sizeof(void*));
memset(&node3_334, 0, sizeof(struct sNode*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&no_comma_336, 0, sizeof(_Bool));
memset(&right_value546, 0, sizeof(void*));
memset(&node2_337, 0, sizeof(struct sNode*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value553, 0, sizeof(void*));
    if(_if_conditional274=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+2)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+3)==10,    __freed_obj__ = 0, 
    _if_conditional274) {
        ((struct sInfo*)come_null_check(info, "06str.c", 1554))->p+=4;
        __freed_obj__ = 0;
        sline_259=((struct sInfo*)come_null_check(info, "06str.c", 1556))->sline;
        __freed_obj__ = 0;
        exps_260=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value455=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value454=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1558))))))));
        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        value_261=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value457=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value456=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1559))))))));
        if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        head_of_last_line_262=((void*)0);
        __freed_obj__ = 0;
        while(_while_condtional13=1,        __freed_obj__ = 0, 
        _while_condtional13) {
            if(_if_conditional275=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1703))->p+2)==34,            __freed_obj__ = 0, 
            _if_conditional275) {
                if(_if_conditional276=head_of_last_line_262,                __freed_obj__ = 0, 
                _if_conditional276) {
                    buffer_trim(((struct buffer*)come_null_check(value_261, "06str.c", 1566)),((struct sInfo*)come_null_check(info, "06str.c", 1566))->p-head_of_last_line_262);
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
                if(_if_conditional277=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==37,                __freed_obj__ = 0, 
                _if_conditional277) {
                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1575)),37);
                    __freed_obj__ = 0;
                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1576)),37);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "06str.c", 1577))->p++;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional278=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional278) {
                        buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1580)),92);
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1581)),34);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1582))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional279=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional279) {
                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1596)),92);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1597))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional280=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p),                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                len_263=0;
                                __freed_obj__ = 0;
                                while(_while_condtional14=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1606))->p)&&len_263<3,                                __freed_obj__ = 0, 
                                _while_condtional14) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1602)),*((struct sInfo*)come_null_check(info, "06str.c", 1602))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1603))->p++;
                                    __freed_obj__ = 0;
                                    len_263++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional281=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==88,                                __freed_obj__ = 0, 
                                _if_conditional281) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1608)),*((struct sInfo*)come_null_check(info, "06str.c", 1608))->p);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1609))->p++;
                                    __freed_obj__ = 0;
                                    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1615))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional15) {
                                        buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1612)),*((struct sInfo*)come_null_check(info, "06str.c", 1612))->p);
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1613))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional282=*((struct sInfo*)come_null_check(info, "06str.c", 1682))->p==123,                                    __freed_obj__ = 0, 
                                    _if_conditional282) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1617))->p++;
                                        __freed_obj__ = 0;
                                        exp_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=expression_v13(info))));
                                        if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_260, "06str.c", 1621)),(struct sNode*)come_increment_ref_count(exp_264));
                                        __freed_obj__ = 0;
                                        if(_if_conditional283=*((struct sInfo*)come_null_check(info, "06str.c", 1627))->p==125,                                        __freed_obj__ = 0, 
                                        _if_conditional283) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1624))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(value_261, "06str.c", 1627)),"%s");
                                        __freed_obj__ = 0;
                                        if(exp_264 && !__freed_obj__) { exp_264 = come_decrement_ref_count(exp_264, ((struct sNode*)exp_264)->finalize, ((struct sNode*)exp_264)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*((struct sInfo*)come_null_check(info, "06str.c", 1681))->p) {
                                            case 48:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1632)),*((struct sInfo*)come_null_check(info, "06str.c", 1632))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1633))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 110:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1637)),*((struct sInfo*)come_null_check(info, "06str.c", 1637))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1638))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 116:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1642)),*((struct sInfo*)come_null_check(info, "06str.c", 1642))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1643))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 114:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1647)),*((struct sInfo*)come_null_check(info, "06str.c", 1647))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1648))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 118:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1652)),*((struct sInfo*)come_null_check(info, "06str.c", 1652))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1653))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 102:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1657)),*((struct sInfo*)come_null_check(info, "06str.c", 1657))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1658))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 97:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1662)),*((struct sInfo*)come_null_check(info, "06str.c", 1662))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1663))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 98:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1667)),*((struct sInfo*)come_null_check(info, "06str.c", 1667))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1668))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            case 92:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1672)),*((struct sInfo*)come_null_check(info, "06str.c", 1672))->p);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1673))->p++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                            default:
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1677)),*((struct sInfo*)come_null_check(info, "06str.c", 1677))->p);
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
                            if(_if_conditional284=*((struct sInfo*)come_null_check(info, "06str.c", 1703))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional284) {
                                sline2_265=((struct sInfo*)come_null_check(info, "06str.c", 1684))->sline;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1685))->sline=sline_259;
                                __freed_obj__ = 0;
                                err_msg(info,"close \" to make embbeded string value");
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional285=*((struct sInfo*)come_null_check(info, "06str.c", 1702))->p==10,                                __freed_obj__ = 0, 
                                _if_conditional285) {
                                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1691)),92);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1692)),110);
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1693))->p++;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1694))->sline++;
                                    __freed_obj__ = 0;
                                    head_of_last_line_262=((struct sInfo*)come_null_check(info, "06str.c", 1696))->p;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1699)),*((struct sInfo*)come_null_check(info, "06str.c", 1699))->p);
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
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value461=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value459=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1707)))),(char*)come_increment_ref_count(((char*)(right_value460=buffer_to_string(((struct buffer*)come_null_check(value_261, "06str.c", 1707)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_260),sline_259,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result176__ = __result_obj__ = ((struct sNode*)(right_value466=_inf_value3));
        if(exps_260 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_260, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_261 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { right_value460 = come_decrement_ref_count(right_value460, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result176__;
        __freed_obj__ = 0;
        if(exps_260 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_260, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_261 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional294=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==34,        __freed_obj__ = 0, 
        _if_conditional294) {
            ((struct sInfo*)come_null_check(info, "06str.c", 1711))->p++;
            __freed_obj__ = 0;
            sline_267=((struct sInfo*)come_null_check(info, "06str.c", 1713))->sline;
            __freed_obj__ = 0;
            value_268=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value468=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1715))))))));
            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            while(_while_condtional16=1,            __freed_obj__ = 0, 
            _while_condtional16) {
                if(_if_conditional295=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==34,                __freed_obj__ = 0, 
                _if_conditional295) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1719))->p++;
                    __freed_obj__ = 0;
                    p_269=((struct sInfo*)come_null_check(info, "06str.c", 1721))->p;
                    __freed_obj__ = 0;
                    sline_270=((struct sInfo*)come_null_check(info, "06str.c", 1722))->sline;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional296=*((struct sInfo*)come_null_check(info, "06str.c", 1736))->p==34,                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1729))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1732))->p=p_269;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1733))->sline=sline_270;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional297=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional297) {
                        buffer_append_char(((struct buffer*)come_null_check(value_268, "06str.c", 1738)),92);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1739))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional298=*((struct sInfo*)come_null_check(info, "06str.c", 1749))->p==34,                        __freed_obj__ = 0, 
                        _if_conditional298) {
                            buffer_append_char(((struct buffer*)come_null_check(value_268, "06str.c", 1742)),34);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1743))->p++;
                            __freed_obj__ = 0;
                        }
                        else {
                            buffer_append_char(((struct buffer*)come_null_check(value_268, "06str.c", 1746)),*((struct sInfo*)come_null_check(info, "06str.c", 1746))->p);
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1747))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional299=*((struct sInfo*)come_null_check(info, "06str.c", 1763))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional299) {
                            sline2_271=((struct sInfo*)come_null_check(info, "06str.c", 1751))->sline;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1752))->sline=sline_267;
                            __freed_obj__ = 0;
                            err_msg(info,"close \" to make c string value");
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "06str.c", 1754))->sline=sline2_271;
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional300=*((struct sInfo*)come_null_check(info, "06str.c", 1758))->p==10,                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 1758))->sline++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            buffer_append_char(((struct buffer*)come_null_check(value_268, "06str.c", 1760)),*((struct sInfo*)come_null_check(info, "06str.c", 1760))->p);
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
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value471=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value469=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1767)))),(char*)come_increment_ref_count(((char*)(right_value470=buffer_to_string(((struct buffer*)come_null_check(value_268, "06str.c", 1767)))))),sline_267,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result179__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value4));
            if(value_268 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result179__;
            __freed_obj__ = 0;
            if(value_268 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_268, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional307=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==47,            __freed_obj__ = 0, 
            _if_conditional307) {
                ((struct sInfo*)come_null_check(info, "06str.c", 1770))->p++;
                __freed_obj__ = 0;
                sline_273=((struct sInfo*)come_null_check(info, "06str.c", 1772))->sline;
                __freed_obj__ = 0;
                buf_274=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value477=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value476=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1774))))))));
                if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional17) {
                    if(_if_conditional308=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==92&&*(((struct sInfo*)come_null_check(info, "06str.c", 1793))->p+1)==47,                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1777))->p++;
                        __freed_obj__ = 0;
                        buffer_append_char(((struct buffer*)come_null_check(buf_274, "06str.c", 1778)),*((struct sInfo*)come_null_check(info, "06str.c", 1778))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1779))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional309=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==47,                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1782))->p++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional310=*((struct sInfo*)come_null_check(info, "06str.c", 1793))->p==0,                            __freed_obj__ = 0, 
                            _if_conditional310) {
                                err_msg(info,"require closing / for regex");
                                __freed_obj__ = 0;
                                exit(5);
                                __freed_obj__ = 0;
                            }
                            else {
                                buffer_append_char(((struct buffer*)come_null_check(buf_274, "06str.c", 1790)),*((struct sInfo*)come_null_check(info, "06str.c", 1790))->p);
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
                global_275=(_Bool)0;
                __freed_obj__ = 0;
                ignore_case_276=(_Bool)0;
                __freed_obj__ = 0;
                while(_while_condtional18=*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==103||*((struct sInfo*)come_null_check(info, "06str.c", 1811))->p==105,                __freed_obj__ = 0, 
                _while_condtional18) {
                    if(_if_conditional311=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==103,                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1799))->p++;
                        __freed_obj__ = 0;
                        global_275=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional312=*((struct sInfo*)come_null_check(info, "06str.c", 1809))->p==105,                        __freed_obj__ = 0, 
                        _if_conditional312) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1803))->p++;
                            __freed_obj__ = 0;
                            ignore_case_276=(_Bool)1;
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
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value480=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value478=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1813)))),(char*)come_increment_ref_count(((char*)(right_value479=buffer_to_string(((struct buffer*)come_null_check(buf_274, "06str.c", 1813)))))),global_275,ignore_case_276,sline_273,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result182__ = __result_obj__ = ((struct sNode*)(right_value484=_inf_value5));
                if(buf_274 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_274, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { right_value479 = come_decrement_ref_count(right_value479, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result182__;
                __freed_obj__ = 0;
                if(buf_274 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_274, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional321=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==39,                __freed_obj__ = 0, 
                _if_conditional321) {
                    ((struct sInfo*)come_null_check(info, "06str.c", 1816))->p++;
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    if(_if_conditional322=*((struct sInfo*)come_null_check(info, "06str.c", 1922))->p==92,                    __freed_obj__ = 0, 
                    _if_conditional322) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1821))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional323=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1916))->p),                        __freed_obj__ = 0, 
                        _if_conditional323) {
                            n_279=0;
                            __freed_obj__ = 0;
                            while(_while_condtional19=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1830))->p),                            __freed_obj__ = 0, 
                            _while_condtional19) {
                                n_279=n_279*8+*((struct sInfo*)come_null_check(info, "06str.c", 1826))->p-48;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1827))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            c_278=n_279;
                            __freed_obj__ = 0;
                        }
                        else {
                            switch (*((struct sInfo*)come_null_check(info, "06str.c", 1915))->p) {
                                case 110:
                                __freed_obj__ = 0;
                                c_278=10;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1836))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 116:
                                __freed_obj__ = 0;
                                c_278=9;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1841))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 114:
                                __freed_obj__ = 0;
                                c_278=13;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1846))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 97:
                                __freed_obj__ = 0;
                                c_278=7;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1851))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 102:
                                __freed_obj__ = 0;
                                c_278=12;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1856))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 118:
                                __freed_obj__ = 0;
                                c_278=11;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1861))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 98:
                                __freed_obj__ = 0;
                                c_278=8;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1866))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 92:
                                __freed_obj__ = 0;
                                c_278=92;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1871))->p++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                case 48:
                                __freed_obj__ = 0;
                                c_278=0;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 1876))->p++;
                                __freed_obj__ = 0;
                                if(_if_conditional324=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1888))->p),                                __freed_obj__ = 0, 
                                _if_conditional324) {
                                    n_280=0;
                                    __freed_obj__ = 0;
                                    while(_while_condtional20=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1886))->p),                                    __freed_obj__ = 0, 
                                    _while_condtional20) {
                                        n_280=n_280*8+*((struct sInfo*)come_null_check(info, "06str.c", 1881))->p-48;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1882))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    c_278=n_280;
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
                                    char buf_281[128];
                                    memset(&buf_281, 0, sizeof(char)                                    *(128)                                    );
                                    __freed_obj__ = 0;
                                    strncpy(buf_281,"0x",128);
                                    __freed_obj__ = 0;
                                    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p<=70,                                    __freed_obj__ = 0, 
                                    _while_condtional21) {
                                        char buf2_282[2];
                                        memset(&buf2_282, 0, sizeof(char)                                        *(2)                                        );
                                        __freed_obj__ = 0;
                                        buf2_282[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1898))->p;
                                        __freed_obj__ = 0;
                                        buf2_282[1]=0;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1900))->p++;
                                        __freed_obj__ = 0;
                                        strncat(buf_281,buf2_282,128);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    n_283=strtoll(buf_281,((void*)0),0);
                                    __freed_obj__ = 0;
                                    c_278=n_283;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                                default:
                                __freed_obj__ = 0;
                                c_278=*((struct sInfo*)come_null_check(info, "06str.c", 1911))->p;
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
                        c_278=*((struct sInfo*)come_null_check(info, "06str.c", 1918))->p;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "06str.c", 1919))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional325=*((struct sInfo*)come_null_check(info, "06str.c", 1932))->p!=39,                    __freed_obj__ = 0, 
                    _if_conditional325) {
                        err_msg(info,"close \' to make character value");
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1926))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1930);
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value486=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value485=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1930)))),c_278,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result185__ = __result_obj__ = ((struct sNode*)(right_value489=_inf_value6));
                        if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result185__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional331=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==39,                    __freed_obj__ = 0, 
                    _if_conditional331) {
                        ((struct sInfo*)come_null_check(info, "06str.c", 1935))->p+=2;
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        if(_if_conditional332=*((struct sInfo*)come_null_check(info, "06str.c", 2057))->p==92,                        __freed_obj__ = 0, 
                        _if_conditional332) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 1940))->p++;
                            __freed_obj__ = 0;
                            if(_if_conditional333=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2021))->p),                            __freed_obj__ = 0, 
                            _if_conditional333) {
                                n_286=0;
                                __freed_obj__ = 0;
                                while(_while_condtional22=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1949))->p),                                __freed_obj__ = 0, 
                                _while_condtional22) {
                                    n_286=n_286*8+*((struct sInfo*)come_null_check(info, "06str.c", 1945))->p-48;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1946))->p++;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                c_285=n_286;
                                __freed_obj__ = 0;
                            }
                            else {
                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2020))->p) {
                                    case 110:
                                    __freed_obj__ = 0;
                                    c_285=10;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1955))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 116:
                                    __freed_obj__ = 0;
                                    c_285=9;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1960))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 114:
                                    __freed_obj__ = 0;
                                    c_285=13;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1965))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 97:
                                    __freed_obj__ = 0;
                                    c_285=7;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1970))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 92:
                                    __freed_obj__ = 0;
                                    c_285=92;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1975))->p++;
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    case 48:
                                    __freed_obj__ = 0;
                                    c_285=0;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1981))->p++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional334=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1993))->p),                                    __freed_obj__ = 0, 
                                    _if_conditional334) {
                                        n_287=0;
                                        __freed_obj__ = 0;
                                        while(_while_condtional23=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1991))->p),                                        __freed_obj__ = 0, 
                                        _while_condtional23) {
                                            n_287=n_287*8+*((struct sInfo*)come_null_check(info, "06str.c", 1986))->p-48;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1987))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        c_285=n_287;
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
                                        char buf_288[128];
                                        memset(&buf_288, 0, sizeof(char)                                        *(128)                                        );
                                        __freed_obj__ = 0;
                                        strncpy(buf_288,"0x",128);
                                        __freed_obj__ = 0;
                                        while(_while_condtional24=*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2009))->p<=70,                                        __freed_obj__ = 0, 
                                        _while_condtional24) {
                                            char buf2_289[2];
                                            memset(&buf2_289, 0, sizeof(char)                                            *(2)                                            );
                                            __freed_obj__ = 0;
                                            buf2_289[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2003))->p;
                                            __freed_obj__ = 0;
                                            buf2_289[1]=0;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2005))->p++;
                                            __freed_obj__ = 0;
                                            strncat(buf_288,buf2_289,128);
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        n_290=strtoll(buf_288,((void*)0),0);
                                        __freed_obj__ = 0;
                                        c_285=n_290;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                    default:
                                    __freed_obj__ = 0;
                                    c_285=*((struct sInfo*)come_null_check(info, "06str.c", 2016))->p;
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
                            p2_291=*(unsigned char*)((struct sInfo*)come_null_check(info, "06str.c", 2023))->p;
                            __freed_obj__ = 0;
                            if(_if_conditional335=p2_291>127,                            __freed_obj__ = 0, 
                            _if_conditional335) {
                                __freed_obj__ = 0;
                                char str_293[4+1];
                                memset(&str_293, 0, sizeof(char)                                *(4+1)                                );
                                __freed_obj__ = 0;
                                size_292=((p2_291&128)>>7)+((p2_291&64)>>6)+((p2_291&32)>>5)+((p2_291&16)>>4);
                                __freed_obj__ = 0;
                                if(_if_conditional336=size_292>4,                                __freed_obj__ = 0, 
                                _if_conditional336) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2034))->err_num++;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    memcpy(str_293,((struct sInfo*)come_null_check(info, "06str.c", 2037))->p,size_292);
                                    __freed_obj__ = 0;
                                    str_293[size_292]=0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional337=mbtowc(&c_285,str_293,size_292)<0,                                    __freed_obj__ = 0, 
                                    _if_conditional337) {
                                        perror("mbtowc");
                                        __freed_obj__ = 0;
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2043))->err_num++;
                                        __freed_obj__ = 0;
                                        c_285=0;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2047))->p+=size_292;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                c_285=*((struct sInfo*)come_null_check(info, "06str.c", 2052))->p;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "06str.c", 2053))->p++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional338=*((struct sInfo*)come_null_check(info, "06str.c", 2068))->p!=39,                        __freed_obj__ = 0, 
                        _if_conditional338) {
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
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value491=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value490=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2066)))),c_285,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result188__ = __result_obj__ = ((struct sNode*)(right_value494=_inf_value7));
                            if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result188__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional344=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34,                        __freed_obj__ = 0, 
                        _if_conditional344) {
                            ((struct sInfo*)come_null_check(info, "06str.c", 2071))->p+=2;
                            __freed_obj__ = 0;
                            sline_295=((struct sInfo*)come_null_check(info, "06str.c", 2073))->sline;
                            __freed_obj__ = 0;
                            value_296=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value496=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value495=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2075))))))));
                            if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            __freed_obj__ = 0, 
                            _while_condtional25) {
                                if(_if_conditional345=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==34,                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2079))->p++;
                                    __freed_obj__ = 0;
                                    p_297=((struct sInfo*)come_null_check(info, "06str.c", 2081))->p;
                                    __freed_obj__ = 0;
                                    sline_298=((struct sInfo*)come_null_check(info, "06str.c", 2082))->sline;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    if(_if_conditional346=*((struct sInfo*)come_null_check(info, "06str.c", 2094))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional346) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2087))->p++;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2090))->p=p_297;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2091))->sline=sline_298;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional347=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==92,                                    __freed_obj__ = 0, 
                                    _if_conditional347) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2096))->p++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional348=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p),                                        __freed_obj__ = 0, 
                                        _if_conditional348) {
                                            len_299=0;
                                            __freed_obj__ = 0;
                                            n_300=0;
                                            __freed_obj__ = 0;
                                            while(_while_condtional26=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2107))->p)&&len_299<3,                                            __freed_obj__ = 0, 
                                            _while_condtional26) {
                                                n_300=n_300*8+*((struct sInfo*)come_null_check(info, "06str.c", 2102))->p-48;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2103))->p++;
                                                __freed_obj__ = 0;
                                                len_299++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2107)),n_300);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional349=*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2179))->p==88,                                            __freed_obj__ = 0, 
                                            _if_conditional349) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2110))->p++;
                                                __freed_obj__ = 0;
                                                char buf_301[128];
                                                memset(&buf_301, 0, sizeof(char)                                                *(128)                                                );
                                                __freed_obj__ = 0;
                                                strncpy(buf_301,"0x",128);
                                                __freed_obj__ = 0;
                                                while(_while_condtional27=*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2122))->p<=70,                                                __freed_obj__ = 0, 
                                                _while_condtional27) {
                                                    char buf2_302[2];
                                                    memset(&buf2_302, 0, sizeof(char)                                                    *(2)                                                    );
                                                    __freed_obj__ = 0;
                                                    buf2_302[0]=*((struct sInfo*)come_null_check(info, "06str.c", 2116))->p;
                                                    __freed_obj__ = 0;
                                                    buf2_302[1]=0;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2118))->p++;
                                                    __freed_obj__ = 0;
                                                    strncat(buf_301,buf2_302,128);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                n_304=strtoll(buf_301,((void*)0),0);
                                                __freed_obj__ = 0;
                                                buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2124)),(char)n_304);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2178))->p) {
                                                    case 48:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2129)),0);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2130))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 110:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2134)),10);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2135))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 116:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2139)),9);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2140))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 114:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2144)),13);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2145))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 118:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2149)),11);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2150))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 102:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2154)),12);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2155))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 97:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2159)),7);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2160))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 98:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2164)),8);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2165))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    case 92:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2169)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2170))->p++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                    default:
                                                    __freed_obj__ = 0;
                                                    buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2174)),*((struct sInfo*)come_null_check(info, "06str.c", 2174))->p);
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
                                        if(_if_conditional350=*((struct sInfo*)come_null_check(info, "06str.c", 2192))->p==0,                                        __freed_obj__ = 0, 
                                        _if_conditional350) {
                                            sline2_305=((struct sInfo*)come_null_check(info, "06str.c", 2181))->sline;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2182))->sline=sline_295;
                                            __freed_obj__ = 0;
                                            err_msg(info,"close \" to make c string value");
                                            __freed_obj__ = 0;
                                            exit(2);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional351=*((struct sInfo*)come_null_check(info, "06str.c", 2187))->p==10,                                            __freed_obj__ = 0, 
                                            _if_conditional351) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2187))->sline++;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_296, "06str.c", 2189)),*((struct sInfo*)come_null_check(info, "06str.c", 2189))->p);
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
                            len_306=((struct buffer*)come_null_check(value_296, "06str.c", 2196))->len;
                            __freed_obj__ = 0;
                            wstr_307=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value497=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_306+1)), "06str.c", 2198))));
                            if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            str_308=((struct buffer*)come_null_check(value_296, "06str.c", 2200))->buf;
                            __freed_obj__ = 0;
                            if(_if_conditional352=mbstowcs(wstr_307,str_308,len_306+1)<0,                            __freed_obj__ = 0, 
                            _if_conditional352) {
                                perror("mbstowcs");
                                __freed_obj__ = 0;
                                exit(1);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            wstr_307[len_306]=0;
                            __freed_obj__ = 0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2209);
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value499=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value498=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2209)))),(unsigned int*)come_increment_ref_count(wstr_307),sline_295,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result191__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value8));
                            if(value_296 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_296, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_307 && !__freed_obj__) { wstr_307 = come_decrement_ref_count(wstr_307, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result191__;
                            __freed_obj__ = 0;
                            if(value_296 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_296, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_307 && !__freed_obj__) { wstr_307 = come_decrement_ref_count(wstr_307, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional359=(*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==115||*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==83)&&*(((struct sInfo*)come_null_check(info, "06str.c", 2508))->p+1)==34,                            __freed_obj__ = 0, 
                            _if_conditional359) {
                                ((struct sInfo*)come_null_check(info, "06str.c", 2213))->p+=2;
                                __freed_obj__ = 0;
                                sline_310=((struct sInfo*)come_null_check(info, "06str.c", 2215))->sline;
                                __freed_obj__ = 0;
                                exps_311=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value505=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value504=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2217))))))));
                                if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                value_312=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value507=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value506=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2218))))))));
                                if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                __freed_obj__ = 0, 
                                _while_condtional28) {
                                    if(_if_conditional360=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==34,                                    __freed_obj__ = 0, 
                                    _if_conditional360) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2222))->p++;
                                        __freed_obj__ = 0;
                                        p_313=((struct sInfo*)come_null_check(info, "06str.c", 2224))->p;
                                        __freed_obj__ = 0;
                                        sline_314=((struct sInfo*)come_null_check(info, "06str.c", 2225))->sline;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        if(_if_conditional361=*((struct sInfo*)come_null_check(info, "06str.c", 2237))->p==34,                                        __freed_obj__ = 0, 
                                        _if_conditional361) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2230))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2233))->p=p_313;
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2234))->sline=sline_314;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional362=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==37,                                        __freed_obj__ = 0, 
                                        _if_conditional362) {
                                            buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2239)),37);
                                            __freed_obj__ = 0;
                                            buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2240)),37);
                                            __freed_obj__ = 0;
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2241))->p++;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional363=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==36,                                            __freed_obj__ = 0, 
                                            _if_conditional363) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2244))->p++;
                                                __freed_obj__ = 0;
                                                exp_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=expression_v13(info))));
                                                if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_311, "06str.c", 2248)),(struct sNode*)come_increment_ref_count(exp_315));
                                                __freed_obj__ = 0;
                                                buffer_append_str(((struct buffer*)come_null_check(value_312, "06str.c", 2250)),"%s");
                                                __freed_obj__ = 0;
                                                if(exp_315 && !__freed_obj__) { exp_315 = come_decrement_ref_count(exp_315, ((struct sNode*)exp_315)->finalize, ((struct sNode*)exp_315)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional364=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==92,                                                __freed_obj__ = 0, 
                                                _if_conditional364) {
                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2253)),92);
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2254))->p++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional365=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p),                                                    __freed_obj__ = 0, 
                                                    _if_conditional365) {
                                                        len_316=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional29=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2263))->p)&&len_316<3,                                                        __freed_obj__ = 0, 
                                                        _while_condtional29) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2259)),*((struct sInfo*)come_null_check(info, "06str.c", 2259))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2260))->p++;
                                                            __freed_obj__ = 0;
                                                            len_316++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional366=*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==88,                                                        __freed_obj__ = 0, 
                                                        _if_conditional366) {
                                                            buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2265)),*((struct sInfo*)come_null_check(info, "06str.c", 2265))->p);
                                                            __freed_obj__ = 0;
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2266))->p++;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional30=*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2272))->p<=70,                                                            __freed_obj__ = 0, 
                                                            _while_condtional30) {
                                                                buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2269)),*((struct sInfo*)come_null_check(info, "06str.c", 2269))->p);
                                                                __freed_obj__ = 0;
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2270))->p++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional367=*((struct sInfo*)come_null_check(info, "06str.c", 2339))->p==123,                                                            __freed_obj__ = 0, 
                                                            _if_conditional367) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2274))->p++;
                                                                __freed_obj__ = 0;
                                                                exp_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=expression_v13(info))));
                                                                if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_311, "06str.c", 2278)),(struct sNode*)come_increment_ref_count(exp_317));
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional368=*((struct sInfo*)come_null_check(info, "06str.c", 2284))->p==125,                                                                __freed_obj__ = 0, 
                                                                _if_conditional368) {
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2281))->p++;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                buffer_append_str(((struct buffer*)come_null_check(value_312, "06str.c", 2284)),"%s");
                                                                __freed_obj__ = 0;
                                                                if(exp_317 && !__freed_obj__) { exp_317 = come_decrement_ref_count(exp_317, ((struct sNode*)exp_317)->finalize, ((struct sNode*)exp_317)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2338))->p) {
                                                                    case 48:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2289)),*((struct sInfo*)come_null_check(info, "06str.c", 2289))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2290))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 110:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2294)),*((struct sInfo*)come_null_check(info, "06str.c", 2294))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2295))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 116:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2299)),*((struct sInfo*)come_null_check(info, "06str.c", 2299))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2300))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 114:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2304)),*((struct sInfo*)come_null_check(info, "06str.c", 2304))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2305))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 118:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2309)),*((struct sInfo*)come_null_check(info, "06str.c", 2309))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2310))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 102:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2314)),*((struct sInfo*)come_null_check(info, "06str.c", 2314))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2315))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 97:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2319)),*((struct sInfo*)come_null_check(info, "06str.c", 2319))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2320))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 98:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2324)),*((struct sInfo*)come_null_check(info, "06str.c", 2324))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2325))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    case 92:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2329)),*((struct sInfo*)come_null_check(info, "06str.c", 2329))->p);
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2330))->p++;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                    default:
                                                                    __freed_obj__ = 0;
                                                                    buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2334)),*((struct sInfo*)come_null_check(info, "06str.c", 2334))->p);
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
                                                    if(_if_conditional369=*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional369) {
                                                        sline2_318=((struct sInfo*)come_null_check(info, "06str.c", 2341))->sline;
                                                        __freed_obj__ = 0;
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2342))->sline=sline_310;
                                                        __freed_obj__ = 0;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional370=*((struct sInfo*)come_null_check(info, "06str.c", 2347))->p==10,                                                        __freed_obj__ = 0, 
                                                        _if_conditional370) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2347))->sline++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        buffer_append_char(((struct buffer*)come_null_check(value_312, "06str.c", 2349)),*((struct sInfo*)come_null_check(info, "06str.c", 2349))->p);
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
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value512=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value510=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2356)))),(char*)come_increment_ref_count(((char*)(right_value511=buffer_to_string(((struct buffer*)come_null_check(value_312, "06str.c", 2356)))))),(struct list$1sNodeph*)come_increment_ref_count(exps_311),sline_310,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result194__ = __result_obj__ = ((struct sNode*)(right_value517=_inf_value9));
                                if(exps_311 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_311, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_312 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_312, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result194__;
                                __freed_obj__ = 0;
                                if(exps_311 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_311, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_312 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_312, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional379=*((struct sInfo*)come_null_check(info, "06str.c", 2508))->p==91,                                __freed_obj__ = 0, 
                                _if_conditional379) {
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2359))->p++;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    p_320=((struct sInfo*)come_null_check(info, "06str.c", 2362))->p;
                                    __freed_obj__ = 0;
                                    no_comma_321=((struct sInfo*)come_null_check(info, "06str.c", 2364))->no_comma;
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2365))->no_comma=(_Bool)1;
                                    __freed_obj__ = 0;
                                    node_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=expression_v13(info))));
                                    if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2369))->no_comma=no_comma_321;
                                    __freed_obj__ = 0;
                                    p2_323=((struct sInfo*)come_null_check(info, "06str.c", 2371))->p;
                                    __freed_obj__ = 0;
                                    first_element_source_324=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value520=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value519=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2373))))))));
                                    if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    buffer_append(((struct buffer*)come_null_check(first_element_source_324, "06str.c", 2375)),p_320,p2_323-p_320);
                                    __freed_obj__ = 0;
                                    buffer_append_char(((struct buffer*)come_null_check(first_element_source_324, "06str.c", 2376)),0);
                                    __freed_obj__ = 0;
                                    list_elements_325=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value522=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value521=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2378))))))));
                                    if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    map_keys_326=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value524=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value523=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2380))))))));
                                    if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    map_elements_327=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value526=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value525=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2381))))))));
                                    if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional380=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==58,                                    __freed_obj__ = 0, 
                                    _if_conditional380) {
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2385))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_326, "06str.c", 2388)),(struct sNode*)come_increment_ref_count(node_322));
                                        __freed_obj__ = 0;
                                        no_comma_328=((struct sInfo*)come_null_check(info, "06str.c", 2390))->no_comma;
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2391))->no_comma=(_Bool)1;
                                        __freed_obj__ = 0;
                                        node2_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=expression_v13(info))));
                                        if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2395))->no_comma=no_comma_328;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_327, "06str.c", 2397)),(struct sNode*)come_increment_ref_count(node2_329));
                                        __freed_obj__ = 0;
                                        if(_if_conditional381=*((struct sInfo*)come_null_check(info, "06str.c", 2450))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional381) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2400))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2403);
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value529=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value528=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2403)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_326),(struct list$1sNodeph*)come_increment_ref_count(map_elements_327),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result197__ = __result_obj__ = ((struct sNode*)(right_value534=_inf_value10));
                                            if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                            if(node_322 && !__freed_obj__) { node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_324 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_326 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_326, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_327 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_327, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result197__;
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
                                                no_comma_332=((struct sInfo*)come_null_check(info, "06str.c", 2409))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2410))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node2_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=expression_v13(info))));
                                                if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { right_value536 = come_decrement_ref_count(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2414))->no_comma=no_comma_332;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_326, "06str.c", 2416)),(struct sNode*)come_increment_ref_count(node2_333));
                                                __freed_obj__ = 0;
                                                come_clear_stackframe();
                                                optional$2intbool_value((come_push_stackframe("06str.c", 2418),((struct optional$2intbool*)(right_value537=expected_next_character(58,info)))));
                                                if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                no_comma_332=((struct sInfo*)come_null_check(info, "06str.c", 2420))->no_comma;
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2421))->no_comma=(_Bool)1;
                                                __freed_obj__ = 0;
                                                node3_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value538=expression_v13(info))));
                                                if(right_value538 && right_value538 != __result_obj__ && !__freed_obj__) { right_value538 = come_decrement_ref_count(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2425))->no_comma=no_comma_332;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_327, "06str.c", 2427)),(struct sNode*)come_increment_ref_count(node3_334));
                                                __freed_obj__ = 0;
                                                if(_if_conditional391=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==0,                                                __freed_obj__ = 0, 
                                                _if_conditional391) {
                                                    err_msg(info,"invalid source end");
                                                    __freed_obj__ = 0;
                                                    exit(2);
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional392=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==44,                                                    __freed_obj__ = 0, 
                                                    _if_conditional392) {
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2434))->p++;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional393=*((struct sInfo*)come_null_check(info, "06str.c", 2446))->p==93,                                                        __freed_obj__ = 0, 
                                                        _if_conditional393) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2438))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            if(node2_333 && !__freed_obj__) { node2_333 = come_decrement_ref_count(node2_333, ((struct sNode*)node2_333)->finalize, ((struct sNode*)node2_333)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_334 && !__freed_obj__) { node3_334 = come_decrement_ref_count(node3_334, ((struct sNode*)node3_334)->finalize, ((struct sNode*)node3_334)->_protocol_obj, 0, 0, 0); } 
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
                                                if(node2_333 && !__freed_obj__) { node2_333 = come_decrement_ref_count(node2_333, ((struct sNode*)node2_333)->finalize, ((struct sNode*)node2_333)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_334 && !__freed_obj__) { node3_334 = come_decrement_ref_count(node3_334, ((struct sNode*)node3_334)->finalize, ((struct sNode*)node3_334)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            __freed_obj__ = 0;
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2448);
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value540=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value539=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2448)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_326),(struct list$1sNodeph*)come_increment_ref_count(map_elements_327),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result202__ = __result_obj__ = ((struct sNode*)(right_value545=_inf_value11));
                                            if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                            if(node_322 && !__freed_obj__) { node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_324 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_326 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_326, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_327 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_327, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            return __result202__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional402=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==93,                                        __freed_obj__ = 0, 
                                        _if_conditional402) {
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2453))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_325, "06str.c", 2456)),(struct sNode*)come_increment_ref_count(node_322));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional403=*((struct sInfo*)come_null_check(info, "06str.c", 2498))->p==44,                                            __freed_obj__ = 0, 
                                            _if_conditional403) {
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2459))->p++;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_325, "06str.c", 2462)),(struct sNode*)come_increment_ref_count(node_322));
                                                __freed_obj__ = 0;
                                                while(_while_condtional32=(_Bool)1,                                                __freed_obj__ = 0, 
                                                _while_condtional32) {
                                                    no_comma_336=((struct sInfo*)come_null_check(info, "06str.c", 2465))->no_comma;
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2466))->no_comma=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    node2_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=expression_v13(info))));
                                                    if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { right_value546 = come_decrement_ref_count(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2470))->no_comma=no_comma_336;
                                                    __freed_obj__ = 0;
                                                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_325, "06str.c", 2472)),(struct sNode*)come_increment_ref_count(node2_337));
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional404=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional404) {
                                                        err_msg(info,"invalid source end");
                                                        __freed_obj__ = 0;
                                                        exit(2);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional405=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==44,                                                        __freed_obj__ = 0, 
                                                        _if_conditional405) {
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2479))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional406=*((struct sInfo*)come_null_check(info, "06str.c", 2491))->p==93,                                                            __freed_obj__ = 0, 
                                                            _if_conditional406) {
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2483))->p++;
                                                                __freed_obj__ = 0;
                                                                skip_spaces_and_lf(info);
                                                                __freed_obj__ = 0;
                                                                if(node2_337 && !__freed_obj__) { node2_337 = come_decrement_ref_count(node2_337, ((struct sNode*)node2_337)->finalize, ((struct sNode*)node2_337)->_protocol_obj, 0, 0, 0); } 
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
                                                    if(node2_337 && !__freed_obj__) { node2_337 = come_decrement_ref_count(node2_337, ((struct sNode*)node2_337)->finalize, ((struct sNode*)node2_337)->_protocol_obj, 0, 0, 0); } 
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
                                    if(_if_conditional407=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(list_elements_325, "06str.c", 2503)))>0,                                    __freed_obj__ = 0, 
                                    _if_conditional407) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2499);
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value548=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value547=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2499)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_325),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result205__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value12));
                                        if(node_322 && !__freed_obj__) { node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_324 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_326 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_326, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_327 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_327, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result205__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                    }
                                    __freed_obj__ = 0;
                                    if(node_322 && !__freed_obj__) { node_322 = come_decrement_ref_count(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_324 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_324, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_325 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_325, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_326 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_326, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_327 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_327, (void*)0, (void*)0, 0, 0, 0, 0); }
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
    __result206__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result206__;
    __freed_obj__ = 0;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional301=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional301) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional302=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional302) {
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional303;
struct sStrNode* __result177__;
void* right_value472;
struct sStrNode* result_272;
_Bool _if_conditional304;
void* right_value473;
char* __dec_obj173;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value474;
char* __dec_obj174;
struct sStrNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value472, 0, sizeof(void*));
memset(&result_272, 0, sizeof(struct sStrNode*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
                if(_if_conditional303=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional303) {
                    __result177__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result177__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_272=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value472=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional304=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional304) {
                    __dec_obj173=((struct sStrNode*)come_null_check(result_272, "sStrNode_clone", 4))->value;
                    ((struct sStrNode*)come_null_check(result_272, "sStrNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4))->value))));
                    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                    if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { right_value473 = come_decrement_ref_count(right_value473, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional305=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional305) {
                    ((struct sStrNode*)come_null_check(result_272, "sStrNode_clone", 5))->sline=((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional306=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional306) {
                    __dec_obj174=((struct sStrNode*)come_null_check(result_272, "sStrNode_clone", 6))->sname;
                    ((struct sStrNode*)come_null_check(result_272, "sStrNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value474=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6))->sname))));
                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                    if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result178__ = __result_obj__ = result_272;
                if(result_272 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result178__;
                __freed_obj__ = 0;
                if(result_272 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional313=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional313) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional314=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional315;
struct sRegexNode* __result180__;
void* right_value481;
struct sRegexNode* result_277;
_Bool _if_conditional316;
void* right_value482;
char* __dec_obj175;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value483;
char* __dec_obj176;
struct sRegexNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value481, 0, sizeof(void*));
memset(&result_277, 0, sizeof(struct sRegexNode*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
                    if(_if_conditional315=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional315) {
                        __result180__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result180__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_277=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value481=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional316=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->str!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional316) {
                        __dec_obj175=((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 4))->str;
                        ((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 4))->str=(char*)come_increment_ref_count(((char*)(right_value482=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4))->str))));
                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0,0); }
                        if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional317=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional317) {
                        ((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 5))->global=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->global;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional318=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        ((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 6))->ignore_case=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6))->ignore_case;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional319=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional319) {
                        ((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 7))->sline=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional320=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional320) {
                        __dec_obj176=((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 8))->sname;
                        ((struct sRegexNode*)come_null_check(result_277, "sRegexNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8))->sname))));
                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0,0); }
                        if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result181__ = __result_obj__ = result_277;
                    if(result_277 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result181__;
                    __freed_obj__ = 0;
                    if(result_277 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional326=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 1))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional326) {
                                if(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional327;
struct sCharNode* __result183__;
void* right_value487;
struct sCharNode* result_284;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value488;
char* __dec_obj177;
struct sCharNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value487, 0, sizeof(void*));
memset(&result_284, 0, sizeof(struct sCharNode*));
memset(&right_value488, 0, sizeof(void*));
                            if(_if_conditional327=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional327) {
                                __result183__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result183__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_284=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value487=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional328=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                ((struct sCharNode*)come_null_check(result_284, "sCharNode_clone", 4))->value=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 4))->value;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional329=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                ((struct sCharNode*)come_null_check(result_284, "sCharNode_clone", 5))->sline=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional330=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional330) {
                                __dec_obj177=((struct sCharNode*)come_null_check(result_284, "sCharNode_clone", 6))->sname;
                                ((struct sCharNode*)come_null_check(result_284, "sCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value488=string_clone(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6))->sname))));
                                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result184__ = __result_obj__ = result_284;
                            if(result_284 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result184__;
                            __freed_obj__ = 0;
                            if(result_284 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional339=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 1))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional340;
struct sWCharNode* __result186__;
void* right_value492;
struct sWCharNode* result_294;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value493;
char* __dec_obj178;
struct sWCharNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value492, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct sWCharNode*));
memset(&right_value493, 0, sizeof(void*));
                                if(_if_conditional340=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    __result186__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result186__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_294=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value492=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional341=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    ((struct sWCharNode*)come_null_check(result_294, "sWCharNode_clone", 4))->value=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 4))->value;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional342=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    ((struct sWCharNode*)come_null_check(result_294, "sWCharNode_clone", 5))->sline=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional343=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional343) {
                                    __dec_obj178=((struct sWCharNode*)come_null_check(result_294, "sWCharNode_clone", 6))->sname;
                                    ((struct sWCharNode*)come_null_check(result_294, "sWCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value493=string_clone(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6))->sname))));
                                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result187__ = __result_obj__ = result_294;
                                if(result_294 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_294, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result187__;
                                __freed_obj__ = 0;
                                if(result_294 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_294, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional353=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional353) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional354=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 2))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional354) {
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional355;
struct sWStringNode* __result189__;
void* right_value500;
struct sWStringNode* result_309;
_Bool _if_conditional356;
void* right_value501;
unsigned int* __dec_obj179;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value502;
char* __dec_obj180;
struct sWStringNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value500, 0, sizeof(void*));
memset(&result_309, 0, sizeof(struct sWStringNode*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
                                if(_if_conditional355=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional355) {
                                    __result189__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result189__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_309=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value500=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional356=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->value!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional356) {
                                    __dec_obj179=((struct sWStringNode*)come_null_check(result_309, "sWStringNode_clone", 4))->value;
                                    ((struct sWStringNode*)come_null_check(result_309, "sWStringNode_clone", 4))->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value501=(unsigned int*)come_memdup(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4))->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { right_value501 = come_decrement_ref_count(right_value501, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional357=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional357) {
                                    ((struct sWStringNode*)come_null_check(result_309, "sWStringNode_clone", 5))->sline=((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional358=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional358) {
                                    __dec_obj180=((struct sWStringNode*)come_null_check(result_309, "sWStringNode_clone", 6))->sname;
                                    ((struct sWStringNode*)come_null_check(result_309, "sWStringNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value502=string_clone(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6))->sname))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result190__ = __result_obj__ = result_309;
                                if(result_309 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result190__;
                                __freed_obj__ = 0;
                                if(result_309 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional371=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional371) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional372=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional372) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional373=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional373) {
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional374;
struct sSStringNode* __result192__;
void* right_value513;
struct sSStringNode* result_319;
_Bool _if_conditional375;
void* right_value514;
char* __dec_obj181;
_Bool _if_conditional376;
void* right_value515;
struct list$1sNodeph* __dec_obj182;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value516;
char* __dec_obj183;
struct sSStringNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value513, 0, sizeof(void*));
memset(&result_319, 0, sizeof(struct sSStringNode*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
                                    if(_if_conditional374=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional374) {
                                        __result192__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result192__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_319=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value513=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional375=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->value!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional375) {
                                        __dec_obj181=((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 4))->value;
                                        ((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value514=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4))->value))));
                                        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional376=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->exps!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional376) {
                                        __dec_obj182=((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 5))->exps;
                                        ((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 5))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value515=list$1sNodephp_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->exps))));
                                        if(__dec_obj182) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj182, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional377=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional377) {
                                        ((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 6))->sline=((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional378=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 8))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional378) {
                                        __dec_obj183=((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 7))->sname;
                                        ((struct sSStringNode*)come_null_check(result_319, "sSStringNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value516=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7))->sname))));
                                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result193__ = __result_obj__ = result_319;
                                    if(result_319 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result193__;
                                    __freed_obj__ = 0;
                                    if(result_319 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional390;
int default_value_331;
int __result198__;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_331, 0, sizeof(int));
                                                if(_if_conditional390=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional390) {
                                                    __freed_obj__ = 0;
                                                    memset(&default_value_331,0,sizeof(int));
                                                    __freed_obj__ = 0;
                                                    __result198__ = default_value_331;
                                                    __freed_obj__ = 0;
                                                    return __result198__;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    __result199__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                    __freed_obj__ = 0;
                                                    return __result199__;
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
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional394=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional394) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional395=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional395) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional396=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 3))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional396) {
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional397;
struct sMapNode* __result200__;
void* right_value541;
struct sMapNode* result_335;
_Bool _if_conditional398;
void* right_value542;
struct list$1sNodeph* __dec_obj187;
_Bool _if_conditional399;
void* right_value543;
struct list$1sNodeph* __dec_obj188;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value544;
char* __dec_obj189;
struct sMapNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value541, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sMapNode*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
                                                if(_if_conditional397=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional397) {
                                                    __result200__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result200__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_335=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value541=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                if(_if_conditional398=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_key_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional398) {
                                                    __dec_obj187=((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 4))->map_key_elements;
                                                    ((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 4))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value542=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4))->map_key_elements))));
                                                    if(__dec_obj187) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional399=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->map_elements!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional399) {
                                                    __dec_obj188=((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 5))->map_elements;
                                                    ((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 5))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value543=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_elements))));
                                                    if(__dec_obj188) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj188, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional400=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional400) {
                                                    ((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 6))->sline=((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional401=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 8))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional401) {
                                                    __dec_obj189=((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 7))->sname;
                                                    ((struct sMapNode*)come_null_check(result_335, "sMapNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value544=string_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7))->sname))));
                                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                                                    if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { right_value544 = come_decrement_ref_count(right_value544, (void*)0, (void*)0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result201__ = __result_obj__ = result_335;
                                                if(result_335 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result201__;
                                                __freed_obj__ = 0;
                                                if(result_335 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional408=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional408) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional409=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 2))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional409) {
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname && !__freed_obj__) { ((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname = come_decrement_ref_count(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional410;
struct sListNode* __result203__;
void* right_value549;
struct sListNode* result_338;
_Bool _if_conditional411;
void* right_value550;
struct list$1sNodeph* __dec_obj190;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value551;
char* __dec_obj191;
struct sListNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value549, 0, sizeof(void*));
memset(&result_338, 0, sizeof(struct sListNode*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
                                            if(_if_conditional410=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional410) {
                                                __result203__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result203__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_338=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value549=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional411=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->list_elements!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional411) {
                                                __dec_obj190=((struct sListNode*)come_null_check(result_338, "sListNode_clone", 4))->list_elements;
                                                ((struct sListNode*)come_null_check(result_338, "sListNode_clone", 4))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value550=list$1sNodephp_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 4))->list_elements))));
                                                if(__dec_obj190) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional412=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional412) {
                                                ((struct sListNode*)come_null_check(result_338, "sListNode_clone", 5))->sline=((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional413=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 7))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional413) {
                                                __dec_obj191=((struct sListNode*)come_null_check(result_338, "sListNode_clone", 6))->sname;
                                                ((struct sListNode*)come_null_check(result_338, "sListNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value551=string_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 6))->sname))));
                                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { right_value551 = come_decrement_ref_count(right_value551, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result204__ = __result_obj__ = result_338;
                                            if(result_338 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result204__;
                                            __freed_obj__ = 0;
                                            if(result_338 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value554;
void* right_value555;
struct list$1sNodeph* tuple_elements_339;
_Bool _while_condtional33;
char* p_340;
_Bool no_comma_341;
void* right_value556;
struct sNode* node_342;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value557;
void* right_value558;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value562;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&tuple_elements_339, 0, sizeof(struct list$1sNodeph*));
memset(&p_340, 0, sizeof(char*));
memset(&no_comma_341, 0, sizeof(_Bool));
memset(&right_value556, 0, sizeof(void*));
memset(&node_342, 0, sizeof(struct sNode*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
    tuple_elements_339=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value555=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value554=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2513))))))));
    if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    while(_while_condtional33=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional33) {
        p_340=((struct sInfo*)come_null_check(info, "06str.c", 2515))->p;
        __freed_obj__ = 0;
        no_comma_341=((struct sInfo*)come_null_check(info, "06str.c", 2517))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2518))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=expression_v13(info))));
        if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "06str.c", 2522))->no_comma=no_comma_341;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(tuple_elements_339, "06str.c", 2524)),(struct sNode*)come_increment_ref_count(node_342));
        __freed_obj__ = 0;
        if(_if_conditional414=*((struct sInfo*)come_null_check(info, "06str.c", 2539))->p==44,        __freed_obj__ = 0, 
        _if_conditional414) {
            ((struct sInfo*)come_null_check(info, "06str.c", 2527))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional415=*((struct sInfo*)come_null_check(info, "06str.c", 2539))->p==41,            __freed_obj__ = 0, 
            _if_conditional415) {
                ((struct sInfo*)come_null_check(info, "06str.c", 2531))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(node_342 && !__freed_obj__) { node_342 = come_decrement_ref_count(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0); } 
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
        if(node_342 && !__freed_obj__) { node_342 = come_decrement_ref_count(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2541);
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value558=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value557=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2541)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_339),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result209__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value13));
    if(tuple_elements_339 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_339, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result209__;
    __freed_obj__ = 0;
    if(tuple_elements_339 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_339, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional416=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional416) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 2))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname && !__freed_obj__) { ((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname = come_decrement_ref_count(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional418;
struct sTupleNode* __result207__;
void* right_value559;
struct sTupleNode* result_343;
_Bool _if_conditional419;
void* right_value560;
struct list$1sNodeph* __dec_obj192;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value561;
char* __dec_obj193;
struct sTupleNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value559, 0, sizeof(void*));
memset(&result_343, 0, sizeof(struct sTupleNode*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
        if(_if_conditional418=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional418) {
            __result207__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result207__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_343=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value559=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional419=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->tuple_elements!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional419) {
            __dec_obj192=((struct sTupleNode*)come_null_check(result_343, "sTupleNode_clone", 4))->tuple_elements;
            ((struct sTupleNode*)come_null_check(result_343, "sTupleNode_clone", 4))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value560=list$1sNodephp_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4))->tuple_elements))));
            if(__dec_obj192) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional420=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional420) {
            ((struct sTupleNode*)come_null_check(result_343, "sTupleNode_clone", 5))->sline=((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional421=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 7))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional421) {
            __dec_obj193=((struct sTupleNode*)come_null_check(result_343, "sTupleNode_clone", 6))->sname;
            ((struct sTupleNode*)come_null_check(result_343, "sTupleNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6))->sname))));
            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0,0); }
            if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result208__ = __result_obj__ = result_343;
        if(result_343 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_343, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result208__;
        __freed_obj__ = 0;
        if(result_343 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_343, (void*)0, (void*)0, 0, 0, 0, 0); }
}

