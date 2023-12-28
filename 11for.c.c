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
struct sForNode
{
    struct sNode* mExpressionNode;
    struct sNode* mExpressionNode2;
    struct sNode* mExpressionNode3;
    struct sBlock* mBlock;
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

struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sForNode_terminated();

char* sForNode_kind();

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sForNode_sline(struct sForNode* self, struct sInfo* info);

char* sForNode_sname(struct sForNode* self, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sForNode_finalize(struct sForNode* self);
static struct sForNode* sForNode_clone(struct sForNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_11forc(struct __current_stack1__* parent);

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












struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
_Bool _if_conditional5;
void* right_value2;
struct sNode* __dec_obj2;
struct sNode* __dec_obj3;
_Bool _if_conditional15;
void* right_value3;
struct sNode* __dec_obj4;
struct sNode* __dec_obj5;
_Bool _if_conditional16;
void* right_value4;
struct sNode* __dec_obj6;
struct sNode* __dec_obj7;
void* right_value76;
struct sBlock* __dec_obj40;
struct sForNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
    ((struct sForNode*)come_null_check(self, "11for.c", 17))->sline=((struct sInfo*)come_null_check(info, "11for.c", 17))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sForNode*)come_null_check(self, "11for.c", 18))->sname;
    ((struct sForNode*)come_null_check(self, "11for.c", 18))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "11for.c", 18))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional5=expression_node,    __freed_obj__ = 0, 
    _if_conditional5) {
        __dec_obj2=((struct sForNode*)come_null_check(self, "11for.c", 21))->mExpressionNode;
        ((struct sForNode*)come_null_check(self, "11for.c", 21))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value2=sNode_clone(expression_node))));
        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0,0); }
        if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, ((struct sNode*)right_value2)->finalize, ((struct sNode*)right_value2)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
    }
    else {
        __dec_obj3=((struct sForNode*)come_null_check(self, "11for.c", 24))->mExpressionNode;
        ((struct sForNode*)come_null_check(self, "11for.c", 24))->mExpressionNode=((void*)0);
        if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional15=expression_node2,    __freed_obj__ = 0, 
    _if_conditional15) {
        __dec_obj4=((struct sForNode*)come_null_check(self, "11for.c", 27))->mExpressionNode2;
        ((struct sForNode*)come_null_check(self, "11for.c", 27))->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value3=sNode_clone(expression_node2))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0,0); }
        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, ((struct sNode*)right_value3)->finalize, ((struct sNode*)right_value3)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
    }
    else {
        __dec_obj5=((struct sForNode*)come_null_check(self, "11for.c", 30))->mExpressionNode2;
        ((struct sForNode*)come_null_check(self, "11for.c", 30))->mExpressionNode2=((void*)0);
        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional16=expression_node3,    __freed_obj__ = 0, 
    _if_conditional16) {
        __dec_obj6=((struct sForNode*)come_null_check(self, "11for.c", 33))->mExpressionNode3;
        ((struct sForNode*)come_null_check(self, "11for.c", 33))->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value4=sNode_clone(expression_node3))));
        if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, ((struct sNode*)__dec_obj6)->finalize, ((struct sNode*)__dec_obj6)->_protocol_obj, 0,0,0); }
        if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { right_value4 = come_decrement_ref_count(right_value4, ((struct sNode*)right_value4)->finalize, ((struct sNode*)right_value4)->_protocol_obj, 1, 0, 0); } 
        __freed_obj__ = 0;
    }
    else {
        __dec_obj7=((struct sForNode*)come_null_check(self, "11for.c", 36))->mExpressionNode3;
        ((struct sForNode*)come_null_check(self, "11for.c", 36))->mExpressionNode3=((void*)0);
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj40=((struct sForNode*)come_null_check(self, "11for.c", 38))->mBlock;
    ((struct sForNode*)come_null_check(self, "11for.c", 38))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value76=sBlock_clone(block))));
    if(__dec_obj40) { come_call_finalizer(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result74__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sForNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(expression_node2 && !__freed_obj__) { expression_node2 = come_decrement_ref_count(expression_node2, ((struct sNode*)expression_node2)->finalize, ((struct sNode*)expression_node2)->_protocol_obj, 0, 1, 0); } 
    if(expression_node3 && !__freed_obj__) { expression_node3 = come_decrement_ref_count(expression_node3, ((struct sNode*)expression_node3)->finalize, ((struct sNode*)expression_node3)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sForNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(expression_node2 && !__freed_obj__) { expression_node2 = come_decrement_ref_count(expression_node2, ((struct sNode*)expression_node2)->finalize, ((struct sNode*)expression_node2)->_protocol_obj, 0, 1, 0); } 
    if(expression_node3 && !__freed_obj__) { expression_node3 = come_decrement_ref_count(expression_node3, ((struct sNode*)expression_node3)->finalize, ((struct sNode*)expression_node3)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
struct sNode* __result14__;
void* right_value1;
struct sNode* result_8;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
struct sNode* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sNode*));
            if(_if_conditional6=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional6) {
                __result14__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_8=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
            if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, ((struct sNode*)right_value1)->finalize, ((struct sNode*)right_value1)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            if(_if_conditional7=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional7) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional13=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional13) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                ((struct sNode*)come_null_check(result_8, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result15__ = __result_obj__ = result_8;
            if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
            if(result_8 && !__freed_obj__) { result_8 = come_decrement_ref_count(result_8, ((struct sNode*)result_8)->finalize, ((struct sNode*)result_8)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional17;
struct sBlock* __result16__;
void* right_value5;
struct sBlock* result_9;
_Bool _if_conditional21;
void* right_value12;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional25;
void* right_value75;
struct sVarTable* __dec_obj39;
struct sBlock* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value5, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct sBlock*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
        if(_if_conditional17=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional17) {
            __result16__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result16__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_9=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value5=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional21=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mNodes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional21) {
            __dec_obj11=((struct sBlock*)come_null_check(result_9, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_9, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value12=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 6))->mVarTable!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj39=((struct sBlock*)come_null_check(result_9, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_9, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value75=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj39) { come_call_finalizer(sVarTable_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result73__ = __result_obj__ = result_9;
        if(result_9 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
        if(result_9 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional18;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional18=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                    it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_10!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_11=it_10;
                        __freed_obj__ = 0;
                        it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional19=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional19) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional22;
struct list$1sNodeph* __result17__;
void* right_value6;
void* right_value7;
struct list$1sNodeph* result_12;
struct list_item$1sNodeph* it_13;
_Bool _while_condtional2;
void* right_value11;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct list$1sNodeph*));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value11, 0, sizeof(void*));
                if(_if_conditional22=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __result17__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result17__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_12=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value7=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value6=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional2=it_13!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_12, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_13, "./comelang2.h", 192))->item)))));
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
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
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result18__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result18__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional23;
void* right_value8;
struct list_item$1sNodeph* litem_14;
struct sNode* __dec_obj8;
_Bool _if_conditional24;
void* right_value9;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
void* right_value10;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional23=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional23) {
                            litem_14=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value8=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj8=((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_14, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_14;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_14;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional24=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional24) {
                                litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value9=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_15;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value10=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
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
                        __result19__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result19__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
struct sVarTable* __result21__;
void* right_value13;
struct sVarTable* result_17;
_Bool _if_conditional27;
void* right_value74;
struct map$2charphsVarph* __dec_obj38;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct sVarTable* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct sVarTable*));
memset(&right_value74, 0, sizeof(void*));
                if(_if_conditional26=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional26) {
                    __result21__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_17=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value13=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional27=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mVars!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    __dec_obj38=((struct sVarTable*)come_null_check(result_17, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_17, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value74=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj38) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional174=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional174) {
                    ((struct sVarTable*)come_null_check(result_17, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional175=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional175) {
                    ((struct sVarTable*)come_null_check(result_17, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional176=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional176) {
                    ((struct sVarTable*)come_null_check(result_17, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result72__ = __result_obj__ = result_17;
                if(result_17 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
                if(result_17 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional28;
struct map$2charphsVarph* __result22__;
void* right_value14;
void* right_value20;
struct map$2charphsVarph* result_27;
char* it_30;
_Bool _for_condtionalA5;
struct sVar* default_value_33;
void* right_value22;
struct sVar* it2_37;
void* right_value73;
struct map$2charphsVarph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct map$2charphsVarph*));
memset(&it_30, 0, sizeof(char*));
memset(&default_value_33, 0, sizeof(struct sVar*));
memset(&right_value22, 0, sizeof(void*));
memset(&it2_37, 0, sizeof(struct sVar*));
memset(&right_value73, 0, sizeof(void*));
                        if(_if_conditional28=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional28) {
                            __result22__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result22__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_27=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value20=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value14=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1215))))))));
                        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        for(
                        it_30=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA5=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA5;                        it_30=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_33,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_37=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value22=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1221)),it_30,default_value_33))));
                            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_27, "./comelang2.h", 1223)),it_30,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value73=sVar_clone(it2_37)))));
                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(it2_37 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        __result71__ = __result_obj__ = result_27;
                        if(result_27 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result71__;
                        __freed_obj__ = 0;
                        if(result_27 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
void* right_value16;
void* right_value17;
int i_22;
_Bool _for_condtionalA2;
void* right_value18;
void* right_value19;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&i_22, 0, sizeof(int));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value15=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value16=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1123))));
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value17=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            for(
                            i_22=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA2=                            i_22<1024 ,                            __freed_obj__ = 0, 
                            _for_condtionalA2;                            i_22++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_22]=(_Bool)0;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                            __freed_obj__ = 0;
                            __dec_obj12=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value19=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value18=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                            __freed_obj__ = 0;
                            __result24__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result24__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional29=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional29) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional30=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional30) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional31=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional31) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional47=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional47) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional32) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional34) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional35) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional36) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional38) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional39) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional40) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional42) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional43) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional44) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional45) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional46) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional33=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional33) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_18;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sTypeph*));
                                                it_18=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_18!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_19=it_18;
                                                    __freed_obj__ = 0;
                                                    it_18=((struct list_item$1sTypeph*)come_null_check(it_18, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_19 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional37=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional37) {
                                                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_20;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charph*));
                                                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_20!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_21=it_20;
                                                    __freed_obj__ = 0;
                                                    it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional41=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional41) {
                                                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charp* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                __freed_obj__ = 0;
                                __result23__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result23__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_23;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_23, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charp*));
                                    it_23=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                                    __freed_obj__ = 0;
                                    while(_while_condtional5=it_23!=((void*)0),                                    __freed_obj__ = 0, 
                                    _while_condtional5) {
                                        prev_it_24=it_23;
                                        __freed_obj__ = 0;
                                        it_23=((struct list_item$1charp*)come_null_check(it_23, "./comelang2.h", 172))->next;
                                        __freed_obj__ = 0;
                                        if(prev_it_24 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int i_25;
_Bool _for_condtionalA3;
_Bool _if_conditional48;
_Bool _if_conditional49;
int i_26;
_Bool _for_condtionalA4;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_25, 0, sizeof(int));
memset(&i_26, 0, sizeof(int));
                                for(
                                i_25=0 ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA3=                                i_25<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA3;                                i_25++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional48=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_25],                                    __freed_obj__ = 0, 
                                    _if_conditional48) {
                                        if(_if_conditional49=1,                                        __freed_obj__ = 0, 
                                        _if_conditional49) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_25] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_25], (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                i_26=0 ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA4=                                i_26<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA4;                                i_26++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional50=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_26],                                    __freed_obj__ = 0, 
                                    _if_conditional50) {
                                        if(_if_conditional51=1,                                        __freed_obj__ = 0, 
                                        _if_conditional51) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_26] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_26] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_26], (void*)0, (void*)0, 0, 0, 0); }
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional52;
char* result_28;
char* __result25__;
_Bool _if_conditional53;
char* __result26__;
char* result_29;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional52=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                __freed_obj__ = 0;
                                memset(&result_28,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result25__ = __result_obj__ = result_28;
                                __freed_obj__ = 0;
                                return __result25__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional53=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                            __freed_obj__ = 0, 
                            _if_conditional53) {
                                __result26__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                __freed_obj__ = 0;
                                return __result26__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_29,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result27__ = __result_obj__ = result_29;
                            __freed_obj__ = 0;
                            return __result27__;
                            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result28__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result28__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional54;
char* result_31;
char* __result29__;
_Bool _if_conditional55;
char* __result30__;
char* result_32;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_31, 0, sizeof(char*));
memset(&result_32, 0, sizeof(char*));
                            if(_if_conditional54=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                __freed_obj__ = 0;
                                memset(&result_31,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result29__ = __result_obj__ = result_31;
                                __freed_obj__ = 0;
                                return __result29__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional55=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                            __freed_obj__ = 0, 
                            _if_conditional55) {
                                __result30__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                __freed_obj__ = 0;
                                return __result30__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_32,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result31__ = __result_obj__ = result_32;
                            __freed_obj__ = 0;
                            return __result31__;
                            __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_34;
unsigned int it_35;
_Bool _while_condtional6;
_Bool _if_conditional56;
void* right_value21;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional58;
struct sVar* __result34__;
_Bool _if_conditional59;
_Bool _if_conditional60;
struct sVar* __result35__;
struct sVar* __result36__;
struct sVar* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_34, 0, sizeof(unsigned int));
memset(&it_35, 0, sizeof(unsigned int));
memset(&right_value21, 0, sizeof(void*));
                                hash_34=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                __freed_obj__ = 0;
                                it_35=hash_34;
                                __freed_obj__ = 0;
                                while(_while_condtional6=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional6) {
                                    if(_if_conditional56=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_35],                                    __freed_obj__ = 0, 
                                    _if_conditional56) {
                                        if(_if_conditional58=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value21=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_35], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                        (right_value21 && right_value21 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional58) {
                                            __result34__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_35];
                                            __freed_obj__ = 0;
                                            return __result34__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_35++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional59=it_35>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional59) {
                                            it_35=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional60=it_35==hash_34,                                            __freed_obj__ = 0, 
                                            _if_conditional60) {
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
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional57;
_Bool default_value_36;
_Bool __result32__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_36, 0, sizeof(_Bool));
                                            if(_if_conditional57=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional57) {
                                                __freed_obj__ = 0;
                                                memset(&default_value_36,0,sizeof(_Bool));
                                                __freed_obj__ = 0;
                                                __result32__ = default_value_36;
                                                __freed_obj__ = 0;
                                                return __result32__;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __result33__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                __freed_obj__ = 0;
                                                return __result33__;
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

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional61;
unsigned int hash_49;
int it_50;
_Bool _while_condtional8;
_Bool _if_conditional65;
void* right_value28;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool same_key_exist_67;
char* it2_70;
_Bool _for_condtionalA7;
void* right_value30;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct map$2charphsVarph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_49, 0, sizeof(unsigned int));
memset(&it_50, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&same_key_exist_67, 0, sizeof(_Bool));
memset(&it2_70, 0, sizeof(char*));
memset(&right_value30, 0, sizeof(void*));
                                if(_if_conditional61=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size,                                __freed_obj__ = 0, 
                                _if_conditional61) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1498)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_49=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1500)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size;
                                __freed_obj__ = 0;
                                it_50=hash_49;
                                __freed_obj__ = 0;
                                while(_while_condtional8=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional8) {
                                    if(_if_conditional65=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1556))->item_existance[it_50],                                    __freed_obj__ = 0, 
                                    _if_conditional65) {
                                        if(_if_conditional66=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1527),__exception_result_var_a2=((struct optional$2boolbool*)(right_value28=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->keys[it_50], "./comelang2.h", 1527)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                        (right_value28 && right_value28 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __freed_obj__ = 0, 
                                        _if_conditional66) {
                                            if(_if_conditional67=1,                                            __freed_obj__ = 0, 
                                            _if_conditional67) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_50] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_50] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_50], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->key_list, "./comelang2.h", 1510)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->keys[it_50]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->keys[it_50]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->key_list, "./comelang2.h", 1514)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_50]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_50]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional87=1,                                            __freed_obj__ = 0, 
                                            _if_conditional87) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_50] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_50], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->items[it_50]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->items[it_50]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_50++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional88=it_50>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1536))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional88) {
                                            it_50=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional89=it_50==hash_49,                                            __freed_obj__ = 0, 
                                            _if_conditional89) {
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1538))->item_existance[it_50]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional90=1,                                        __freed_obj__ = 0, 
                                        _if_conditional90) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->keys[it_50]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->keys[it_50]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional91=1,                                        __freed_obj__ = 0, 
                                        _if_conditional91) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1546))->items[it_50]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1549))->items[it_50]=item;
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
                                same_key_exist_67=(_Bool)0;
                                __freed_obj__ = 0;
                                for(
                                it2_70=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA7=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA7;                                it2_70=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional96=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1564),__exception_result_var_a4=((struct optional$2boolbool*)(right_value30=string_equals(((char*)come_null_check(it2_70, "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_a4)),                                    (right_value30 && right_value30 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __freed_obj__ = 0, 
                                    _if_conditional96) {
                                        same_key_exist_67=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional97=!same_key_exist_67,                                __freed_obj__ = 0, 
                                _if_conditional97) {
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1567))->key_list, "./comelang2.h", 1567)),key);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result50__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result50__;
                                __freed_obj__ = 0;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_38;
void* right_value23;
char** keys_39;
void* right_value24;
struct sVar** items_40;
void* right_value25;
_Bool* item_existance_41;
int len_42;
char* it_43;
_Bool _for_condtionalA6;
struct sVar* default_value_44;
void* right_value26;
struct sVar* it2_45;
unsigned int hash_46;
int n_47;
_Bool _while_condtional7;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
struct sVar* default_value_48;
void* right_value27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_38, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
memset(&keys_39, 0, sizeof(char**));
memset(&right_value24, 0, sizeof(void*));
memset(&items_40, 0, sizeof(struct sVar**));
memset(&right_value25, 0, sizeof(void*));
memset(&item_existance_41, 0, sizeof(_Bool*));
memset(&len_42, 0, sizeof(int));
memset(&it_43, 0, sizeof(char*));
memset(&default_value_44, 0, sizeof(struct sVar*));
memset(&right_value26, 0, sizeof(void*));
memset(&it2_45, 0, sizeof(struct sVar*));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&n_47, 0, sizeof(int));
memset(&default_value_48, 0, sizeof(struct sVar*));
memset(&right_value27, 0, sizeof(void*));
                                        size_38=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                        __freed_obj__ = 0;
                                        keys_39=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(size_38)), "./comelang2.h", 1370))));
                                        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        items_40=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_38)), "./comelang2.h", 1371))));
                                        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        item_existance_41=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_38)), "./comelang2.h", 1372))));
                                        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        len_42=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_43=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA6=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA6;                                        it_43=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_44,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_45=((struct sVar*)(right_value26=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_43,default_value_44)));
                                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            hash_46=string_get_hash_key(((char*)come_null_check(it_43, "./comelang2.h", 1380)))%size_38;
                                            __freed_obj__ = 0;
                                            n_47=hash_46;
                                            __freed_obj__ = 0;
                                            while(_while_condtional7=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional7) {
                                                if(_if_conditional62=item_existance_41[n_47],                                                __freed_obj__ = 0, 
                                                _if_conditional62) {
                                                    n_47++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional63=n_47>=size_38,                                                    __freed_obj__ = 0, 
                                                    _if_conditional63) {
                                                        n_47=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional64=n_47==hash_46,                                                        __freed_obj__ = 0, 
                                                        _if_conditional64) {
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
                                                    item_existance_41[n_47]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    keys_39[n_47]=it_43;
                                                    __freed_obj__ = 0;
                                                    __freed_obj__ = 0;
                                                    items_40[n_47]=((struct sVar*)(right_value27=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_43,default_value_48)));
                                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    len_42++;
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_39;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_40;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_41;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_38;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_42;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_51;
struct list_item$1charp* it_52;
_Bool _while_condtional9;
void* right_value29;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional68;
struct list$1charp* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_51, 0, sizeof(int));
memset(&it_52, 0, sizeof(struct list_item$1charp*));
memset(&right_value29, 0, sizeof(void*));
                                                    it2_51=0;
                                                    __freed_obj__ = 0;
                                                    it_52=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional9=it_52!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional9) {
                                                        if(_if_conditional68=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value29=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_52, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __freed_obj__ = 0, 
                                                        _if_conditional68) {
                                                            list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_51,it2_51+1);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        it2_51++;
                                                        __freed_obj__ = 0;
                                                        it_52=((struct list_item$1charp*)come_null_check(it_52, "./comelang2.h", 500))->next;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result41__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result41__;
                                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
int tmp_53;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct list$1charp* __result38__;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_56;
int i_57;
_Bool _while_condtional11;
_Bool _if_conditional77;
struct list_item$1charp* prev_it_58;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct list_item$1charp* it_59;
int i_60;
_Bool _while_condtional12;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_61;
struct list_item$1charp* it_62;
struct list_item$1charp* head_prev_it_63;
struct list_item$1charp* tail_it_64;
int i_65;
_Bool _while_condtional13;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct list_item$1charp* prev_it_66;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct list$1charp* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_53, 0, sizeof(int));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&i_60, 0, sizeof(int));
memset(&prev_it_61, 0, sizeof(struct list_item$1charp*));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_63, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_64, 0, sizeof(struct list_item$1charp*));
memset(&i_65, 0, sizeof(int));
memset(&prev_it_66, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional69=head<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional69) {
                                                                    head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional70=tail<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional70) {
                                                                    tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional71=head>tail,                                                                __freed_obj__ = 0, 
                                                                _if_conditional71) {
                                                                    tmp_53=tail;
                                                                    __freed_obj__ = 0;
                                                                    tail=head;
                                                                    __freed_obj__ = 0;
                                                                    head=tmp_53;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional72=head<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional72) {
                                                                    head=0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional73=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional73) {
                                                                    tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional74=head==tail,                                                                __freed_obj__ = 0, 
                                                                _if_conditional74) {
                                                                    __result38__ = __result_obj__ = self;
                                                                    __freed_obj__ = 0;
                                                                    return __result38__;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional75=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional75) {
                                                                    list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional76=head==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional76) {
                                                                        it_56=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                                        __freed_obj__ = 0;
                                                                        i_57=0;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional11=it_56!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional11) {
                                                                            if(_if_conditional77=i_57<tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional77) {
                                                                                prev_it_58=it_56;
                                                                                __freed_obj__ = 0;
                                                                                it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 543))->next;
                                                                                __freed_obj__ = 0;
                                                                                i_57++;
                                                                                __freed_obj__ = 0;
                                                                                if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional78=i_57==tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional78) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_56;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 556))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_57++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional79=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional79) {
                                                                            it_59=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                                            __freed_obj__ = 0;
                                                                            i_60=0;
                                                                            __freed_obj__ = 0;
                                                                            while(_while_condtional12=it_59!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _while_condtional12) {
                                                                                if(_if_conditional80=i_60==head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional80) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 566))->prev;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional81=i_60>=head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional81) {
                                                                                    prev_it_61=it_59;
                                                                                    __freed_obj__ = 0;
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 573))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_60++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_61 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 581))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_60++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            it_62=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                                            __freed_obj__ = 0;
                                                                            head_prev_it_63=((void*)0);
                                                                            __freed_obj__ = 0;
                                                                            tail_it_64=((void*)0);
                                                                            __freed_obj__ = 0;
                                                                            i_65=0;
                                                                            __freed_obj__ = 0;
                                                                            while(_while_condtional13=it_62!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _while_condtional13) {
                                                                                if(_if_conditional82=i_65==head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional82) {
                                                                                    head_prev_it_63=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 596))->prev;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional83=i_65==tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional83) {
                                                                                    tail_it_64=it_62;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional84=i_65>=head&&i_65<tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional84) {
                                                                                    prev_it_66=it_62;
                                                                                    __freed_obj__ = 0;
                                                                                    it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 606))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_65++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_66 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 614))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_65++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional85=head_prev_it_63!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional85) {
                                                                                ((struct list_item$1charp*)come_null_check(head_prev_it_63, "./comelang2.h", 620))->next=tail_it_64;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional86=tail_it_64!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional86) {
                                                                                ((struct list_item$1charp*)come_null_check(tail_it_64, "./comelang2.h", 623))->prev=head_prev_it_63;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                __result40__ = __result_obj__ = self;
                                                                __freed_obj__ = 0;
                                                                return __result40__;
                                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_54;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_55;
struct list$1charp* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
                                                                        it_54=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional10=it_54!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional10) {
                                                                            prev_it_55=it_54;
                                                                            __freed_obj__ = 0;
                                                                            it_54=((struct list_item$1charp*)come_null_check(it_54, "./comelang2.h", 479))->next;
                                                                            __freed_obj__ = 0;
                                                                            if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                                        __freed_obj__ = 0;
                                                                        __result39__ = __result_obj__ = self;
                                                                        __freed_obj__ = 0;
                                                                        return __result39__;
                                                                        __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
char* result_68;
char* __result42__;
_Bool _if_conditional93;
char* __result43__;
char* result_69;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                                    if(_if_conditional92=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional92) {
                                        __freed_obj__ = 0;
                                        memset(&result_68,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result42__ = __result_obj__ = result_68;
                                        __freed_obj__ = 0;
                                        return __result42__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional93=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        __result43__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                        __freed_obj__ = 0;
                                        return __result43__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_69,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result44__ = __result_obj__ = result_69;
                                    __freed_obj__ = 0;
                                    return __result44__;
                                    __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result45__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result45__;
                                    __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional94;
char* result_71;
char* __result46__;
_Bool _if_conditional95;
char* __result47__;
char* result_72;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
                                    if(_if_conditional94=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional94) {
                                        __freed_obj__ = 0;
                                        memset(&result_71,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result46__ = __result_obj__ = result_71;
                                        __freed_obj__ = 0;
                                        return __result46__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional95=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional95) {
                                        __result47__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                        __freed_obj__ = 0;
                                        return __result47__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_72,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result48__ = __result_obj__ = result_72;
                                    __freed_obj__ = 0;
                                    return __result48__;
                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional98;
void* right_value31;
struct list_item$1charp* litem_73;
_Bool _if_conditional99;
void* right_value32;
struct list_item$1charp* litem_74;
void* right_value33;
struct list_item$1charp* litem_75;
struct list$1charp* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1charp*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1charp*));
memset(&right_value33, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional98=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                                        __freed_obj__ = 0, 
                                        _if_conditional98) {
                                            litem_73=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value31=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                                            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 274))->prev=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 275))->next=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_73, "./comelang2.h", 276))->item=item;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_73;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_73;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional99=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                                            __freed_obj__ = 0, 
                                            _if_conditional99) {
                                                litem_74=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value32=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                                                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_74, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_74, "./comelang2.h", 285))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_74, "./comelang2.h", 286))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_74;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_74;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                litem_75=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value33=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                                                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_75, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_75, "./comelang2.h", 295))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_75, "./comelang2.h", 296))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_75;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_75;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                                        __freed_obj__ = 0;
                                        __result49__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result49__;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional100;
struct sVar* __result51__;
void* right_value34;
struct sVar* result_76;
_Bool _if_conditional101;
void* right_value35;
char* __dec_obj13;
_Bool _if_conditional102;
void* right_value36;
char* __dec_obj14;
_Bool _if_conditional103;
void* right_value71;
struct sType* __dec_obj36;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value72;
char* __dec_obj37;
struct sVar* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct sVar*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
                                if(_if_conditional100=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    __result51__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result51__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_76=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value34=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3))));
                                if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional101=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 5))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional101) {
                                    __dec_obj13=((struct sVar*)come_null_check(result_76, "sVar_clone", 4))->mName;
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value35=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 4))->mName))));
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional102=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 6))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional102) {
                                    __dec_obj14=((struct sVar*)come_null_check(result_76, "sVar_clone", 5))->mCValueName;
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 5))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 5))->mCValueName))));
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional103=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 7))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional103) {
                                    __dec_obj36=((struct sVar*)come_null_check(result_76, "sVar_clone", 6))->mType;
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 6))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(((struct sVar*)come_null_check(self, "sVar_clone", 6))->mType))));
                                    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional167=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional167) {
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 7))->mBlockLevel=((struct sVar*)come_null_check(self, "sVar_clone", 7))->mBlockLevel;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional168=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional168) {
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 8))->mGlobal=((struct sVar*)come_null_check(self, "sVar_clone", 8))->mGlobal;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional169=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional169) {
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 9))->mAllocaValue=((struct sVar*)come_null_check(self, "sVar_clone", 9))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional170=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional170) {
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 10))->mFunctionParam=((struct sVar*)come_null_check(self, "sVar_clone", 10))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional171=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 11))->mNoFree=((struct sVar*)come_null_check(self, "sVar_clone", 11))->mNoFree;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional172=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 13))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional172) {
                                    __dec_obj37=((struct sVar*)come_null_check(result_76, "sVar_clone", 12))->mFunName;
                                    ((struct sVar*)come_null_check(result_76, "sVar_clone", 12))->mFunName=(char*)come_increment_ref_count(((char*)(right_value72=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 12))->mFunName))));
                                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result70__ = __result_obj__ = result_76;
                                if(result_76 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_76, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result70__;
                                __freed_obj__ = 0;
                                if(result_76 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_76, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
struct sType* __result52__;
void* right_value37;
struct sType* result_77;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional110;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional113;
void* right_value44;
char* __dec_obj19;
_Bool _if_conditional114;
void* right_value51;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional118;
void* right_value55;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value56;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional122;
void* right_value63;
struct list$1charph* __dec_obj29;
_Bool _if_conditional126;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value67;
struct sNode* __dec_obj32;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value68;
struct sNode* __dec_obj33;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value69;
char* __dec_obj34;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value70;
char* __dec_obj35;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sType*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
                                        if(_if_conditional104=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional104) {
                                            __result52__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result52__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional105=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional105) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional106=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional106) {
                                            __dec_obj16=((struct sType*)come_null_check(result_77, "sType_clone", 5))->mNoSolvedGenericsType;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                            if(__dec_obj16) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional110=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional110) {
                                            __dec_obj18=((struct sType*)come_null_check(result_77, "sType_clone", 6))->mOriginalLoadVarType;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional113=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional113) {
                                            __dec_obj19=((struct sType*)come_null_check(result_77, "sType_clone", 7))->mGenericsName;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional114=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional114) {
                                            __dec_obj23=((struct sType*)come_null_check(result_77, "sType_clone", 8))->mGenericsTypes;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional118=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional118) {
                                            __dec_obj24=((struct sType*)come_null_check(result_77, "sType_clone", 9))->mArrayNum;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value55=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                            if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional120=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional120) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional121=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional121) {
                                            __dec_obj25=((struct sType*)come_null_check(result_77, "sType_clone", 11))->mParamTypes;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                            if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional122=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional122) {
                                            __dec_obj29=((struct sType*)come_null_check(result_77, "sType_clone", 12))->mParamNames;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value63=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                            if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional126=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional126) {
                                            __dec_obj31=((struct sType*)come_null_check(result_77, "sType_clone", 13))->mResultType;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                            if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional129=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional129) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional130=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional130) {
                                            __dec_obj32=((struct sType*)come_null_check(result_77, "sType_clone", 15))->mAlignas;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional131=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional131) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional132=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional132) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional133=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional133) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional134=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional134) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional135=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional135) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional136=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional136) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional137=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional137) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional138=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional138) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional139=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional139) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional140=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional140) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional141=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional141) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional142=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional142) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional143=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional143) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional144=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional144) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional145=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional145) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional146=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional146) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional147=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional147) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional148=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional148) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional149=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional153=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional153) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional154) {
                                            __dec_obj33=((struct sType*)come_null_check(result_77, "sType_clone", 39))->mSizeNum;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional155=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional155) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional156=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional156) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional157) {
                                            __dec_obj34=((struct sType*)come_null_check(result_77, "sType_clone", 42))->mOriginalTypeName;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional158=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional158) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional159=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional159) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional160=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional160) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional161=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional161) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional162=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional162) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional163=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional163) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional164=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional164) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional165=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional165) {
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional166=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional166) {
                                            __dec_obj35=((struct sType*)come_null_check(result_77, "sType_clone", 51))->mAsmName;
                                            ((struct sType*)come_null_check(result_77, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value70=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result69__ = __result_obj__ = result_77;
                                        if(result_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result69__;
                                        __freed_obj__ = 0;
                                        if(result_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional108=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional108) {
                                                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional115;
struct list$1sTypeph* __result57__;
void* right_value45;
void* right_value46;
struct list$1sTypeph* result_80;
struct list_item$1sTypeph* it_81;
_Bool _while_condtional14;
void* right_value50;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct list$1sTypeph*));
memset(&it_81, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value50, 0, sizeof(void*));
                                                if(_if_conditional115=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional115) {
                                                    __result57__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result57__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_80=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value45=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                it_81=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_81!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_80, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_81, "./comelang2.h", 192))->item)))));
                                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    it_81=((struct list_item$1sTypeph*)come_null_check(it_81, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result60__ = __result_obj__ = result_80;
                                                if(result_80 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result60__;
                                                __freed_obj__ = 0;
                                                if(result_80 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result58__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result58__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional116;
void* right_value47;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj20;
_Bool _if_conditional117;
void* right_value48;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj21;
void* right_value49;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj22;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
                                                        if(_if_conditional116=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional116) {
                                                            litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value47=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                                            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 204))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 205))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj20=((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 206))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_82, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_82;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_82;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional117=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional117) {
                                                                litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value48=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                                                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 215))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 216))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_83, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_83;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_83;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value49=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                                                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 225))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 226))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_84, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_84;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_84;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                        __freed_obj__ = 0;
                                                        __result59__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result59__;
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
_Bool _if_conditional119;
struct list$1sNodeph* __result61__;
void* right_value52;
void* right_value53;
struct list$1sNodeph* result_85;
struct list_item$1sNodeph* it_86;
_Bool _while_condtional15;
void* right_value54;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct list$1sNodeph*));
memset(&it_86, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value54, 0, sizeof(void*));
                                                if(_if_conditional119=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional119) {
                                                    __result61__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result61__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_85=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value53=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value52=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                it_86=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_86!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_85, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_86, "./comelang2.h", 192))->item)))));
                                                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                    it_86=((struct list_item$1sNodeph*)come_null_check(it_86, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result62__ = __result_obj__ = result_85;
                                                if(result_85 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result62__;
                                                __freed_obj__ = 0;
                                                if(result_85 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional123;
struct list$1charph* __result63__;
void* right_value57;
void* right_value58;
struct list$1charph* result_87;
struct list_item$1charph* it_88;
_Bool _while_condtional16;
void* right_value62;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&result_87, 0, sizeof(struct list$1charph*));
memset(&it_88, 0, sizeof(struct list_item$1charph*));
memset(&right_value62, 0, sizeof(void*));
                                                if(_if_conditional123=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional123) {
                                                    __result63__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result63__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_87=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                it_88=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_88!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    list$1charph_add(((struct list$1charph*)come_null_check(result_87, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value62=string_clone(((struct list_item$1charph*)come_null_check(it_88, "./comelang2.h", 192))->item)))));
                                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    it_88=((struct list_item$1charph*)come_null_check(it_88, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result66__ = __result_obj__ = result_87;
                                                if(result_87 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_87, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result66__;
                                                __freed_obj__ = 0;
                                                if(result_87 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result64__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result64__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
void* right_value59;
struct list_item$1charph* litem_89;
char* __dec_obj26;
_Bool _if_conditional125;
void* right_value60;
struct list_item$1charph* litem_90;
char* __dec_obj27;
void* right_value61;
struct list_item$1charph* litem_91;
char* __dec_obj28;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
memset(&right_value60, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
                                                        if(_if_conditional124=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional124) {
                                                            litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                                            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 204))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 205))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj26=((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 206))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_89, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_89;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_89;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional125=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional125) {
                                                                litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                                                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 215))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj27=((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 216))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_90, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_90;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_90;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_91, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_91, "./comelang2.h", 225))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj28=((struct list_item$1charph*)come_null_check(litem_91, "./comelang2.h", 226))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_91, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_91;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_91;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                        __freed_obj__ = 0;
                                                        __result65__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result65__;
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
_Bool _if_conditional127;
struct tuple1$1sTypeph* __result67__;
void* right_value64;
struct tuple1$1sTypeph* result_92;
_Bool _if_conditional128;
void* right_value65;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value65, 0, sizeof(void*));
                                                if(_if_conditional127=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional127) {
                                                    __result67__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result67__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_92=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                                if(_if_conditional128=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional128) {
                                                    __dec_obj30=((struct tuple1$1sTypeph*)come_null_check(result_92, "tuple1$1sTypephp_clone", 4))->v1;
                                                    ((struct tuple1$1sTypeph*)come_null_check(result_92, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result68__ = __result_obj__ = result_92;
                                                if(result_92 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result68__;
                                                __freed_obj__ = 0;
                                                if(result_92 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional173=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 1))->key_list!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional173) {
                            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool sForNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

char* sForNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value77;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
    __result76__ = __result_obj__ = ((char*)(right_value77=__builtin_string("sForNode")));
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool in_loop_93;
struct sBlock* block_94;
struct sVarTable* lv_table_95;
void* right_value78;
void* right_value79;
struct sVarTable* for_var_table_96;
struct sNode* expression_node_97;
struct CVALUE* conditional_value_98;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool __result77__;
void* right_value80;
struct CVALUE* __dec_obj41;
struct sNode* expression_node2_99;
struct CVALUE* conditional_value2_100;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool __result78__;
static int num_for_condtionalA_101=0;
int num_for_conditionalA_stack_102;
void* right_value81;
struct CVALUE* __dec_obj42;
struct sNode* expression_node3_103;
struct CVALUE* conditional_value3_104;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool __result79__;
void* right_value82;
struct CVALUE* conditional_value3_105;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&in_loop_93, 0, sizeof(_Bool));
memset(&block_94, 0, sizeof(struct sBlock*));
memset(&lv_table_95, 0, sizeof(struct sVarTable*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&for_var_table_96, 0, sizeof(struct sVarTable*));
memset(&expression_node_97, 0, sizeof(struct sNode*));
memset(&conditional_value_98, 0, sizeof(struct CVALUE*));
memset(&right_value80, 0, sizeof(void*));
memset(&expression_node2_99, 0, sizeof(struct sNode*));
memset(&conditional_value2_100, 0, sizeof(struct CVALUE*));
memset(&num_for_conditionalA_stack_102, 0, sizeof(int));
memset(&right_value81, 0, sizeof(void*));
memset(&expression_node3_103, 0, sizeof(struct sNode*));
memset(&conditional_value3_104, 0, sizeof(struct CVALUE*));
memset(&right_value82, 0, sizeof(void*));
memset(&conditional_value3_105, 0, sizeof(struct CVALUE*));
    in_loop_93=((struct sInfo*)come_null_check(info, "11for.c", 55))->in_loop;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "11for.c", 56))->in_loop=(_Bool)1;
    __freed_obj__ = 0;
    block_94=((struct sForNode*)come_null_check(self, "11for.c", 58))->mBlock;
    __freed_obj__ = 0;
    lv_table_95=((struct sInfo*)come_null_check(info, "11for.c", 60))->lv_table;
    __freed_obj__ = 0;
    for_var_table_96=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value79=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value78=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "11for.c", 61)))),(_Bool)0,lv_table_95))));
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "11for.c", 62))->lv_table=for_var_table_96;
    __freed_obj__ = 0;
    add_come_code(info,"for(\n");
    __freed_obj__ = 0;
    expression_node_97=((struct sForNode*)come_null_check(self, "11for.c", 67))->mExpressionNode;
    __freed_obj__ = 0;
    conditional_value_98=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional182=expression_node_97,    __freed_obj__ = 0, 
    _if_conditional182) {
        ((struct sInfo*)come_null_check(info, "11for.c", 71))->without_semicolon=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional183=!((struct sNode*)come_null_check(expression_node_97, "11for.c", 75))->compile(((struct sNode*)come_null_check(expression_node_97, "11for.c", 75))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional183) {
            __result77__ = (_Bool)0;
            if(for_var_table_96 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,for_var_table_96, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "11for.c", 75))->without_semicolon=(_Bool)0;
        __freed_obj__ = 0;
        add_last_code_to_source_with_comma(info);
        __freed_obj__ = 0;
        __dec_obj41=conditional_value_98;
        conditional_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
        if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        free_right_value_objects(info,(_Bool)1);
        __freed_obj__ = 0;
        add_come_code(info,"0;");
        __freed_obj__ = 0;
    }
    else {
        add_come_code(info,";");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    expression_node2_99=((struct sForNode*)come_null_check(self, "11for.c", 90))->mExpressionNode2;
    __freed_obj__ = 0;
    conditional_value2_100=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional186=expression_node2_99,    __freed_obj__ = 0, 
    _if_conditional186) {
        ((struct sInfo*)come_null_check(info, "11for.c", 94))->without_semicolon=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional187=!((struct sNode*)come_null_check(expression_node2_99, "11for.c", 98))->compile(((struct sNode*)come_null_check(expression_node2_99, "11for.c", 98))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional187) {
            __result78__ = (_Bool)0;
            if(for_var_table_96 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,for_var_table_96, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value2_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result78__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "11for.c", 98))->without_semicolon=(_Bool)0;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        add_come_code_at_function_head(info,"_Bool _for_condtionalA%d;\n",++num_for_condtionalA_101);
        __freed_obj__ = 0;
        num_for_conditionalA_stack_102=num_for_condtionalA_101;
        __freed_obj__ = 0;
        add_come_code(info,"_for_condtionalA%d=",num_for_condtionalA_101);
        __freed_obj__ = 0;
        add_last_code_to_source_with_comma(info);
        __freed_obj__ = 0;
        __dec_obj42=conditional_value2_100;
        conditional_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
        if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        free_right_value_objects(info,(_Bool)1);
        __freed_obj__ = 0;
        add_come_code(info,"_for_condtionalA%d;",num_for_conditionalA_stack_102);
        __freed_obj__ = 0;
    }
    else {
        add_come_code(info,";");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    expression_node3_103=((struct sForNode*)come_null_check(self, "11for.c", 119))->mExpressionNode3;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional188=expression_node3_103,    __freed_obj__ = 0, 
    _if_conditional188) {
        ((struct sInfo*)come_null_check(info, "11for.c", 123))->without_semicolon=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional189=!((struct sNode*)come_null_check(expression_node3_103, "11for.c", 127))->compile(((struct sNode*)come_null_check(expression_node3_103, "11for.c", 127))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional189) {
            __result79__ = (_Bool)0;
            if(for_var_table_96 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,for_var_table_96, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value2_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(conditional_value3_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value3_104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result79__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "11for.c", 127))->without_semicolon=(_Bool)0;
        __freed_obj__ = 0;
        add_last_code_to_source_with_comma(info);
        __freed_obj__ = 0;
        conditional_value3_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))));
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        free_right_value_objects(info,(_Bool)1);
        __freed_obj__ = 0;
        add_come_code(info,"0");
        __freed_obj__ = 0;
        if(conditional_value3_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value3_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    add_come_code(info,"){\n");
    __freed_obj__ = 0;
    transpile_block(block_94,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"}\n");
    __freed_obj__ = 0;
    free_objects(for_var_table_96,((void*)0),info);
    __freed_obj__ = 0;
    transpiler_clear_last_code(info);
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "11for.c", 148))->lv_table=lv_table_95;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "11for.c", 150))->in_loop=in_loop_93;
    __freed_obj__ = 0;
    __result80__ = (_Bool)1;
    if(for_var_table_96 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,for_var_table_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value2_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value3_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value3_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(for_var_table_96 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,for_var_table_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value2_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value2_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(conditional_value3_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value3_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional184=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional184) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional185=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional185) {
                    if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sForNode_sline(struct sForNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = ((struct sForNode*)come_null_check(self, "11for.c", 157))->sline;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

char* sForNode_sname(struct sForNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value83;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(right_value83=__builtin_string(((struct sForNode*)come_null_check(self, "11for.c", 162))->sname)));
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional190;
void* right_value84;
struct sNode* expression_node_107;
_Bool _if_conditional192;
struct sNode* __dec_obj43;
void* right_value85;
struct sNode* __dec_obj44;
void* right_value86;
struct sNode* expression_node2_108;
_Bool _if_conditional193;
struct sNode* __dec_obj45;
void* right_value87;
struct sNode* __dec_obj46;
void* right_value88;
struct sNode* expression_node3_109;
_Bool _if_conditional194;
struct sNode* __dec_obj47;
void* right_value89;
struct sNode* __dec_obj48;
void* right_value90;
void* right_value91;
struct sBlock* block_110;
void* right_value92;
void* right_value93;
struct sNode* _inf_value1;
struct sForNode* _inf_obj_value1;
void* right_value100;
void* right_value101;
void* right_value102;
struct sNode* __result88__;
void* right_value103;
struct __current_stack1__ __current_stack1__;
void* right_value106;
struct sNode* result_112;
void* right_value107;
void* right_value108;
struct sNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&expression_node_107, 0, sizeof(struct sNode*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&expression_node2_108, 0, sizeof(struct sNode*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&expression_node3_109, 0, sizeof(struct sNode*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&block_110, 0, sizeof(struct sBlock*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value106, 0, sizeof(void*));
memset(&result_112, 0, sizeof(struct sNode*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
    if(_if_conditional190=charp_operator_equals(buf,"for"),    __freed_obj__ = 0, 
    _if_conditional190) {
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("11for.c", 168),((struct optional$2intbool*)(right_value84=expected_next_character(40,info)))));
        come_pop_stackframe();
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional192=*((struct sInfo*)come_null_check(info, "11for.c", 179))->p==59,        __freed_obj__ = 0, 
        _if_conditional192) {
            __dec_obj43=expression_node_107;
            expression_node_107=((void*)0);
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj44=expression_node_107;
            expression_node_107=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=expression_v13(info))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("11for.c", 180),((struct optional$2intbool*)(right_value86=expected_next_character(59,info)))));
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional193=*((struct sInfo*)come_null_check(info, "11for.c", 189))->p==59,        __freed_obj__ = 0, 
        _if_conditional193) {
            __dec_obj45=expression_node2_108;
            expression_node2_108=((void*)0);
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj46=expression_node2_108;
            expression_node2_108=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=expression_v13(info))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("11for.c", 190),((struct optional$2intbool*)(right_value88=expected_next_character(59,info)))));
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional194=*((struct sInfo*)come_null_check(info, "11for.c", 199))->p==41,        __freed_obj__ = 0, 
        _if_conditional194) {
            __dec_obj47=expression_node3_109;
            expression_node3_109=((void*)0);
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj48=expression_node3_109;
            expression_node3_109=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=expression_v13(info))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("11for.c", 200),((struct optional$2intbool*)(right_value90=expected_next_character(41,info)))));
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        block_110=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value91=parse_block(info,(_Bool)0))));
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "11for.c", 205);
        _inf_obj_value1=come_increment_ref_count(((struct sForNode*)(right_value93=sForNode_initialize((struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value92=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "11for.c", 205)))),(struct sNode*)come_increment_ref_count(expression_node_107),(struct sNode*)come_increment_ref_count(expression_node2_108),(struct sNode*)come_increment_ref_count(expression_node3_109),block_110,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sForNode_finalize;
        _inf_value1->clone=(void*)sForNode_clone;
        _inf_value1->compile=(void*)sForNode_compile;
        _inf_value1->sline=(void*)sForNode_sline;
        _inf_value1->sname=(void*)sForNode_sname;
        _inf_value1->terminated=(void*)sForNode_terminated;
        _inf_value1->kind=(void*)sForNode_kind;
        __result88__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value102=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value101=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "11for.c", 205)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=_inf_value1))),(_Bool)1)));
        if(expression_node_107 && !__freed_obj__) { expression_node_107 = come_decrement_ref_count(expression_node_107, ((struct sNode*)expression_node_107)->finalize, ((struct sNode*)expression_node_107)->_protocol_obj, 0, 0, 0); } 
        if(expression_node2_108 && !__freed_obj__) { expression_node2_108 = come_decrement_ref_count(expression_node2_108, ((struct sNode*)expression_node2_108)->finalize, ((struct sNode*)expression_node2_108)->_protocol_obj, 0, 0, 0); } 
        if(expression_node3_109 && !__freed_obj__) { expression_node3_109 = come_decrement_ref_count(expression_node3_109, ((struct sNode*)expression_node3_109)->finalize, ((struct sNode*)expression_node3_109)->_protocol_obj, 0, 0, 0); } 
        if(block_110 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForNode_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForNode_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0); } 
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result88__;
        __freed_obj__ = 0;
        if(expression_node_107 && !__freed_obj__) { expression_node_107 = come_decrement_ref_count(expression_node_107, ((struct sNode*)expression_node_107)->finalize, ((struct sNode*)expression_node_107)->_protocol_obj, 0, 0, 0); } 
        if(expression_node2_108 && !__freed_obj__) { expression_node2_108 = come_decrement_ref_count(expression_node2_108, ((struct sNode*)expression_node2_108)->finalize, ((struct sNode*)expression_node2_108)->_protocol_obj, 0, 0, 0); } 
        if(expression_node3_109 && !__freed_obj__) { expression_node3_109 = come_decrement_ref_count(expression_node3_109, ((struct sNode*)expression_node3_109)->finalize, ((struct sNode*)expression_node3_109)->_protocol_obj, 0, 0, 0); } 
        if(block_110 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_112=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("11for.c", 212),((struct optional$2sNodephbool*)(right_value103=string_node_v10(buf,head,head_sline,info)))), "11for.c", 212)),&__current_stack1__,(void*)method_block1_11forc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result92__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value108=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value107=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "11for.c", 212)))),(struct sNode*)come_increment_ref_count(result_112),(_Bool)1)));
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, ((struct sNode*)result_112)->finalize, ((struct sNode*)result_112)->_protocol_obj, 0, 0, 0); } 
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, ((struct sNode*)result_112)->finalize, ((struct sNode*)result_112)->_protocol_obj, 0, 0, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional191;
int default_value_106;
int __result83__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_106, 0, sizeof(int));
            if(_if_conditional191=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                __freed_obj__ = 0;
                memset(&default_value_106,0,sizeof(int));
                __freed_obj__ = 0;
                __result83__ = default_value_106;
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
            }
            else {
                __result84__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result84__;
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

static void sForNode_finalize(struct sForNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional195=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional195) {
                if(((struct sForNode*)come_null_check(self, "sForNode_finalize", 0))->mExpressionNode && !__freed_obj__) { ((struct sForNode*)come_null_check(self, "sForNode_finalize", 0))->mExpressionNode = come_decrement_ref_count(((struct sForNode*)come_null_check(self, "sForNode_finalize", 0))->mExpressionNode, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 0))->mExpressionNode)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 0))->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional196=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional196) {
                if(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode2 && !__freed_obj__) { ((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode2 = come_decrement_ref_count(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode2, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode2)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 1))->mExpressionNode2)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional197=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_finalize", 3))->mExpressionNode3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional197) {
                if(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode3 && !__freed_obj__) { ((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode3 = come_decrement_ref_count(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode3, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode3)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(self, "sForNode_finalize", 2))->mExpressionNode3)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional198=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_finalize", 4))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                if(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sForNode*)come_null_check(self, "sForNode_finalize", 3))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional199=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_finalize", 5))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                if(((struct sForNode*)come_null_check(self, "sForNode_finalize", 4))->sname && !__freed_obj__) { ((struct sForNode*)come_null_check(self, "sForNode_finalize", 4))->sname = come_decrement_ref_count(((struct sForNode*)come_null_check(self, "sForNode_finalize", 4))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sForNode* sForNode_clone(struct sForNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional200;
struct sForNode* __result85__;
void* right_value94;
struct sForNode* result_111;
_Bool _if_conditional201;
void* right_value95;
struct sNode* __dec_obj49;
_Bool _if_conditional202;
void* right_value96;
struct sNode* __dec_obj50;
_Bool _if_conditional203;
void* right_value97;
struct sNode* __dec_obj51;
_Bool _if_conditional204;
void* right_value98;
struct sBlock* __dec_obj52;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value99;
char* __dec_obj53;
struct sForNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct sForNode*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
            if(_if_conditional200=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional200) {
                __result85__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_111=(struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value94=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "sForNode_clone", 3))));
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional201=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_clone", 5))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional201) {
                __dec_obj49=((struct sForNode*)come_null_check(result_111, "sForNode_clone", 4))->mExpressionNode;
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 4))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(((struct sForNode*)come_null_check(self, "sForNode_clone", 4))->mExpressionNode))));
                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional202=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_clone", 6))->mExpressionNode2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional202) {
                __dec_obj50=((struct sForNode*)come_null_check(result_111, "sForNode_clone", 5))->mExpressionNode2;
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 5))->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(((struct sForNode*)come_null_check(self, "sForNode_clone", 5))->mExpressionNode2))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional203=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_clone", 7))->mExpressionNode3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional203) {
                __dec_obj51=((struct sForNode*)come_null_check(result_111, "sForNode_clone", 6))->mExpressionNode3;
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 6))->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(((struct sForNode*)come_null_check(self, "sForNode_clone", 6))->mExpressionNode3))));
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional204=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_clone", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional204) {
                __dec_obj52=((struct sForNode*)come_null_check(result_111, "sForNode_clone", 7))->mBlock;
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 7))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value98=sBlock_clone(((struct sForNode*)come_null_check(self, "sForNode_clone", 7))->mBlock))));
                if(__dec_obj52) { come_call_finalizer(sBlock_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional205=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional205) {
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 8))->sline=((struct sForNode*)come_null_check(self, "sForNode_clone", 8))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional206=self!=((void*)0)&&((struct sForNode*)come_null_check(self, "sForNode_clone", 10))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional206) {
                __dec_obj53=((struct sForNode*)come_null_check(result_111, "sForNode_clone", 9))->sname;
                ((struct sForNode*)come_null_check(result_111, "sForNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(((struct sForNode*)come_null_check(self, "sForNode_clone", 9))->sname))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result86__ = __result_obj__ = result_111;
            if(result_111 && !__freed_obj__) { come_call_finalizer(sForNode_finalize,result_111, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result86__;
            __freed_obj__ = 0;
            if(result_111 && !__freed_obj__) { come_call_finalizer(sForNode_finalize,result_111, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj54;
struct optional$2sNodephbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj54=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result87__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result87__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional207=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional207) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sNode* __result89__;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional208=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional208) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional209=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional209) {
                __result89__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result89__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result90__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
}

void method_block1_11forc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value104;
void* right_value105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("11for.c", 210), ((struct optional$2voidpbool*)(right_value105=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value104=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "11for.c", 210))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result91__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result91__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

