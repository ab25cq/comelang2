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
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
void show_type(struct sType* type, struct sInfo* info);

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
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
static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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












void come_init_v3(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
void* right_value1;
struct buffer* buf_8;
char* class_name_9;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value2;
void* right_value3;
void* right_value4;
struct optional$2charphbool* __result15__;
void* right_value5;
struct CVALUE* come_value_10;
void* right_value6;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value7;
char* result_type_str_17;
int j_18;
struct list$1sTypeph* o2_saved_19;
struct sType* it_22;
_Bool _for_condtionalA2;
void* right_value8;
char* param_type_str_25;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value9;
void* right_value10;
void* right_value11;
struct optional$2charphbool* __result25__;
_Bool _if_conditional55;
int i_26;
_Bool _for_condtionalA3;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value12;
void* right_value13;
void* right_value14;
struct optional$2charphbool* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&buf_8, 0, sizeof(struct buffer*));
memset(&class_name_9, 0, sizeof(char*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&come_value_10, 0, sizeof(struct CVALUE*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_type_str_17, 0, sizeof(char*));
memset(&j_18, 0, sizeof(int));
memset(&o2_saved_19, 0, sizeof(struct list$1sTypeph*));
memset(&it_22, 0, sizeof(struct sType*));
memset(&right_value8, 0, sizeof(void*));
memset(&param_type_str_25, 0, sizeof(char*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&i_26, 0, sizeof(int));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    buf_8=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    class_name_9=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 17))->mClass, "03transpile2.c", 17))->mName;
    __freed_obj__ = 0;
    if(_if_conditional5=((struct sType*)come_null_check(type, "03transpile2.c", 31))->mAlignas,    __freed_obj__ = 0, 
    _if_conditional5) {
        if(_if_conditional6=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional6) {
            printf("_Alignas error\n");
            __freed_obj__ = 0;
            __result15__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 22), ((struct optional$2charphbool*)(right_value4=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value3=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 22))),(char*)come_increment_ref_count(((char*)(right_value2=__builtin_string("")))),(_Bool)0))));
            if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_10=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value5=get_value_from_stack(-1,info))));
        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 28)),((char*)(right_value6=xsprintf("_Alignas(%s) ",((struct CVALUE*)come_null_check(come_value_10, "03transpile2.c", 28))->c_value))));
        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(come_value_10 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_10, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional26=((struct sType*)come_null_check(type, "03transpile2.c", 35))->mStatic&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mStruct&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mUnion,    __freed_obj__ = 0, 
    _if_conditional26) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 32)),"static ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional27=((struct sType*)come_null_check(type, "03transpile2.c", 39))->mConstant,    __freed_obj__ = 0, 
    _if_conditional27) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 36)),"const ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional28=((struct sType*)come_null_check(type, "03transpile2.c", 44))->mUnsigned,    __freed_obj__ = 0, 
    _if_conditional28) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 40)),"unsigned ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional29=((struct sType*)come_null_check(type, "03transpile2.c", 48))->mShort,    __freed_obj__ = 0, 
    _if_conditional29) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 45)),"short ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional30=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"va_list"),    __freed_obj__ = 0, 
    _if_conditional30) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 49)),"va_list");
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional31=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"__builtin_va_list"),        __freed_obj__ = 0, 
        _if_conditional31) {
            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 52)),"__builtin_va_list");
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional32=charp_operator_equals(class_name_9,"__builtin_va_list"),            __freed_obj__ = 0, 
            _if_conditional32) {
                if(_if_conditional33=in_header,                __freed_obj__ = 0, 
                _if_conditional33) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 56)),class_name_9);
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 59)),"va_list");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional34=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mStruct,                __freed_obj__ = 0, 
                _if_conditional34) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 63)),"struct ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 64)),class_name_9);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional35=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mUnion,                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 67)),"union ");
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 68)),class_name_9);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional36=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mEnum,                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 71)),"enum ");
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 72)),class_name_9);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional37=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLongLong,                            __freed_obj__ = 0, 
                            _if_conditional37) {
                                if(_if_conditional38=charp_operator_equals(class_name_9,"int"),                                __freed_obj__ = 0, 
                                _if_conditional38) {
                                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 76)),"long long int");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional39=charp_operator_equals(class_name_9,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional39) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 79)),"long long");
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional40=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLong,                                __freed_obj__ = 0, 
                                _if_conditional40) {
                                    if(_if_conditional41=charp_operator_equals(class_name_9,"int"),                                    __freed_obj__ = 0, 
                                    _if_conditional41) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 84)),"long int");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional42=charp_operator_equals(class_name_9,"long"),                                        __freed_obj__ = 0, 
                                        _if_conditional42) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 87)),"long long");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional43=charp_operator_equals(class_name_9,"double"),                                            __freed_obj__ = 0, 
                                            _if_conditional43) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 90)),"long double");
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional44=charp_operator_equals(class_name_9,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional44) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 94)),"long");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional45=charp_operator_equals(class_name_9,"__uint128_t"),                                        __freed_obj__ = 0, 
                                        _if_conditional45) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 97)),"__uint128_t");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional46=charp_operator_equals(class_name_9,"bool"),                                            __freed_obj__ = 0, 
                                            _if_conditional46) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 100)),"_Bool");
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional47=charp_operator_equals(class_name_9,"lambda"),                                                __freed_obj__ = 0, 
                                                _if_conditional47) {
                                                    result_type_str_17=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 103),((struct optional$2charphbool*)(right_value7=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 103))->mResultType, "03transpile2.c", 103))->v1,in_header,(_Bool)0,(_Bool)0,info))))));
                                                    come_pop_stackframe();
                                                    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 104)),result_type_str_17);
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 105))," (*)(");
                                                    __freed_obj__ = 0;
                                                    j_18=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    o2_saved_19=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 118))->mParamTypes)),it_22=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_19), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA2=                                                    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_19), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA2;                                                    it_22=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_19), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        param_type_str_25=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 109),((struct optional$2charphbool*)(right_value8=make_type_name_string(it_22,in_header,(_Bool)0,(_Bool)0,info))))));
                                                        come_pop_stackframe();
                                                        if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 111)),param_type_str_25);
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional53=j_18!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 116))->mParamTypes, "03transpile2.c", 116)))-1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional53) {
                                                            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 114)),",");
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        j_18++;
                                                        __freed_obj__ = 0;
                                                        if(param_type_str_25 && !__freed_obj__) { param_type_str_25 = come_decrement_ref_count(param_type_str_25, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_19 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 118)),")");
                                                    __freed_obj__ = 0;
                                                    if(result_type_str_17 && !__freed_obj__) { result_type_str_17 = come_decrement_ref_count(result_type_str_17, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    if(_if_conditional54=class_name_9==((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional54) {
                                                        err_msg(info,"class name is null");
                                                        __freed_obj__ = 0;
                                                        __result25__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 123), ((struct optional$2charphbool*)(right_value11=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value10=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 123))),(char*)come_increment_ref_count(((char*)(right_value9=__builtin_string("")))),(_Bool)0))));
                                                        if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
                                                        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
                                                        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result25__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 125)),class_name_9);
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
    if(_if_conditional55=((struct sType*)come_null_check(type, "03transpile2.c", 134))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_9,"lambda")&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional55) {
        for(
        i_26=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_26<((struct sType*)come_null_check(type, "03transpile2.c", 132))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_26++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 130)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional56=array_cast_pointer&&list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mArrayNum, "03transpile2.c", 138)))>0&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional56) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 135)),"*");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional57=((struct sType*)come_null_check(type, "03transpile2.c", 142))->mRestrict,    __freed_obj__ = 0, 
    _if_conditional57) {
        buffer_append_str(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 139)),"restrict");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result27__ = __result_obj__ = ((struct optional$2charphbool*)(right_value14=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value13=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 142)))),(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(((struct buffer*)come_null_check(buf_8, "03transpile2.c", 142)))))),(_Bool)1)));
    if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
    if(buf_8 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj1;
struct optional$2charphbool* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj1=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result14__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result14__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional8=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
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
                    if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional10) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional12) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional13) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional14) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional16) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional19) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional23) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional24) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
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
                            if(_if_conditional11=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
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
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sTypeph*));
                            it_11=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional1=it_11!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional1) {
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
                                    if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
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
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                            it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional2=it_13!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional2) {
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
                                    if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
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
_Bool _while_condtional3;
struct list_item$1charph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1charph*));
                            it_15=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional3=it_15!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional3) {
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
                                    if(_if_conditional20=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional20) {
                                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional48;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional48=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                                                        __freed_obj__ = 0, 
                                                        _if_conditional48) {
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
                                                        __result16__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                                                        __freed_obj__ = 0;
                                                        return __result16__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional49;
struct sType* result_20;
struct sType* __result17__;
_Bool _if_conditional50;
struct sType* __result18__;
struct sType* result_21;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional49) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result17__ = __result_obj__ = result_20;
                                                            __freed_obj__ = 0;
                                                            return __result17__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional50=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional50) {
                                                            __result18__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                                            __freed_obj__ = 0;
                                                            return __result18__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result19__ = __result_obj__ = result_21;
                                                        __freed_obj__ = 0;
                                                        return __result19__;
                                                        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result20__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result20__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional51;
struct sType* result_23;
struct sType* __result21__;
_Bool _if_conditional52;
struct sType* __result22__;
struct sType* result_24;
struct sType* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(struct sType*));
memset(&result_24, 0, sizeof(struct sType*));
                                                        if(_if_conditional51=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional51) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_23,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result21__ = __result_obj__ = result_23;
                                                            __freed_obj__ = 0;
                                                            return __result21__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional52=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional52) {
                                                            __result22__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                                            __freed_obj__ = 0;
                                                            return __result22__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_24,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result23__ = __result_obj__ = result_24;
                                                        __freed_obj__ = 0;
                                                        return __result23__;
                                                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            __result24__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                                            __freed_obj__ = 0;
                                                            return __result24__;
                                                            __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result26__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result26__;
        __freed_obj__ = 0;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value15;
void* right_value16;
struct buffer* buf_27;
char* class_name_28;
_Bool _if_conditional58;
int i_29;
_Bool _for_condtionalA4;
void* right_value21;
struct sType* gtype_34;
void* right_value22;
_Bool _if_conditional63;
_Bool _if_conditional64;
int i_35;
_Bool _for_condtionalA5;
_Bool _if_conditional65;
void* right_value23;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&buf_27, 0, sizeof(struct buffer*));
memset(&class_name_28, 0, sizeof(char*));
memset(&i_29, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
memset(&gtype_34, 0, sizeof(struct sType*));
memset(&right_value22, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    buf_27=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    class_name_28=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 149))->mClass, "03transpile2.c", 149))->mName;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 151)),class_name_28);
    __freed_obj__ = 0;
    if(_if_conditional58=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 168))->mGenericsTypes, "03transpile2.c", 168)))>0,    __freed_obj__ = 0, 
    _if_conditional58) {
        buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 154)),"<");
        __freed_obj__ = 0;
        for(
        i_29=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        i_29<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 165))->mGenericsTypes, "03transpile2.c", 165))) ,        __freed_obj__ = 0, 
        _for_condtionalA4;        i_29++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            gtype_34=optional$2sTypephbool_value((come_push_stackframe("03transpile2.c", 156),((struct optional$2sTypephbool*)(right_value21=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(type, "03transpile2.c", 156))->mGenericsTypes,i_29)))));
            come_pop_stackframe();
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 158)),((char*)(right_value22=make_come_type_name_string(gtype_34,info))));
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional63=i_29!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 163))->mGenericsTypes, "03transpile2.c", 163)))-1,            __freed_obj__ = 0, 
            _if_conditional63) {
                buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 161)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 165)),">");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional64=((struct sType*)come_null_check(type, "03transpile2.c", 174))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_28,"lambda"),    __freed_obj__ = 0, 
    _if_conditional64) {
        for(
        i_35=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        i_35<((struct sType*)come_null_check(type, "03transpile2.c", 172))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA5;        i_35++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 170)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional65=((struct sType*)come_null_check(type, "03transpile2.c", 178))->mHeap,    __freed_obj__ = 0, 
    _if_conditional65) {
        buffer_append_str(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 175)),"%");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result33__ = __result_obj__ = ((char*)(right_value23=buffer_to_string(((struct buffer*)come_null_check(buf_27, "03transpile2.c", 178)))));
    if(buf_27 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
    if(buf_27 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional59;
struct list_item$1sTypeph* it_30;
int i_31;
_Bool _while_condtional4;
_Bool _if_conditional60;
void* right_value17;
void* right_value18;
struct optional$2sTypephbool* __result29__;
struct sType* default_value_32;
void* right_value19;
void* right_value20;
struct optional$2sTypephbool* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_30, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_31, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&default_value_32, 0, sizeof(struct sType*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
                if(_if_conditional59=position<0,                __freed_obj__ = 0, 
                _if_conditional59) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_30=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_31=0;
                __freed_obj__ = 0;
                while(_while_condtional4=it_30!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    if(_if_conditional60=position==i_31,                    __freed_obj__ = 0, 
                    _if_conditional60) {
                        __result29__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value18=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value17=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_30, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result29__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_30=((struct list_item$1sTypeph*)come_null_check(it_30, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_31++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_32,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result30__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value20=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value19=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_32),(_Bool)0))));
                if(default_value_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result30__;
                __freed_obj__ = 0;
                if(default_value_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj2;
struct optional$2sTypephbool* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj2=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result28__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result28__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional61=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional61) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional62;
struct sType* default_value_33;
struct sType* __result31__;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(struct sType*));
                if(_if_conditional62=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    __freed_obj__ = 0;
                    memset(&default_value_33,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result31__ = __result_obj__ = default_value_33;
                    __freed_obj__ = 0;
                    return __result31__;
                    __freed_obj__ = 0;
                }
                else {
                    __result32__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    come_clear_stackframe();
    puts(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 183),((struct optional$2charphbool*)(right_value24=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
}

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
void* right_value26;
struct buffer* buf_36;
_Bool _if_conditional66;
void* right_value27;
void* right_value28;
void* right_value29;
struct optional$2charphbool* __result34__;
_Bool _if_conditional67;
void* right_value30;
int i_37;
struct list$1sTypeph* o2_saved_38;
struct sType* it_39;
_Bool _for_condtionalA6;
void* right_value31;
_Bool _if_conditional68;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
struct optional$2charphbool* __result35__;
void* right_value36;
void* right_value37;
int i_40;
struct list$1sTypeph* o2_saved_41;
struct sType* it_42;
_Bool _for_condtionalA7;
void* right_value38;
_Bool _if_conditional69;
void* right_value39;
void* right_value40;
void* right_value41;
struct optional$2charphbool* __result36__;
void* right_value42;
void* right_value43;
void* right_value44;
struct optional$2charphbool* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_36, 0, sizeof(struct buffer*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&i_37, 0, sizeof(int));
memset(&o2_saved_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct sType*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&i_40, 0, sizeof(int));
memset(&o2_saved_41, 0, sizeof(struct list$1sTypeph*));
memset(&it_42, 0, sizeof(struct sType*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
    buf_36=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional66=((struct sType*)come_null_check(type, "03transpile2.c", 194))->mResultType==((void*)0),    __freed_obj__ = 0, 
    _if_conditional66) {
        err_msg(info,"invalid lambda type");
        __freed_obj__ = 0;
        __result34__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 191), ((struct optional$2charphbool*)(right_value29=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value28=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 191))),(char*)come_increment_ref_count(((char*)(right_value27=__builtin_string("")))),(_Bool)0))));
        if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result34__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1, "03transpile2.c", 230))->mClass, "03transpile2.c", 230))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional67) {
        buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 196)),((char*)(right_value30=xsprintf("(*%s)(",var_name))));
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_37=0;
        __freed_obj__ = 0;
        for(
        o2_saved_38=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 208))->mParamTypes)),it_39=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it_39=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 200)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 200),((struct optional$2charphbool*)(right_value31=make_type_name_string(it_39,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional68=i_37!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 205))->mParamTypes, "03transpile2.c", 205)))-1,            __freed_obj__ = 0, 
            _if_conditional68) {
                buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 202)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_37++;
            __freed_obj__ = 0;
        }
        if(o2_saved_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 208)),")");
        __freed_obj__ = 0;
        __result35__ = __result_obj__ = ((struct optional$2charphbool*)(right_value35=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value34=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 210)))),(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 210),((struct optional$2charphbool*)(right_value33=make_lambda_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 210))->mResultType, "03transpile2.c", 210))->v1,((char*)(right_value32=buffer_to_string(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 210))))),info)))))),(_Bool)1)));
        if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result35__;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 213)),((char*)(right_value37=xsprintf("%s (*%s)(",optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 213),((struct optional$2charphbool*)(right_value36=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 213))->mResultType, "03transpile2.c", 213))->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))))),var_name))));
        come_pop_stackframe();
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        i_40=0;
        __freed_obj__ = 0;
        for(
        o2_saved_41=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 225))->mParamTypes)),it_42=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_41), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_41), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        _for_condtionalA7;        it_42=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_41), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 217)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 217),((struct optional$2charphbool*)(right_value38=make_type_name_string(it_42,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional69=i_40!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 222))->mParamTypes, "03transpile2.c", 222)))-1,            __freed_obj__ = 0, 
            _if_conditional69) {
                buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 219)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_40++;
            __freed_obj__ = 0;
        }
        if(o2_saved_41 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_41, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 225)),")");
        __freed_obj__ = 0;
        __result36__ = __result_obj__ = ((struct optional$2charphbool*)(right_value41=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value40=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 227)))),(char*)come_increment_ref_count(((char*)(right_value39=buffer_to_string(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 227)))))),(_Bool)1)));
        if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result36__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = ((struct optional$2charphbool*)(right_value44=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value43=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 230)))),(char*)come_increment_ref_count(((char*)(right_value42=buffer_to_string(((struct buffer*)come_null_check(buf_36, "03transpile2.c", 230)))))),(_Bool)1)));
    if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
    if(buf_36 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value45;
void* right_value46;
struct buffer* buf_43;
_Bool _if_conditional70;
void* right_value47;
char* str_44;
_Bool _if_conditional71;
void* right_value48;
char* str_45;
_Bool _if_conditional72;
_Bool _if_conditional73;
void* right_value49;
void* right_value50;
void* right_value51;
struct optional$2charphbool* __result38__;
void* right_value52;
struct CVALUE* come_value_46;
void* right_value53;
char* type_str_47;
void* right_value54;
void* right_value55;
_Bool _if_conditional74;
void* right_value56;
_Bool _if_conditional75;
void* right_value57;
_Bool _if_conditional76;
void* right_value58;
char* type_str_48;
_Bool _if_conditional77;
void* right_value59;
_Bool _if_conditional78;
void* right_value60;
char* type_str_49;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct list$1sNodeph* o2_saved_50;
struct sNode* it_53;
_Bool _for_condtionalA8;
_Bool _if_conditional85;
void* right_value61;
void* right_value62;
void* right_value63;
struct optional$2charphbool* __result46__;
void* right_value64;
struct CVALUE* cvalue_56;
void* right_value65;
_Bool _if_conditional86;
void* right_value66;
void* right_value67;
char* type_str_57;
_Bool _if_conditional87;
void* right_value68;
void* right_value69;
void* right_value70;
struct optional$2charphbool* __result47__;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value71;
void* right_value72;
void* right_value73;
void* right_value74;
struct optional$2charphbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&buf_43, 0, sizeof(struct buffer*));
memset(&right_value47, 0, sizeof(void*));
memset(&str_44, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&str_45, 0, sizeof(char*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&come_value_46, 0, sizeof(struct CVALUE*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_str_47, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&type_str_48, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&type_str_49, 0, sizeof(char*));
memset(&o2_saved_50, 0, sizeof(struct list$1sNodeph*));
memset(&it_53, 0, sizeof(struct sNode*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&cvalue_56, 0, sizeof(struct CVALUE*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&type_str_57, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
    buf_43=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional70=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda")&&((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName,""),    __freed_obj__ = 0, 
    _if_conditional70) {
        str_44=(char*)come_increment_ref_count(((char*)(right_value47=header_lambda(type,(char*)come_increment_ref_count(((struct sType*)come_null_check(type, "03transpile2.c", 240))->mAsmName),info))));
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 242)),str_44);
        __freed_obj__ = 0;
        if(str_44 && !__freed_obj__) { str_44 = come_decrement_ref_count(str_44, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional71=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional71) {
            str_45=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 245),((struct optional$2charphbool*)(right_value48=make_lambda_type_name_string(type,name,info))))));
            come_pop_stackframe();
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 247)),str_45);
            __freed_obj__ = 0;
            if(str_45 && !__freed_obj__) { str_45 = come_decrement_ref_count(str_45, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional72=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                if(_if_conditional73=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional73) {
                    err_msg(info,"invalid bit field number");
                    __freed_obj__ = 0;
                    __result38__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 252), ((struct optional$2charphbool*)(right_value51=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value50=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 252))),(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string("")))),(_Bool)0))));
                    if(buf_43 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result38__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                type_str_47=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 258),((struct optional$2charphbool*)(right_value53=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 259)),((char*)(right_value54=xsprintf("%s ",type_str_47))));
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 260)),((char*)(right_value55=xsprintf("%s:%s",name,((struct CVALUE*)come_null_check(come_value_46, "03transpile2.c", 260))->c_value))));
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional74=((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional74) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 263)),((char*)(right_value56=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 263))->mAsmName))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional75=((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional75) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 267)),((char*)(right_value57=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 267))->mAsmName))));
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(come_value_46 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_47 && !__freed_obj__) { type_str_47 = come_decrement_ref_count(type_str_47, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional76=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mOmitArrayNum,                __freed_obj__ = 0, 
                _if_conditional76) {
                    type_str_48=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 271),((struct optional$2charphbool*)(right_value58=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 273)),type_str_48);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 275))," ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 276)),name);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 278)),"[]");
                    __freed_obj__ = 0;
                    if(_if_conditional77=((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName,""),                    __freed_obj__ = 0, 
                    _if_conditional77) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 281)),((char*)(right_value59=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 281))->mAsmName))));
                        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_str_48 && !__freed_obj__) { type_str_48 = come_decrement_ref_count(type_str_48, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional78=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mArrayNum, "03transpile2.c", 336)))>0,                    __freed_obj__ = 0, 
                    _if_conditional78) {
                        type_str_49=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 285),((struct optional$2charphbool*)(right_value60=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 287)),type_str_49);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 289))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional79=((struct sType*)come_null_check(type, "03transpile2.c", 293))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional79) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 291)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 293)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional80=((struct sType*)come_null_check(type, "03transpile2.c", 298))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional80) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 295)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        for(
                        o2_saved_50=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 309))->mArrayNum)),it_53=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_50), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA8=                        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_50), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA8;                        it_53=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_50), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional85=!((struct sNode*)come_null_check(it_53, "03transpile2.c", 303))->compile(((struct sNode*)come_null_check(it_53, "03transpile2.c", 303))->_protocol_obj,info),                            __freed_obj__ = 0, 
                            _if_conditional85) {
                                err_msg(info,"invalid array number");
                                __freed_obj__ = 0;
                                __result46__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 301), ((struct optional$2charphbool*)(right_value63=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value62=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 301))),(char*)come_increment_ref_count(((char*)(right_value61=__builtin_string("")))),(_Bool)0))));
                                if(o2_saved_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_49 && !__freed_obj__) { type_str_49 = come_decrement_ref_count(type_str_49, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_43 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result46__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            cvalue_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=get_value_from_stack(-1,info))));
                            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            dec_stack_ptr(1,info);
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 306)),((char*)(right_value65=xsprintf("[%s]",((struct CVALUE*)come_null_check(cvalue_56, "03transpile2.c", 306))->c_value))));
                            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(cvalue_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_50, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional86=((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional86) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 310)),((char*)(right_value66=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 310))->mAsmName))));
                            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_49 && !__freed_obj__) { type_str_49 = come_decrement_ref_count(type_str_49, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        type_str_57=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 314),((struct optional$2charphbool*)(right_value67=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional87=string_operator_equals(type_str_57,""),                        __freed_obj__ = 0, 
                        _if_conditional87) {
                            __result47__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 317), ((struct optional$2charphbool*)(right_value70=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value69=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 317))),(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string("")))),(_Bool)0))));
                            if(type_str_57 && !__freed_obj__) { type_str_57 = come_decrement_ref_count(type_str_57, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_43 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result47__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 320)),type_str_57);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 322))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional88=((struct sType*)come_null_check(type, "03transpile2.c", 326))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional88) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 324)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 326)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional89=((struct sType*)come_null_check(type, "03transpile2.c", 331))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional89) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 328)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional90=((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional90) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 332)),((char*)(right_value71=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 332))->mAsmName))));
                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_57 && !__freed_obj__) { type_str_57 = come_decrement_ref_count(type_str_57, (void*)0, (void*)0, 0, 0, 0); }
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
    __result48__ = __result_obj__ = ((struct optional$2charphbool*)(right_value74=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value73=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value72=buffer_to_string(((struct buffer*)come_null_check(buf_43, "03transpile2.c", 336)))))),(_Bool)1)));
    if(buf_43 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
    if(buf_43 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional81;
struct sNode* result_51;
struct sNode* __result39__;
_Bool _if_conditional82;
struct sNode* __result40__;
struct sNode* result_52;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_51, 0, sizeof(struct sNode*));
memset(&result_52, 0, sizeof(struct sNode*));
                            if(_if_conditional81=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional81) {
                                __freed_obj__ = 0;
                                memset(&result_51,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result39__ = __result_obj__ = result_51;
                                __freed_obj__ = 0;
                                return __result39__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional82=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,                            __freed_obj__ = 0, 
                            _if_conditional82) {
                                __result40__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                __freed_obj__ = 0;
                                return __result40__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_52,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result41__ = __result_obj__ = result_52;
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result42__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result42__;
                            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional83;
struct sNode* result_54;
struct sNode* __result43__;
_Bool _if_conditional84;
struct sNode* __result44__;
struct sNode* result_55;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_54, 0, sizeof(struct sNode*));
memset(&result_55, 0, sizeof(struct sNode*));
                            if(_if_conditional83=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional83) {
                                __freed_obj__ = 0;
                                memset(&result_54,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result43__ = __result_obj__ = result_54;
                                __freed_obj__ = 0;
                                return __result43__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional84=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,                            __freed_obj__ = 0, 
                            _if_conditional84) {
                                __result44__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                __freed_obj__ = 0;
                                return __result44__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_55,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result45__ = __result_obj__ = result_55;
                            __freed_obj__ = 0;
                            return __result45__;
                            __freed_obj__ = 0;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value75;
void* right_value76;
struct buffer* output_58;
_Bool _if_conditional91;
void* right_value77;
void* right_value78;
struct buffer* output2_59;
int i_60;
struct list$1sTypeph* o2_saved_61;
struct sType* it_62;
_Bool _for_condtionalA9;
void* right_value83;
char* name_66;
void* right_value84;
char* str_67;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value85;
void* right_value86;
char* str_68;
void* right_value87;
_Bool _if_conditional96;
void* right_value122;
struct sType* base_result_type_87;
void* right_value123;
void* right_value124;
struct list$1sNodeph* __dec_obj25;
void* right_value125;
char* result_type_str_88;
int i_89;
struct list$1sTypeph* o2_saved_90;
struct sType* it_91;
_Bool _for_condtionalA10;
void* right_value126;
char* name_92;
void* right_value127;
char* str_93;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value132;
struct sNode* node_98;
_Bool _if_conditional173;
void* right_value133;
void* right_value134;
void* right_value135;
char* __result74__;
void* right_value136;
struct CVALUE* cvalue_99;
void* right_value137;
void* right_value138;
void* right_value139;
char* result_type_str_100;
int i_101;
struct list$1sTypeph* o2_saved_102;
struct sType* it_103;
_Bool _for_condtionalA11;
void* right_value140;
char* name_104;
void* right_value141;
char* str_105;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&output_58, 0, sizeof(struct buffer*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&output2_59, 0, sizeof(struct buffer*));
memset(&i_60, 0, sizeof(int));
memset(&o2_saved_61, 0, sizeof(struct list$1sTypeph*));
memset(&it_62, 0, sizeof(struct sType*));
memset(&right_value83, 0, sizeof(void*));
memset(&name_66, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&str_67, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&str_68, 0, sizeof(char*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&base_result_type_87, 0, sizeof(struct sType*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&result_type_str_88, 0, sizeof(char*));
memset(&i_89, 0, sizeof(int));
memset(&o2_saved_90, 0, sizeof(struct list$1sTypeph*));
memset(&it_91, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&name_92, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&str_93, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&node_98, 0, sizeof(struct sNode*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&cvalue_99, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&result_type_str_100, 0, sizeof(char*));
memset(&i_101, 0, sizeof(int));
memset(&o2_saved_102, 0, sizeof(struct list$1sTypeph*));
memset(&it_103, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&name_104, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&str_105, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    output_58=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional91=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mResultType,    __freed_obj__ = 0, 
    _if_conditional91) {
        output2_59=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 345)),((struct sFun*)come_null_check(fun, "03transpile2.c", 345))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 346)),"(");
        __freed_obj__ = 0;
        i_60=0;
        __freed_obj__ = 0;
        for(
        o2_saved_61=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 366))->mParamTypes)),it_62=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_61), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_61), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_62=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_61), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_66=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 350),((struct optional$2charphbool*)(right_value83=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 350))->mParamNames,i_60)))));
            come_pop_stackframe();
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_67=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 352),((struct optional$2charphbool*)(right_value84=make_define_var(it_62,name_66,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 353)),str_67);
            __freed_obj__ = 0;
            if(_if_conditional94=i_60==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 364))->mParamTypes, "03transpile2.c", 364)))-1,            __freed_obj__ = 0, 
            _if_conditional94) {
                if(_if_conditional95=((struct sFun*)come_null_check(fun, "03transpile2.c", 359))->mVarArgs,                __freed_obj__ = 0, 
                _if_conditional95) {
                    buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 357)),", ...");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 361)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_60++;
            __freed_obj__ = 0;
            if(str_67 && !__freed_obj__) { str_67 = come_decrement_ref_count(str_67, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_61 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 366)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_68=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 368),((struct optional$2charphbool*)(right_value86=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 368))->mResultType,((char*)(right_value85=buffer_to_string(((struct buffer*)come_null_check(output2_59, "03transpile2.c", 368))))),info))))));
        come_pop_stackframe();
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 370)),str_68);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 374))->module, "03transpile2.c", 374))->mSourceHead, "03transpile2.c", 374)),((char*)(right_value87=buffer_to_string(((struct buffer*)come_null_check(output_58, "03transpile2.c", 374))))));
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 375))->module, "03transpile2.c", 375))->mSourceHead, "03transpile2.c", 375)),";\n");
        __freed_obj__ = 0;
        if(output2_59 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_68 && !__freed_obj__) { str_68 = come_decrement_ref_count(str_68, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional96=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mArrayNum, "03transpile2.c", 455)))>0,        __freed_obj__ = 0, 
        _if_conditional96) {
            base_result_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 378))->mResultType))));
            if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj25=((struct sType*)come_null_check(base_result_type_87, "03transpile2.c", 379))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_87, "03transpile2.c", 379))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value123=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj25) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_88=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 381),((struct optional$2charphbool*)(right_value125=make_type_name_string(base_result_type_87,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 383)),result_type_str_88);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 384))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 386)),((struct sFun*)come_null_check(fun, "03transpile2.c", 386))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 387)),"(");
            __freed_obj__ = 0;
            i_89=0;
            __freed_obj__ = 0;
            for(
            o2_saved_90=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mParamTypes)),it_91=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_90), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA10=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_90), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            _for_condtionalA10;            it_91=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_90), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_92=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 391),((struct optional$2charphbool*)(right_value126=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 391))->mParamNames,i_89)))));
                come_pop_stackframe();
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_93=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 393),((struct optional$2charphbool*)(right_value127=make_define_var(it_91,name_92,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 394)),str_93);
                __freed_obj__ = 0;
                if(_if_conditional167=i_89==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 405))->mParamTypes, "03transpile2.c", 405)))-1,                __freed_obj__ = 0, 
                _if_conditional167) {
                    if(_if_conditional168=((struct sFun*)come_null_check(fun, "03transpile2.c", 400))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 398)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 402)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_89++;
                __freed_obj__ = 0;
                if(str_93 && !__freed_obj__) { str_93 = come_decrement_ref_count(str_93, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_90 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_90, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_98=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 408),((struct optional$2sNodephbool*)(right_value132=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mResultType, "03transpile2.c", 408))->mArrayNum,0)))));
            come_pop_stackframe();
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional173=!((struct sNode*)come_null_check(node_98, "03transpile2.c", 414))->compile(((struct sNode*)come_null_check(node_98, "03transpile2.c", 414))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional173) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result74__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 412), ((struct optional$2charphbool*)(right_value135=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value134=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 412))),(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_88 && !__freed_obj__) { result_type_str_88 = come_decrement_ref_count(result_type_str_88, (void*)0, (void*)0, 0, 0, 0); }
                if(output_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))));
            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 417)),((char*)(right_value137=xsprintf("))[%s]",((struct CVALUE*)come_null_check(cvalue_99, "03transpile2.c", 417))->c_value))));
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 419))->module, "03transpile2.c", 419))->mSourceHead, "03transpile2.c", 419)),((char*)(right_value138=buffer_to_string(((struct buffer*)come_null_check(output_58, "03transpile2.c", 419))))));
            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 420))->module, "03transpile2.c", 420))->mSourceHead, "03transpile2.c", 420)),";\n");
            __freed_obj__ = 0;
            if(base_result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_88 && !__freed_obj__) { result_type_str_88 = come_decrement_ref_count(result_type_str_88, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_99, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_100=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 423),((struct optional$2charphbool*)(right_value139=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 423))->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 425)),result_type_str_100);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 426))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 428)),((struct sFun*)come_null_check(fun, "03transpile2.c", 428))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 429)),"(");
            __freed_obj__ = 0;
            i_101=0;
            __freed_obj__ = 0;
            for(
            o2_saved_102=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 449))->mParamTypes)),it_103=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_102), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA11=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_102), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            _for_condtionalA11;            it_103=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_102), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_104=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 433),((struct optional$2charphbool*)(right_value140=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 433))->mParamNames,i_101)))));
                come_pop_stackframe();
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_105=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 435),((struct optional$2charphbool*)(right_value141=make_define_var(it_103,name_104,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 436)),str_105);
                __freed_obj__ = 0;
                if(_if_conditional174=i_101==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 446))->mParamTypes, "03transpile2.c", 446)))-1,                __freed_obj__ = 0, 
                _if_conditional174) {
                    if(_if_conditional175=((struct sFun*)come_null_check(fun, "03transpile2.c", 442))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 440)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 444)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_101++;
                __freed_obj__ = 0;
                if(str_105 && !__freed_obj__) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_102 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_102, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 449)),")");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 451))->module, "03transpile2.c", 451))->mSourceHead, "03transpile2.c", 451)),((char*)(right_value142=buffer_to_string(((struct buffer*)come_null_check(output_58, "03transpile2.c", 451))))));
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 452))->module, "03transpile2.c", 452))->mSourceHead, "03transpile2.c", 452)),";\n");
            __freed_obj__ = 0;
            if(result_type_str_100 && !__freed_obj__) { result_type_str_100 = come_decrement_ref_count(result_type_str_100, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 455)),"{\n");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 457)),((char*)(right_value143=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 457))->mSourceHead, "03transpile2.c", 457))))));
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 458)),((char*)(right_value144=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 458))->mSourceHead2, "03transpile2.c", 458))))));
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 459)),((char*)(right_value145=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 459))->mSource, "03transpile2.c", 459))))));
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_58, "03transpile2.c", 461)),"}\n");
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = ((char*)(right_value146=buffer_to_string(((struct buffer*)come_null_check(output_58, "03transpile2.c", 463)))));
    if(output_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(output_58 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional92;
struct list_item$1charph* it_63;
int i_64;
_Bool _while_condtional5;
_Bool _if_conditional93;
void* right_value79;
void* right_value80;
struct optional$2charphbool* __result49__;
char* default_value_65;
void* right_value81;
void* right_value82;
struct optional$2charphbool* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_63, 0, sizeof(struct list_item$1charph*));
memset(&i_64, 0, sizeof(int));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&default_value_65, 0, sizeof(char*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
                if(_if_conditional92=position<0,                __freed_obj__ = 0, 
                _if_conditional92) {
                    position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_63=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_64=0;
                __freed_obj__ = 0;
                while(_while_condtional5=it_63!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    if(_if_conditional93=position==i_64,                    __freed_obj__ = 0, 
                    _if_conditional93) {
                        __result49__ = __result_obj__ = ((struct optional$2charphbool*)(right_value80=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value79=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_63, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result49__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_63=((struct list_item$1charph*)come_null_check(it_63, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_64++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_65,0,sizeof(char*));
                __freed_obj__ = 0;
                __result50__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value82=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value81=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_65),(_Bool)0))));
                if(default_value_65 && !__freed_obj__) { default_value_65 = come_decrement_ref_count(default_value_65, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
                if(default_value_65 && !__freed_obj__) { default_value_65 = come_decrement_ref_count(default_value_65, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional97;
struct sType* __result51__;
void* right_value88;
struct sType* result_69;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional103;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj5;
_Bool _if_conditional104;
void* right_value93;
char* __dec_obj6;
_Bool _if_conditional105;
void* right_value100;
struct list$1sTypeph* __dec_obj10;
_Bool _if_conditional109;
void* right_value108;
struct list$1sNodeph* __dec_obj14;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value109;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional124;
void* right_value116;
struct list$1charph* __dec_obj19;
_Bool _if_conditional128;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value118;
struct sNode* __dec_obj21;
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
void* right_value119;
struct sNode* __dec_obj22;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value120;
char* __dec_obj23;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value121;
char* __dec_obj24;
struct sType* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct sType*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
                if(_if_conditional97=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional97) {
                    __result51__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result51__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional98=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional98) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional99=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    __dec_obj4=((struct sType*)come_null_check(result_69, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    __dec_obj5=((struct sType*)come_null_check(result_69, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj5) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    __dec_obj6=((struct sType*)come_null_check(result_69, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    __dec_obj10=((struct sType*)come_null_check(result_69, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj10) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional109) {
                    __dec_obj14=((struct sType*)come_null_check(result_69, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj14) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional122=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional122) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional123=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional123) {
                    __dec_obj15=((struct sType*)come_null_check(result_69, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional124=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional124) {
                    __dec_obj19=((struct sType*)come_null_check(result_69, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj19) { come_call_finalizer(list$1charph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional128=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional128) {
                    __dec_obj20=((struct sType*)come_null_check(result_69, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj20) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional129=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional129) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional130=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional130) {
                    __dec_obj21=((struct sType*)come_null_check(result_69, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional131=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional131) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional132=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional132) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional133=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional133) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional134=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional134) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional135=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional135) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional136=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional136) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional137=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional137) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional138=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional138) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional139=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional139) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional140=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional140) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional141=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional141) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional142=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional142) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional143=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional143) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional144=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional144) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional145=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional145) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional146=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional146) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional147=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional148=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional148) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional149=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional149) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional150=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional150) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional151=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional151) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional152=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional152) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional153=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional153) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional154) {
                    __dec_obj22=((struct sType*)come_null_check(result_69, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional155=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional155) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional156=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional156) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional157) {
                    __dec_obj23=((struct sType*)come_null_check(result_69, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional158=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional158) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional159=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional159) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional160=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional161=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional162=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional162) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional163=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional163) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional164=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional165=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional165) {
                    ((struct sType*)come_null_check(result_69, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional166=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional166) {
                    __dec_obj24=((struct sType*)come_null_check(result_69, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_69, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result68__ = __result_obj__ = result_69;
                if(result_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result68__;
                __freed_obj__ = 0;
                if(result_69 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional100;
struct tuple1$1sTypeph* __result52__;
void* right_value89;
struct tuple1$1sTypeph* result_70;
_Bool _if_conditional102;
void* right_value90;
struct sType* __dec_obj3;
struct tuple1$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&result_70, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value90, 0, sizeof(void*));
                        if(_if_conditional100=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional100) {
                            __result52__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result52__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_70=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional102=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __dec_obj3=((struct tuple1$1sTypeph*)come_null_check(result_70, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_70, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result53__ = __result_obj__ = result_70;
                        if(result_70 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_70, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result53__;
                        __freed_obj__ = 0;
                        if(result_70 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_70, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional101=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional101) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional106;
struct list$1sTypeph* __result54__;
void* right_value94;
void* right_value95;
struct list$1sTypeph* result_71;
struct list_item$1sTypeph* it_72;
_Bool _while_condtional6;
void* right_value99;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value99, 0, sizeof(void*));
                        if(_if_conditional106=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional106) {
                            __result54__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result54__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_71=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value94=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_72=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional6=it_72!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional6) {
                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_71, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_72, "./comelang2.h", 192))->item)))));
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            it_72=((struct list_item$1sTypeph*)come_null_check(it_72, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result57__ = __result_obj__ = result_71;
                        if(result_71 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                        if(result_71 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result55__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result55__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional107;
void* right_value96;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj7;
_Bool _if_conditional108;
void* right_value97;
struct list_item$1sTypeph* litem_74;
struct sType* __dec_obj8;
void* right_value98;
struct list_item$1sTypeph* litem_75;
struct sType* __dec_obj9;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional107=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_73, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_73, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_73, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_73, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_73;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_73;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional108=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional108) {
                                        litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value97=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_74, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_74, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_74, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_74, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_74;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_74;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_75=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_75, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_75, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_75, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_75, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_75;
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_75;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result56__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result56__;
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
_Bool _if_conditional110;
struct list$1sNodeph* __result58__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_76;
struct list_item$1sNodeph* it_77;
_Bool _while_condtional7;
void* right_value107;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct list$1sNodeph*));
memset(&it_77, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value107, 0, sizeof(void*));
                        if(_if_conditional110=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional110) {
                            __result58__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result58__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_76=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_77=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional7=it_77!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional7) {
                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_76, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_77, "./comelang2.h", 192))->item)))));
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            it_77=((struct list_item$1sNodeph*)come_null_check(it_77, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result63__ = __result_obj__ = result_76;
                        if(result_76 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result63__;
                        __freed_obj__ = 0;
                        if(result_76 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_76, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result59__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result59__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional111;
void* right_value103;
struct list_item$1sNodeph* litem_78;
struct sNode* __dec_obj11;
_Bool _if_conditional112;
void* right_value104;
struct list_item$1sNodeph* litem_79;
struct sNode* __dec_obj12;
void* right_value105;
struct list_item$1sNodeph* litem_80;
struct sNode* __dec_obj13;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional111=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    litem_78=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_78, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_78, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_78, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_78, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_78;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_78;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional112=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional112) {
                                        litem_79=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_79, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_79, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_79, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_79, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_79;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_79;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_80=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_80, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_80, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_80, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_80, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_80;
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_80;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result60__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result60__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional113;
struct sNode* __result61__;
void* right_value106;
struct sNode* result_81;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sNode*));
                                if(_if_conditional113=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional113) {
                                    __result61__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result61__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_81=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                if(_if_conditional114=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional114) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional115=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional116=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional116) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional117=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional117) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional118=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional118) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional119=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional119) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional120=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional120) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional121=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional121) {
                                    ((struct sNode*)come_null_check(result_81, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result62__ = __result_obj__ = result_81;
                                if(result_81 && !__freed_obj__) { result_81 = come_decrement_ref_count(result_81, ((struct sNode*)result_81)->finalize, ((struct sNode*)result_81)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result62__;
                                __freed_obj__ = 0;
                                if(result_81 && !__freed_obj__) { result_81 = come_decrement_ref_count(result_81, ((struct sNode*)result_81)->finalize, ((struct sNode*)result_81)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional125;
struct list$1charph* __result64__;
void* right_value110;
void* right_value111;
struct list$1charph* result_82;
struct list_item$1charph* it_83;
_Bool _while_condtional8;
void* right_value115;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct list$1charph*));
memset(&it_83, 0, sizeof(struct list_item$1charph*));
memset(&right_value115, 0, sizeof(void*));
                        if(_if_conditional125=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional125) {
                            __result64__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_82=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        it_83=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional8=it_83!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional8) {
                            list$1charph_add(((struct list$1charph*)come_null_check(result_82, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value115=string_clone(((struct list_item$1charph*)come_null_check(it_83, "./comelang2.h", 192))->item)))));
                            if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            it_83=((struct list_item$1charph*)come_null_check(it_83, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result67__ = __result_obj__ = result_82;
                        if(result_82 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result67__;
                        __freed_obj__ = 0;
                        if(result_82 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result65__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result65__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional126;
void* right_value112;
struct list_item$1charph* litem_84;
char* __dec_obj16;
_Bool _if_conditional127;
void* right_value113;
struct list_item$1charph* litem_85;
char* __dec_obj17;
void* right_value114;
struct list_item$1charph* litem_86;
char* __dec_obj18;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional126=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional126) {
                                    litem_84=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_84, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_84, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_84, "./comelang2.h", 206))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_84, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_84;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_84;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional127=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional127) {
                                        litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj17=((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 216))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_85, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_85;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_85;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj18=((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 226))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_86;
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_86;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result66__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result66__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional169;
struct list_item$1sNodeph* it_94;
int i_95;
_Bool _while_condtional9;
_Bool _if_conditional170;
void* right_value128;
void* right_value129;
struct optional$2sNodephbool* __result70__;
struct sNode* default_value_96;
void* right_value130;
void* right_value131;
struct optional$2sNodephbool* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_94, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_95, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&default_value_96, 0, sizeof(struct sNode*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
                if(_if_conditional169=position<0,                __freed_obj__ = 0, 
                _if_conditional169) {
                    position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_94=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_95=0;
                __freed_obj__ = 0;
                while(_while_condtional9=it_94!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional170=position==i_95,                    __freed_obj__ = 0, 
                    _if_conditional170) {
                        __result70__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value129=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value128=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 742)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_94, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result70__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_94=((struct list_item$1sNodeph*)come_null_check(it_94, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_95++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_96,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result71__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sNodephbool*)(right_value131=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value130=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 750))),(struct sNode*)come_increment_ref_count(default_value_96),(_Bool)0))));
                if(default_value_96 && !__freed_obj__) { default_value_96 = come_decrement_ref_count(default_value_96, ((struct sNode*)default_value_96)->finalize, ((struct sNode*)default_value_96)->_protocol_obj, 0, 0, 0); } 
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result71__;
                __freed_obj__ = 0;
                if(default_value_96 && !__freed_obj__) { default_value_96 = come_decrement_ref_count(default_value_96, ((struct sNode*)default_value_96)->finalize, ((struct sNode*)default_value_96)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj26;
struct optional$2sNodephbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj26=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result69__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result69__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional171=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional172;
struct sNode* default_value_97;
struct sNode* __result72__;
struct sNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_97, 0, sizeof(struct sNode*));
                if(_if_conditional172=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional172) {
                    __freed_obj__ = 0;
                    memset(&default_value_97,0,sizeof(struct sNode*));
                    __freed_obj__ = 0;
                    __result72__ = __result_obj__ = default_value_97;
                    __freed_obj__ = 0;
                    return __result72__;
                    __freed_obj__ = 0;
                }
                else {
                    __result73__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result73__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value147;
void* right_value148;
struct buffer* output_106;
_Bool _if_conditional176;
void* right_value149;
void* right_value150;
struct buffer* output2_107;
int i_108;
struct list$1sTypeph* o2_saved_109;
struct sType* it_110;
_Bool _for_condtionalA12;
void* right_value151;
char* name_111;
void* right_value152;
char* str_112;
_Bool _if_conditional177;
void* right_value153;
void* right_value154;
char* str_113;
_Bool _if_conditional178;
void* right_value155;
struct sType* base_result_type_114;
void* right_value156;
void* right_value157;
struct list$1sNodeph* __dec_obj27;
void* right_value158;
char* result_type_str_115;
int i_116;
struct list$1sTypeph* o2_saved_117;
struct sType* it_118;
_Bool _for_condtionalA13;
void* right_value159;
char* name_119;
void* right_value160;
char* str_120;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value161;
struct sNode* node_121;
_Bool _if_conditional181;
void* right_value162;
void* right_value163;
void* right_value164;
char* __result76__;
void* right_value165;
struct CVALUE* cvalue_122;
void* right_value166;
void* right_value167;
char* result_type_str_123;
int i_124;
struct list$1sTypeph* o2_saved_125;
struct sType* it_126;
_Bool _for_condtionalA14;
void* right_value168;
char* name_127;
void* right_value169;
char* str_128;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value170;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&output_106, 0, sizeof(struct buffer*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&output2_107, 0, sizeof(struct buffer*));
memset(&i_108, 0, sizeof(int));
memset(&o2_saved_109, 0, sizeof(struct list$1sTypeph*));
memset(&it_110, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&name_111, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&str_112, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&str_113, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&base_result_type_114, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&result_type_str_115, 0, sizeof(char*));
memset(&i_116, 0, sizeof(int));
memset(&o2_saved_117, 0, sizeof(struct list$1sTypeph*));
memset(&it_118, 0, sizeof(struct sType*));
memset(&right_value159, 0, sizeof(void*));
memset(&name_119, 0, sizeof(char*));
memset(&right_value160, 0, sizeof(void*));
memset(&str_120, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&node_121, 0, sizeof(struct sNode*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&cvalue_122, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&result_type_str_123, 0, sizeof(char*));
memset(&i_124, 0, sizeof(int));
memset(&o2_saved_125, 0, sizeof(struct list$1sTypeph*));
memset(&it_126, 0, sizeof(struct sType*));
memset(&right_value168, 0, sizeof(void*));
memset(&name_127, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&str_128, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
    output_106=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional176=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mResultType,    __freed_obj__ = 0, 
    _if_conditional176) {
        output2_107=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 473)),((struct sFun*)come_null_check(fun, "03transpile2.c", 473))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 474)),"(");
        __freed_obj__ = 0;
        i_108=0;
        __freed_obj__ = 0;
        for(
        o2_saved_109=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 488))->mParamTypes)),it_110=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_110=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_109), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_111=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 478),((struct optional$2charphbool*)(right_value151=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 478))->mParamNames,i_108)))));
            come_pop_stackframe();
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_112=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 480),((struct optional$2charphbool*)(right_value152=make_define_var(it_110,name_111,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 481)),str_112);
            __freed_obj__ = 0;
            if(_if_conditional177=i_108!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 486))->mParamTypes, "03transpile2.c", 486)))-1,            __freed_obj__ = 0, 
            _if_conditional177) {
                buffer_append_str(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 484)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_108++;
            __freed_obj__ = 0;
            if(str_112 && !__freed_obj__) { str_112 = come_decrement_ref_count(str_112, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_109 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 488)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_113=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 490),((struct optional$2charphbool*)(right_value154=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 490))->mResultType,((char*)(right_value153=buffer_to_string(((struct buffer*)come_null_check(output2_107, "03transpile2.c", 490))))),info))))));
        come_pop_stackframe();
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 492)),str_113);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 493)),";\n");
        __freed_obj__ = 0;
        if(output2_107 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_107, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_113 && !__freed_obj__) { str_113 = come_decrement_ref_count(str_113, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional178=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mArrayNum, "03transpile2.c", 565)))>0,        __freed_obj__ = 0, 
        _if_conditional178) {
            base_result_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 496))->mResultType))));
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj27=((struct sType*)come_null_check(base_result_type_114, "03transpile2.c", 497))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_114, "03transpile2.c", 497))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value157=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value156=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj27) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_115=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 499),((struct optional$2charphbool*)(right_value158=make_type_name_string(base_result_type_114,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 501)),result_type_str_115);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 502))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 504)),((struct sFun*)come_null_check(fun, "03transpile2.c", 504))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 505)),"(");
            __freed_obj__ = 0;
            i_116=0;
            __freed_obj__ = 0;
            for(
            o2_saved_117=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mParamTypes)),it_118=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA13=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            _for_condtionalA13;            it_118=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_117), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_119=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 509),((struct optional$2charphbool*)(right_value159=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 509))->mParamNames,i_116)))));
                come_pop_stackframe();
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_120=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 511),((struct optional$2charphbool*)(right_value160=make_define_var(it_118,name_119,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 512)),str_120);
                __freed_obj__ = 0;
                if(_if_conditional179=i_116==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 522))->mParamTypes, "03transpile2.c", 522)))-1,                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=((struct sFun*)come_null_check(fun, "03transpile2.c", 518))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 516)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 520)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_116++;
                __freed_obj__ = 0;
                if(str_120 && !__freed_obj__) { str_120 = come_decrement_ref_count(str_120, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_121=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 525),((struct optional$2sNodephbool*)(right_value161=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mResultType, "03transpile2.c", 525))->mArrayNum,0)))));
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional181=!((struct sNode*)come_null_check(node_121, "03transpile2.c", 530))->compile(((struct sNode*)come_null_check(node_121, "03transpile2.c", 530))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional181) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result76__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 528), ((struct optional$2charphbool*)(right_value164=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value163=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 528))),(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_115 && !__freed_obj__) { result_type_str_115 = come_decrement_ref_count(result_type_str_115, (void*)0, (void*)0, 0, 0, 0); }
                if(output_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_106, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=get_value_from_stack(-1,info))));
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 533)),((char*)(right_value166=xsprintf("))[%s];\n",((struct CVALUE*)come_null_check(cvalue_122, "03transpile2.c", 533))->c_value))));
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(base_result_type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_115 && !__freed_obj__) { result_type_str_115 = come_decrement_ref_count(result_type_str_115, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_122, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_123=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 536),((struct optional$2charphbool*)(right_value167=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 536))->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 538)),result_type_str_123);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 539))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 541)),((struct sFun*)come_null_check(fun, "03transpile2.c", 541))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 542)),"(");
            __freed_obj__ = 0;
            i_124=0;
            __freed_obj__ = 0;
            for(
            o2_saved_125=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 562))->mParamTypes)),it_126=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_125), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA14=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_125), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            _for_condtionalA14;            it_126=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_125), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_127=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 546),((struct optional$2charphbool*)(right_value168=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 546))->mParamNames,i_124)))));
                come_pop_stackframe();
                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_128=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 548),((struct optional$2charphbool*)(right_value169=make_define_var(it_126,name_127,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 549)),str_128);
                __freed_obj__ = 0;
                if(_if_conditional182=i_124==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 559))->mParamTypes, "03transpile2.c", 559)))-1,                __freed_obj__ = 0, 
                _if_conditional182) {
                    if(_if_conditional183=((struct sFun*)come_null_check(fun, "03transpile2.c", 555))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                        buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 553)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 557)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_124++;
                __freed_obj__ = 0;
                if(str_128 && !__freed_obj__) { str_128 = come_decrement_ref_count(str_128, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_125 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_106, "03transpile2.c", 562)),");\n");
            __freed_obj__ = 0;
            if(result_type_str_123 && !__freed_obj__) { result_type_str_123 = come_decrement_ref_count(result_type_str_123, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result77__ = __result_obj__ = ((char*)(right_value170=buffer_to_string(((struct buffer*)come_null_check(output_106, "03transpile2.c", 565)))));
    if(output_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
    if(output_106 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value171;
void* right_value172;
struct buffer* output_129;
void* right_value173;
char* result_type_str_130;
int i_131;
struct list$1sTypeph* o2_saved_132;
struct sType* it_133;
_Bool _for_condtionalA15;
void* right_value174;
char* name_134;
void* right_value175;
char* str_135;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value176;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&output_129, 0, sizeof(struct buffer*));
memset(&right_value173, 0, sizeof(void*));
memset(&result_type_str_130, 0, sizeof(char*));
memset(&i_131, 0, sizeof(int));
memset(&o2_saved_132, 0, sizeof(struct list$1sTypeph*));
memset(&it_133, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&name_134, 0, sizeof(char*));
memset(&right_value175, 0, sizeof(void*));
memset(&str_135, 0, sizeof(char*));
memset(&right_value176, 0, sizeof(void*));
    output_129=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    result_type_str_130=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 572),((struct optional$2charphbool*)(right_value173=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 572))->mResultType, "03transpile2.c", 572))->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 574)),result_type_str_130);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 575))," ");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 577)),name);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 578)),"(");
    __freed_obj__ = 0;
    i_131=0;
    __freed_obj__ = 0;
    for(
    o2_saved_132=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(lambda_type, "03transpile2.c", 598))->mParamTypes)),it_133=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_132), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_132), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    it_133=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_132), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        name_134=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 582),((struct optional$2charphbool*)(right_value174=list$1charphp_operator_load_element(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 582))->mParamNames,i_131)))));
        come_pop_stackframe();
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_135=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 584),((struct optional$2charphbool*)(right_value175=make_define_var(it_133,name_134,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 585)),str_135);
        __freed_obj__ = 0;
        if(_if_conditional184=i_131==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 595))->mParamTypes, "03transpile2.c", 595)))-1,        __freed_obj__ = 0, 
        _if_conditional184) {
            if(_if_conditional185=((struct sType*)come_null_check(lambda_type, "03transpile2.c", 591))->mVarArgs,            __freed_obj__ = 0, 
            _if_conditional185) {
                buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 589)),", ...");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 593)),", ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_131++;
        __freed_obj__ = 0;
        if(str_135 && !__freed_obj__) { str_135 = come_decrement_ref_count(str_135, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_132 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_129, "03transpile2.c", 598)),");\n");
    __freed_obj__ = 0;
    __result78__ = __result_obj__ = ((char*)(right_value176=buffer_to_string(((struct buffer*)come_null_check(output_129, "03transpile2.c", 600)))));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_130 && !__freed_obj__) { result_type_str_130 = come_decrement_ref_count(result_type_str_130, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_129 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_130 && !__freed_obj__) { result_type_str_130 = come_decrement_ref_count(result_type_str_130, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional186;
char* msg2_136;
va_list args_137;
int len_138;
_Bool _if_conditional187;
int i_139;
_Bool _for_condtionalA16;
void* right_value177;
void* right_value178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_136, 0, sizeof(char*));
memset(&args_137, 0, sizeof(va_list));
memset(&len_138, 0, sizeof(int));
memset(&i_139, 0, sizeof(int));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    if(_if_conditional186=((struct sInfo*)come_null_check(info, "03transpile2.c", 609))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional186) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_137,msg);
    __freed_obj__ = 0;
    len_138=vasprintf(&msg2_136,msg,args_137);
    __freed_obj__ = 0;
    __builtin_va_end(args_137);
    __freed_obj__ = 0;
    if(_if_conditional187=((struct sInfo*)come_null_check(info, "03transpile2.c", 628))->come_fun,    __freed_obj__ = 0, 
    _if_conditional187) {
        __freed_obj__ = 0;
        for(
        i_139=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_139<((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->block_level ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_139++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 619))->come_fun, "03transpile2.c", 619))->mSource, "03transpile2.c", 619)),"    ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->come_fun, "03transpile2.c", 622))->mSource, "03transpile2.c", 622)),((char*)(right_value177=xsprintf("%s",msg2_136))));
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 625))->module, "03transpile2.c", 625))->mSourceHead, "03transpile2.c", 625)),((char*)(right_value178=xsprintf("%s",msg2_136))));
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_136);
    __freed_obj__ = 0;
    if((&args_137) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_137), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional188;
char* msg2_140;
va_list args_141;
int len_142;
void* right_value179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_140, 0, sizeof(char*));
memset(&args_141, 0, sizeof(va_list));
memset(&len_142, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
    if(_if_conditional188=((struct sInfo*)come_null_check(info, "03transpile2.c", 636))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional188) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_141,msg);
    __freed_obj__ = 0;
    len_142=vasprintf(&msg2_140,msg,args_141);
    __freed_obj__ = 0;
    __builtin_va_end(args_141);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 643))->module, "03transpile2.c", 643))->mSourceHead, "03transpile2.c", 643)),((char*)(right_value179=xsprintf("%s",msg2_140))));
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_140);
    __freed_obj__ = 0;
    if((&args_141) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_141), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value180;
char* name_143;
void* right_value181;
void* right_value182;
struct sType* result_type_144;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
struct sType* __list_values1___145[2];
void* right_value190;
void* right_value191;
struct list$1sTypeph* param_types_150;
void* right_value192;
void* right_value193;
char* __list_values2___151[2];
void* right_value197;
void* right_value198;
struct list$1charph* param_names_156;
void* right_value199;
void* right_value200;
struct list$1charph* param_default_parametors_157;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
struct sFun* main_fun_158;
void* right_value217;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&name_143, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&result_type_144, 0, sizeof(struct sType*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&param_types_150, 0, sizeof(struct list$1sTypeph*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&param_names_156, 0, sizeof(struct list$1charph*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&param_default_parametors_157, 0, sizeof(struct list$1charph*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&main_fun_158, 0, sizeof(struct sFun*));
memset(&right_value217, 0, sizeof(void*));
    name_143=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("main"))));
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    result_type_144=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    {__list_values1___145[0]=come_increment_ref_count(((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___145[1]=come_increment_ref_count(((struct sType*)(right_value186=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value185=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_150=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value191=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value190=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___145))));
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    {__list_values2___151[0]=come_increment_ref_count(((char*)(right_value192=__builtin_string("argc"))));
__list_values2___151[1]=come_increment_ref_count(((char*)(right_value193=__builtin_string("argv"))));
}    param_names_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value198=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value197=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___151))));
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    param_default_parametors_157=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value199=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    main_fun_158=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value204=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value201=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 660)))),(char*)come_increment_ref_count(name_143),(struct sType*)come_increment_ref_count(result_type_144),(struct list$1sTypeph*)come_increment_ref_count(param_types_150),(struct list$1charph*)come_increment_ref_count(param_names_156),(struct list$1charph*)come_increment_ref_count(param_default_parametors_157),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("")))),info))));
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    map$2charphsFunph_insert(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 662))->funcs, "03transpile2.c", 662)),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name_143)))),(struct sFun*)come_increment_ref_count(main_fun_158));
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code(info,"#include <stdio.h>\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 666))->come_fun=main_fun_158;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 668))->block_level++;
    __freed_obj__ = 0;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    __freed_obj__ = 0;
    add_come_code(info,"return 0;\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 671))->block_level--;
    __freed_obj__ = 0;
    __result109__ = 0;
    if(name_143 && !__freed_obj__) { name_143 = come_decrement_ref_count(name_143, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_144 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_150 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_156 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_157 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_158 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
    if(name_143 && !__freed_obj__) { name_143 = come_decrement_ref_count(name_143, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_144 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_150 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_156 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_157 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_158 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_158, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_146;
_Bool _for_condtionalA17;
struct list$1sTypeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_146, 0, sizeof(int));
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 160))->len=0;
        __freed_obj__ = 0;
        for(
        i_146=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        i_146<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA17;        i_146++ ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 163)),values[i_146]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result80__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result80__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional189;
void* right_value187;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj28;
_Bool _if_conditional190;
void* right_value188;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj29;
void* right_value189;
struct list_item$1sTypeph* litem_149;
struct sType* __dec_obj30;
struct list$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value187, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value188, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value189, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional189=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional189) {
                    litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value187=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj28=((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_147, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_147;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_147;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional190=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value188=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj29=((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_148, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_148;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_148;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_149=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value189=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_149, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_149, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj30=((struct list_item$1sTypeph*)come_null_check(litem_149, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_149, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_149;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_149;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result79__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
_Bool __freed_obj__;
int i_152;
_Bool _for_condtionalA18;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_152, 0, sizeof(int));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->len=0;
        __freed_obj__ = 0;
        for(
        i_152=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_152<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_152++ ,        __freed_obj__ = 0, 
        0        ){
            list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 163)),values[i_152]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result82__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional191;
void* right_value194;
struct list_item$1charph* litem_153;
char* __dec_obj31;
_Bool _if_conditional192;
void* right_value195;
struct list_item$1charph* litem_154;
char* __dec_obj32;
void* right_value196;
struct list_item$1charph* litem_155;
char* __dec_obj33;
struct list$1charph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&litem_153, 0, sizeof(struct list_item$1charph*));
memset(&right_value195, 0, sizeof(void*));
memset(&litem_154, 0, sizeof(struct list_item$1charph*));
memset(&right_value196, 0, sizeof(void*));
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional191=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional191) {
                    litem_153=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj31=((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_153, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_153;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_153;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional192=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional192) {
                        litem_154=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj32=((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_154, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_154;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_154;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj33=((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_155, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_155;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_155;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result81__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional193=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional193) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional194=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional194) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional195=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional195) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional196=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional197=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional198=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional202=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional202) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional204=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional204) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional205=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional205) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional206=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional206) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional207=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional207) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional200=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional200) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional201=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional201) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional208;
unsigned int hash_177;
unsigned int it_178;
_Bool _while_condtional12;
_Bool _if_conditional221;
void* right_value211;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool same_key_exist_195;
char* it2_198;
_Bool _for_condtionalA20;
void* right_value213;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct map$2charphsFunph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_177, 0, sizeof(unsigned int));
memset(&it_178, 0, sizeof(unsigned int));
memset(&right_value211, 0, sizeof(void*));
memset(&same_key_exist_195, 0, sizeof(_Bool));
memset(&it2_198, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
        if(_if_conditional208=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional208) {
            map$2charphsFunph_rehash(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_177=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_178=hash_177;
        __freed_obj__ = 0;
        while(_while_condtional12=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional12) {
            if(_if_conditional221=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_178],            __freed_obj__ = 0, 
            _if_conditional221) {
                if(_if_conditional222=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a2=((struct optional$2boolbool*)(right_value211=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_178], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a2)),                (right_value211 && right_value211 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional222) {
                    if(_if_conditional223=1,                    __freed_obj__ = 0, 
                    _if_conditional223) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_178]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_178] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_178] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_178], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_178]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_178]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_178]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional243=1,                    __freed_obj__ = 0, 
                    _if_conditional243) {
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1442))->items[it_178] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1442))->items[it_178], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1443))->items[it_178]=(struct sFun*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1446))->items[it_178]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_178++;
                __freed_obj__ = 0;
                if(_if_conditional244=it_178>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional244) {
                    it_178=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional245=it_178==hash_177,                    __freed_obj__ = 0, 
                    _if_conditional245) {
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
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_178]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional246=1,                __freed_obj__ = 0, 
                _if_conditional246) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_178]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_178]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional247=1,                __freed_obj__ = 0, 
                _if_conditional247) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1470))->items[it_178]=(struct sFun*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1473))->items[it_178]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_195=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_198=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA20=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA20;        it2_198=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional252=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a4=((struct optional$2boolbool*)(right_value213=string_equals(((char*)come_null_check(it2_198, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a4)),            (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional252) {
                same_key_exist_195=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional253=!same_key_exist_195,        __freed_obj__ = 0, 
        _if_conditional253) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result108__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int size_159;
void* right_value205;
char** keys_160;
void* right_value206;
struct sFun** items_161;
void* right_value207;
_Bool* item_existance_162;
int len_163;
char* it_166;
_Bool _for_condtionalA19;
struct sFun* default_value_169;
void* right_value209;
struct sFun* it2_173;
unsigned int hash_174;
int n_175;
_Bool _while_condtional11;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sFun* default_value_176;
void* right_value210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_159, 0, sizeof(int));
memset(&right_value205, 0, sizeof(void*));
memset(&keys_160, 0, sizeof(char**));
memset(&right_value206, 0, sizeof(void*));
memset(&items_161, 0, sizeof(struct sFun**));
memset(&right_value207, 0, sizeof(void*));
memset(&item_existance_162, 0, sizeof(_Bool*));
memset(&len_163, 0, sizeof(int));
memset(&it_166, 0, sizeof(char*));
memset(&default_value_169, 0, sizeof(struct sFun*));
memset(&right_value209, 0, sizeof(void*));
memset(&it2_173, 0, sizeof(struct sFun*));
memset(&hash_174, 0, sizeof(unsigned int));
memset(&n_175, 0, sizeof(int));
memset(&default_value_176, 0, sizeof(struct sFun*));
memset(&right_value210, 0, sizeof(void*));
                size_159=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_160=(char**)come_increment_ref_count(((char**)(right_value205=(char**)come_calloc(1, sizeof(char*)*(1*(size_159)), "./comelang2.h", 1370))));
                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_161=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value206=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_159)), "./comelang2.h", 1371))));
                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_162=(_Bool*)come_increment_ref_count(((_Bool*)(right_value207=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_159)), "./comelang2.h", 1372))));
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_163=0;
                __freed_obj__ = 0;
                for(
                it_166=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA19=                !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA19;                it_166=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_169,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    it2_173=((struct sFun*)(right_value209=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1379)),it_166,default_value_169)));
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_174=string_get_hash_key(((char*)come_null_check(it_166, "./comelang2.h", 1380)))%size_159;
                    __freed_obj__ = 0;
                    n_175=hash_174;
                    __freed_obj__ = 0;
                    while(_while_condtional11=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional11) {
                        if(_if_conditional218=item_existance_162[n_175],                        __freed_obj__ = 0, 
                        _if_conditional218) {
                            n_175++;
                            __freed_obj__ = 0;
                            if(_if_conditional219=n_175>=size_159,                            __freed_obj__ = 0, 
                            _if_conditional219) {
                                n_175=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional220=n_175==hash_174,                                __freed_obj__ = 0, 
                                _if_conditional220) {
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
                            item_existance_162[n_175]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_160[n_175]=it_166;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_161[n_175]=((struct sFun*)(right_value210=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1400)),it_166,default_value_176)));
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_163++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1408))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_160;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))->items=items_161;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_162;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1416))->size=size_159;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1417))->len=len_163;
                __freed_obj__ = 0;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional209;
char* result_164;
char* __result83__;
_Bool _if_conditional210;
char* __result84__;
char* result_165;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_164, 0, sizeof(char*));
memset(&result_165, 0, sizeof(char*));
                    if(_if_conditional209=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional209) {
                        __freed_obj__ = 0;
                        memset(&result_164,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result83__ = __result_obj__ = result_164;
                        __freed_obj__ = 0;
                        return __result83__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional210=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result84__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result84__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_165,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result85__ = __result_obj__ = result_165;
                    __freed_obj__ = 0;
                    return __result85__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result86__ = self==((void*)0)||((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result86__;
                    __freed_obj__ = 0;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional211;
char* result_167;
char* __result87__;
_Bool _if_conditional212;
char* __result88__;
char* result_168;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_167, 0, sizeof(char*));
memset(&result_168, 0, sizeof(char*));
                    if(_if_conditional211=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        __freed_obj__ = 0;
                        memset(&result_167,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result87__ = __result_obj__ = result_167;
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional212=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional212) {
                        __result88__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result88__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_168,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result89__ = __result_obj__ = result_168;
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_170;
unsigned int it_171;
_Bool _while_condtional10;
_Bool _if_conditional213;
void* right_value208;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional215;
struct sFun* __result92__;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result93__;
struct sFun* __result94__;
struct sFun* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_170, 0, sizeof(unsigned int));
memset(&it_171, 0, sizeof(unsigned int));
memset(&right_value208, 0, sizeof(void*));
                        hash_170=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_171=hash_170;
                        __freed_obj__ = 0;
                        while(_while_condtional10=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional10) {
                            if(_if_conditional213=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_171],                            __freed_obj__ = 0, 
                            _if_conditional213) {
                                if(_if_conditional215=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value208=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_171], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                (right_value208 && right_value208 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional215) {
                                    __result92__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_171];
                                    __freed_obj__ = 0;
                                    return __result92__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_171++;
                                __freed_obj__ = 0;
                                if(_if_conditional216=it_171>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional216) {
                                    it_171=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional217=it_171==hash_170,                                    __freed_obj__ = 0, 
                                    _if_conditional217) {
                                        __result93__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result93__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result94__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result94__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result95__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result95__;
                        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional214;
_Bool default_value_172;
_Bool __result90__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_172, 0, sizeof(_Bool));
                                    if(_if_conditional214=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional214) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_172,0,sizeof(_Bool));
                                        __freed_obj__ = 0;
                                        __result90__ = default_value_172;
                                        __freed_obj__ = 0;
                                        return __result90__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result91__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result91__;
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

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
int it2_179;
struct list_item$1charp* it_180;
_Bool _while_condtional13;
void* right_value212;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional224;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_179, 0, sizeof(int));
memset(&it_180, 0, sizeof(struct list_item$1charp*));
memset(&right_value212, 0, sizeof(void*));
                            it2_179=0;
                            __freed_obj__ = 0;
                            it_180=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional13=it_180!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional13) {
                                if(_if_conditional224=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value212=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_180, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value212 && right_value212 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional224) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_179,it2_179+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_179++;
                                __freed_obj__ = 0;
                                it_180=((struct list_item$1charp*)come_null_check(it_180, "./comelang2.h", 500))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result99__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result99__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
int tmp_181;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct list$1charp* __result96__;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct list_item$1charp* it_184;
int i_185;
_Bool _while_condtional15;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_186;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list_item$1charp* it_187;
int i_188;
_Bool _while_condtional16;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct list_item$1charp* prev_it_189;
struct list_item$1charp* it_190;
struct list_item$1charp* head_prev_it_191;
struct list_item$1charp* tail_it_192;
int i_193;
_Bool _while_condtional17;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct list_item$1charp* prev_it_194;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_181, 0, sizeof(int));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&i_185, 0, sizeof(int));
memset(&prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&it_187, 0, sizeof(struct list_item$1charp*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1charp*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_191, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_192, 0, sizeof(struct list_item$1charp*));
memset(&i_193, 0, sizeof(int));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional225=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional225) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional226=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional226) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional227=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional227) {
                                            tmp_181=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_181;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional228=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional228) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional229=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional229) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional230=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional230) {
                                            __result96__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result96__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional231=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional231) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional232=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional232) {
                                                it_184=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                __freed_obj__ = 0;
                                                i_185=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_184!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    if(_if_conditional233=i_185<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional233) {
                                                        prev_it_186=it_184;
                                                        __freed_obj__ = 0;
                                                        it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 543))->next;
                                                        __freed_obj__ = 0;
                                                        i_185++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_186 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional234=i_185==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional234) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_184;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 556))->next;
                                                            __freed_obj__ = 0;
                                                            i_185++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional235=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional235) {
                                                    it_187=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                    __freed_obj__ = 0;
                                                    i_188=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_187!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        if(_if_conditional236=i_188==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional236) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 566))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional237=i_188>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional237) {
                                                            prev_it_189=it_187;
                                                            __freed_obj__ = 0;
                                                            it_187=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 573))->next;
                                                            __freed_obj__ = 0;
                                                            i_188++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_187=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 581))->next;
                                                            __freed_obj__ = 0;
                                                            i_188++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_190=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_191=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_192=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_193=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_190!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional238=i_193==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional238) {
                                                            head_prev_it_191=((struct list_item$1charp*)come_null_check(it_190, "./comelang2.h", 596))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional239=i_193==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional239) {
                                                            tail_it_192=it_190;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional240=i_193>=head&&i_193<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional240) {
                                                            prev_it_194=it_190;
                                                            __freed_obj__ = 0;
                                                            it_190=((struct list_item$1charp*)come_null_check(it_190, "./comelang2.h", 606))->next;
                                                            __freed_obj__ = 0;
                                                            i_193++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_194 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_190=((struct list_item$1charp*)come_null_check(it_190, "./comelang2.h", 614))->next;
                                                            __freed_obj__ = 0;
                                                            i_193++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional241=head_prev_it_191!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional241) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_191, "./comelang2.h", 620))->next=tail_it_192;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional242=tail_it_192!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional242) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_192, "./comelang2.h", 623))->prev=head_prev_it_191;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result98__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result98__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_182;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_183;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_182, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_183, 0, sizeof(struct list_item$1charp*));
                                                it_182=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_182!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    prev_it_183=it_182;
                                                    __freed_obj__ = 0;
                                                    it_182=((struct list_item$1charp*)come_null_check(it_182, "./comelang2.h", 479))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_183 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                __freed_obj__ = 0;
                                                __result97__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result97__;
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
_Bool _if_conditional248;
char* result_196;
char* __result100__;
_Bool _if_conditional249;
char* __result101__;
char* result_197;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
            if(_if_conditional248=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional248) {
                __freed_obj__ = 0;
                memset(&result_196,0,sizeof(char*));
                __freed_obj__ = 0;
                __result100__ = __result_obj__ = result_196;
                __freed_obj__ = 0;
                return __result100__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional249=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional249) {
                __result101__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result101__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_197,0,sizeof(char*));
            __freed_obj__ = 0;
            __result102__ = __result_obj__ = result_197;
            __freed_obj__ = 0;
            return __result102__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result103__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result103__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional250;
char* result_199;
char* __result104__;
_Bool _if_conditional251;
char* __result105__;
char* result_200;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_199, 0, sizeof(char*));
memset(&result_200, 0, sizeof(char*));
            if(_if_conditional250=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional250) {
                __freed_obj__ = 0;
                memset(&result_199,0,sizeof(char*));
                __freed_obj__ = 0;
                __result104__ = __result_obj__ = result_199;
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional251=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional251) {
                __result105__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result105__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_200,0,sizeof(char*));
            __freed_obj__ = 0;
            __result106__ = __result_obj__ = result_200;
            __freed_obj__ = 0;
            return __result106__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional254;
void* right_value214;
struct list_item$1charp* litem_201;
_Bool _if_conditional255;
void* right_value215;
struct list_item$1charp* litem_202;
void* right_value216;
struct list_item$1charp* litem_203;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&litem_201, 0, sizeof(struct list_item$1charp*));
memset(&right_value215, 0, sizeof(void*));
memset(&litem_202, 0, sizeof(struct list_item$1charp*));
memset(&right_value216, 0, sizeof(void*));
memset(&litem_203, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional254=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional254) {
                    litem_201=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_201, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_201, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_201, "./comelang2.h", 276))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_201;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_201;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional255=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional255) {
                        litem_202=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_202, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_202, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_202, "./comelang2.h", 286))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_202;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_202;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_203=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value216=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_203, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_203, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_203, "./comelang2.h", 296))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_203;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_203;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result107__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result107__;
                __freed_obj__ = 0;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value218;
char* output_file_name_204;
struct __sFILE* f_205;
void* right_value219;
struct map$2charphsFunph* o2_saved_206;
char* it_207;
_Bool _for_condtionalA21;
void* right_value220;
void* right_value230;
struct sFun* it2_212;
void* right_value231;
char* header_213;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct map$2charphsFunph* o2_saved_218;
char* it_219;
_Bool _for_condtionalA24;
void* right_value232;
void* right_value233;
struct sFun* it2_220;
void* right_value234;
char* header_221;
_Bool _if_conditional269;
void* right_value235;
char* output_222;
_Bool _if_conditional270;
void* right_value236;
char* output_223;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct map$2charphsFunph* o2_saved_224;
char* it_225;
_Bool _for_condtionalA25;
void* right_value237;
struct sFun* it2_226;
_Bool _if_conditional273;
void* right_value238;
char* output_227;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&output_file_name_204, 0, sizeof(char*));
memset(&f_205, 0, sizeof(struct __sFILE*));
memset(&right_value219, 0, sizeof(void*));
memset(&o2_saved_206, 0, sizeof(struct map$2charphsFunph*));
memset(&it_207, 0, sizeof(char*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&it2_212, 0, sizeof(struct sFun*));
memset(&right_value231, 0, sizeof(void*));
memset(&header_213, 0, sizeof(char*));
memset(&o2_saved_218, 0, sizeof(struct map$2charphsFunph*));
memset(&it_219, 0, sizeof(char*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&it2_220, 0, sizeof(struct sFun*));
memset(&right_value234, 0, sizeof(void*));
memset(&header_221, 0, sizeof(char*));
memset(&right_value235, 0, sizeof(void*));
memset(&output_222, 0, sizeof(char*));
memset(&right_value236, 0, sizeof(void*));
memset(&output_223, 0, sizeof(char*));
memset(&o2_saved_224, 0, sizeof(struct map$2charphsFunph*));
memset(&it_225, 0, sizeof(char*));
memset(&right_value237, 0, sizeof(void*));
memset(&it2_226, 0, sizeof(struct sFun*));
memset(&right_value238, 0, sizeof(void*));
memset(&output_227, 0, sizeof(char*));
    output_file_name_204=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "03transpile2.c", 679))->sname))));
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    f_205=fopen(output_file_name_204,"w");
    __freed_obj__ = 0;
    fprintf(f_205,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_205,"%s\n",((char*)(right_value219=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 684))->module, "03transpile2.c", 684))->mSourceHead, "03transpile2.c", 684))))));
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_205,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_206=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 704))->funcs)),it_207=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_206), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA21=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_206), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    _for_condtionalA21;    it_207=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_206), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_212=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 688),((struct optional$2sFunpbool*)(right_value230=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 688))->funcs,((char*)(right_value220=__builtin_string(it_207))))))));
        come_pop_stackframe();
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_213=(char*)come_increment_ref_count(((char*)(right_value231=header_function(it2_212,info))));
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional261=((struct sFun*)come_null_check(it2_212, "03transpile2.c", 702))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_212, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,        __freed_obj__ = 0, 
        _if_conditional261) {
        }
        else {
            if(_if_conditional262=((struct sFun*)come_null_check(it2_212, "03transpile2.c", 702))->mStatic,            __freed_obj__ = 0, 
            _if_conditional262) {
                fprintf(f_205,"static %s",header_213);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional263=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_212, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,                __freed_obj__ = 0, 
                _if_conditional263) {
                }
                else {
                    if(_if_conditional264=string_operator_not_equals(it_207,"__builtin_va_start")&&string_operator_not_equals(it_207,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional264) {
                        fprintf(f_205,"%s\n",header_213,it_207);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_213 && !__freed_obj__) { header_213 = come_decrement_ref_count(header_213, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_206 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_205,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_218=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 724))->funcs)),it_219=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_218), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA24=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_218), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    _for_condtionalA24;    it_219=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_218), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_220=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 706),((struct optional$2sFunpbool*)(right_value233=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 706))->funcs,((char*)(right_value232=__builtin_string(it_219))))))));
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_221=(char*)come_increment_ref_count(((char*)(right_value234=header_function(it2_220,info))));
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional269=((struct sFun*)come_null_check(it2_220, "03transpile2.c", 722))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_220, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,        __freed_obj__ = 0, 
        _if_conditional269) {
            output_222=(char*)come_increment_ref_count(((char*)(right_value235=output_function(it2_220,info))));
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            fprintf(f_205,"static inline %s",output_222);
            __freed_obj__ = 0;
            if(output_222 && !__freed_obj__) { output_222 = come_decrement_ref_count(output_222, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional270=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_220, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,            __freed_obj__ = 0, 
            _if_conditional270) {
                output_223=(char*)come_increment_ref_count(((char*)(right_value236=output_function(it2_220,info))));
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                fprintf(f_205,"static inline %s",output_223);
                __freed_obj__ = 0;
                if(output_223 && !__freed_obj__) { output_223 = come_decrement_ref_count(output_223, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional271=((struct sFun*)come_null_check(it2_220, "03transpile2.c", 722))->mStatic,                __freed_obj__ = 0, 
                _if_conditional271) {
                }
                else {
                    if(_if_conditional272=string_operator_not_equals(it_219,"__builtin_va_start")&&string_operator_not_equals(it_219,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional272) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_221 && !__freed_obj__) { header_221 = come_decrement_ref_count(header_221, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_218 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_205,"\n");
    __freed_obj__ = 0;
    fprintf(f_205,"// body function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_224=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 748))->funcs)),it_225=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_224), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA25=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_224), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    _for_condtionalA25;    it_225=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_224), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_226=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 728),((struct optional$2sFunpbool*)(right_value237=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 728))->funcs,it_225)))));
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional273=!((struct sFun*)come_null_check(it2_226, "03transpile2.c", 746))->mExternal,        __freed_obj__ = 0, 
        _if_conditional273) {
            output_227=(char*)come_increment_ref_count(((char*)(right_value238=output_function(it2_226,info))));
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional274=((struct sFun*)come_null_check(it2_226, "03transpile2.c", 744))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_226, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,            __freed_obj__ = 0, 
            _if_conditional274) {
            }
            else {
                if(_if_conditional275=((struct sFun*)come_null_check(it2_226, "03transpile2.c", 744))->mStatic,                __freed_obj__ = 0, 
                _if_conditional275) {
                    fprintf(f_205,"static %s",output_227);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional276=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_226, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,                    __freed_obj__ = 0, 
                    _if_conditional276) {
                    }
                    else {
                        fprintf(f_205,"%s",output_227);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            fprintf(f_205,"\n");
            __freed_obj__ = 0;
            if(output_227 && !__freed_obj__) { output_227 = come_decrement_ref_count(output_227, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_224 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fclose(f_205);
    __freed_obj__ = 0;
    __result117__ = (_Bool)1;
    if(output_file_name_204 && !__freed_obj__) { output_file_name_204 = come_decrement_ref_count(output_file_name_204, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
    if(output_file_name_204 && !__freed_obj__) { output_file_name_204 = come_decrement_ref_count(output_file_name_204, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_208;
unsigned int hash_209;
unsigned int it_210;
_Bool _while_condtional18;
_Bool _if_conditional256;
void* right_value221;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional257;
void* right_value222;
void* right_value223;
struct optional$2sFunpbool* __result111__;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value224;
void* right_value225;
struct optional$2sFunpbool* __result112__;
void* right_value226;
void* right_value227;
struct optional$2sFunpbool* __result113__;
void* right_value228;
void* right_value229;
struct optional$2sFunpbool* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_208, 0, sizeof(struct sFun*));
memset(&hash_209, 0, sizeof(unsigned int));
memset(&it_210, 0, sizeof(unsigned int));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_208,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_209=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_210=hash_209;
            __freed_obj__ = 0;
            while(_while_condtional18=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional18) {
                if(_if_conditional256=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_210],                __freed_obj__ = 0, 
                _if_conditional256) {
                    if(_if_conditional257=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value221=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_210], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    (right_value221 && right_value221 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        __result111__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value223=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value222=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_210],(_Bool)1)));
                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result111__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_210++;
                    __freed_obj__ = 0;
                    if(_if_conditional258=it_210>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional258) {
                        it_210=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional259=it_210==hash_209,                        __freed_obj__ = 0, 
                        _if_conditional259) {
                            __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value225=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value224=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_208,(_Bool)0))));
                            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result112__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result113__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value227=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value226=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_208,(_Bool)0))));
                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result113__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value229=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value228=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_208,(_Bool)0))));
            if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result110__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result110__;
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
_Bool _if_conditional260;
struct sFun* default_value_211;
struct sFun* __result115__;
struct sFun* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_211, 0, sizeof(struct sFun*));
            if(_if_conditional260=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                __freed_obj__ = 0;
                memset(&default_value_211,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result115__ = __result_obj__ = default_value_211;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            else {
                __result116__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_214;
_Bool _for_condtionalA22;
_Bool _if_conditional265;
_Bool _if_conditional266;
int i_215;
_Bool _for_condtionalA23;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_214, 0, sizeof(int));
memset(&i_215, 0, sizeof(int));
        for(
        i_214=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_214<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1172))->size ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_214++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional265=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_214],            __freed_obj__ = 0, 
            _if_conditional265) {
                if(_if_conditional266=1,                __freed_obj__ = 0, 
                _if_conditional266) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_214] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1168))->items[i_214], (void*)0, (void*)0, 0, 0, 0, 0); }
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
        i_215=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA23=        i_215<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1181))->size ,        __freed_obj__ = 0, 
        _for_condtionalA23;        i_215++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional267=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_215],            __freed_obj__ = 0, 
            _if_conditional267) {
                if(_if_conditional268=1,                __freed_obj__ = 0, 
                _if_conditional268) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_215] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_215] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_215], (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_216;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_216, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_217, 0, sizeof(struct list_item$1charp*));
            it_216=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional19=it_216!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional19) {
                prev_it_217=it_216;
                __freed_obj__ = 0;
                it_216=((struct list_item$1charp*)come_null_check(it_216, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_217 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_217, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* output_file_name_228;
struct __sFILE* f_229;
_Bool _if_conditional277;
void* right_value239;
struct map$2charphsFunph* o2_saved_230;
char* it_231;
_Bool _for_condtionalA26;
void* right_value240;
void* right_value241;
struct sFun* it2_232;
void* right_value242;
char* header_233;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct map$2charphsFunph* o2_saved_234;
char* it_235;
_Bool _for_condtionalA27;
void* right_value243;
void* right_value244;
struct sFun* it2_236;
void* right_value245;
char* header_237;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value246;
char* output_238;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value247;
char* output_239;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_228, 0, sizeof(char*));
memset(&f_229, 0, sizeof(struct __sFILE*));
memset(&right_value239, 0, sizeof(void*));
memset(&o2_saved_230, 0, sizeof(struct map$2charphsFunph*));
memset(&it_231, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&it2_232, 0, sizeof(struct sFun*));
memset(&right_value242, 0, sizeof(void*));
memset(&header_233, 0, sizeof(char*));
memset(&o2_saved_234, 0, sizeof(struct map$2charphsFunph*));
memset(&it_235, 0, sizeof(char*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&it2_236, 0, sizeof(struct sFun*));
memset(&right_value245, 0, sizeof(void*));
memset(&header_237, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&output_238, 0, sizeof(char*));
memset(&right_value247, 0, sizeof(void*));
memset(&output_239, 0, sizeof(char*));
    output_file_name_228=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "03transpile2.c", 756))->output_file_name);
    __freed_obj__ = 0;
    f_229=fopen(output_file_name_228,"a");
    __freed_obj__ = 0;
    if(_if_conditional277=((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->num_source_files==0&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional277) {
        fprintf(f_229,"#ifndef __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_229,"#define __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_229,"#include <comelang2.h>\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fprintf(f_229,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_229,"%s\n",((char*)(right_value239=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 767))->module, "03transpile2.c", 767))->mSourceHead, "03transpile2.c", 767))))));
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_229,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_230=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 788))->funcs)),it_231=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_230), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA26=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_230), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    _for_condtionalA26;    it_231=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_230), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_232=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 771),((struct optional$2sFunpbool*)(right_value241=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 771))->funcs,((char*)(right_value240=__builtin_string(it_231))))))));
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_233=(char*)come_increment_ref_count(((char*)(right_value242=header_function(it2_232,info))));
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional278=((struct sFun*)come_null_check(it2_232, "03transpile2.c", 786))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_232, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,        __freed_obj__ = 0, 
        _if_conditional278) {
        }
        else {
            if(_if_conditional279=((struct sFun*)come_null_check(it2_232, "03transpile2.c", 786))->mStatic,            __freed_obj__ = 0, 
            _if_conditional279) {
            }
            else {
                if(_if_conditional280=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_232, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,                __freed_obj__ = 0, 
                _if_conditional280) {
                }
                else {
                    if(_if_conditional281=string_operator_not_equals(it_231,"__builtin_va_start")&&string_operator_not_equals(it_231,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        if(_if_conditional282=string_operator_equals(((struct sFun*)come_null_check(it2_232, "03transpile2.c", 785))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 785))->base_sname),                        __freed_obj__ = 0, 
                        _if_conditional282) {
                            fprintf(f_229,"%s\n",header_233,it_231);
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
        if(header_233 && !__freed_obj__) { header_233 = come_decrement_ref_count(header_233, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_230 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_229,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_234=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 812))->funcs)),it_235=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_234), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA27=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_234), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    _for_condtionalA27;    it_235=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_234), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_236=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 790),((struct optional$2sFunpbool*)(right_value244=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 790))->funcs,((char*)(right_value243=__builtin_string(it_235))))))));
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        header_237=(char*)come_increment_ref_count(((char*)(right_value245=header_function(it2_236,info))));
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional283=((struct sFun*)come_null_check(it2_236, "03transpile2.c", 810))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_236, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,        __freed_obj__ = 0, 
        _if_conditional283) {
            if(_if_conditional284=string_operator_equals(((struct sFun*)come_null_check(it2_236, "03transpile2.c", 799))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 799))->base_sname),            __freed_obj__ = 0, 
            _if_conditional284) {
                output_238=(char*)come_increment_ref_count(((char*)(right_value246=output_function(it2_236,info))));
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                fprintf(f_229,"static inline %s",output_238);
                __freed_obj__ = 0;
                if(output_238 && !__freed_obj__) { output_238 = come_decrement_ref_count(output_238, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional285=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_236, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,            __freed_obj__ = 0, 
            _if_conditional285) {
                if(_if_conditional286=string_operator_equals(((struct sFun*)come_null_check(it2_236, "03transpile2.c", 805))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 805))->base_sname),                __freed_obj__ = 0, 
                _if_conditional286) {
                    output_239=(char*)come_increment_ref_count(((char*)(right_value247=output_function(it2_236,info))));
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    fprintf(f_229,"static inline %s",output_239);
                    __freed_obj__ = 0;
                    if(output_239 && !__freed_obj__) { output_239 = come_decrement_ref_count(output_239, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional287=((struct sFun*)come_null_check(it2_236, "03transpile2.c", 810))->mStatic,                __freed_obj__ = 0, 
                _if_conditional287) {
                }
                else {
                    if(_if_conditional288=string_operator_not_equals(it_235,"__builtin_va_start")&&string_operator_not_equals(it_235,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional288) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_237 && !__freed_obj__) { header_237 = come_decrement_ref_count(header_237, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_234 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_229,"\n");
    __freed_obj__ = 0;
    if(_if_conditional289=((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->num_source_files==((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->max_source_files-1&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional289) {
        fprintf(f_229,"#endif\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fclose(f_229);
    __freed_obj__ = 0;
    __result118__ = (_Bool)1;
    if(output_file_name_228 && !__freed_obj__) { output_file_name_228 = come_decrement_ref_count(output_file_name_228, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(output_file_name_228 && !__freed_obj__) { output_file_name_228 = come_decrement_ref_count(output_file_name_228, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional290;
char* msg2_240;
va_list args_241;
int len_242;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
    if(_if_conditional290=((struct sInfo*)come_null_check(info, "03transpile2.c", 828))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional290) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_241,code);
    __freed_obj__ = 0;
    len_242=vasprintf(&msg2_240,code,args_241);
    __freed_obj__ = 0;
    __builtin_va_end(args_241);
    __freed_obj__ = 0;
    if(_if_conditional291=((struct sInfo*)come_null_check(info, "03transpile2.c", 839))->come_fun,    __freed_obj__ = 0, 
    _if_conditional291) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 836))->come_fun, "03transpile2.c", 836))->mSourceHead, "03transpile2.c", 836)),msg2_240);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_240);
    __freed_obj__ = 0;
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional292;
char* msg2_243;
va_list args_244;
int len_245;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
    if(_if_conditional292=((struct sInfo*)come_null_check(info, "03transpile2.c", 847))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional292) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_244,code);
    __freed_obj__ = 0;
    len_245=vasprintf(&msg2_243,code,args_244);
    __freed_obj__ = 0;
    __builtin_va_end(args_244);
    __freed_obj__ = 0;
    if(_if_conditional293=((struct sInfo*)come_null_check(info, "03transpile2.c", 858))->come_fun,    __freed_obj__ = 0, 
    _if_conditional293) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 855))->come_fun, "03transpile2.c", 855))->mSourceHead2, "03transpile2.c", 855)),msg2_243);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_243);
    __freed_obj__ = 0;
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
char* __dec_obj34;
_Bool _if_conditional296;
char* __dec_obj35;
_Bool _if_conditional297;
char* __dec_obj36;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional294=((struct sInfo*)come_null_check(info, "03transpile2.c", 866))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional294) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional295=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 870))->module, "03transpile2.c", 870))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional295) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 867))->module, "03transpile2.c", 867))->mLastCode);
        __freed_obj__ = 0;
        __dec_obj34=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode=((void*)0);
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional296=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 874))->module, "03transpile2.c", 874))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional296) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 871))->module, "03transpile2.c", 871))->mLastCode2);
        __freed_obj__ = 0;
        __dec_obj35=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2=((void*)0);
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional297=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 878))->module, "03transpile2.c", 878))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional297) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 875))->module, "03transpile2.c", 875))->mLastCode3);
        __freed_obj__ = 0;
        __dec_obj36=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3=((void*)0);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value248;
char* __dec_obj37;
_Bool _if_conditional300;
void* right_value249;
char* __dec_obj38;
_Bool _if_conditional301;
void* right_value250;
char* __dec_obj39;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    if(_if_conditional298=((struct sInfo*)come_null_check(info, "03transpile2.c", 885))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional298) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional299=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 889))->module, "03transpile2.c", 889))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional299) {
        add_come_code(info,"%s ,",((char*)(right_value248=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 886))->module, "03transpile2.c", 886))->mLastCode, "03transpile2.c", 886)),0,-3))));
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj37=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode=((void*)0);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional300=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 893))->module, "03transpile2.c", 893))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional300) {
        add_come_code(info,"%s ,",((char*)(right_value249=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 890))->module, "03transpile2.c", 890))->mLastCode2, "03transpile2.c", 890)),0,-3))));
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj38=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2=((void*)0);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional301=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 897))->module, "03transpile2.c", 897))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional301) {
        add_come_code(info,"%s ,",((char*)(right_value250=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 894))->module, "03transpile2.c", 894))->mLastCode3, "03transpile2.c", 894)),0,-3))));
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj39=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional302;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value251;
char* __dec_obj40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
memset(&right_value251, 0, sizeof(void*));
    if(_if_conditional302=((struct sInfo*)come_null_check(info, "03transpile2.c", 904))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional302) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_247,msg);
    __freed_obj__ = 0;
    len_248=vasprintf(&msg2_246,msg,args_247);
    __freed_obj__ = 0;
    __builtin_va_end(args_247);
    __freed_obj__ = 0;
    __dec_obj40=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s",msg2_246))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_246);
    __freed_obj__ = 0;
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional303;
char* msg2_249;
va_list args_250;
int len_251;
void* right_value252;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_249, 0, sizeof(char*));
memset(&args_250, 0, sizeof(va_list));
memset(&len_251, 0, sizeof(int));
memset(&right_value252, 0, sizeof(void*));
    if(_if_conditional303=((struct sInfo*)come_null_check(info, "03transpile2.c", 921))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional303) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_250,msg);
    __freed_obj__ = 0;
    len_251=vasprintf(&msg2_249,msg,args_250);
    __freed_obj__ = 0;
    __builtin_va_end(args_250);
    __freed_obj__ = 0;
    __dec_obj41=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("%s",msg2_249))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_249);
    __freed_obj__ = 0;
    if((&args_250) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_250), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional304;
char* msg2_252;
va_list args_253;
int len_254;
void* right_value253;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_252, 0, sizeof(char*));
memset(&args_253, 0, sizeof(va_list));
memset(&len_254, 0, sizeof(int));
memset(&right_value253, 0, sizeof(void*));
    if(_if_conditional304=((struct sInfo*)come_null_check(info, "03transpile2.c", 938))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional304) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_253,msg);
    __freed_obj__ = 0;
    len_254=vasprintf(&msg2_252,msg,args_253);
    __freed_obj__ = 0;
    __builtin_va_end(args_253);
    __freed_obj__ = 0;
    __dec_obj42=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s",msg2_252))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    free(msg2_252);
    __freed_obj__ = 0;
    if((&args_253) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_253), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    list$1CVALUEph_delete(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 952))->stack, "03transpile2.c", 952)),-value,-1);
    __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
int tmp_255;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1CVALUEph* __result119__;
_Bool _if_conditional311;
_Bool _if_conditional313;
struct list_item$1CVALUEph* it_258;
int i_259;
_Bool _while_condtional21;
_Bool _if_conditional314;
struct list_item$1CVALUEph* prev_it_260;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1CVALUEph* it_261;
int i_262;
_Bool _while_condtional22;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list_item$1CVALUEph* prev_it_263;
struct list_item$1CVALUEph* it_264;
struct list_item$1CVALUEph* head_prev_it_265;
struct list_item$1CVALUEph* tail_it_266;
int i_267;
_Bool _while_condtional23;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct list_item$1CVALUEph* prev_it_268;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct list$1CVALUEph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_255, 0, sizeof(int));
memset(&it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_259, 0, sizeof(int));
memset(&prev_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_262, 0, sizeof(int));
memset(&prev_it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_264, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_265, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_266, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_267, 0, sizeof(int));
memset(&prev_it_268, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional305=head<0,        __freed_obj__ = 0, 
        _if_conditional305) {
            head+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 508))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional306=tail<0,        __freed_obj__ = 0, 
        _if_conditional306) {
            tail+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 511))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional307=head>tail,        __freed_obj__ = 0, 
        _if_conditional307) {
            tmp_255=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_255;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional308=head<0,        __freed_obj__ = 0, 
        _if_conditional308) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional309=tail>((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 528))->len,        __freed_obj__ = 0, 
        _if_conditional309) {
            tail=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 525))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional310=head==tail,        __freed_obj__ = 0, 
        _if_conditional310) {
            __result119__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional311=head==0&&tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 627))->len,        __freed_obj__ = 0, 
        _if_conditional311) {
            list$1CVALUEph_reset(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 534)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional313=head==0,            __freed_obj__ = 0, 
            _if_conditional313) {
                it_258=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 537))->head;
                __freed_obj__ = 0;
                i_259=0;
                __freed_obj__ = 0;
                while(_while_condtional21=it_258!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    if(_if_conditional314=i_259<tail,                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        prev_it_260=it_258;
                        __freed_obj__ = 0;
                        it_258=((struct list_item$1CVALUEph*)come_null_check(it_258, "./comelang2.h", 543))->next;
                        __freed_obj__ = 0;
                        i_259++;
                        __freed_obj__ = 0;
                        if(prev_it_260 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 548))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional315=i_259==tail,                        __freed_obj__ = 0, 
                        _if_conditional315) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 551))->head=it_258;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_258=((struct list_item$1CVALUEph*)come_null_check(it_258, "./comelang2.h", 556))->next;
                            __freed_obj__ = 0;
                            i_259++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional316=tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 627))->len,                __freed_obj__ = 0, 
                _if_conditional316) {
                    it_261=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 562))->head;
                    __freed_obj__ = 0;
                    i_262=0;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_261!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        if(_if_conditional317=i_262==head,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 566))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional318=i_262>=head,                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            prev_it_263=it_261;
                            __freed_obj__ = 0;
                            it_261=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 573))->next;
                            __freed_obj__ = 0;
                            i_262++;
                            __freed_obj__ = 0;
                            if(prev_it_263 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 578))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_261=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 581))->next;
                            __freed_obj__ = 0;
                            i_262++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_264=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 587))->head;
                    __freed_obj__ = 0;
                    head_prev_it_265=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_266=((void*)0);
                    __freed_obj__ = 0;
                    i_267=0;
                    __freed_obj__ = 0;
                    while(_while_condtional23=it_264!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional23) {
                        if(_if_conditional319=i_267==head,                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            head_prev_it_265=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 596))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional320=i_267==tail,                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            tail_it_266=it_264;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional321=i_267>=head&&i_267<tail,                        __freed_obj__ = 0, 
                        _if_conditional321) {
                            prev_it_268=it_264;
                            __freed_obj__ = 0;
                            it_264=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 606))->next;
                            __freed_obj__ = 0;
                            i_267++;
                            __freed_obj__ = 0;
                            if(prev_it_268 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 611))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_264=((struct list_item$1CVALUEph*)come_null_check(it_264, "./comelang2.h", 614))->next;
                            __freed_obj__ = 0;
                            i_267++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional322=head_prev_it_265!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional322) {
                        ((struct list_item$1CVALUEph*)come_null_check(head_prev_it_265, "./comelang2.h", 620))->next=tail_it_266;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional323=tail_it_266!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional323) {
                        ((struct list_item$1CVALUEph*)come_null_check(tail_it_266, "./comelang2.h", 623))->prev=head_prev_it_265;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result121__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_256;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_257;
struct list$1CVALUEph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
                it_256=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional20=it_256!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional20) {
                    prev_it_257=it_256;
                    __freed_obj__ = 0;
                    it_256=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result120__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional312=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional312) {
                            if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj43;
void* right_value258;
void* right_value262;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    __dec_obj43=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode=((void*)0);
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result129__ = __result_obj__ = ((struct CVALUE*)(right_value262=CVALUE_clone(optional$2CVALUEphbool_value((come_push_stackframe("03transpile2.c", 960),((struct optional$2CVALUEphbool*)(right_value258=list$1CVALUEphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 960))->stack,offset))))))));
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result129__;
    come_pop_stackframe();
    __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional324;
struct list_item$1CVALUEph* it_269;
int i_270;
_Bool _while_condtional24;
_Bool _if_conditional325;
void* right_value254;
void* right_value255;
struct optional$2CVALUEphbool* __result123__;
struct CVALUE* default_value_271;
void* right_value256;
void* right_value257;
struct optional$2CVALUEphbool* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_269, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_270, 0, sizeof(int));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&default_value_271, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
        if(_if_conditional324=position<0,        __freed_obj__ = 0, 
        _if_conditional324) {
            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 735))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_269=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 738))->head;
        __freed_obj__ = 0;
        i_270=0;
        __freed_obj__ = 0;
        while(_while_condtional24=it_269!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional24) {
            if(_if_conditional325=position==i_270,            __freed_obj__ = 0, 
            _if_conditional325) {
                __result123__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value255=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value254=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 742)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_269, "./comelang2.h", 742))->item),(_Bool)1)));
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_269=((struct list_item$1CVALUEph*)come_null_check(it_269, "./comelang2.h", 744))->next;
            __freed_obj__ = 0;
            i_270++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_271,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result124__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2CVALUEphbool*)(right_value257=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value256=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 750))),(struct CVALUE*)come_increment_ref_count(default_value_271),(_Bool)0))));
        if(default_value_271 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_271, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
        if(default_value_271 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_271, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct CVALUE* __dec_obj44;
struct optional$2CVALUEphbool* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj44=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                    if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result122__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result122__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional326=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional327;
struct CVALUE* default_value_272;
struct CVALUE* __result125__;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_272, 0, sizeof(struct CVALUE*));
        if(_if_conditional327=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional327) {
            __freed_obj__ = 0;
            memset(&default_value_272,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result125__ = __result_obj__ = default_value_272;
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
        }
        else {
            __result126__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result126__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional328;
struct CVALUE* __result127__;
void* right_value259;
struct CVALUE* result_273;
_Bool _if_conditional329;
void* right_value260;
char* __dec_obj45;
_Bool _if_conditional330;
void* right_value261;
struct sType* __dec_obj46;
_Bool _if_conditional331;
struct CVALUE* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
memset(&result_273, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
        if(_if_conditional328=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional328) {
            __result127__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_273=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional329=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional329) {
            __dec_obj45=((struct CVALUE*)come_null_check(result_273, "CVALUE_clone", 4))->c_value;
            ((struct CVALUE*)come_null_check(result_273, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value260=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional330=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional330) {
            __dec_obj46=((struct CVALUE*)come_null_check(result_273, "CVALUE_clone", 5))->type;
            ((struct CVALUE*)come_null_check(result_273, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
            if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional331=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional331) {
            ((struct CVALUE*)come_null_check(result_273, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result128__ = __result_obj__ = result_273;
        if(result_273 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_273, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result128__;
        __freed_obj__ = 0;
        if(result_273 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj47=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode=((void*)0);
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2=((void*)0);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj49=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3=((void*)0);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
}

