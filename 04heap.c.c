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
int gRightValueNum=0;
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sGenericsFunpbool
{
    struct sGenericsFun* v1;
    _Bool v2;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

static char* optional$2charphbool_expect(struct optional$2charphbool* self);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2);
static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self);
static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info);

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












struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* result_32;
_Bool _if_conditional91;
struct sType* __result32__;
_Bool _if_conditional92;
struct sType* __result34__;
struct sClass* klass_33;
_Bool _if_conditional93;
void* right_value35;
struct sType* result_type_34;
void* right_value36;
void* right_value38;
struct tuple1$1sTypeph* __dec_obj24;
void* right_value39;
void* right_value40;
struct list$1sTypeph* new_param_types_35;
struct list$1sTypeph* o2_saved_36;
struct sType* it_39;
_Bool _for_condtionalA2;
void* right_value41;
struct sType* new_param_type_42;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional100;
int generics_number_46;
_Bool _if_conditional101;
void* right_value49;
struct sClass* klass2_51;
int generics_number2_52;
_Bool _if_conditional106;
void* right_value50;
struct list$1sNodeph* array_num_53;
_Bool immutable__54;
int pointer_num_55;
_Bool heap_56;
_Bool no_heap_57;
_Bool no_calling_destructor_58;
_Bool exception__59;
void* right_value51;
void* right_value52;
struct sType* __dec_obj30;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional113;
struct list$1sTypeph* o2_saved_62;
struct sType* it_63;
_Bool _for_condtionalA3;
void* right_value53;
struct sType* type_64;
void* right_value54;
_Bool _if_conditional114;
void* right_value55;
char* new_name_65;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&result_32, 0, sizeof(struct sType*));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_type_34, 0, sizeof(struct sType*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&new_param_types_35, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_36, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&new_param_type_42, 0, sizeof(struct sType*));
memset(&generics_number_46, 0, sizeof(int));
memset(&right_value49, 0, sizeof(void*));
memset(&klass2_51, 0, sizeof(struct sClass*));
memset(&generics_number2_52, 0, sizeof(int));
memset(&right_value50, 0, sizeof(void*));
memset(&array_num_53, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__54, 0, sizeof(_Bool));
memset(&pointer_num_55, 0, sizeof(int));
memset(&heap_56, 0, sizeof(_Bool));
memset(&no_heap_57, 0, sizeof(_Bool));
memset(&no_calling_destructor_58, 0, sizeof(_Bool));
memset(&exception__59, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&o2_saved_62, 0, sizeof(struct list$1sTypeph*));
memset(&it_63, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_64, 0, sizeof(struct sType*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&new_name_65, 0, sizeof(char*));
    result_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type==((void*)0),    __freed_obj__ = 0, 
    _if_conditional91) {
        __result32__ = __result_obj__ = result_32;
        if(result_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional92=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 13))->mGenericsTypes, "04heap.c", 13)))==0,    __freed_obj__ = 0, 
    _if_conditional92) {
        __result34__ = __result_obj__ = result_32;
        if(result_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result34__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_33=((struct sType*)come_null_check(type, "04heap.c", 13))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional93=string_operator_equals(((struct sClass*)come_null_check(klass_33, "04heap.c", 96))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional93) {
        result_type_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 16))->mResultType, "04heap.c", 16))->v1,generics_type,info))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=((struct sType*)come_null_check(result_32, "04heap.c", 18))->mResultType;
        ((struct sType*)come_null_check(result_32, "04heap.c", 18))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value38=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value36=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 18)))),(struct sType*)come_increment_ref_count(result_type_34)))));
        if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        new_param_types_35=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "04heap.c", 20))))))));
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        for(
        o2_saved_36=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 28))->mParamTypes)),it_39=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_36), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_36), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        _for_condtionalA2;        it_39=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_36), "04heap.c", 28))) ,        __freed_obj__ = 0, 
        0        ){
            new_param_type_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=solve_generics(it_39,generics_type,info))));
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(new_param_types_35, "04heap.c", 25)),(struct sType*)come_increment_ref_count(new_param_type_42));
            __freed_obj__ = 0;
            if(new_param_type_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_42, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_36 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_36, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj28=((struct sType*)come_null_check(result_32, "04heap.c", 28))->mParamTypes;
        ((struct sType*)come_null_check(result_32, "04heap.c", 28))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(new_param_types_35);
        if(__dec_obj28) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(result_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_param_types_35 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,new_param_types_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional100=((struct sClass*)come_null_check(klass_33, "04heap.c", 96))->mGenerics,        __freed_obj__ = 0, 
        _if_conditional100) {
            generics_number_46=((struct sClass*)come_null_check(klass_33, "04heap.c", 31))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional101=generics_number_46>=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes, "04heap.c", 39))),            __freed_obj__ = 0, 
            _if_conditional101) {
                err_msg(info,"invalid generics parametor number");
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            klass2_51=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 39),((struct optional$2sTypephbool*)(right_value49=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes,generics_number_46))))), "04heap.c", 39))->mClass;
            come_pop_stackframe();
            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            generics_number2_52=((struct sClass*)come_null_check(klass2_51, "04heap.c", 41))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional106=generics_number_46!=generics_number2_52,            __freed_obj__ = 0, 
            _if_conditional106) {
                array_num_53=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value50=list$1sNodephp_clone(((struct sType*)come_null_check(type, "04heap.c", 45))->mArrayNum))));
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                immutable__54=((struct sType*)come_null_check(type, "04heap.c", 46))->mImmutable;
                __freed_obj__ = 0;
                pointer_num_55=((struct sType*)come_null_check(type, "04heap.c", 47))->mPointerNum;
                __freed_obj__ = 0;
                heap_56=((struct sType*)come_null_check(type, "04heap.c", 48))->mHeap;
                __freed_obj__ = 0;
                no_heap_57=((struct sType*)come_null_check(type, "04heap.c", 50))->mNoHeap;
                __freed_obj__ = 0;
                no_calling_destructor_58=((struct sType*)come_null_check(type, "04heap.c", 51))->mNoCallingDestructor;
                __freed_obj__ = 0;
                exception__59=((struct sType*)come_null_check(type, "04heap.c", 52))->mException;
                __freed_obj__ = 0;
                come_clear_stackframe();
                __dec_obj30=result_32;
                result_32=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 54),((struct optional$2sTypephbool*)(right_value51=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 54))->mGenericsTypes,generics_number_46)))))))));
                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional107=heap_56,                __freed_obj__ = 0, 
                _if_conditional107) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 57))->mHeap=heap_56;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=exception__59,                __freed_obj__ = 0, 
                _if_conditional108) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 60))->mException=exception__59;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=no_heap_57,                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 63))->mNoHeap=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(result_32, "04heap.c", 64))->mHeap=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional110=no_calling_destructor_58,                __freed_obj__ = 0, 
                _if_conditional110) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 67))->mNoCallingDestructor=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional111=immutable__54,                __freed_obj__ = 0, 
                _if_conditional111) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 70))->mImmutable=immutable__54;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional112=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(array_num_53, "04heap.c", 76)))>0,                __freed_obj__ = 0, 
                _if_conditional112) {
                    __dec_obj31=((struct sType*)come_null_check(result_32, "04heap.c", 73))->mArrayNum;
                    ((struct sType*)come_null_check(result_32, "04heap.c", 73))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_53);
                    if(__dec_obj31) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional113=pointer_num_55>0,                __freed_obj__ = 0, 
                _if_conditional113) {
                    ((struct sType*)come_null_check(result_32, "04heap.c", 77))->mPointerNum+=pointer_num_55;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_53 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_53, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_32, "04heap.c", 82))->mGenericsTypes, "04heap.c", 82)));
            __freed_obj__ = 0;
            for(
            o2_saved_62=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 88))->mGenericsTypes)),it_63=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_62), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_62), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            _for_condtionalA3;            it_63=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_62), "04heap.c", 88))) ,            __freed_obj__ = 0, 
            0            ){
                type_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(it_63,generics_type,info))));
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_32, "04heap.c", 85))->mGenericsTypes, "04heap.c", 85)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(type_64)))));
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(type_64 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_62 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional114=!output_generics_struct(result_32,generics_type,info),            __freed_obj__ = 0, 
            _if_conditional114) {
                new_name_65=(char*)come_increment_ref_count(((char*)(right_value55=create_generics_name(type,info))));
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                printf("output generics is failed(%s)",new_name_65);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
                if(new_name_65 && !__freed_obj__) { new_name_65 = come_decrement_ref_count(new_name_65, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result51__ = __result_obj__ = result_32;
    if(result_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
    if(result_32 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result33__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result33__;
        __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value37;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
            __dec_obj23=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(v1))));
            if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result35__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional94;
struct sType* result_37;
struct sType* __result36__;
_Bool _if_conditional95;
struct sType* __result37__;
struct sType* result_38;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_37, 0, sizeof(struct sType*));
memset(&result_38, 0, sizeof(struct sType*));
            if(_if_conditional94=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                __freed_obj__ = 0;
                memset(&result_37,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result36__ = __result_obj__ = result_37;
                __freed_obj__ = 0;
                return __result36__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional95=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional95) {
                __result37__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_38,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result38__ = __result_obj__ = result_38;
            __freed_obj__ = 0;
            return __result38__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result39__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional96;
struct sType* result_40;
struct sType* __result40__;
_Bool _if_conditional97;
struct sType* __result41__;
struct sType* result_41;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_40, 0, sizeof(struct sType*));
memset(&result_41, 0, sizeof(struct sType*));
            if(_if_conditional96=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                __freed_obj__ = 0;
                memset(&result_40,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result40__ = __result_obj__ = result_40;
                __freed_obj__ = 0;
                return __result40__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional97=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional97) {
                __result41__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result41__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_41,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result42__ = __result_obj__ = result_41;
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional98;
void* right_value42;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj25;
_Bool _if_conditional99;
void* right_value43;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj26;
void* right_value44;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj27;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional98=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional98) {
                    litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value42=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj25=((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_43, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_43;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_43;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional99=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value43=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj26=((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_44, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_44;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_44;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value44=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj27=((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_45;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_45;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional102;
struct list_item$1sTypeph* it_47;
int i_48;
_Bool _while_condtional7;
_Bool _if_conditional103;
void* right_value45;
void* right_value46;
struct optional$2sTypephbool* __result45__;
struct sType* default_value_49;
void* right_value47;
void* right_value48;
struct optional$2sTypephbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_48, 0, sizeof(int));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&default_value_49, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
                if(_if_conditional102=position<0,                __freed_obj__ = 0, 
                _if_conditional102) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_47=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_48=0;
                __freed_obj__ = 0;
                while(_while_condtional7=it_47!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    if(_if_conditional103=position==i_48,                    __freed_obj__ = 0, 
                    _if_conditional103) {
                        __result45__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value46=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value45=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_47, "./comelang2.h", 742))->item),(_Bool)1)));
                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result45__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_47=((struct list_item$1sTypeph*)come_null_check(it_47, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_48++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_49,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result46__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value48=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value47=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_49),(_Bool)0))));
                if(default_value_49 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result46__;
                __freed_obj__ = 0;
                if(default_value_49 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj29;
struct optional$2sTypephbool* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj29=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result44__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result44__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional104=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional104) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional105;
struct sType* default_value_50;
struct sType* __result47__;
struct sType* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_50, 0, sizeof(struct sType*));
                if(_if_conditional105=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    __freed_obj__ = 0;
                    memset(&default_value_50,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result47__ = __result_obj__ = default_value_50;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                else {
                    __result48__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result49__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                    __freed_obj__ = 0;
                    return __result49__;
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_60;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_61;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sTypeph*));
                it_60=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_60!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    prev_it_61=it_60;
                    __freed_obj__ = 0;
                    it_60=((struct list_item$1sTypeph*)come_null_check(it_60, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_61 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result50__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result50__;
                __freed_obj__ = 0;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value56;
struct sType* result_66;
_Bool _if_conditional115;
void* right_value57;
struct sType* __dec_obj32;
struct sType* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
    result_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(type))));
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional115=generics_type,    __freed_obj__ = 0, 
    _if_conditional115) {
        __dec_obj32=result_66;
        result_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=solve_generics(result_66,generics_type,info))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = result_66;
    if(result_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(result_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
_Bool __freed_obj__;
char* p_67;
_Bool _if_conditional116;
_Bool _while_condtional9;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int n_68;
_Bool _while_condtional10;
int __result53__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_67, 0, sizeof(char*));
memset(&n_68, 0, sizeof(int));
    p_67=obj;
    __freed_obj__ = 0;
    if(_if_conditional116=*p_67==40,    __freed_obj__ = 0, 
    _if_conditional116) {
        p_67++;
        __freed_obj__ = 0;
        while(_while_condtional9=*p_67!=41,        __freed_obj__ = 0, 
        _while_condtional9) {
            p_67++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_67++;
        __freed_obj__ = 0;
        if(_if_conditional117=*p_67==40,        __freed_obj__ = 0, 
        _if_conditional117) {
            p_67++;
            __freed_obj__ = 0;
            if(_if_conditional118=memcmp(p_67,"right_value",strlen("right_value"))==0,            __freed_obj__ = 0, 
            _if_conditional118) {
                p_67+=strlen("right_value");
                __freed_obj__ = 0;
                if(_if_conditional119=xisdigit(*p_67),                __freed_obj__ = 0, 
                _if_conditional119) {
                    n_68=0;
                    __freed_obj__ = 0;
                    while(_while_condtional10=xisdigit(*p_67),                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        n_68=n_68*10+*p_67-48;
                        __freed_obj__ = 0;
                        p_67++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result53__ = n_68;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result53__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result54__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional120;
void* right_value58;
char* __result55__;
void* right_value59;
struct sRightValueObject* new_value_69;
struct sType* __dec_obj33;
void* right_value60;
char* __dec_obj34;
void* right_value61;
char* __dec_obj35;
void* right_value65;
char* buf_73;
void* right_value66;
void* right_value67;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&new_value_69, 0, sizeof(struct sRightValueObject*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&buf_73, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    if(_if_conditional120=((struct sInfo*)come_null_check(info, "04heap.c", 145))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional120) {
        __result55__ = __result_obj__ = ((char*)(right_value58=__builtin_string("")));
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    new_value_69=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value59=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 145))));
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj33=((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 146))->mType;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 146))->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 147))->mFreed=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 148))->mID=gRightValueNum;
    __freed_obj__ = 0;
    __dec_obj34=((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 149))->mVarName;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 149))->mVarName=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj35=((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 150))->mFunName;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 150))->mFunName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 150))->come_fun, "04heap.c", 150))->mName))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 151))->mBlockLevel=((struct sInfo*)come_null_check(info, "04heap.c", 151))->block_level;
    __freed_obj__ = 0;
    list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 153))->right_value_objects, "04heap.c", 153)),(struct sRightValueObject*)come_increment_ref_count(new_value_69));
    __freed_obj__ = 0;
    buf_73=(char*)come_increment_ref_count(((char*)(right_value65=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf_73);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result59__ = __result_obj__ = ((char*)come_null_check(((char*)(right_value67=xsprintf("((%s)(%s=%s))",optional$2charphbool_value((come_push_stackframe("04heap.c", 159),((struct optional$2charphbool*)(right_value66=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))))),((struct sRightValueObject*)come_null_check(new_value_69, "04heap.c", 159))->mVarName,obj))), "04heap.c", 159));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_69 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_73 && !__freed_obj__) { buf_73 = come_decrement_ref_count(buf_73, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result59__;
    come_pop_stackframe();
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_69 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_73 && !__freed_obj__) { buf_73 = come_decrement_ref_count(buf_73, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional121=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional121) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional122=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mVarName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 3))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional124;
void* right_value62;
struct list_item$1sRightValueObjectph* litem_70;
struct sRightValueObject* __dec_obj36;
_Bool _if_conditional126;
void* right_value63;
struct list_item$1sRightValueObjectph* litem_71;
struct sRightValueObject* __dec_obj37;
void* right_value64;
struct list_item$1sRightValueObjectph* litem_72;
struct sRightValueObject* __dec_obj38;
struct list$1sRightValueObjectph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional124=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional124) {
            litem_70=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value62=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 272))));
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj36=((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 276))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 276))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj36) { come_call_finalizer(sRightValueObject_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_70;
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 279))->head=litem_70;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional126=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional126) {
                litem_71=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value63=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 282))));
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_71, "./comelang2.h", 284))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_71, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj37=((struct list_item$1sRightValueObjectph*)come_null_check(litem_71, "./comelang2.h", 286))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_71, "./comelang2.h", 286))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj37) { come_call_finalizer(sRightValueObject_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_71;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_71;
                __freed_obj__ = 0;
            }
            else {
                litem_72=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value64=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 292))));
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_72, "./comelang2.h", 294))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_72, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj38=((struct list_item$1sRightValueObjectph*)come_null_check(litem_72, "./comelang2.h", 296))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_72, "./comelang2.h", 296))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj38) { come_call_finalizer(sRightValueObject_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_72;
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_72;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result56__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional125=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional125) {
                    if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
char* default_value_74;
char* __result57__;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_74, 0, sizeof(char*));
        if(_if_conditional127=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional127) {
            __freed_obj__ = 0;
            memset(&default_value_74,0,sizeof(char*));
            __freed_obj__ = 0;
            __result57__ = __result_obj__ = default_value_74;
            __freed_obj__ = 0;
            return __result57__;
            __freed_obj__ = 0;
        }
        else {
            __result58__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional128=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional128) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int i_75;
struct list$1sRightValueObjectph* o2_saved_76;
struct sRightValueObject* it_79;
_Bool _for_condtionalA4;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_75, 0, sizeof(int));
memset(&o2_saved_76, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_79, 0, sizeof(struct sRightValueObject*));
    i_75=0;
    __freed_obj__ = 0;
    for(
    o2_saved_76=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 172))->right_value_objects)),it_79=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_76), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_76), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    _for_condtionalA4;    it_79=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_76), "04heap.c", 172))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional133=((struct sRightValueObject*)come_null_check(it_79, "04heap.c", 169))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional133) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_75++;
        __freed_obj__ = 0;
    }
    if(o2_saved_76 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 172))->right_value_objects, "04heap.c", 172)),i_75,i_75+1);
    __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional129;
struct sRightValueObject* result_77;
struct sRightValueObject* __result60__;
_Bool _if_conditional130;
struct sRightValueObject* __result61__;
struct sRightValueObject* result_78;
struct sRightValueObject* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_77, 0, sizeof(struct sRightValueObject*));
memset(&result_78, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional129=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional129) {
            __freed_obj__ = 0;
            memset(&result_77,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result60__ = __result_obj__ = result_77;
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional130=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional130) {
            __result61__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result61__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_78,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result62__ = __result_obj__ = result_78;
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result63__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result63__;
        __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional131;
struct sRightValueObject* result_80;
struct sRightValueObject* __result64__;
_Bool _if_conditional132;
struct sRightValueObject* __result65__;
struct sRightValueObject* result_81;
struct sRightValueObject* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_80, 0, sizeof(struct sRightValueObject*));
memset(&result_81, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional131=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional131) {
            __freed_obj__ = 0;
            memset(&result_80,0,sizeof(struct sRightValueObject*));
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = result_80;
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional132=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional132) {
            __result65__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_81,0,sizeof(struct sRightValueObject*));
        __freed_obj__ = 0;
        __result66__ = __result_obj__ = result_81;
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_82;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_82=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_82!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_83=it_82;
            __freed_obj__ = 0;
            it_82=((struct list_item$1sRightValueObjectph*)come_null_check(it_82, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_83 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
int tmp_84;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct list$1sRightValueObjectph* __result67__;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list_item$1sRightValueObjectph* it_87;
int i_88;
_Bool _while_condtional13;
_Bool _if_conditional142;
struct list_item$1sRightValueObjectph* prev_it_89;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct list_item$1sRightValueObjectph* it_90;
int i_91;
_Bool _while_condtional14;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1sRightValueObjectph* prev_it_92;
struct list_item$1sRightValueObjectph* it_93;
struct list_item$1sRightValueObjectph* head_prev_it_94;
struct list_item$1sRightValueObjectph* tail_it_95;
int i_96;
_Bool _while_condtional15;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list_item$1sRightValueObjectph* prev_it_97;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct list$1sRightValueObjectph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_84, 0, sizeof(int));
memset(&it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_88, 0, sizeof(int));
memset(&prev_it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_91, 0, sizeof(int));
memset(&prev_it_92, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_94, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_95, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional134=head<0,        __freed_obj__ = 0, 
        _if_conditional134) {
            head+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 508))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional135=tail<0,        __freed_obj__ = 0, 
        _if_conditional135) {
            tail+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 511))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=head>tail,        __freed_obj__ = 0, 
        _if_conditional136) {
            tmp_84=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_84;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional137=head<0,        __freed_obj__ = 0, 
        _if_conditional137) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional138=tail>((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 528))->len,        __freed_obj__ = 0, 
        _if_conditional138) {
            tail=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 525))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional139=head==tail,        __freed_obj__ = 0, 
        _if_conditional139) {
            __result67__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result67__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional140=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,        __freed_obj__ = 0, 
        _if_conditional140) {
            list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 534)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional141=head==0,            __freed_obj__ = 0, 
            _if_conditional141) {
                it_87=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 537))->head;
                __freed_obj__ = 0;
                i_88=0;
                __freed_obj__ = 0;
                while(_while_condtional13=it_87!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional13) {
                    if(_if_conditional142=i_88<tail,                    __freed_obj__ = 0, 
                    _if_conditional142) {
                        prev_it_89=it_87;
                        __freed_obj__ = 0;
                        it_87=((struct list_item$1sRightValueObjectph*)come_null_check(it_87, "./comelang2.h", 543))->next;
                        __freed_obj__ = 0;
                        i_88++;
                        __freed_obj__ = 0;
                        if(prev_it_89 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 548))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional143=i_88==tail,                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 551))->head=it_87;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_87=((struct list_item$1sRightValueObjectph*)come_null_check(it_87, "./comelang2.h", 556))->next;
                            __freed_obj__ = 0;
                            i_88++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional144=tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 627))->len,                __freed_obj__ = 0, 
                _if_conditional144) {
                    it_90=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 562))->head;
                    __freed_obj__ = 0;
                    i_91=0;
                    __freed_obj__ = 0;
                    while(_while_condtional14=it_90!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional145=i_91==head,                        __freed_obj__ = 0, 
                        _if_conditional145) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(it_90, "./comelang2.h", 566))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional146=i_91>=head,                        __freed_obj__ = 0, 
                        _if_conditional146) {
                            prev_it_92=it_90;
                            __freed_obj__ = 0;
                            it_90=((struct list_item$1sRightValueObjectph*)come_null_check(it_90, "./comelang2.h", 573))->next;
                            __freed_obj__ = 0;
                            i_91++;
                            __freed_obj__ = 0;
                            if(prev_it_92 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 578))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_90=((struct list_item$1sRightValueObjectph*)come_null_check(it_90, "./comelang2.h", 581))->next;
                            __freed_obj__ = 0;
                            i_91++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_93=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 587))->head;
                    __freed_obj__ = 0;
                    head_prev_it_94=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_95=((void*)0);
                    __freed_obj__ = 0;
                    i_96=0;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_93!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        if(_if_conditional147=i_96==head,                        __freed_obj__ = 0, 
                        _if_conditional147) {
                            head_prev_it_94=((struct list_item$1sRightValueObjectph*)come_null_check(it_93, "./comelang2.h", 596))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional148=i_96==tail,                        __freed_obj__ = 0, 
                        _if_conditional148) {
                            tail_it_95=it_93;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional149=i_96>=head&&i_96<tail,                        __freed_obj__ = 0, 
                        _if_conditional149) {
                            prev_it_97=it_93;
                            __freed_obj__ = 0;
                            it_93=((struct list_item$1sRightValueObjectph*)come_null_check(it_93, "./comelang2.h", 606))->next;
                            __freed_obj__ = 0;
                            i_96++;
                            __freed_obj__ = 0;
                            if(prev_it_97 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 611))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_93=((struct list_item$1sRightValueObjectph*)come_null_check(it_93, "./comelang2.h", 614))->next;
                            __freed_obj__ = 0;
                            i_96++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional150=head_prev_it_94!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional150) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_94, "./comelang2.h", 620))->next=tail_it_95;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional151=tail_it_95!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional151) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_95, "./comelang2.h", 623))->prev=head_prev_it_94;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result69__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sRightValueObjectph* it_85;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_86;
struct list$1sRightValueObjectph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_85=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 476))->head;
                __freed_obj__ = 0;
                while(_while_condtional12=it_85!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional12) {
                    prev_it_86=it_85;
                    __freed_obj__ = 0;
                    it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 479))->next;
                    __freed_obj__ = 0;
                    if(prev_it_86 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                __freed_obj__ = 0;
                __result68__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result68__;
                __freed_obj__ = 0;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sClass* klass_98;
void* right_value68;
char* type_name_99;
void* right_value69;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_98, 0, sizeof(struct sClass*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_name_99, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
    klass_98=((struct sType*)come_null_check(type, "04heap.c", 177))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_99=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 179),((struct optional$2charphbool*)(right_value68=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = ((char*)(right_value69=xsprintf("(%s)come_increment_ref_count(%s)",type_name_99,obj)));
    if(type_name_99 && !__freed_obj__) { type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
    if(type_name_99 && !__freed_obj__) { type_name_99 = come_decrement_ref_count(type_name_99, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional152;
char* __result70__;
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
        __result70__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result70__;
        __freed_obj__ = 0;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* stack_saved_100;
struct list$1sRightValueObjectph* right_value_objects_101;
struct sClass* klass_102;
static int dec_num_103=0;
void* right_value70;
char* name_104;
void* right_value71;
_Bool no_decrement_105;
_Bool no_free_106;
_Bool _if_conditional153;
void* right_value72;
char* c_value_107;
struct sClass* klass_108;
char* class_name_109;
char* fun_name_110;
void* right_value73;
struct sType* type2_111;
void* right_value74;
char* fun_name2_112;
struct sFun* finalizer_113;
_Bool _if_conditional154;
void* right_value84;
_Bool _if_conditional161;
void* right_value85;
char* none_generics_name_119;
void* right_value86;
char* generics_fun_name_120;
void* right_value96;
struct sGenericsFun* generics_fun_125;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value97;
int i_126;
_Bool _for_condtionalA5;
void* right_value98;
char* new_fun_name_127;
void* right_value99;
_Bool _if_conditional169;
void* right_value100;
char* __dec_obj39;
_Bool _if_conditional170;
void* right_value101;
_Bool _if_conditional171;
void* right_value102;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_128;
char* new_fun_name_129;
char* __dec_obj40;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value103;
char* type_name_130;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value104;
_Bool _if_conditional177;
void* right_value105;
char* type_name_131;
void* right_value106;
void* right_value107;
struct list$1sRightValueObjectph* __dec_obj41;
struct list$1CVALUEph* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_100, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_101, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_102, 0, sizeof(struct sClass*));
memset(&right_value70, 0, sizeof(void*));
memset(&name_104, 0, sizeof(char*));
memset(&right_value71, 0, sizeof(void*));
memset(&no_decrement_105, 0, sizeof(_Bool));
memset(&no_free_106, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&c_value_107, 0, sizeof(char*));
memset(&klass_108, 0, sizeof(struct sClass*));
memset(&class_name_109, 0, sizeof(char*));
memset(&fun_name_110, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&type2_111, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&fun_name2_112, 0, sizeof(char*));
memset(&finalizer_113, 0, sizeof(struct sFun*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&none_generics_name_119, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&generics_fun_name_120, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&generics_fun_125, 0, sizeof(struct sGenericsFun*));
memset(&right_value97, 0, sizeof(void*));
memset(&i_126, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&new_fun_name_127, 0, sizeof(char*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&fun_128, 0, sizeof(struct sFun*));
memset(&new_fun_name_129, 0, sizeof(char*));
memset(&fun_128, 0, sizeof(struct sFun*));
memset(&new_fun_name_129, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&type_name_130, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&type_name_131, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    stack_saved_100=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 186))->stack);
    __freed_obj__ = 0;
    right_value_objects_101=((struct sInfo*)come_null_check(info, "04heap.c", 187))->right_value_objects;
    __freed_obj__ = 0;
    klass_102=((struct sType*)come_null_check(type, "04heap.c", 189))->mClass;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    name_104=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("__dec_obj%d",++dec_num_103))));
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 194),((struct optional$2charphbool*)(right_value71=make_define_var(type,name_104,(_Bool)0,info))))));
    come_pop_stackframe();
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    add_come_code(info,"%s=%s;\n",name_104,obj);
    __freed_obj__ = 0;
    obj=name_104;
    __freed_obj__ = 0;
    no_decrement_105=(_Bool)0;
    __freed_obj__ = 0;
    no_free_106=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional153=((struct sType*)come_null_check(type, "04heap.c", 286))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional153) {
        c_value_107=(char*)come_increment_ref_count(((char*)(right_value72=__builtin_string(obj))));
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        klass_108=((struct sType*)come_null_check(type, "04heap.c", 205))->mClass;
        __freed_obj__ = 0;
        class_name_109=((struct sClass*)come_null_check(klass_108, "04heap.c", 207))->mName;
        __freed_obj__ = 0;
        fun_name_110="finalize";
        __freed_obj__ = 0;
        type2_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(type))));
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_111, "04heap.c", 212))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        fun_name2_112=(char*)come_increment_ref_count(((char*)(right_value74=create_method_name(type,(_Bool)0,fun_name_110,info))));
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        finalizer_113=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional154=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 253))->mGenericsTypes, "04heap.c", 253)))>0,        __freed_obj__ = 0, 
        _if_conditional154) {
            come_clear_stackframe();
            finalizer_113=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 218),((struct optional$2sFunpbool*)(right_value84=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 218))->funcs,fun_name2_112)))));
            come_pop_stackframe();
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional161=finalizer_113==((void*)0),            __freed_obj__ = 0, 
            _if_conditional161) {
                none_generics_name_119=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_111, "04heap.c", 221))->mClass, "04heap.c", 221))->mName))));
                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                generics_fun_name_120=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s_%s",none_generics_name_119,fun_name_110))));
                if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                generics_fun_125=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 224),((struct optional$2sGenericsFunpbool*)(right_value96=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 224))->generics_funcs,generics_fun_name_120)))));
                come_pop_stackframe();
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional167=generics_fun_125,                __freed_obj__ = 0, 
                _if_conditional167) {
                    if(_if_conditional168=!create_generics_fun((char*)come_increment_ref_count(fun_name2_112),generics_fun_125,type,info),                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 229))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 229))->sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_113=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 232),((struct optional$2sFunpbool*)(right_value97=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 232))->funcs,fun_name2_112)))));
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(none_generics_name_119 && !__freed_obj__) { none_generics_name_119 = come_decrement_ref_count(none_generics_name_119, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_120 && !__freed_obj__) { generics_fun_name_120 = come_decrement_ref_count(generics_fun_name_120, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            __freed_obj__ = 0;
            for(
            i_126=128-1 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_126>=1 ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_126-- ,            __freed_obj__ = 0, 
            0            ){
                new_fun_name_127=(char*)come_increment_ref_count(((char*)(right_value98=xsprintf("%s_v%d",fun_name2_112,i_126))));
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                finalizer_113=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 240),((struct optional$2sFunpbool*)(right_value99=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 240))->funcs,new_fun_name_127)))));
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional169=finalizer_113,                __freed_obj__ = 0, 
                _if_conditional169) {
                    __dec_obj39=fun_name2_112;
                    fun_name2_112=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(new_fun_name_127))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(new_fun_name_127 && !__freed_obj__) { new_fun_name_127 = come_decrement_ref_count(new_fun_name_127, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(new_fun_name_127 && !__freed_obj__) { new_fun_name_127 = come_decrement_ref_count(new_fun_name_127, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional170=finalizer_113==((void*)0),            __freed_obj__ = 0, 
            _if_conditional170) {
                come_clear_stackframe();
                finalizer_113=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 249),((struct optional$2sFunpbool*)(right_value101=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 249))->funcs,fun_name2_112)))));
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional171=finalizer_113==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 262))->mClass, "04heap.c", 262))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 262))->mClass, "04heap.c", 262))->mNumber,        __freed_obj__ = 0, 
        _if_conditional171) {
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value102=create_finalizer_automatically(type,fun_name_110,info)));
            fun_128=multiple_assgin_var1->v1;
            new_fun_name_129=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj40=fun_name2_112;
            fun_name2_112=(char*)come_increment_ref_count(new_fun_name_129);
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            finalizer_113=fun_128;
            __freed_obj__ = 0;
            if(new_fun_name_129 && !__freed_obj__) { new_fun_name_129 = come_decrement_ref_count(new_fun_name_129, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional173=finalizer_113!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional173) {
            if(_if_conditional174=((struct sClass*)come_null_check(klass_108, "04heap.c", 274))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 274))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional174) {
                come_clear_stackframe();
                type_name_130=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 264),((struct optional$2charphbool*)(right_value103=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional175=c_value_107,                __freed_obj__ = 0, 
                _if_conditional175) {
                    add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_107,fun_name2_112,c_value_107,type_name_130,c_value_107,type_name_130,c_value_107,((struct sType*)come_null_check(type, "04heap.c", 266))->mAllocaValue,no_decrement_105,no_free_106,force_delete_);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type_name_130 && !__freed_obj__) { type_name_130 = come_decrement_ref_count(type_name_130, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional176=c_value_107,                __freed_obj__ = 0, 
                _if_conditional176) {
                    add_come_last_code2(info,((char*)(right_value104=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_107,fun_name2_112,c_value_107,((struct sType*)come_null_check(type, "04heap.c", 271))->mAllocaValue,no_decrement_105,no_free_106,force_delete_))));
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional177=((struct sClass*)come_null_check(klass_108, "04heap.c", 283))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 283))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional177) {
                come_clear_stackframe();
                type_name_131=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 277),((struct optional$2charphbool*)(right_value105=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                add_come_last_code2(info,((char*)(right_value106=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_104,name_104,name_104,type_name_131,name_104,type_name_131,name_104))));
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(type_name_131 && !__freed_obj__) { type_name_131 = come_decrement_ref_count(type_name_131, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                add_come_last_code2(info,((char*)(right_value107=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_104,name_104,name_104))));
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(c_value_107 && !__freed_obj__) { c_value_107 = come_decrement_ref_count(c_value_107, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_112 && !__freed_obj__) { fun_name2_112 = come_decrement_ref_count(fun_name2_112, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj41=((struct sInfo*)come_null_check(info, "04heap.c", 286))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 286))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_101);
    if(__dec_obj41) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj42=((struct sInfo*)come_null_check(info, "04heap.c", 287))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 287))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_100);
    if(__dec_obj42) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_100 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_104 && !__freed_obj__) { name_104 = come_decrement_ref_count(name_104, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_114;
unsigned int hash_115;
unsigned int it_116;
_Bool _while_condtional16;
_Bool _if_conditional155;
void* right_value75;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional157;
void* right_value76;
void* right_value77;
struct optional$2sFunpbool* __result75__;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value78;
void* right_value79;
struct optional$2sFunpbool* __result76__;
void* right_value80;
void* right_value81;
struct optional$2sFunpbool* __result77__;
void* right_value82;
void* right_value83;
struct optional$2sFunpbool* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_114, 0, sizeof(struct sFun*));
memset(&hash_115, 0, sizeof(unsigned int));
memset(&it_116, 0, sizeof(unsigned int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_114,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_115=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_116=hash_115;
                __freed_obj__ = 0;
                while(_while_condtional16=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional16) {
                    if(_if_conditional155=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_116],                    __freed_obj__ = 0, 
                    _if_conditional155) {
                        if(_if_conditional157=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value75=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_116], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional157) {
                            __result75__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value77=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value76=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_116],(_Bool)1)));
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result75__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_116++;
                        __freed_obj__ = 0;
                        if(_if_conditional158=it_116>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional158) {
                            it_116=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional159=it_116==hash_115,                            __freed_obj__ = 0, 
                            _if_conditional159) {
                                __result76__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value79=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value78=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_114,(_Bool)0))));
                                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result76__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result77__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value81=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value80=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_114,(_Bool)0))));
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result77__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result78__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value83=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value82=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_114,(_Bool)0))));
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional156;
_Bool default_value_117;
_Bool __result72__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_117, 0, sizeof(_Bool));
                            if(_if_conditional156=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional156) {
                                __freed_obj__ = 0;
                                memset(&default_value_117,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result72__ = default_value_117;
                                __freed_obj__ = 0;
                                return __result72__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result73__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result73__;
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

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result74__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result74__;
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
_Bool _if_conditional160;
struct sFun* default_value_118;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_118, 0, sizeof(struct sFun*));
                if(_if_conditional160=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    __freed_obj__ = 0;
                    memset(&default_value_118,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result79__ = __result_obj__ = default_value_118;
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                else {
                    __result80__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result80__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sGenericsFun* default_value_121;
unsigned int hash_122;
unsigned int it_123;
_Bool _while_condtional17;
_Bool _if_conditional162;
void* right_value87;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional163;
void* right_value88;
void* right_value89;
struct optional$2sGenericsFunpbool* __result82__;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value90;
void* right_value91;
struct optional$2sGenericsFunpbool* __result83__;
void* right_value92;
void* right_value93;
struct optional$2sGenericsFunpbool* __result84__;
void* right_value94;
void* right_value95;
struct optional$2sGenericsFunpbool* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_121, 0, sizeof(struct sGenericsFun*));
memset(&hash_122, 0, sizeof(unsigned int));
memset(&it_123, 0, sizeof(unsigned int));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_121,0,sizeof(struct sGenericsFun*));
                    __freed_obj__ = 0;
                    hash_122=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                    __freed_obj__ = 0;
                    it_123=hash_122;
                    __freed_obj__ = 0;
                    while(_while_condtional17=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional17) {
                        if(_if_conditional162=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_123],                        __freed_obj__ = 0, 
                        _if_conditional162) {
                            if(_if_conditional163=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b2=((struct optional$2boolbool*)(right_value87=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_123], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b2)),                            (right_value87 && right_value87 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __freed_obj__ = 0, 
                            _if_conditional163) {
                                __result82__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value89=optional$2sGenericsFunpbool_initialize((struct optional$2sGenericsFunpbool*)come_increment_ref_count(((struct optional$2sGenericsFunpbool*)(right_value88=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_123],(_Bool)1)));
                                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result82__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_123++;
                            __freed_obj__ = 0;
                            if(_if_conditional164=it_123>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                            __freed_obj__ = 0, 
                            _if_conditional164) {
                                it_123=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional165=it_123==hash_122,                                __freed_obj__ = 0, 
                                _if_conditional165) {
                                    __result83__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sGenericsFunpbool*)(right_value91=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value90=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1601))),default_value_121,(_Bool)0))));
                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result83__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result84__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sGenericsFunpbool*)(right_value93=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value92=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1605))),default_value_121,(_Bool)0))));
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result84__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result85__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sGenericsFunpbool*)(right_value95=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value94=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1609))),default_value_121,(_Bool)0))));
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result85__;
                    __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sGenericsFunpbool* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result81__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result81__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional166;
struct sGenericsFun* default_value_124;
struct sGenericsFun* __result86__;
struct sGenericsFun* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_124, 0, sizeof(struct sGenericsFun*));
                    if(_if_conditional166=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional166) {
                        __freed_obj__ = 0;
                        memset(&default_value_124,0,sizeof(struct sGenericsFun*));
                        __freed_obj__ = 0;
                        __result86__ = __result_obj__ = default_value_124;
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result87__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional172;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional172=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional172) {
                    if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1CVALUEph* it_132;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_132, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_133, 0, sizeof(struct list_item$1CVALUEph*));
        it_132=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 169))->head;
        __freed_obj__ = 0;
        while(_while_condtional18=it_132!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional18) {
            prev_it_133=it_132;
            __freed_obj__ = 0;
            it_132=((struct list_item$1CVALUEph*)come_null_check(it_132, "./comelang2.h", 172))->next;
            __freed_obj__ = 0;
            if(prev_it_133 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional178=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional178) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional179;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional179=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional179) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional180=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1CVALUEph* stack_saved_134;
struct list$1sRightValueObjectph* right_value_objects_135;
struct sType* type_before_136;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value108;
char* c_value_137;
struct sClass* klass_138;
char* class_name_139;
char* fun_name_140;
void* right_value109;
struct sType* type2_141;
void* right_value110;
char* fun_name2_142;
struct sFun* finalizer_143;
_Bool _if_conditional184;
void* right_value111;
_Bool _if_conditional185;
void* right_value112;
char* none_generics_name_144;
void* right_value113;
char* generics_fun_name_145;
void* right_value114;
struct sGenericsFun* generics_fun_146;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value115;
int i_147;
_Bool _for_condtionalA6;
void* right_value116;
char* new_fun_name_148;
void* right_value117;
_Bool _if_conditional188;
void* right_value118;
char* __dec_obj43;
_Bool _if_conditional189;
void* right_value119;
_Bool _if_conditional190;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_149;
char* new_fun_name_150;
char* __dec_obj44;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value121;
char* type_name_151;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value122;
void* right_value123;
_Bool _if_conditional200;
void* right_value124;
void* right_value125;
_Bool _if_conditional201;
struct list$1tuple2$2charphsTypephph* o2_saved_152;
struct tuple2$2charphsTypeph* it_155;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_158;
struct sType* field_type_159;
_Bool _if_conditional206;
void* right_value126;
void* right_value127;
char* obj_160;
_Bool _if_conditional210;
struct list$1tuple2$2charphsTypephph* o2_saved_163;
struct tuple2$2charphsTypeph* it_164;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_165;
struct sType* field_type_166;
_Bool _if_conditional211;
void* right_value128;
void* right_value129;
char* obj_167;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value130;
char* type_name_168;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value131;
char* c_value_169;
struct sClass* klass_170;
char* class_name_171;
char* fun_name_172;
void* right_value132;
struct sType* type2_173;
void* right_value133;
char* fun_name2_174;
struct sFun* finalizer_175;
_Bool _if_conditional222;
void* right_value134;
_Bool _if_conditional223;
void* right_value135;
char* none_generics_name_176;
void* right_value136;
char* generics_fun_name_177;
void* right_value137;
struct sGenericsFun* generics_fun_178;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value138;
int i_179;
_Bool _for_condtionalA9;
void* right_value139;
char* new_fun_name_180;
void* right_value140;
_Bool _if_conditional226;
void* right_value141;
char* __dec_obj45;
_Bool _if_conditional227;
void* right_value142;
_Bool _if_conditional228;
void* right_value143;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_181;
char* new_fun_name_182;
char* __dec_obj46;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value144;
char* type_name_183;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value145;
void* right_value146;
_Bool _if_conditional238;
void* right_value147;
void* right_value148;
_Bool _if_conditional239;
struct list$1tuple2$2charphsTypephph* o2_saved_184;
struct tuple2$2charphsTypeph* it_185;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_186;
struct sType* field_type_187;
_Bool _if_conditional240;
void* right_value149;
void* right_value150;
char* obj_188;
_Bool _if_conditional241;
struct list$1tuple2$2charphsTypephph* o2_saved_189;
struct tuple2$2charphsTypeph* it_190;
_Bool _for_condtionalA11;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_191;
struct sType* field_type_192;
_Bool _if_conditional242;
void* right_value151;
void* right_value152;
char* obj_193;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value153;
char* type_name_194;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct list$1sRightValueObjectph* __dec_obj47;
struct list$1CVALUEph* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_134, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_135, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_136, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&c_value_137, 0, sizeof(char*));
memset(&klass_138, 0, sizeof(struct sClass*));
memset(&class_name_139, 0, sizeof(char*));
memset(&fun_name_140, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&type2_141, 0, sizeof(struct sType*));
memset(&right_value110, 0, sizeof(void*));
memset(&fun_name2_142, 0, sizeof(char*));
memset(&finalizer_143, 0, sizeof(struct sFun*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&none_generics_name_144, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&generics_fun_name_145, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
memset(&generics_fun_146, 0, sizeof(struct sGenericsFun*));
memset(&right_value115, 0, sizeof(void*));
memset(&i_147, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&new_fun_name_148, 0, sizeof(char*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_149, 0, sizeof(struct sFun*));
memset(&new_fun_name_150, 0, sizeof(char*));
memset(&fun_149, 0, sizeof(struct sFun*));
memset(&new_fun_name_150, 0, sizeof(char*));
memset(&right_value121, 0, sizeof(void*));
memset(&type_name_151, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&o2_saved_152, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_155, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&name_158, 0, sizeof(char*));
memset(&field_type_159, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&obj_160, 0, sizeof(char*));
memset(&o2_saved_163, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_164, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_165, 0, sizeof(char*));
memset(&field_type_166, 0, sizeof(struct sType*));
memset(&name_165, 0, sizeof(char*));
memset(&field_type_166, 0, sizeof(struct sType*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&obj_167, 0, sizeof(char*));
memset(&right_value130, 0, sizeof(void*));
memset(&type_name_168, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&c_value_169, 0, sizeof(char*));
memset(&klass_170, 0, sizeof(struct sClass*));
memset(&class_name_171, 0, sizeof(char*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&type2_173, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&fun_name2_174, 0, sizeof(char*));
memset(&finalizer_175, 0, sizeof(struct sFun*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&none_generics_name_176, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
memset(&generics_fun_name_177, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&generics_fun_178, 0, sizeof(struct sGenericsFun*));
memset(&right_value138, 0, sizeof(void*));
memset(&i_179, 0, sizeof(int));
memset(&right_value139, 0, sizeof(void*));
memset(&new_fun_name_180, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&fun_181, 0, sizeof(struct sFun*));
memset(&new_fun_name_182, 0, sizeof(char*));
memset(&fun_181, 0, sizeof(struct sFun*));
memset(&new_fun_name_182, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&type_name_183, 0, sizeof(char*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&o2_saved_184, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_185, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_186, 0, sizeof(char*));
memset(&field_type_187, 0, sizeof(struct sType*));
memset(&name_186, 0, sizeof(char*));
memset(&field_type_187, 0, sizeof(struct sType*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&obj_188, 0, sizeof(char*));
memset(&o2_saved_189, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_190, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_191, 0, sizeof(char*));
memset(&field_type_192, 0, sizeof(struct sType*));
memset(&name_191, 0, sizeof(char*));
memset(&field_type_192, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&obj_193, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&type_name_194, 0, sizeof(char*));
    stack_saved_134=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack);
    __freed_obj__ = 0;
    right_value_objects_135=((struct sInfo*)come_null_check(info, "04heap.c", 293))->right_value_objects;
    __freed_obj__ = 0;
    type_before_136=type;
    __freed_obj__ = 0;
    if(_if_conditional181=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 302))->mNoSolvedGenericsType, "04heap.c", 302))->v1,    __freed_obj__ = 0, 
    _if_conditional181) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 299))->mNoSolvedGenericsType, "04heap.c", 299))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional182=((struct sType*)come_null_check(type, "04heap.c", 651))->mPointerNum>0||((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 651))->mClass, "04heap.c", 651))->mProtocol||list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 651))->mGenericsTypes, "04heap.c", 651)))>0||(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 651))->come_fun, "04heap.c", 651))->mCloner&&ret_value),    __freed_obj__ = 0, 
    _if_conditional182) {
        if(_if_conditional183=force_delete_,        __freed_obj__ = 0, 
        _if_conditional183) {
            c_value_137=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(obj))));
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            klass_138=((struct sType*)come_null_check(type, "04heap.c", 306))->mClass;
            __freed_obj__ = 0;
            class_name_139=((struct sClass*)come_null_check(klass_138, "04heap.c", 308))->mName;
            __freed_obj__ = 0;
            fun_name_140="force_finalize";
            __freed_obj__ = 0;
            type2_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type))));
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_141, "04heap.c", 313))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_142=(char*)come_increment_ref_count(((char*)(right_value110=create_method_name(type,(_Bool)0,fun_name_140,info))));
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            finalizer_143=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional184=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 354))->mGenericsTypes, "04heap.c", 354)))>0,            __freed_obj__ = 0, 
            _if_conditional184) {
                come_clear_stackframe();
                finalizer_143=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 319),((struct optional$2sFunpbool*)(right_value111=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 319))->funcs,fun_name2_142)))));
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional185=finalizer_143==((void*)0),                __freed_obj__ = 0, 
                _if_conditional185) {
                    none_generics_name_144=(char*)come_increment_ref_count(((char*)(right_value112=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_141, "04heap.c", 322))->mClass, "04heap.c", 322))->mName))));
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    generics_fun_name_145=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s_%s",none_generics_name_144,fun_name_140))));
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_146=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 325),((struct optional$2sGenericsFunpbool*)(right_value114=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 325))->generics_funcs,generics_fun_name_145)))));
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional186=generics_fun_146,                    __freed_obj__ = 0, 
                    _if_conditional186) {
                        if(_if_conditional187=!create_generics_fun((char*)come_increment_ref_count(fun_name2_142),generics_fun_146,type,info),                        __freed_obj__ = 0, 
                        _if_conditional187) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 330))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 330))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_143=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 333),((struct optional$2sFunpbool*)(right_value115=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 333))->funcs,fun_name2_142)))));
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_144 && !__freed_obj__) { none_generics_name_144 = come_decrement_ref_count(none_generics_name_144, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_145 && !__freed_obj__) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_147=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA6=                i_147>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA6;                i_147-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_148=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s_v%d",fun_name2_142,i_147))));
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_143=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 341),((struct optional$2sFunpbool*)(right_value117=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 341))->funcs,new_fun_name_148)))));
                    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional188=finalizer_143,                    __freed_obj__ = 0, 
                    _if_conditional188) {
                        __dec_obj43=fun_name2_142;
                        fun_name2_142=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(new_fun_name_148))));
                        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(new_fun_name_148 && !__freed_obj__) { new_fun_name_148 = come_decrement_ref_count(new_fun_name_148, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_148 && !__freed_obj__) { new_fun_name_148 = come_decrement_ref_count(new_fun_name_148, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional189=finalizer_143==((void*)0),                __freed_obj__ = 0, 
                _if_conditional189) {
                    come_clear_stackframe();
                    finalizer_143=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 350),((struct optional$2sFunpbool*)(right_value119=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 350))->funcs,fun_name2_142)))));
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional190=finalizer_143==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 363))->mClass, "04heap.c", 363))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 363))->mClass, "04heap.c", 363))->mNumber,            __freed_obj__ = 0, 
            _if_conditional190) {
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value120=create_force_finalizer_automatically(type,fun_name_140,info)));
                fun_149=multiple_assgin_var2->v1;
                new_fun_name_150=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj44=fun_name2_142;
                fun_name2_142=(char*)come_increment_ref_count(new_fun_name_150);
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_143=fun_149;
                __freed_obj__ = 0;
                if(new_fun_name_150 && !__freed_obj__) { new_fun_name_150 = come_decrement_ref_count(new_fun_name_150, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional191=finalizer_143!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                if(_if_conditional192=((struct sClass*)come_null_check(klass_138, "04heap.c", 405))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 405))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional192) {
                    come_clear_stackframe();
                    type_name_151=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 365),((struct optional$2charphbool*)(right_value121=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional193=c_value_137,                    __freed_obj__ = 0, 
                    _if_conditional193) {
                        if(_if_conditional194=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                            if(_if_conditional195=comma,                            __freed_obj__ = 0, 
                            _if_conditional195) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_137,c_value_137,fun_name2_142,c_value_137,type_name_151,c_value_137,type_name_151,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 369))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_137,c_value_137,fun_name2_142,c_value_137,type_name_151,c_value_137,type_name_151,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 372))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional196=comma,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_137,fun_name2_142,c_value_137,type_name_151,c_value_137,type_name_151,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 377))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_137,fun_name2_142,c_value_137,type_name_151,c_value_137,type_name_151,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 380))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_151 && !__freed_obj__) { type_name_151 = come_decrement_ref_count(type_name_151, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional197=c_value_137,                    __freed_obj__ = 0, 
                    _if_conditional197) {
                        if(_if_conditional198=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional198) {
                            if(_if_conditional199=comma,                            __freed_obj__ = 0, 
                            _if_conditional199) {
                                add_come_code(info,((char*)(right_value122=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_137,c_value_137,fun_name2_142,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 389))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value123=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_137,c_value_137,fun_name2_142,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 392))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional200=comma,                            __freed_obj__ = 0, 
                            _if_conditional200) {
                                add_come_code(info,((char*)(right_value124=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_137,fun_name2_142,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 397))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value125=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_137,fun_name2_142,c_value_137,((struct sType*)come_null_check(type, "04heap.c", 400))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional201=((struct sClass*)come_null_check(klass_138, "04heap.c", 431))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 431))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional201) {
                    for(
                    o2_saved_152=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_138, "04heap.c", 417))->mFields)),it_155=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_152), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA7=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_152), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA7;                    it_155=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_152), "04heap.c", 417))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var3=it_155;
                        name_158=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_159=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional206=((struct sType*)come_null_check(field_type_159, "04heap.c", 416))->mHeap&&((struct sType*)come_null_check(field_type_159, "04heap.c", 416))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional206) {
                            come_clear_stackframe();
                            obj_160=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 413),((struct optional$2charphbool*)(right_value126=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_137,name_158))));
                            come_pop_stackframe();
                            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            free_object(field_type_159,obj_160,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_160 && !__freed_obj__) { obj_160 = come_decrement_ref_count(obj_160, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_158 && !__freed_obj__) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_152 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional210=((struct sClass*)come_null_check(klass_138, "04heap.c", 431))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 431))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        for(
                        o2_saved_163=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_138, "04heap.c", 428))->mFields)),it_164=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_163), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA8=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_163), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA8;                        it_164=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_163), "04heap.c", 428))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var4=it_164;
                            name_165=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_166=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional211=((struct sType*)come_null_check(field_type_166, "04heap.c", 427))->mHeap&&((struct sType*)come_null_check(field_type_166, "04heap.c", 427))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional211) {
                                come_clear_stackframe();
                                obj_167=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 424),((struct optional$2charphbool*)(right_value128=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_137,name_165))));
                                come_pop_stackframe();
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                free_object(field_type_166,obj_167,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_167 && !__freed_obj__) { obj_167 = come_decrement_ref_count(obj_167, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_165 && !__freed_obj__) { name_165 = come_decrement_ref_count(name_165, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_166 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_163 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional212=!((struct sType*)come_null_check(type, "04heap.c", 474))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional212) {
                    if(_if_conditional213=((struct sClass*)come_null_check(klass_138, "04heap.c", 473))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 473))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional213) {
                        if(_if_conditional214=c_value_137,                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            come_clear_stackframe();
                            type_name_168=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 434),((struct optional$2charphbool*)(right_value130=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional215=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional215) {
                                if(_if_conditional216=comma,                                __freed_obj__ = 0, 
                                _if_conditional216) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_137,c_value_137,c_value_137,c_value_137,type_name_168,c_value_137,type_name_168,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_137,c_value_137,c_value_137,c_value_137,type_name_168,c_value_137,type_name_168,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional217=comma,                                __freed_obj__ = 0, 
                                _if_conditional217) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_137,c_value_137,c_value_137,type_name_168,c_value_137,type_name_168,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_137,c_value_137,c_value_137,type_name_168,c_value_137,type_name_168,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_168 && !__freed_obj__) { type_name_168 = come_decrement_ref_count(type_name_168, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional218=c_value_137,                        __freed_obj__ = 0, 
                        _if_conditional218) {
                            if(_if_conditional219=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional219) {
                                if(_if_conditional220=comma,                                __freed_obj__ = 0, 
                                _if_conditional220) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_137,c_value_137,c_value_137,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_137,c_value_137,c_value_137,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional221=comma,                                __freed_obj__ = 0, 
                                _if_conditional221) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_137,c_value_137,c_value_137,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_137,c_value_137,c_value_137,no_decrement,no_free,force_delete_);
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
            if(c_value_137 && !__freed_obj__) { c_value_137 = come_decrement_ref_count(c_value_137, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_141, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_142 && !__freed_obj__) { fun_name2_142 = come_decrement_ref_count(fun_name2_142, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            c_value_169=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(obj))));
            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            klass_170=((struct sType*)come_null_check(type, "04heap.c", 479))->mClass;
            __freed_obj__ = 0;
            class_name_171=((struct sClass*)come_null_check(klass_170, "04heap.c", 481))->mName;
            __freed_obj__ = 0;
            fun_name_172="finalize";
            __freed_obj__ = 0;
            type2_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type))));
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_173, "04heap.c", 486))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_174=(char*)come_increment_ref_count(((char*)(right_value133=create_method_name(type,(_Bool)0,fun_name_172,info))));
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            finalizer_175=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional222=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 527))->mGenericsTypes, "04heap.c", 527)))>0,            __freed_obj__ = 0, 
            _if_conditional222) {
                come_clear_stackframe();
                finalizer_175=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 492),((struct optional$2sFunpbool*)(right_value134=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 492))->funcs,fun_name2_174)))));
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional223=finalizer_175==((void*)0),                __freed_obj__ = 0, 
                _if_conditional223) {
                    none_generics_name_176=(char*)come_increment_ref_count(((char*)(right_value135=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_173, "04heap.c", 495))->mClass, "04heap.c", 495))->mName))));
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    generics_fun_name_177=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("%s_%s",none_generics_name_176,fun_name_172))));
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    generics_fun_178=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 498),((struct optional$2sGenericsFunpbool*)(right_value137=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 498))->generics_funcs,generics_fun_name_177)))));
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional224=generics_fun_178,                    __freed_obj__ = 0, 
                    _if_conditional224) {
                        if(_if_conditional225=!create_generics_fun((char*)come_increment_ref_count(fun_name2_174),generics_fun_178,type,info),                        __freed_obj__ = 0, 
                        _if_conditional225) {
                            printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 503))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 503))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        finalizer_175=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 506),((struct optional$2sFunpbool*)(right_value138=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 506))->funcs,fun_name2_174)))));
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_176 && !__freed_obj__) { none_generics_name_176 = come_decrement_ref_count(none_generics_name_176, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_177 && !__freed_obj__) { generics_fun_name_177 = come_decrement_ref_count(generics_fun_name_177, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_179=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA9=                i_179>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA9;                i_179-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_180=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s_v%d",fun_name2_174,i_179))));
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    finalizer_175=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 514),((struct optional$2sFunpbool*)(right_value140=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 514))->funcs,new_fun_name_180)))));
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional226=finalizer_175,                    __freed_obj__ = 0, 
                    _if_conditional226) {
                        __dec_obj45=fun_name2_174;
                        fun_name2_174=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(new_fun_name_180))));
                        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(new_fun_name_180 && !__freed_obj__) { new_fun_name_180 = come_decrement_ref_count(new_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_180 && !__freed_obj__) { new_fun_name_180 = come_decrement_ref_count(new_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional227=finalizer_175==((void*)0),                __freed_obj__ = 0, 
                _if_conditional227) {
                    come_clear_stackframe();
                    finalizer_175=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 523),((struct optional$2sFunpbool*)(right_value142=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 523))->funcs,fun_name2_174)))));
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=finalizer_175==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 536))->mClass, "04heap.c", 536))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 536))->mClass, "04heap.c", 536))->mNumber,            __freed_obj__ = 0, 
            _if_conditional228) {
                multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value143=create_finalizer_automatically(type,fun_name_172,info)));
                fun_181=multiple_assgin_var5->v1;
                new_fun_name_182=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj46=fun_name2_174;
                fun_name2_174=(char*)come_increment_ref_count(new_fun_name_182);
                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_175=fun_181;
                __freed_obj__ = 0;
                if(new_fun_name_182 && !__freed_obj__) { new_fun_name_182 = come_decrement_ref_count(new_fun_name_182, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional229=finalizer_175!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
                if(_if_conditional230=((struct sClass*)come_null_check(klass_170, "04heap.c", 578))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 578))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional230) {
                    come_clear_stackframe();
                    type_name_183=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 538),((struct optional$2charphbool*)(right_value144=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional231=c_value_169,                    __freed_obj__ = 0, 
                    _if_conditional231) {
                        if(_if_conditional232=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional232) {
                            if(_if_conditional233=comma,                            __freed_obj__ = 0, 
                            _if_conditional233) {
                                add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_169,c_value_169,fun_name2_174,c_value_169,type_name_183,c_value_169,type_name_183,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 542))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_169,c_value_169,fun_name2_174,c_value_169,type_name_183,c_value_169,type_name_183,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 545))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional234=comma,                            __freed_obj__ = 0, 
                            _if_conditional234) {
                                add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_169,fun_name2_174,c_value_169,type_name_183,c_value_169,type_name_183,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 550))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_169,fun_name2_174,c_value_169,type_name_183,c_value_169,type_name_183,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 553))->mAllocaValue,no_decrement,no_free,force_delete_);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_183 && !__freed_obj__) { type_name_183 = come_decrement_ref_count(type_name_183, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional235=c_value_169,                    __freed_obj__ = 0, 
                    _if_conditional235) {
                        if(_if_conditional236=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            if(_if_conditional237=comma,                            __freed_obj__ = 0, 
                            _if_conditional237) {
                                add_come_code(info,((char*)(right_value145=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_169,c_value_169,fun_name2_174,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 562))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value146=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_169,c_value_169,fun_name2_174,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 565))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional238=comma,                            __freed_obj__ = 0, 
                            _if_conditional238) {
                                add_come_code(info,((char*)(right_value147=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_169,fun_name2_174,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 570))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                add_come_code(info,((char*)(right_value148=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_169,fun_name2_174,c_value_169,((struct sType*)come_null_check(type, "04heap.c", 573))->mAllocaValue,no_decrement,no_free,force_delete_))));
                                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
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
                if(_if_conditional239=((struct sClass*)come_null_check(klass_170, "04heap.c", 604))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 604))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional239) {
                    for(
                    o2_saved_184=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_170, "04heap.c", 590))->mFields)),it_185=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_184), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA10=                    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_184), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA10;                    it_185=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_184), "04heap.c", 590))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var6=it_185;
                        name_186=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_187=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional240=((struct sType*)come_null_check(field_type_187, "04heap.c", 589))->mHeap&&((struct sType*)come_null_check(field_type_187, "04heap.c", 589))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional240) {
                            come_clear_stackframe();
                            obj_188=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 586),((struct optional$2charphbool*)(right_value149=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_169,name_186))));
                            come_pop_stackframe();
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            free_object(field_type_187,obj_188,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            __freed_obj__ = 0;
                            if(obj_188 && !__freed_obj__) { obj_188 = come_decrement_ref_count(obj_188, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_186 && !__freed_obj__) { name_186 = come_decrement_ref_count(name_186, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_184 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional241=((struct sClass*)come_null_check(klass_170, "04heap.c", 604))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 604))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        for(
                        o2_saved_189=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_170, "04heap.c", 601))->mFields)),it_190=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA11=                        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA11;                        it_190=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "04heap.c", 601))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var7=it_190;
                            name_191=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_192=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional242=((struct sType*)come_null_check(field_type_192, "04heap.c", 600))->mHeap&&((struct sType*)come_null_check(field_type_192, "04heap.c", 600))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional242) {
                                come_clear_stackframe();
                                obj_193=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 597),((struct optional$2charphbool*)(right_value151=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),c_value_169,name_191))));
                                come_pop_stackframe();
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                free_object(field_type_192,obj_193,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                __freed_obj__ = 0;
                                if(obj_193 && !__freed_obj__) { obj_193 = come_decrement_ref_count(obj_193, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_191 && !__freed_obj__) { name_191 = come_decrement_ref_count(name_191, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_192 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_189 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional243=!((struct sType*)come_null_check(type, "04heap.c", 647))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional243) {
                    if(_if_conditional244=((struct sClass*)come_null_check(klass_170, "04heap.c", 646))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 646))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional244) {
                        if(_if_conditional245=c_value_169,                        __freed_obj__ = 0, 
                        _if_conditional245) {
                            come_clear_stackframe();
                            type_name_194=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 607),((struct optional$2charphbool*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
                            come_pop_stackframe();
                            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional246=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional246) {
                                if(_if_conditional247=comma,                                __freed_obj__ = 0, 
                                _if_conditional247) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_169,c_value_169,c_value_169,c_value_169,type_name_194,c_value_169,type_name_194,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_169,c_value_169,c_value_169,c_value_169,type_name_194,c_value_169,type_name_194,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional248=comma,                                __freed_obj__ = 0, 
                                _if_conditional248) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_169,c_value_169,c_value_169,type_name_194,c_value_169,type_name_194,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_169,c_value_169,c_value_169,type_name_194,c_value_169,type_name_194,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_194 && !__freed_obj__) { type_name_194 = come_decrement_ref_count(type_name_194, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional249=c_value_169,                        __freed_obj__ = 0, 
                        _if_conditional249) {
                            if(_if_conditional250=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional250) {
                                if(_if_conditional251=comma,                                __freed_obj__ = 0, 
                                _if_conditional251) {
                                    add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_169,c_value_169,c_value_169,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_169,c_value_169,c_value_169,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional252=comma,                                __freed_obj__ = 0, 
                                _if_conditional252) {
                                    add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_169,c_value_169,c_value_169,no_decrement,no_free,force_delete_);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_169,c_value_169,c_value_169,no_decrement,no_free,force_delete_);
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
            if(c_value_169 && !__freed_obj__) { c_value_169 = come_decrement_ref_count(c_value_169, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_173 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_173, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_174 && !__freed_obj__) { fun_name2_174 = come_decrement_ref_count(fun_name2_174, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj47=((struct sInfo*)come_null_check(info, "04heap.c", 651))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 651))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_135);
    if(__dec_obj47) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj48=((struct sInfo*)come_null_check(info, "04heap.c", 652))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 652))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_134);
    if(__dec_obj48) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_134 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional202;
struct tuple2$2charphsTypeph* result_153;
struct tuple2$2charphsTypeph* __result88__;
_Bool _if_conditional203;
struct tuple2$2charphsTypeph* __result89__;
struct tuple2$2charphsTypeph* result_154;
struct tuple2$2charphsTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_153, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_154, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional202=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            __freed_obj__ = 0;
                            memset(&result_153,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result88__ = __result_obj__ = result_153;
                            __freed_obj__ = 0;
                            return __result88__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional203=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional203) {
                            __result89__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result89__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_154,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result90__ = __result_obj__ = result_154;
                        __freed_obj__ = 0;
                        return __result90__;
                        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result91__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result91__;
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional204;
struct tuple2$2charphsTypeph* result_156;
struct tuple2$2charphsTypeph* __result92__;
_Bool _if_conditional205;
struct tuple2$2charphsTypeph* __result93__;
struct tuple2$2charphsTypeph* result_157;
struct tuple2$2charphsTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_156, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_157, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional204=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional204) {
                            __freed_obj__ = 0;
                            memset(&result_156,0,sizeof(struct tuple2$2charphsTypeph*));
                            __freed_obj__ = 0;
                            __result92__ = __result_obj__ = result_156;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional205=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional205) {
                            __result93__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result93__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_157,0,sizeof(struct tuple2$2charphsTypeph*));
                        __freed_obj__ = 0;
                        __result94__ = __result_obj__ = result_157;
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_161;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_161=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_161!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            prev_it_162=it_161;
                            __freed_obj__ = 0;
                            it_161=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_161, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_162 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional207=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional207) {
                                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional208;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional208=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional208) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional209=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional209) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value154;
struct sType* type2_195;
_Bool _if_conditional253;
char* result_196;
struct sType* result_type_197;
struct list$1CVALUEph* stack_saved_198;
struct list$1sRightValueObjectph* right_value_objects_199;
void* right_value155;
char* c_value_200;
struct sClass* klass_201;
char* class_name_202;
char* fun_name_203;
struct sFun* cloner_204;
char* fun_name2_205;
_Bool _if_conditional254;
void* right_value156;
char* none_generics_name_206;
void* right_value157;
struct sType* obj_type_207;
void* right_value158;
char* __dec_obj49;
void* right_value159;
char* fun_name3_208;
void* right_value161;
struct sGenericsFun* generics_fun_211;
_Bool _if_conditional268;
void* right_value162;
_Bool _if_conditional269;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value169;
struct tuple2$2sTypephcharph* __result100__;
void* right_value170;
void* right_value171;
char* __dec_obj52;
int i_212;
_Bool _for_condtionalA12;
void* right_value172;
char* new_fun_name_213;
void* right_value173;
_Bool _if_conditional272;
void* right_value174;
char* __dec_obj53;
_Bool _if_conditional273;
void* right_value175;
_Bool _if_conditional274;
void* right_value176;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_214;
char* new_fun_name_215;
char* __dec_obj54;
_Bool _if_conditional275;
void* right_value177;
char* __dec_obj55;
struct sType* __dec_obj56;
void* right_value178;
struct sType* __dec_obj57;
void* right_value179;
char* type_name_216;
void* right_value180;
char* __dec_obj58;
void* right_value181;
struct sType* __dec_obj59;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
void* right_value182;
void* right_value183;
struct tuple2$2sTypephcharph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&type2_195, 0, sizeof(struct sType*));
memset(&result_196, 0, sizeof(char*));
memset(&result_type_197, 0, sizeof(struct sType*));
memset(&stack_saved_198, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_199, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_200, 0, sizeof(char*));
memset(&klass_201, 0, sizeof(struct sClass*));
memset(&class_name_202, 0, sizeof(char*));
memset(&fun_name_203, 0, sizeof(char*));
memset(&cloner_204, 0, sizeof(struct sFun*));
memset(&fun_name2_205, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&none_generics_name_206, 0, sizeof(char*));
memset(&right_value157, 0, sizeof(void*));
memset(&obj_type_207, 0, sizeof(struct sType*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&fun_name3_208, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&generics_fun_211, 0, sizeof(struct sGenericsFun*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&i_212, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&new_fun_name_213, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&fun_214, 0, sizeof(struct sFun*));
memset(&new_fun_name_215, 0, sizeof(char*));
memset(&fun_214, 0, sizeof(struct sFun*));
memset(&new_fun_name_215, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&type_name_216, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    type2_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type))));
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional253=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 662))->mNoSolvedGenericsType, "04heap.c", 662))->v1,    __freed_obj__ = 0, 
    _if_conditional253) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 659))->mNoSolvedGenericsType, "04heap.c", 659))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_196=((void*)0);
    __freed_obj__ = 0;
    result_type_197=((void*)0);
    __freed_obj__ = 0;
    stack_saved_198=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 664))->stack);
    __freed_obj__ = 0;
    right_value_objects_199=((struct sInfo*)come_null_check(info, "04heap.c", 665))->right_value_objects;
    __freed_obj__ = 0;
    c_value_200=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(obj))));
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_201=((struct sType*)come_null_check(type, "04heap.c", 669))->mClass;
    __freed_obj__ = 0;
    class_name_202=((struct sClass*)come_null_check(klass_201, "04heap.c", 671))->mName;
    __freed_obj__ = 0;
    fun_name_203="clone";
    __freed_obj__ = 0;
    cloner_204=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional254=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 714))->mGenericsTypes, "04heap.c", 714)))>0,    __freed_obj__ = 0, 
    _if_conditional254) {
        none_generics_name_206=(char*)come_increment_ref_count(((char*)(right_value156=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 678))->mClass, "04heap.c", 678))->mName))));
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 680))->generics_type,info))));
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj49=fun_name2_205;
        fun_name2_205=(char*)come_increment_ref_count(((char*)(right_value158=create_method_name(obj_type_207,(_Bool)0,fun_name_203,info))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_208=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s_%s",none_generics_name_206,fun_name_203))));
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_211=((struct sGenericsFun*)(right_value161=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 685))->generics_funcs, "04heap.c", 685)),fun_name3_208,((void*)0))));
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional268=generics_fun_211,        __freed_obj__ = 0, 
        _if_conditional268) {
            if(_if_conditional269=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(fun_name2_205)))),generics_fun_211,obj_type_207,info),            (right_value162 && right_value162 != __result_obj__ && !__freed_obj__) ? right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional269) {
                __result100__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value169=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value166=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 689)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 689)))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("")))))));
                if(none_generics_name_206 && !__freed_obj__) { none_generics_name_206 = come_decrement_ref_count(none_generics_name_206, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_208 && !__freed_obj__) { fun_name3_208 = come_decrement_ref_count(fun_name3_208, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_196 && !__freed_obj__) { result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_200 && !__freed_obj__) { c_value_200 = come_decrement_ref_count(c_value_200, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_205 && !__freed_obj__) { fun_name2_205 = come_decrement_ref_count(fun_name2_205, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result100__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_204=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 693),((struct optional$2sFunpbool*)(right_value170=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 693))->funcs,fun_name2_205)))));
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_206 && !__freed_obj__) { none_generics_name_206 = come_decrement_ref_count(none_generics_name_206, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_208 && !__freed_obj__) { fun_name3_208 = come_decrement_ref_count(fun_name3_208, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj52=fun_name2_205;
        fun_name2_205=(char*)come_increment_ref_count(((char*)(right_value171=create_method_name(type,(_Bool)0,fun_name_203,info))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_212=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_212>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_212-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_213=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s_v%d",fun_name2_205,i_212))));
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_204=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 701),((struct optional$2sFunpbool*)(right_value173=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 701))->funcs,new_fun_name_213)))));
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional272=cloner_204,            __freed_obj__ = 0, 
            _if_conditional272) {
                __dec_obj53=fun_name2_205;
                fun_name2_205=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(new_fun_name_213))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_213 && !__freed_obj__) { new_fun_name_213 = come_decrement_ref_count(new_fun_name_213, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_213 && !__freed_obj__) { new_fun_name_213 = come_decrement_ref_count(new_fun_name_213, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional273=cloner_204==((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            come_clear_stackframe();
            cloner_204=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 710),((struct optional$2sFunpbool*)(right_value175=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 710))->funcs,fun_name2_205)))));
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional274=cloner_204==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 723))->mClass, "04heap.c", 723))->mNumber,    __freed_obj__ = 0, 
    _if_conditional274) {
        multiple_assgin_var8=((struct tuple2$2sFunpcharph*)(right_value176=create_cloner_automatically(type,fun_name_203,info)));
        fun_214=multiple_assgin_var8->v1;
        new_fun_name_215=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj54=fun_name2_205;
        fun_name2_205=(char*)come_increment_ref_count(new_fun_name_215);
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_204=fun_214;
        __freed_obj__ = 0;
        if(new_fun_name_215 && !__freed_obj__) { new_fun_name_215 = come_decrement_ref_count(new_fun_name_215, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional275=cloner_204!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional275) {
        __dec_obj55=result_196;
        result_196=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s(%s)",fun_name2_205,c_value_200))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj56=result_type_197;
        result_type_197=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(cloner_204, "04heap.c", 725))->mResultType);
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj57=result_type_197;
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=solve_generics(result_type_197,type,info))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
    }
    else {
        ((struct sType*)come_null_check(type2_195, "04heap.c", 729))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_216=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 730),((struct optional$2charphbool*)(right_value179=make_type_name_string(type2_195,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
        come_pop_stackframe();
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj58=result_196;
        result_196=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_216,c_value_200,((struct sInfo*)come_null_check(info, "04heap.c", 731))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 731))->sline))));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj59=result_type_197;
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(type_name_216 && !__freed_obj__) { type_name_216 = come_decrement_ref_count(type_name_216, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj60=((struct sInfo*)come_null_check(info, "04heap.c", 735))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 735))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_199);
    if(__dec_obj60) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj61=((struct sInfo*)come_null_check(info, "04heap.c", 736))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 736))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_198);
    if(__dec_obj61) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result101__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value183=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value182=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 738)))),(struct sType*)come_increment_ref_count(result_type_197),(char*)come_increment_ref_count(result_196))));
    if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_196 && !__freed_obj__) { result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_200 && !__freed_obj__) { c_value_200 = come_decrement_ref_count(c_value_200, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_205 && !__freed_obj__) { fun_name2_205 = come_decrement_ref_count(fun_name2_205, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(type2_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_196 && !__freed_obj__) { result_196 = come_decrement_ref_count(result_196, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_200 && !__freed_obj__) { c_value_200 = come_decrement_ref_count(c_value_200, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_205 && !__freed_obj__) { fun_name2_205 = come_decrement_ref_count(fun_name2_205, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_209;
unsigned int it_210;
_Bool _while_condtional20;
_Bool _if_conditional255;
void* right_value160;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional256;
struct sGenericsFun* __result95__;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct sGenericsFun* __result96__;
struct sGenericsFun* __result97__;
struct sGenericsFun* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_209, 0, sizeof(unsigned int));
memset(&it_210, 0, sizeof(unsigned int));
memset(&right_value160, 0, sizeof(void*));
            hash_209=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_210=hash_209;
            __freed_obj__ = 0;
            while(_while_condtional20=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional255=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_210],                __freed_obj__ = 0, 
                _if_conditional255) {
                    if(_if_conditional256=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value160=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_210], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value160 && right_value160 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional256) {
                        __result95__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_210];
                        __freed_obj__ = 0;
                        return __result95__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_210++;
                    __freed_obj__ = 0;
                    if(_if_conditional257=it_210>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        it_210=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional258=it_210==hash_209,                        __freed_obj__ = 0, 
                        _if_conditional258) {
                            __result96__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result96__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result97__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result97__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result98__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result98__;
            __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional259=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional260=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional261=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional261) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional262=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional262) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional263=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional263) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional264=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional264) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional265=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional265) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional266=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional266) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional267=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional267) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value167;
struct sType* __dec_obj50;
void* right_value168;
char* __dec_obj51;
struct tuple2$2sTypephcharph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
                    __dec_obj50=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(v1))));
                    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __dec_obj51=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(v2))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    __result99__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result99__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional270=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional270) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional271=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional271) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional276;
char* result_217;
struct list$1CVALUEph* stack_saved_218;
struct list$1sRightValueObjectph* right_value_objects_219;
struct sClass* klass_220;
char* class_name_221;
char* fun_name_222;
void* right_value184;
struct sType* type2_223;
struct sFun* cloner_224;
char* fun_name2_225;
_Bool _if_conditional277;
void* right_value185;
char* none_generics_name_226;
void* right_value186;
struct sType* obj_type_227;
void* right_value187;
char* __dec_obj62;
void* right_value188;
char* fun_name3_228;
void* right_value189;
struct sGenericsFun* generics_fun_229;
_Bool _if_conditional278;
void* right_value190;
_Bool _if_conditional279;
_Bool __result102__;
void* right_value191;
void* right_value192;
char* __dec_obj63;
int i_230;
_Bool _for_condtionalA13;
void* right_value193;
char* new_fun_name_231;
void* right_value194;
_Bool _if_conditional280;
void* right_value195;
char* __dec_obj64;
_Bool _if_conditional281;
void* right_value196;
_Bool _if_conditional282;
void* right_value197;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_232;
char* new_fun_name_233;
char* __dec_obj65;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_217, 0, sizeof(char*));
memset(&stack_saved_218, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_219, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_220, 0, sizeof(struct sClass*));
memset(&class_name_221, 0, sizeof(char*));
memset(&fun_name_222, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&type2_223, 0, sizeof(struct sType*));
memset(&cloner_224, 0, sizeof(struct sFun*));
memset(&fun_name2_225, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&none_generics_name_226, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
memset(&obj_type_227, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&fun_name3_228, 0, sizeof(char*));
memset(&right_value189, 0, sizeof(void*));
memset(&generics_fun_229, 0, sizeof(struct sGenericsFun*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&i_230, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&new_fun_name_231, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&fun_232, 0, sizeof(struct sFun*));
memset(&new_fun_name_233, 0, sizeof(char*));
memset(&fun_232, 0, sizeof(struct sFun*));
memset(&new_fun_name_233, 0, sizeof(char*));
    if(_if_conditional276=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 746))->mNoSolvedGenericsType, "04heap.c", 746))->v1,    __freed_obj__ = 0, 
    _if_conditional276) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 744))->mNoSolvedGenericsType, "04heap.c", 744))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_217=((void*)0);
    __freed_obj__ = 0;
    stack_saved_218=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 747))->stack);
    __freed_obj__ = 0;
    right_value_objects_219=((struct sInfo*)come_null_check(info, "04heap.c", 748))->right_value_objects;
    __freed_obj__ = 0;
    klass_220=((struct sType*)come_null_check(type, "04heap.c", 750))->mClass;
    __freed_obj__ = 0;
    class_name_221=((struct sClass*)come_null_check(klass_220, "04heap.c", 752))->mName;
    __freed_obj__ = 0;
    fun_name_222="equals";
    __freed_obj__ = 0;
    type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(type))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_223, "04heap.c", 757))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_224=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional277=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 798))->mGenericsTypes, "04heap.c", 798)))>0,    __freed_obj__ = 0, 
    _if_conditional277) {
        none_generics_name_226=(char*)come_increment_ref_count(((char*)(right_value185=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 762))->mClass, "04heap.c", 762))->mName))));
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 764))->generics_type,info))));
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj62=fun_name2_225;
        fun_name2_225=(char*)come_increment_ref_count(((char*)(right_value187=create_method_name(obj_type_227,(_Bool)0,fun_name_222,info))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_228=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s_%s",none_generics_name_226,fun_name_222))));
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_229=((struct sGenericsFun*)(right_value189=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 769))->generics_funcs, "04heap.c", 769)),fun_name3_228,((void*)0))));
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional278=generics_fun_229,        __freed_obj__ = 0, 
        _if_conditional278) {
            if(_if_conditional279=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(fun_name2_225)))),generics_fun_229,obj_type_227,info),            (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional279) {
                __result102__ = (_Bool)0;
                if(none_generics_name_226 && !__freed_obj__) { none_generics_name_226 = come_decrement_ref_count(none_generics_name_226, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_228 && !__freed_obj__) { fun_name3_228 = come_decrement_ref_count(fun_name3_228, (void*)0, (void*)0, 0, 0, 0); }
                if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_223, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_225 && !__freed_obj__) { fun_name2_225 = come_decrement_ref_count(fun_name2_225, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_224=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 777),((struct optional$2sFunpbool*)(right_value191=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 777))->funcs,fun_name2_225)))));
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_226 && !__freed_obj__) { none_generics_name_226 = come_decrement_ref_count(none_generics_name_226, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_228 && !__freed_obj__) { fun_name3_228 = come_decrement_ref_count(fun_name3_228, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj63=fun_name2_225;
        fun_name2_225=(char*)come_increment_ref_count(((char*)(right_value192=create_method_name(type,(_Bool)0,fun_name_222,info))));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_230=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_230>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_230-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_231=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_225,i_230))));
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_224=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 785),((struct optional$2sFunpbool*)(right_value194=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 785))->funcs,new_fun_name_231)))));
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional280=cloner_224,            __freed_obj__ = 0, 
            _if_conditional280) {
                __dec_obj64=fun_name2_225;
                fun_name2_225=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(new_fun_name_231))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_231 && !__freed_obj__) { new_fun_name_231 = come_decrement_ref_count(new_fun_name_231, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_231 && !__freed_obj__) { new_fun_name_231 = come_decrement_ref_count(new_fun_name_231, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional281=cloner_224==((void*)0),        __freed_obj__ = 0, 
        _if_conditional281) {
            come_clear_stackframe();
            cloner_224=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 794),((struct optional$2sFunpbool*)(right_value196=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 794))->funcs,fun_name2_225)))));
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional282=cloner_224==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 806))->mClass, "04heap.c", 806))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 806))->mClass, "04heap.c", 806))->mNumber,    __freed_obj__ = 0, 
    _if_conditional282) {
        multiple_assgin_var9=((struct tuple2$2sFunpcharph*)(right_value197=create_equals_automatically(type,fun_name_222,info)));
        fun_232=multiple_assgin_var9->v1;
        new_fun_name_233=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj65=fun_name2_225;
        fun_name2_225=(char*)come_increment_ref_count(new_fun_name_233);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_224=fun_232;
        __freed_obj__ = 0;
        if(new_fun_name_233 && !__freed_obj__) { new_fun_name_233 = come_decrement_ref_count(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj66=((struct sInfo*)come_null_check(info, "04heap.c", 806))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 806))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_219);
    if(__dec_obj66) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj67=((struct sInfo*)come_null_check(info, "04heap.c", 807))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 807))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_218);
    if(__dec_obj67) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result103__ = (_Bool)1;
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_225 && !__freed_obj__) { fun_name2_225 = come_decrement_ref_count(fun_name2_225, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_218 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_225 && !__freed_obj__) { fun_name2_225 = come_decrement_ref_count(fun_name2_225, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional283;
char* result_234;
struct list$1CVALUEph* stack_saved_235;
struct list$1sRightValueObjectph* right_value_objects_236;
struct sClass* klass_237;
char* class_name_238;
char* fun_name_239;
void* right_value198;
struct sType* type2_240;
struct sFun* cloner_241;
char* fun_name2_242;
_Bool _if_conditional284;
void* right_value199;
char* none_generics_name_243;
void* right_value200;
struct sType* obj_type_244;
void* right_value201;
char* __dec_obj68;
void* right_value202;
char* fun_name3_245;
void* right_value203;
struct sGenericsFun* generics_fun_246;
_Bool _if_conditional285;
void* right_value204;
_Bool _if_conditional286;
_Bool __result104__;
void* right_value205;
void* right_value206;
char* __dec_obj69;
int i_247;
_Bool _for_condtionalA14;
void* right_value207;
char* new_fun_name_248;
void* right_value208;
_Bool _if_conditional287;
void* right_value209;
char* __dec_obj70;
_Bool _if_conditional288;
void* right_value210;
_Bool _if_conditional289;
void* right_value211;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_249;
char* new_fun_name_250;
char* __dec_obj71;
struct list$1sRightValueObjectph* __dec_obj72;
struct list$1CVALUEph* __dec_obj73;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_234, 0, sizeof(char*));
memset(&stack_saved_235, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_236, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_237, 0, sizeof(struct sClass*));
memset(&class_name_238, 0, sizeof(char*));
memset(&fun_name_239, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&type2_240, 0, sizeof(struct sType*));
memset(&cloner_241, 0, sizeof(struct sFun*));
memset(&fun_name2_242, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
memset(&none_generics_name_243, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&obj_type_244, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&fun_name3_245, 0, sizeof(char*));
memset(&right_value203, 0, sizeof(void*));
memset(&generics_fun_246, 0, sizeof(struct sGenericsFun*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&i_247, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&new_fun_name_248, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&fun_249, 0, sizeof(struct sFun*));
memset(&new_fun_name_250, 0, sizeof(char*));
memset(&fun_249, 0, sizeof(struct sFun*));
memset(&new_fun_name_250, 0, sizeof(char*));
    if(_if_conditional283=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 817))->mNoSolvedGenericsType, "04heap.c", 817))->v1,    __freed_obj__ = 0, 
    _if_conditional283) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 815))->mNoSolvedGenericsType, "04heap.c", 815))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_234=((void*)0);
    __freed_obj__ = 0;
    stack_saved_235=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 818))->stack);
    __freed_obj__ = 0;
    right_value_objects_236=((struct sInfo*)come_null_check(info, "04heap.c", 819))->right_value_objects;
    __freed_obj__ = 0;
    klass_237=((struct sType*)come_null_check(type, "04heap.c", 821))->mClass;
    __freed_obj__ = 0;
    class_name_238=((struct sClass*)come_null_check(klass_237, "04heap.c", 823))->mName;
    __freed_obj__ = 0;
    fun_name_239="operator_equals";
    __freed_obj__ = 0;
    type2_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_240, "04heap.c", 828))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_241=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional284=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 869))->mGenericsTypes, "04heap.c", 869)))>0,    __freed_obj__ = 0, 
    _if_conditional284) {
        none_generics_name_243=(char*)come_increment_ref_count(((char*)(right_value199=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 833))->mClass, "04heap.c", 833))->mName))));
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_244=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 835))->generics_type,info))));
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj68=fun_name2_242;
        fun_name2_242=(char*)come_increment_ref_count(((char*)(right_value201=create_method_name(obj_type_244,(_Bool)0,fun_name_239,info))));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_245=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_%s",none_generics_name_243,fun_name_239))));
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_246=((struct sGenericsFun*)(right_value203=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 840))->generics_funcs, "04heap.c", 840)),fun_name3_245,((void*)0))));
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional285=generics_fun_246,        __freed_obj__ = 0, 
        _if_conditional285) {
            if(_if_conditional286=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(fun_name2_242)))),generics_fun_246,obj_type_244,info),            (right_value204 && right_value204 != __result_obj__ && !__freed_obj__) ? right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional286) {
                __result104__ = (_Bool)0;
                if(none_generics_name_243 && !__freed_obj__) { none_generics_name_243 = come_decrement_ref_count(none_generics_name_243, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_244 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_244, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_245 && !__freed_obj__) { fun_name3_245 = come_decrement_ref_count(fun_name3_245, (void*)0, (void*)0, 0, 0, 0); }
                if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_235 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_242 && !__freed_obj__) { fun_name2_242 = come_decrement_ref_count(fun_name2_242, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result104__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_241=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 848),((struct optional$2sFunpbool*)(right_value205=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 848))->funcs,fun_name2_242)))));
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_243 && !__freed_obj__) { none_generics_name_243 = come_decrement_ref_count(none_generics_name_243, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_244 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_244, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_245 && !__freed_obj__) { fun_name3_245 = come_decrement_ref_count(fun_name3_245, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj69=fun_name2_242;
        fun_name2_242=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name(type,(_Bool)0,fun_name_239,info))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_247=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        i_247>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA14;        i_247-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_248=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("%s_v%d",fun_name2_242,i_247))));
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_241=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 856),((struct optional$2sFunpbool*)(right_value208=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 856))->funcs,new_fun_name_248)))));
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional287=cloner_241,            __freed_obj__ = 0, 
            _if_conditional287) {
                __dec_obj70=fun_name2_242;
                fun_name2_242=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(new_fun_name_248))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_248 && !__freed_obj__) { new_fun_name_248 = come_decrement_ref_count(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_248 && !__freed_obj__) { new_fun_name_248 = come_decrement_ref_count(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional288=cloner_241==((void*)0),        __freed_obj__ = 0, 
        _if_conditional288) {
            come_clear_stackframe();
            cloner_241=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 865),((struct optional$2sFunpbool*)(right_value210=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 865))->funcs,fun_name2_242)))));
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional289=cloner_241==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 877))->mClass, "04heap.c", 877))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 877))->mClass, "04heap.c", 877))->mNumber,    __freed_obj__ = 0, 
    _if_conditional289) {
        multiple_assgin_var10=((struct tuple2$2sFunpcharph*)(right_value211=create_operator_equals_automatically(type,fun_name_239,info)));
        fun_249=multiple_assgin_var10->v1;
        new_fun_name_250=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj71=fun_name2_242;
        fun_name2_242=(char*)come_increment_ref_count(new_fun_name_250);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_241=fun_249;
        __freed_obj__ = 0;
        if(new_fun_name_250 && !__freed_obj__) { new_fun_name_250 = come_decrement_ref_count(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj72=((struct sInfo*)come_null_check(info, "04heap.c", 877))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 877))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_236);
    if(__dec_obj72) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj73=((struct sInfo*)come_null_check(info, "04heap.c", 878))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 878))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_235);
    if(__dec_obj73) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result105__ = (_Bool)1;
    if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_235 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_242 && !__freed_obj__) { fun_name2_242 = come_decrement_ref_count(fun_name2_242, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(result_234 && !__freed_obj__) { result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_235 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_242 && !__freed_obj__) { fun_name2_242 = come_decrement_ref_count(fun_name2_242, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional290;
char* result_251;
struct list$1CVALUEph* stack_saved_252;
struct list$1sRightValueObjectph* right_value_objects_253;
struct sClass* klass_254;
char* class_name_255;
char* fun_name_256;
void* right_value212;
struct sType* type2_257;
struct sFun* cloner_258;
char* fun_name2_259;
_Bool _if_conditional291;
void* right_value213;
char* none_generics_name_260;
void* right_value214;
struct sType* obj_type_261;
void* right_value215;
char* __dec_obj74;
void* right_value216;
char* fun_name3_262;
void* right_value217;
struct sGenericsFun* generics_fun_263;
_Bool _if_conditional292;
void* right_value218;
_Bool _if_conditional293;
_Bool __result106__;
void* right_value219;
void* right_value220;
char* __dec_obj75;
int i_264;
_Bool _for_condtionalA15;
void* right_value221;
char* new_fun_name_265;
void* right_value222;
_Bool _if_conditional294;
void* right_value223;
char* __dec_obj76;
_Bool _if_conditional295;
void* right_value224;
_Bool _if_conditional296;
void* right_value225;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_266;
char* new_fun_name_267;
char* __dec_obj77;
struct list$1sRightValueObjectph* __dec_obj78;
struct list$1CVALUEph* __dec_obj79;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_251, 0, sizeof(char*));
memset(&stack_saved_252, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_253, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_254, 0, sizeof(struct sClass*));
memset(&class_name_255, 0, sizeof(char*));
memset(&fun_name_256, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&type2_257, 0, sizeof(struct sType*));
memset(&cloner_258, 0, sizeof(struct sFun*));
memset(&fun_name2_259, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&none_generics_name_260, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&obj_type_261, 0, sizeof(struct sType*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&fun_name3_262, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&generics_fun_263, 0, sizeof(struct sGenericsFun*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&i_264, 0, sizeof(int));
memset(&right_value221, 0, sizeof(void*));
memset(&new_fun_name_265, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&fun_266, 0, sizeof(struct sFun*));
memset(&new_fun_name_267, 0, sizeof(char*));
memset(&fun_266, 0, sizeof(struct sFun*));
memset(&new_fun_name_267, 0, sizeof(char*));
    if(_if_conditional290=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 888))->mNoSolvedGenericsType, "04heap.c", 888))->v1,    __freed_obj__ = 0, 
    _if_conditional290) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 886))->mNoSolvedGenericsType, "04heap.c", 886))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_251=((void*)0);
    __freed_obj__ = 0;
    stack_saved_252=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 889))->stack);
    __freed_obj__ = 0;
    right_value_objects_253=((struct sInfo*)come_null_check(info, "04heap.c", 890))->right_value_objects;
    __freed_obj__ = 0;
    klass_254=((struct sType*)come_null_check(type, "04heap.c", 892))->mClass;
    __freed_obj__ = 0;
    class_name_255=((struct sClass*)come_null_check(klass_254, "04heap.c", 894))->mName;
    __freed_obj__ = 0;
    fun_name_256="operator_not_equals";
    __freed_obj__ = 0;
    type2_257=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(type))));
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_257, "04heap.c", 899))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_258=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional291=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 940))->mGenericsTypes, "04heap.c", 940)))>0,    __freed_obj__ = 0, 
    _if_conditional291) {
        none_generics_name_260=(char*)come_increment_ref_count(((char*)(right_value213=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 904))->mClass, "04heap.c", 904))->mName))));
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 906))->generics_type,info))));
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj74=fun_name2_259;
        fun_name2_259=(char*)come_increment_ref_count(((char*)(right_value215=create_method_name(obj_type_261,(_Bool)0,fun_name_256,info))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_262=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s_%s",none_generics_name_260,fun_name_256))));
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_263=((struct sGenericsFun*)(right_value217=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 911))->generics_funcs, "04heap.c", 911)),fun_name3_262,((void*)0))));
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional292=generics_fun_263,        __freed_obj__ = 0, 
        _if_conditional292) {
            if(_if_conditional293=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(fun_name2_259)))),generics_fun_263,obj_type_261,info),            (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional293) {
                __result106__ = (_Bool)0;
                if(none_generics_name_260 && !__freed_obj__) { none_generics_name_260 = come_decrement_ref_count(none_generics_name_260, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_261 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_261, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_262 && !__freed_obj__) { fun_name3_262 = come_decrement_ref_count(fun_name3_262, (void*)0, (void*)0, 0, 0, 0); }
                if(result_251 && !__freed_obj__) { result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_252 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_252, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_259 && !__freed_obj__) { fun_name2_259 = come_decrement_ref_count(fun_name2_259, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result106__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        cloner_258=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 919),((struct optional$2sFunpbool*)(right_value219=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 919))->funcs,fun_name2_259)))));
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(none_generics_name_260 && !__freed_obj__) { none_generics_name_260 = come_decrement_ref_count(none_generics_name_260, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_261 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_261, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_262 && !__freed_obj__) { fun_name3_262 = come_decrement_ref_count(fun_name3_262, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj75=fun_name2_259;
        fun_name2_259=(char*)come_increment_ref_count(((char*)(right_value220=create_method_name(type,(_Bool)0,fun_name_256,info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_264=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        i_264>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA15;        i_264-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_265=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s_v%d",fun_name2_259,i_264))));
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            cloner_258=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 927),((struct optional$2sFunpbool*)(right_value222=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 927))->funcs,new_fun_name_265)))));
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional294=cloner_258,            __freed_obj__ = 0, 
            _if_conditional294) {
                __dec_obj76=fun_name2_259;
                fun_name2_259=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(new_fun_name_265))));
                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_265 && !__freed_obj__) { new_fun_name_265 = come_decrement_ref_count(new_fun_name_265, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_265 && !__freed_obj__) { new_fun_name_265 = come_decrement_ref_count(new_fun_name_265, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional295=cloner_258==((void*)0),        __freed_obj__ = 0, 
        _if_conditional295) {
            come_clear_stackframe();
            cloner_258=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 936),((struct optional$2sFunpbool*)(right_value224=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 936))->funcs,fun_name2_259)))));
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional296=cloner_258==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 948))->mClass, "04heap.c", 948))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 948))->mClass, "04heap.c", 948))->mNumber,    __freed_obj__ = 0, 
    _if_conditional296) {
        multiple_assgin_var11=((struct tuple2$2sFunpcharph*)(right_value225=create_operator_not_equals_automatically(type,fun_name_256,info)));
        fun_266=multiple_assgin_var11->v1;
        new_fun_name_267=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj77=fun_name2_259;
        fun_name2_259=(char*)come_increment_ref_count(new_fun_name_267);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_258=fun_266;
        __freed_obj__ = 0;
        if(new_fun_name_267 && !__freed_obj__) { new_fun_name_267 = come_decrement_ref_count(new_fun_name_267, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj78=((struct sInfo*)come_null_check(info, "04heap.c", 948))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 948))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_253);
    if(__dec_obj78) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj79=((struct sInfo*)come_null_check(info, "04heap.c", 949))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 949))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_252);
    if(__dec_obj79) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result107__ = (_Bool)1;
    if(result_251 && !__freed_obj__) { result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_252 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_252, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_257, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_259 && !__freed_obj__) { fun_name2_259 = come_decrement_ref_count(fun_name2_259, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(result_251 && !__freed_obj__) { result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_252 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_252, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_257 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_257, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_259 && !__freed_obj__) { fun_name2_259 = come_decrement_ref_count(fun_name2_259, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool __freed_obj__;
_Bool free_right_value_268;
struct list$1sRightValueObjectph* right_value_objects_269;
int n_270;
struct list$1sRightValueObjectph* o2_saved_271;
struct sRightValueObject* it_272;
_Bool _for_condtionalA16;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value226;
struct sType* type_273;
void* right_value227;
struct sType* __dec_obj80;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_268, 0, sizeof(_Bool));
memset(&right_value_objects_269, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_270, 0, sizeof(int));
memset(&o2_saved_271, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_272, 0, sizeof(struct sRightValueObject*));
memset(&right_value226, 0, sizeof(void*));
memset(&type_273, 0, sizeof(struct sType*));
memset(&right_value227, 0, sizeof(void*));
    free_right_value_268=(_Bool)0;
    __freed_obj__ = 0;
    right_value_objects_269=((struct sInfo*)come_null_check(info, "04heap.c", 957))->right_value_objects;
    __freed_obj__ = 0;
    n_270=0;
    __freed_obj__ = 0;
    for(
    o2_saved_271=(right_value_objects_269),it_272=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_271), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_271), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    it_272=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_271), "04heap.c", 995))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional297=it_272&&!((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 992))->mFreed,        __freed_obj__ = 0, 
        _if_conditional297) {
            if(_if_conditional298=string_operator_equals(((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 990))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 990))->come_fun, "04heap.c", 990))->mName)&&((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 990))->mBlockLevel==((struct sInfo*)come_null_check(info, "04heap.c", 990))->block_level,            __freed_obj__ = 0, 
            _if_conditional298) {
                type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 963))->mType))));
                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj80=type_273;
                type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=solve_type(type_273,((struct sInfo*)come_null_check(info, "04heap.c", 965))->generics_type,((struct sInfo*)come_null_check(info, "04heap.c", 965))->method_generics_types,info))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional299=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional299) {
                    if(_if_conditional300=comma,                    __freed_obj__ = 0, 
                    _if_conditional300) {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_270,((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 969))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_270,((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 972))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                free_object(type_273,((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 976))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional301=gComeDebug,                __freed_obj__ = 0, 
                _if_conditional301) {
                    if(_if_conditional302=comma,                    __freed_obj__ = 0, 
                    _if_conditional302) {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_270,((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 980))->mVarName);
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_270,((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 983))->mVarName);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sRightValueObject*)come_null_check(it_272, "04heap.c", 987))->mFreed=(_Bool)1;
                __freed_obj__ = 0;
                free_right_value_268=(_Bool)1;
                __freed_obj__ = 0;
                if(type_273 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_273, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_270++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional303=comma,    __freed_obj__ = 0, 
    _if_conditional303) {
        add_come_code(info,"__freed_obj__ = 0, \n");
        __freed_obj__ = 0;
    }
    else {
        add_come_code(info,"__freed_obj__ = 0;\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sRightValueObjectph* o2_saved_274;
struct sRightValueObject* it_275;
_Bool _for_condtionalA17;
_Bool _if_conditional304;
_Bool __result108__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_274, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_275, 0, sizeof(struct sRightValueObject*));
    for(
    o2_saved_274=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 1011))->right_value_objects)),it_275=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_274), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_274), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_275=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_274), "04heap.c", 1011))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional304=((struct sRightValueObject*)come_null_check(it_275, "04heap.c", 1009))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional304) {
            __result108__ = (_Bool)1;
            if(o2_saved_274 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_274, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_274 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_274, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result109__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
_Bool __freed_obj__;
struct sVarTable* it_276;
_Bool _while_condtional21;
void* right_value237;
struct sVar* var__281;
_Bool _if_conditional310;
struct sVar* __result117__;
struct sVar* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_276, 0, sizeof(struct sVarTable*));
memset(&right_value237, 0, sizeof(void*));
memset(&var__281, 0, sizeof(struct sVar*));
    it_276=table;
    __freed_obj__ = 0;
    while(_while_condtional21=it_276,    __freed_obj__ = 0, 
    _while_condtional21) {
        come_clear_stackframe();
        var__281=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1020),((struct optional$2sVarpbool*)(right_value237=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(it_276, "04heap.c", 1020))->mVars,name)))));
        come_pop_stackframe();
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional310=var__281,        __freed_obj__ = 0, 
        _if_conditional310) {
            __result117__ = __result_obj__ = var__281;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_276=((struct sVarTable*)come_null_check(it_276, "04heap.c", 1026))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result118__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* default_value_277;
unsigned int hash_278;
unsigned int it_279;
_Bool _while_condtional22;
_Bool _if_conditional305;
void* right_value228;
struct optional$2boolbool* __exception_result_var_b3;
_Bool _if_conditional306;
void* right_value229;
void* right_value230;
struct optional$2sVarpbool* __result111__;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value231;
void* right_value232;
struct optional$2sVarpbool* __result112__;
void* right_value233;
void* right_value234;
struct optional$2sVarpbool* __result113__;
void* right_value235;
void* right_value236;
struct optional$2sVarpbool* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_277, 0, sizeof(struct sVar*));
memset(&hash_278, 0, sizeof(unsigned int));
memset(&it_279, 0, sizeof(unsigned int));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_277,0,sizeof(struct sVar*));
            __freed_obj__ = 0;
            hash_278=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_279=hash_278;
            __freed_obj__ = 0;
            while(_while_condtional22=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional22) {
                if(_if_conditional305=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_279],                __freed_obj__ = 0, 
                _if_conditional305) {
                    if(_if_conditional306=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b3=((struct optional$2boolbool*)(right_value228=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_279], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b3)),                    (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional306) {
                        __result111__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value230=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value229=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->items[it_279],(_Bool)1)));
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result111__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_279++;
                    __freed_obj__ = 0;
                    if(_if_conditional307=it_279>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional307) {
                        it_279=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional308=it_279==hash_278,                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sVarpbool*)(right_value232=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value231=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1601))),default_value_277,(_Bool)0))));
                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result112__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result113__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sVarpbool*)(right_value234=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value233=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1605))),default_value_277,(_Bool)0))));
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result113__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value236=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value235=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_277,(_Bool)0))));
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sVarpbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result110__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result110__;
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
_Bool _if_conditional309;
struct sVar* default_value_280;
struct sVar* __result115__;
struct sVar* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_280, 0, sizeof(struct sVar*));
            if(_if_conditional309=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional309) {
                __freed_obj__ = 0;
                memset(&default_value_280,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                __result115__ = __result_obj__ = default_value_280;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            else {
                __result116__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct map$2charphsVarph* o2_saved_282;
char* it_285;
_Bool _for_condtionalA18;
void* right_value238;
struct sVar* p_288;
struct sType* type_289;
struct sClass* klass_290;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value239;
char* c_value_291;
void* right_value240;
struct sType* type2_292;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_282, 0, sizeof(struct map$2charphsVarph*));
memset(&it_285, 0, sizeof(char*));
memset(&right_value238, 0, sizeof(void*));
memset(&p_288, 0, sizeof(struct sVar*));
memset(&type_289, 0, sizeof(struct sType*));
memset(&klass_290, 0, sizeof(struct sClass*));
memset(&right_value239, 0, sizeof(void*));
memset(&c_value_291, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&type2_292, 0, sizeof(struct sType*));
    for(
    o2_saved_282=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(table, "04heap.c", 1058))->mVars)),it_285=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_282), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA18=    !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_282), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    _for_condtionalA18;    it_285=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_282), "04heap.c", 1058))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        p_288=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1035),((struct optional$2sVarpbool*)(right_value238=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(table, "04heap.c", 1035))->mVars,it_285)))));
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type_289=((struct sVar*)come_null_check(p_288, "04heap.c", 1036))->mType;
        __freed_obj__ = 0;
        klass_290=((struct sType*)come_null_check(type_289, "04heap.c", 1037))->mClass;
        __freed_obj__ = 0;
        if(_if_conditional315=ret_value!=((void*)0)&&((struct sVar*)come_null_check(p_288, "04heap.c", 1057))->mCValueName!=((void*)0)&&string_operator_equals(((struct sVar*)come_null_check(p_288, "04heap.c", 1057))->mCValueName,((struct sVar*)come_null_check(ret_value, "04heap.c", 1057))->mCValueName)&&((struct sType*)come_null_check(type_289, "04heap.c", 1057))->mHeap,        __freed_obj__ = 0, 
        _if_conditional315) {
            free_object(((struct sVar*)come_null_check(p_288, "04heap.c", 1041))->mType,((struct sVar*)come_null_check(p_288, "04heap.c", 1041))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional316=((struct sType*)come_null_check(type_289, "04heap.c", 1057))->mHeap&&((struct sVar*)come_null_check(p_288, "04heap.c", 1057))->mCValueName,            __freed_obj__ = 0, 
            _if_conditional316) {
                if(_if_conditional317=((struct sType*)come_null_check(type_289, "04heap.c", 1050))->mFunctionParam,                __freed_obj__ = 0, 
                _if_conditional317) {
                    free_object(((struct sVar*)come_null_check(p_288, "04heap.c", 1045))->mType,((struct sVar*)come_null_check(p_288, "04heap.c", 1045))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                else {
                    free_object(((struct sVar*)come_null_check(p_288, "04heap.c", 1048))->mType,((struct sVar*)come_null_check(p_288, "04heap.c", 1048))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional318=((struct sClass*)come_null_check(klass_290, "04heap.c", 1057))->mStruct&&((struct sVar*)come_null_check(p_288, "04heap.c", 1057))->mCValueName&&((struct sType*)come_null_check(type_289, "04heap.c", 1057))->mAllocaValue&&!((struct sType*)come_null_check(type_289, "04heap.c", 1057))->mNoCallingDestructor,                __freed_obj__ = 0, 
                _if_conditional318) {
                    c_value_291=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("(&%s)",((struct sVar*)come_null_check(p_288, "04heap.c", 1052))->mCValueName))));
                    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    type2_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(type_289))));
                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type2_292, "04heap.c", 1054))->mPointerNum++;
                    __freed_obj__ = 0;
                    free_object(type2_292,c_value_291,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    __freed_obj__ = 0;
                    if(c_value_291 && !__freed_obj__) { c_value_291 = come_decrement_ref_count(c_value_291, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_292 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_292, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_282 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_282, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional311;
char* result_283;
char* __result119__;
_Bool _if_conditional312;
char* __result120__;
char* result_284;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_283, 0, sizeof(char*));
memset(&result_284, 0, sizeof(char*));
        if(_if_conditional311=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional311) {
            __freed_obj__ = 0;
            memset(&result_283,0,sizeof(char*));
            __freed_obj__ = 0;
            __result119__ = __result_obj__ = result_283;
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
        __freed_obj__ = 0;
        if(_if_conditional312=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,        __freed_obj__ = 0, 
        _if_conditional312) {
            __result120__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
            __freed_obj__ = 0;
            return __result120__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_284,0,sizeof(char*));
        __freed_obj__ = 0;
        __result121__ = __result_obj__ = result_284;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result122__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional313;
char* result_286;
char* __result123__;
_Bool _if_conditional314;
char* __result124__;
char* result_287;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_286, 0, sizeof(char*));
memset(&result_287, 0, sizeof(char*));
        if(_if_conditional313=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional313) {
            __freed_obj__ = 0;
            memset(&result_286,0,sizeof(char*));
            __freed_obj__ = 0;
            __result123__ = __result_obj__ = result_286;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
        __freed_obj__ = 0;
        if(_if_conditional314=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,        __freed_obj__ = 0, 
        _if_conditional314) {
            __result124__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_287,0,sizeof(char*));
        __freed_obj__ = 0;
        __result125__ = __result_obj__ = result_287;
        __freed_obj__ = 0;
        return __result125__;
        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
int i_293;
_Bool _for_condtionalA19;
_Bool _if_conditional319;
_Bool _if_conditional320;
int i_294;
_Bool _for_condtionalA20;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_293, 0, sizeof(int));
memset(&i_294, 0, sizeof(int));
        for(
        i_293=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_293<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_293++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional319=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_293],            __freed_obj__ = 0, 
            _if_conditional319) {
                if(_if_conditional320=1,                __freed_obj__ = 0, 
                _if_conditional320) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_293] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_293], (void*)0, (void*)0, 0, 0, 0, 0); }
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
        i_294=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA20=        i_294<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,        __freed_obj__ = 0, 
        _for_condtionalA20;        i_294++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional325=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_294],            __freed_obj__ = 0, 
            _if_conditional325) {
                if(_if_conditional326=1,                __freed_obj__ = 0, 
                _if_conditional326) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_294] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_294] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_294], (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional321=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional321) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional322=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional323=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional323) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional324=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional324) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_295;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_296;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_295, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_296, 0, sizeof(struct list_item$1charp*));
            it_295=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_295!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                prev_it_296=it_295;
                __freed_obj__ = 0;
                it_295=((struct list_item$1charp*)come_null_check(it_295, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_296 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_296, (void*)0, (void*)0, 0, 0, 0, 0); }
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

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool __freed_obj__;
struct sVarTable* it_297;
_Bool _if_conditional327;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_297, 0, sizeof(struct sVarTable*));
    it_297=((struct sInfo*)come_null_check(info, "04heap.c", 1062))->lv_table;
    __freed_obj__ = 0;
    if(_if_conditional327=it_297==((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1075))->come_fun, "04heap.c", 1075))->mBlock, "04heap.c", 1075))->mVarTable,    __freed_obj__ = 0, 
    _if_conditional327) {
        free_objects(it_297,ret_value,info);
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional24=it_297!=((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1073))->come_fun, "04heap.c", 1073))->mBlock, "04heap.c", 1073))->mVarTable,        __freed_obj__ = 0, 
        _while_condtional24) {
            free_objects(it_297,ret_value,info);
            __freed_obj__ = 0;
            it_297=((struct sVarTable*)come_null_check(it_297, "04heap.c", 1071))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_297,ret_value,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sVar* ret_value_298;
struct sVarTable* current_loop_vtable_299;
_Bool _if_conditional328;
struct sVarTable* it_300;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_298, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_299, 0, sizeof(struct sVarTable*));
memset(&it_300, 0, sizeof(struct sVarTable*));
    ret_value_298=((void*)0);
    __freed_obj__ = 0;
    current_loop_vtable_299=((struct sInfo*)come_null_check(info, "04heap.c", 1081))->current_loop_vtable;
    __freed_obj__ = 0;
    if(_if_conditional328=current_loop_vtable_299!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional328) {
        it_300=((struct sInfo*)come_null_check(info, "04heap.c", 1084))->lv_table;
        __freed_obj__ = 0;
        while(_while_condtional25=it_300!=current_loop_vtable_299,        __freed_obj__ = 0, 
        _while_condtional25) {
            free_objects(it_300,ret_value_298,info);
            __freed_obj__ = 0;
            it_300=((struct sVarTable*)come_null_check(it_300, "04heap.c", 1088))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        free_objects(it_300,ret_value_298,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
char* __result126__;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
char* __result127__;
_Bool _if_conditional332;
static int n_301=0;
void* right_value249;
char* var_name_302;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
char* __result128__;
static int n_303=0;
void* right_value257;
char* var_name_304;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
char* __result129__;
_Bool _if_conditional333;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
char* result_305;
char* __result130__;
void* right_value269;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&var_name_302, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&var_name_304, 0, sizeof(char*));
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
memset(&result_305, 0, sizeof(char*));
memset(&right_value269, 0, sizeof(void*));
    if(_if_conditional329=((struct sInfo*)come_null_check(info, "04heap.c", 1134))->without_semicolon,    __freed_obj__ = 0, 
    _if_conditional329) {
        if(_if_conditional330=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1123))->mClass, "04heap.c", 1123))->mName,"void")&&((struct sType*)come_null_check(type, "04heap.c", 1123))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional330) {
            if(_if_conditional331=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1104))->come_fun, "04heap.c", 1104))->mResultType, "04heap.c", 1104))->mException,            __freed_obj__ = 0, 
            _if_conditional331) {
                __result126__ = __result_obj__ = ((char*)(right_value244=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s, come_pop_stackframe())",((char*)(right_value241=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sname))),((char*)(right_value242=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sline))),((char*)(right_value243=charp_to_string(c_value))))));
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result126__;
                __freed_obj__ = 0;
            }
            else {
                __result127__ = __result_obj__ = ((char*)(right_value248=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value245=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1102))->sname))),((char*)(right_value246=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1102))->sline))),((char*)(right_value247=charp_to_string(c_value))))));
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result127__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional332=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1122))->come_fun, "04heap.c", 1122))->mResultType, "04heap.c", 1122))->mException,            __freed_obj__ = 0, 
            _if_conditional332) {
                __freed_obj__ = 0;
                ++n_301;
                __freed_obj__ = 0;
                var_name_302=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("__exception_result_var_a%d",n_301))));
                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1111),((struct optional$2charphbool*)(right_value250=make_define_var(type,var_name_302,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __result128__ = __result_obj__ = ((char*)(right_value256=xsprintf("(come_clear_stackframe(), come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value251=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1112))->sname))),((char*)(right_value252=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1112))->sline))),((char*)(right_value253=string_to_string(var_name_302))),((char*)(right_value254=charp_to_string(c_value))),((char*)(right_value255=string_to_string(var_name_302))))));
                if(var_name_302 && !__freed_obj__) { var_name_302 = come_decrement_ref_count(var_name_302, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result128__;
                __freed_obj__ = 0;
                if(var_name_302 && !__freed_obj__) { var_name_302 = come_decrement_ref_count(var_name_302, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                __freed_obj__ = 0;
                ++n_303;
                __freed_obj__ = 0;
                var_name_304=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("__exception_result_var_b%d",n_303))));
                if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                come_clear_stackframe();
                add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1119),((struct optional$2charphbool*)(right_value258=make_define_var(type,var_name_304,(_Bool)0,info))))));
                come_pop_stackframe();
                if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                __result129__ = __result_obj__ = ((char*)(right_value264=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value259=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1120))->sname))),((char*)(right_value260=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1120))->sline))),((char*)(right_value261=string_to_string(var_name_304))),((char*)(right_value262=charp_to_string(c_value))),((char*)(right_value263=string_to_string(var_name_304))))));
                if(var_name_304 && !__freed_obj__) { var_name_304 = come_decrement_ref_count(var_name_304, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
                if(var_name_304 && !__freed_obj__) { var_name_304 = come_decrement_ref_count(var_name_304, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional333=!((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->come_fun, "04heap.c", 1128))->mResultType, "04heap.c", 1128))->mException,        __freed_obj__ = 0, 
        _if_conditional333) {
            add_come_code(info,"come_clear_stackframe();\n");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_305=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s)",((char*)(right_value265=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->sname))),((char*)(right_value266=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1128))->sline))),((char*)(right_value267=charp_to_string(c_value)))))));
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        add_come_last_code2(info,"come_pop_stackframe();\n");
        __freed_obj__ = 0;
        __result130__ = __result_obj__ = result_305;
        if(result_305 && !__freed_obj__) { result_305 = come_decrement_ref_count(result_305, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
        if(result_305 && !__freed_obj__) { result_305 = come_decrement_ref_count(result_305, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result131__ = __result_obj__ = ((char*)(right_value269=__builtin_string(c_value)));
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

