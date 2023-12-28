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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct optional$2tuple4$4voidpvoidpvoidpboolphbool
{
    struct tuple4$4voidpvoidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct optional$2sTypepbool
{
    struct sType* v1;
    _Bool v2;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
    _Bool v3;
};
struct optional$2tuple3$3voidpvoidpboolphbool
{
    struct tuple3$3voidpvoidpbool* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
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

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

struct optional$2intbool* expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

struct optional$2charphbool* parse_word(struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2);
static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self);
static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2);
static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self);
static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
// inline function
static inline int android_get_device_api_level(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memmove(b2,b1,len);
    __freed_obj__ = 0;
}
static inline void __bionic_bzero(void* b, long int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __builtin_memset(b,0,len);
    __freed_obj__ = 0;
}
static inline int ffs(int __n){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}

// body function












void skip_paren(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int nest_8;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&nest_8, 0, sizeof(int));
    nest_8=0;
    __freed_obj__ = 0;
    while(_while_condtional1=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional5=*((struct sInfo*)come_null_check(info, "05function4.c", 25))->p==40,        __freed_obj__ = 0, 
        _if_conditional5) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 8))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            nest_8++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional6=*((struct sInfo*)come_null_check(info, "05function4.c", 25))->p==41,            __freed_obj__ = 0, 
            _if_conditional6) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 14))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                nest_8--;
                __freed_obj__ = 0;
                if(_if_conditional7=nest_8==0,                __freed_obj__ = 0, 
                _if_conditional7) {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 23))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_9;
void* right_value0;
void* right_value1;
struct buffer* fname_10;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value2;
char* __dec_obj1;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&line_9, 0, sizeof(int));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&fname_10, 0, sizeof(struct buffer*));
memset(&right_value2, 0, sizeof(void*));
    while(_while_condtional2=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 35))->p,"__attribute__",strlen("__attribute__"))==0,    __freed_obj__ = 0, 
    _while_condtional2) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 31))->p+=strlen("__attribute__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_paren(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional3=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 39))->p,"__extension__",strlen("__extension__"))==0,    __freed_obj__ = 0, 
    _while_condtional3) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 36))->p+=strlen("__extension__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional4=*((struct sInfo*)come_null_check(info, "05function4.c", 114))->p==35,    __freed_obj__ = 0, 
    _while_condtional4) {
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 55))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional8=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 111))->p,"pragma",strlen("pragma"))==0,        __freed_obj__ = 0, 
        _if_conditional8) {
            while(_while_condtional5=*((struct sInfo*)come_null_check(info, "05function4.c", 68))->p,            __freed_obj__ = 0, 
            _while_condtional5) {
                if(_if_conditional9=*((struct sInfo*)come_null_check(info, "05function4.c", 67))->p==10,                __freed_obj__ = 0, 
                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 65))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional10=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 111))->p),            __freed_obj__ = 0, 
            _if_conditional10) {
                line_9=0;
                __freed_obj__ = 0;
                fname_10=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
                if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value1;
                __freed_obj__ = 0;
                while(_while_condtional6=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 77))->p),                __freed_obj__ = 0, 
                _while_condtional6) {
                    line_9=line_9*10+(*((struct sInfo*)come_null_check(info, "05function4.c", 74))->p-48);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 75))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional11=*((struct sInfo*)come_null_check(info, "05function4.c", 93))->p==34,                __freed_obj__ = 0, 
                _if_conditional11) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 80))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional7=*((struct sInfo*)come_null_check(info, "05function4.c", 87))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        buffer_append_char(((struct buffer*)come_null_check(fname_10, "05function4.c", 83)),*((struct sInfo*)come_null_check(info, "05function4.c", 83))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 84))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional8=*((struct sInfo*)come_null_check(info, "05function4.c", 90))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional8) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 88))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 90))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 93))->sline=line_9;
                __freed_obj__ = 0;
                __dec_obj1=((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname;
                ((struct sInfo*)come_null_check(info, "05function4.c", 94))->sname=(char*)come_increment_ref_count(((char*)(right_value2=buffer_to_string(((struct buffer*)come_null_check(fname_10, "05function4.c", 94))))));
                if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value2);
                if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(fname_10 && !__freed_obj__) { come_call_finalizer(buffer_finalize,fname_10, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional12=*((struct sInfo*)come_null_check(info, "05function4.c", 111))->p==34,                __freed_obj__ = 0, 
                _if_conditional12) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 99))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional9=*((struct sInfo*)come_null_check(info, "05function4.c", 105))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional9) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 102))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional10=*((struct sInfo*)come_null_check(info, "05function4.c", 108))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 106))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 108))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional11=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 119))->p,"__attribute__",strlen("__attribute__"))==0,    __freed_obj__ = 0, 
    _while_condtional11) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 115))->p+=strlen("__attribute__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_paren(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    while(_while_condtional12=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 123))->p,"__extension__",strlen("__extension__"))==0,    __freed_obj__ = 0, 
    _while_condtional12) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 120))->p+=strlen("__extension__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char c_11;
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&c_11, 0, sizeof(char));
    c_11=*(((struct sInfo*)come_null_check(info, "05function4.c", 139))->p+strlen(str));
    __freed_obj__ = 0;
    __result14__ = memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 140))->p,str,strlen(str))==0&&(c_11==59||c_11==32||c_11==9||c_11==10||c_11==10);
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}

struct optional$2charphbool* parse_word(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
void* right_value4;
struct buffer* buf_12;
_Bool _while_condtional13;
void* right_value5;
_Bool _if_conditional13;
void* right_value6;
void* right_value7;
void* right_value8;
struct optional$2charphbool* __result16__;
void* right_value9;
void* right_value10;
void* right_value11;
struct optional$2charphbool* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&buf_12, 0, sizeof(struct buffer*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    buf_12=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value4;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional13=(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=97&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=122)||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=65&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=90)||*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p==95||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p>=48&&*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p<=57)||(*((struct sInfo*)come_null_check(info, "05function4.c", 153))->p==36),    __freed_obj__ = 0, 
    _while_condtional13) {
        buffer_append_char(((struct buffer*)come_null_check(buf_12, "05function4.c", 150)),*((struct sInfo*)come_null_check(info, "05function4.c", 150))->p);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 151))->p++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    skip_spaces_and_lf(info);
    __freed_obj__ = 0;
    if(_if_conditional13=string_length(((char*)come_null_check(((char*)(right_value5=buffer_to_string(((struct buffer*)come_null_check(buf_12, "05function4.c", 160))))), "05function4.c", 160)))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value5),
    (right_value5 && right_value5 != __result_obj__ && !__freed_obj__) ? right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value5, 
    __freed_obj__ = 0, 
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*((struct sInfo*)come_null_check(info, "05function4.c", 156))->p);
        __freed_obj__ = 0;
        __result16__ = __result_obj__ = (come_save_stackframe("05function4.c", 157), ((struct optional$2charphbool*)(right_value8=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value7=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 157))),(char*)come_increment_ref_count(((char*)(right_value6=__builtin_string("")))),(_Bool)0))));
        if(buf_12 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_12, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
        if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value6;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
        if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value7;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value8);
        if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value8;
        __freed_obj__ = 0;
        return __result16__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result17__ = __result_obj__ = ((struct optional$2charphbool*)(right_value11=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value10=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 160)))),(char*)come_increment_ref_count(((char*)(right_value9=buffer_to_string(((struct buffer*)come_null_check(buf_12, "05function4.c", 160)))))),(_Bool)1)));
    if(buf_12 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_12, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value9;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value10;
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
    if(buf_12 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj2;
struct optional$2charphbool* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj2=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result15__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result15__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional14=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional14=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional14) {
        if(_if_conditional15=*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==32||*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==9,        __freed_obj__ = 0, 
        _if_conditional15) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 167))->p++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional16=*((struct sInfo*)come_null_check(info, "05function4.c", 176))->p==10,            __freed_obj__ = 0, 
            _if_conditional16) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 170))->p++;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 171))->sline++;
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
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* o2_saved_13;
struct sType* it_16;
_Bool _for_condtionalA2;
_Bool _if_conditional21;
_Bool __result25__;
_Bool _if_conditional38;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct sType*));
    for(
    o2_saved_13=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "05function4.c", 187))->mGenericsTypes)),it_16=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_13), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_13), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    it_16=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_13), "05function4.c", 187))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional21=is_contained_generics_class(it_16,info),        __freed_obj__ = 0, 
        _if_conditional21) {
            __result25__ = (_Bool)1;
            if(o2_saved_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result25__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_13, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional38=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "05function4.c", 191))->mClass, "05function4.c", 191))->mGenerics,    __freed_obj__ = 0, 
    _if_conditional38) {
        __result26__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result26__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result27__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
struct sType* result_14;
struct sType* __result18__;
_Bool _if_conditional18;
struct sType* __result19__;
struct sType* result_15;
struct sType* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(struct sType*));
memset(&result_15, 0, sizeof(struct sType*));
        if(_if_conditional17=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional17) {
            __freed_obj__ = 0;
            memset(&result_14,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result18__ = __result_obj__ = result_14;
            __freed_obj__ = 0;
            return __result18__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional18=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional18) {
            __result19__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result19__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_15,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result20__ = __result_obj__ = result_15;
        __freed_obj__ = 0;
        return __result20__;
        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result21__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result21__;
        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct sType* result_17;
struct sType* __result22__;
_Bool _if_conditional20;
struct sType* __result23__;
struct sType* result_18;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
        if(_if_conditional19=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            __freed_obj__ = 0;
            memset(&result_17,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result22__ = __result_obj__ = result_17;
            __freed_obj__ = 0;
            return __result22__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional20=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional20) {
            __result23__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result23__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_18,0,sizeof(struct sType*));
        __freed_obj__ = 0;
        __result24__ = __result_obj__ = result_18;
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_19;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1sTypeph*));
                it_19=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional15=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional15) {
                    prev_it_20=it_19;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sTypeph*)come_null_check(it_19, "./comelang2.h", 172))->next;
                    __freed_obj__ = 0;
                    if(prev_it_20 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_20, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional22=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional22) {
                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional23) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional25) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional26) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional27) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional28) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional30) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional31) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional33) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional34) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional35) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional36) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional37) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional24=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional24) {
                                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_21;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1sNodeph*));
                                        it_21=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional16=it_21!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional16) {
                                            prev_it_22=it_21;
                                            __freed_obj__ = 0;
                                            it_21=((struct list_item$1sNodeph*)come_null_check(it_21, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_22 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional29=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional29) {
                                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_23;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charph*));
                                        it_23=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional17=it_23!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional17) {
                                            prev_it_24=it_23;
                                            __freed_obj__ = 0;
                                            it_23=((struct list_item$1charph*)come_null_check(it_23, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_24 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional32=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional32) {
                                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* parse_params(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct list$1sTypeph* param_types_25;
void* right_value14;
void* right_value15;
struct list$1charph* param_names_26;
void* right_value16;
void* right_value17;
struct list$1charph* param_default_parametors_27;
_Bool var_args_28;
void* right_value18;
_Bool void_param_30;
char* p_31;
int sline_32;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _while_condtional18;
_Bool _if_conditional45;
void* right_value19;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_34;
char* param_name_35;
_Bool err_36;
_Bool _if_conditional50;
void* right_value20;
void* right_value21;
void* right_value22;
void* right_value23;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result36__;
void* right_value24;
struct sType* param_type2_37;
void* right_value62;
void* right_value66;
_Bool _if_conditional126;
char* p_62;
_Bool no_comma_63;
void* right_value67;
struct sNode* node_64;
char* p2_65;
void* right_value68;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value69;
_Bool _if_conditional129;
void* right_value70;
void* right_value80;
void* right_value81;
void* right_value82;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&param_types_25, 0, sizeof(struct list$1sTypeph*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&param_names_26, 0, sizeof(struct list$1charph*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&param_default_parametors_27, 0, sizeof(struct list$1charph*));
memset(&var_args_28, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&void_param_30, 0, sizeof(_Bool));
memset(&p_31, 0, sizeof(char*));
memset(&sline_32, 0, sizeof(int));
memset(&right_value19, 0, sizeof(void*));
memset(&param_type_34, 0, sizeof(struct sType*));
memset(&param_name_35, 0, sizeof(char*));
memset(&err_36, 0, sizeof(_Bool));
memset(&param_type_34, 0, sizeof(struct sType*));
memset(&param_name_35, 0, sizeof(char*));
memset(&err_36, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&param_type2_37, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&p_62, 0, sizeof(char*));
memset(&no_comma_63, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&node_64, 0, sizeof(struct sNode*));
memset(&p2_65, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    param_types_25=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    param_names_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value15=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value14=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value15;
    __freed_obj__ = 0;
    param_default_parametors_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value17=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value16=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value16;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value17;
    __freed_obj__ = 0;
    var_args_28=(_Bool)0;
    __freed_obj__ = 0;
    optional$2intbool_value((come_push_stackframe("05function4.c", 201),((struct optional$2intbool*)(right_value18=expected_next_character(40,info)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value18;
    __freed_obj__ = 0;
    void_param_30=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_31=((struct sInfo*)come_null_check(info, "05function4.c", 206))->p;
        __freed_obj__ = 0;
        sline_32=((struct sInfo*)come_null_check(info, "05function4.c", 207))->sline;
        __freed_obj__ = 0;
        if(_if_conditional40=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 218))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional40) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 210))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional41=*((struct sInfo*)come_null_check(info, "05function4.c", 216))->p==41,            __freed_obj__ = 0, 
            _if_conditional41) {
                void_param_30=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 218))->p=p_31;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 219))->sline=sline_32;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional42=void_param_30,    __freed_obj__ = 0, 
    _if_conditional42) {
        if(_if_conditional43=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 232))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional43) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 224))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional44=*((struct sInfo*)come_null_check(info, "05function4.c", 231))->p==41,            __freed_obj__ = 0, 
            _if_conditional44) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 228))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional18=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional18) {
            if(_if_conditional45=*((struct sInfo*)come_null_check(info, "05function4.c", 241))->p==41,            __freed_obj__ = 0, 
            _if_conditional45) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 236))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            multiple_assgin_var1=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 243),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value19=parse_type(info,(_Bool)1,(_Bool)0)))));
            param_type_34=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_35=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_36=multiple_assgin_var1->v3;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
            if(_if_conditional50=!err_36,            __freed_obj__ = 0, 
            _if_conditional50) {
                printf("%s %d: failed to function parametor\n",((struct sInfo*)come_null_check(info, "05function4.c", 246))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 246))->sline);
                __freed_obj__ = 0;
                __result36__ = __result_obj__ = (come_save_stackframe("05function4.c", 247), ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value23=optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value22=(struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4voidpvoidpvoidpboolphbool)*(1), "05function4.c", 247))),(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value21=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value20=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247)))),((void*)0),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
                if(param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_name_35 && !__freed_obj__) { param_name_35 = come_decrement_ref_count(param_name_35, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_25 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_26 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_26, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_27 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value22;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value23;
                __freed_obj__ = 0;
                return __result36__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            param_type2_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=solve_generics(param_type_34,((struct sInfo*)come_null_check(info, "05function4.c", 250))->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value24;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(param_type2_37, "05function4.c", 252))->mFunctionParam=(_Bool)1;
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_25, "05function4.c", 254)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(param_type2_37)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value62;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(param_names_26, "05function4.c", 255)),(char*)come_increment_ref_count(((char*)(right_value66=string_clone(param_name_35)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value66;
            __freed_obj__ = 0;
            if(_if_conditional126=*((struct sInfo*)come_null_check(info, "05function4.c", 284))->p==61,            __freed_obj__ = 0, 
            _if_conditional126) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 258))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                p_62=((struct sInfo*)come_null_check(info, "05function4.c", 263))->p;
                __freed_obj__ = 0;
                no_comma_63=((struct sInfo*)come_null_check(info, "05function4.c", 265))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 266))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_64=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value67;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 270))->no_comma=no_comma_63;
                __freed_obj__ = 0;
                p2_65=((struct sInfo*)come_null_check(info, "05function4.c", 272))->p;
                __freed_obj__ = 0;
                char buf_66[p2_65-p_62+1];
                memset(&buf_66, 0, sizeof(char)                *(p2_65-p_62+1)                );
                __freed_obj__ = 0;
                memcpy(buf_66,p_62,p2_65-p_62);
                __freed_obj__ = 0;
                buf_66[p2_65-p_62]=0;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_27, "05function4.c", 278)),(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(buf_66)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value68;
                __freed_obj__ = 0;
                if(node_64 && !__freed_obj__) { node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_27, "05function4.c", 281)),((void*)0));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional127=*((struct sInfo*)come_null_check(info, "05function4.c", 304))->p==44,            __freed_obj__ = 0, 
            _if_conditional127) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 287))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional128=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 298))->p,"...",strlen("..."))==0,                __freed_obj__ = 0, 
                _if_conditional128) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 291))->p+=strlen("...");
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    var_args_28=(_Bool)1;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 295),((struct optional$2intbool*)(right_value69=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                    if(param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_35 && !__freed_obj__) { param_name_35 = come_decrement_ref_count(param_name_35, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_37, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional129=*((struct sInfo*)come_null_check(info, "05function4.c", 304))->p==41,                __freed_obj__ = 0, 
                _if_conditional129) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 300))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_name_35 && !__freed_obj__) { param_name_35 = come_decrement_ref_count(param_name_35, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_type2_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_37, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(param_type_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_34, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_name_35 && !__freed_obj__) { param_name_35 = come_decrement_ref_count(param_name_35, (void*)0, (void*)0, 0, 0, 0); }
            if(param_type2_37 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type2_37, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result61__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value82=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_increment_ref_count(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value81=(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool)*(1), "05function4.c", 307)))),(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value80=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value70=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_25),(struct list$1charph*)come_increment_ref_count(param_names_26),(struct list$1charph*)come_increment_ref_count(param_default_parametors_27),var_args_28)))),(_Bool)1)));
    if(param_types_25 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_26 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_27 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value80;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value81;
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
    if(param_types_25 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_26 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_27 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result28__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result28__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
        __freed_obj__ = 0;
        __result29__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result29__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional39;
int default_value_29;
int __result30__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_29, 0, sizeof(int));
        if(_if_conditional39=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional39) {
            __freed_obj__ = 0;
            memset(&default_value_29,0,sizeof(int));
            __freed_obj__ = 0;
            __result30__ = default_value_29;
            __freed_obj__ = 0;
            return __result30__;
            __freed_obj__ = 0;
        }
        else {
            __result31__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct tuple3$3sTypephcharphbool* default_value_33;
struct tuple3$3sTypephcharphbool* __result32__;
struct tuple3$3sTypephcharphbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(struct tuple3$3sTypephcharphbool*));
                if(_if_conditional46=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional46) {
                    __freed_obj__ = 0;
                    memset(&default_value_33,0,sizeof(struct tuple3$3sTypephcharphbool*));
                    __freed_obj__ = 0;
                    __result32__ = __result_obj__ = default_value_33;
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                }
                else {
                    __result33__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional47=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional47) {
                    if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional48=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional48) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional49=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional49) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1879))->v1=v1;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1880))->v2=v2;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1881))->v3=v3;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1882))->v4=v4;
                    __freed_obj__ = 0;
                    __result34__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result34__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple4$4voidpvoidpvoidpboolphbool* optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self, struct tuple4$4voidpvoidpvoidpbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4voidpvoidpvoidpbool* __dec_obj3;
struct optional$2tuple4$4voidpvoidpvoidpboolphbool* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj3=((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(v1);
                    if(__dec_obj3) { come_call_finalizer(tuple4$4voidpvoidpvoidpbool_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result35__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4voidpvoidpvoidpbool_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize(struct optional$2tuple4$4voidpvoidpvoidpboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional51=self!=((void*)0)&&((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional51) {
                            if(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4voidpvoidpvoidpboolp_finalize,((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_null_check(self, "optional$2tuple4$4voidpvoidpvoidpboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
void* right_value25;
struct list_item$1sTypeph* litem_38;
struct sType* __dec_obj4;
_Bool _if_conditional53;
void* right_value26;
struct list_item$1sTypeph* litem_39;
struct sType* __dec_obj5;
void* right_value27;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj6;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional52=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional52) {
                    litem_38=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj4=((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 276))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_38, "./comelang2.h", 276))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_38;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_38;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional53) {
                        litem_39=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value26;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 284))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 286))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_39, "./comelang2.h", 286))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_39;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_39;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value27;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 294))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 296))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 296))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_40;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_40;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result37__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
struct sType* __result38__;
void* right_value28;
struct sType* result_41;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional60;
void* right_value32;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional61;
void* right_value33;
char* __dec_obj10;
_Bool _if_conditional62;
void* right_value40;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional66;
void* right_value48;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value49;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional81;
void* right_value56;
struct list$1charph* __dec_obj23;
_Bool _if_conditional85;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value58;
struct sNode* __dec_obj25;
_Bool _if_conditional88;
_Bool _if_conditional89;
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
void* right_value59;
struct sNode* __dec_obj26;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value60;
char* __dec_obj27;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value61;
char* __dec_obj28;
struct sType* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct sType*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
                if(_if_conditional54=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional54) {
                    __result38__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result38__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
                if(_if_conditional55=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional55) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional56) {
                    __dec_obj8=((struct sType*)come_null_check(result_41, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value31;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional60=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional60) {
                    __dec_obj9=((struct sType*)come_null_check(result_41, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value32;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional61) {
                    __dec_obj10=((struct sType*)come_null_check(result_41, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    __dec_obj14=((struct sType*)come_null_check(result_41, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value40=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value40;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional66) {
                    __dec_obj18=((struct sType*)come_null_check(result_41, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value48=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value48;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional79=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional79) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional80=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional80) {
                    __dec_obj19=((struct sType*)come_null_check(result_41, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value49;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional81) {
                    __dec_obj23=((struct sType*)come_null_check(result_41, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value56;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional85) {
                    __dec_obj24=((struct sType*)come_null_check(result_41, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional86=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional86) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional87) {
                    __dec_obj25=((struct sType*)come_null_check(result_41, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value58;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional88=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional88) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional89=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional89) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional90=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional90) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional91=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional91) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional92=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional92) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional93=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional93) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional94=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional94) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional95=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional95) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional96=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional96) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional97=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional97) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional98=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional98) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional99=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional100=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional100) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional101=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional102=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional102) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional103=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional106=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional106) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional107=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional107) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional108) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional110=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional110) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional111=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional111) {
                    __dec_obj26=((struct sType*)come_null_check(result_41, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional112=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional112) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional113=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional113) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional114=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional114) {
                    __dec_obj27=((struct sType*)come_null_check(result_41, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional115=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional115) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional116=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional116) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional117=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional117) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional118=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional118) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional119=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional119) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional120=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional120) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional121=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional121) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional122=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional122) {
                    ((struct sType*)come_null_check(result_41, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional123=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional123) {
                    __dec_obj28=((struct sType*)come_null_check(result_41, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_41, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value61;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result53__ = __result_obj__ = result_41;
                if(result_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
                if(result_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct tuple1$1sTypeph* __result39__;
void* right_value29;
struct tuple1$1sTypeph* result_42;
_Bool _if_conditional59;
void* right_value30;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value30, 0, sizeof(void*));
                        if(_if_conditional57=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional57) {
                            __result39__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result39__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_42=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        if(_if_conditional59=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional59) {
                            __dec_obj7=((struct tuple1$1sTypeph*)come_null_check(result_42, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_42, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result40__ = __result_obj__ = result_42;
                        if(result_42 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                        if(result_42 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional58=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional58) {
                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
struct list$1sTypeph* __result41__;
void* right_value34;
void* right_value35;
struct list$1sTypeph* result_43;
struct list_item$1sTypeph* it_44;
_Bool _while_condtional19;
void* right_value39;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct list$1sTypeph*));
memset(&it_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value39, 0, sizeof(void*));
                        if(_if_conditional63=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional63) {
                            __result41__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_43=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value34=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value34;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value35);
                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value35;
                        __freed_obj__ = 0;
                        it_44=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_44!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_43, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_44, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value39;
                            __freed_obj__ = 0;
                            it_44=((struct list_item$1sTypeph*)come_null_check(it_44, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result43__ = __result_obj__ = result_43;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result43__;
                        __freed_obj__ = 0;
                        if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
void* right_value36;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj11;
_Bool _if_conditional65;
void* right_value37;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj12;
void* right_value38;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj13;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional64=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional64) {
                                    litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_45, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_45;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_45;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional65=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional65) {
                                        litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value37;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_46;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_46;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value38=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value38;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_47;
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_47;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result42__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result42__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
struct list$1sNodeph* __result44__;
void* right_value41;
void* right_value42;
struct list$1sNodeph* result_48;
struct list_item$1sNodeph* it_49;
_Bool _while_condtional20;
void* right_value47;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value47, 0, sizeof(void*));
                        if(_if_conditional67=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional67) {
                            __result44__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result44__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_48=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value41=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value41;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value42;
                        __freed_obj__ = 0;
                        it_49=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional20=it_49!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional20) {
                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_48, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_49, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value47;
                            __freed_obj__ = 0;
                            it_49=((struct list_item$1sNodeph*)come_null_check(it_49, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result49__ = __result_obj__ = result_48;
                        if(result_48 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_48, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result49__;
                        __freed_obj__ = 0;
                        if(result_48 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_48, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                            __freed_obj__ = 0;
                            __result45__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result45__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional68;
void* right_value43;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj15;
_Bool _if_conditional69;
void* right_value44;
struct list_item$1sNodeph* litem_51;
struct sNode* __dec_obj16;
void* right_value45;
struct list_item$1sNodeph* litem_52;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value45, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional68=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional68) {
                                    litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value43=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value43;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 206))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_50, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_50;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_50;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional69=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional69) {
                                        litem_51=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value44=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value44;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 216))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_51, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_51;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_51;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_52=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value45=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value45;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_52, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_52, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_52, "./comelang2.h", 226))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_52, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_52;
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_52;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result46__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result46__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
struct sNode* __result47__;
void* right_value46;
struct sNode* result_53;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct sNode*));
                                if(_if_conditional70=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional70) {
                                    __result47__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result47__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_53=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value46;
                                __freed_obj__ = 0;
                                if(_if_conditional71=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional71) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional72=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional72) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional73=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional73) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional74=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional74) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional75=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional75) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional76=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional76) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional77=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional77) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional78=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional78) {
                                    ((struct sNode*)come_null_check(result_53, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result48__ = __result_obj__ = result_53;
                                if(result_53 && !__freed_obj__) { result_53 = come_decrement_ref_count(result_53, ((struct sNode*)result_53)->finalize, ((struct sNode*)result_53)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result48__;
                                __freed_obj__ = 0;
                                if(result_53 && !__freed_obj__) { result_53 = come_decrement_ref_count(result_53, ((struct sNode*)result_53)->finalize, ((struct sNode*)result_53)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional82;
struct list$1charph* __result50__;
void* right_value50;
void* right_value51;
struct list$1charph* result_54;
struct list_item$1charph* it_55;
_Bool _while_condtional21;
void* right_value55;
struct list$1charph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&result_54, 0, sizeof(struct list$1charph*));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&right_value55, 0, sizeof(void*));
                        if(_if_conditional82=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional82) {
                            __result50__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result50__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_54=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value50=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value51;
                        __freed_obj__ = 0;
                        it_55=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional21=it_55!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional21) {
                            list$1charph_add(((struct list$1charph*)come_null_check(result_54, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value55=string_clone(((struct list_item$1charph*)come_null_check(it_55, "./comelang2.h", 192))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value55;
                            __freed_obj__ = 0;
                            it_55=((struct list_item$1charph*)come_null_check(it_55, "./comelang2.h", 194))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result52__ = __result_obj__ = result_54;
                        if(result_54 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result52__;
                        __freed_obj__ = 0;
                        if(result_54 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
void* right_value52;
struct list_item$1charph* litem_56;
char* __dec_obj20;
_Bool _if_conditional84;
void* right_value53;
struct list_item$1charph* litem_57;
char* __dec_obj21;
void* right_value54;
struct list_item$1charph* litem_58;
char* __dec_obj22;
struct list$1charph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional83=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional83) {
                                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value52=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value52;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 204))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 205))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj20=((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 206))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_56, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_56;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_56;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional84=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional84) {
                                        litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value53=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value53;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 215))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj21=((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 216))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_57, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_57;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_57;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value54=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value54;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_58, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_58, "./comelang2.h", 225))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj22=((struct list_item$1charph*)come_null_check(litem_58, "./comelang2.h", 226))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_58, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_58;
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_58;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                __freed_obj__ = 0;
                                __result51__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result51__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value63;
struct list_item$1charph* litem_59;
char* __dec_obj29;
_Bool _if_conditional125;
void* right_value64;
struct list_item$1charph* litem_60;
char* __dec_obj30;
void* right_value65;
struct list_item$1charph* litem_61;
char* __dec_obj31;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
memset(&right_value65, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional124=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional124) {
                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value63=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value63;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_59, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_59, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj29=((struct list_item$1charph*)come_null_check(litem_59, "./comelang2.h", 276))->item;
                    ((struct list_item$1charph*)come_null_check(litem_59, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_59;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_59;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional125=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional125) {
                        litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value64;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_60, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_60, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj30=((struct list_item$1charph*)come_null_check(litem_60, "./comelang2.h", 286))->item;
                        ((struct list_item$1charph*)come_null_check(litem_60, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_60;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_60;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_61=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value65=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value65;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_61, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_61, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj31=((struct list_item$1charph*)come_null_check(litem_61, "./comelang2.h", 296))->item;
                        ((struct list_item$1charph*)come_null_check(litem_61, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_61;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_61;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result54__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result54__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value74;
struct list$1sTypeph* __dec_obj32;
void* right_value78;
struct list$1charph* __dec_obj33;
void* right_value79;
struct list$1charph* __dec_obj34;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
        __dec_obj32=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1879))->v1;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1879))->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(v1))));
        if(__dec_obj32) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74;
        __freed_obj__ = 0;
        __dec_obj33=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1880))->v2;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1880))->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_clone(v2))));
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value78;
        __freed_obj__ = 0;
        __dec_obj34=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1881))->v3;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1881))->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_clone(v3))));
        if(__dec_obj34) { come_call_finalizer(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value79;
        __freed_obj__ = 0;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1882))->v4=v4;
        __freed_obj__ = 0;
        __result59__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct list$1sTypeph* __result55__;
void* right_value71;
void* right_value72;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional22;
void* right_value73;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value73, 0, sizeof(void*));
            if(_if_conditional130=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional130) {
                __result55__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result55__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value71=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value72;
            __freed_obj__ = 0;
            it_68=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional22=it_68!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional22) {
                list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_67, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_68, "./comelang2.h", 192))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value73;
                __freed_obj__ = 0;
                it_68=((struct list_item$1sTypeph*)come_null_check(it_68, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result56__ = __result_obj__ = result_67;
            if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result56__;
            __freed_obj__ = 0;
            if(result_67 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
struct list$1charph* __result57__;
void* right_value75;
void* right_value76;
struct list$1charph* result_69;
struct list_item$1charph* it_70;
_Bool _while_condtional23;
void* right_value77;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct list$1charph*));
memset(&it_70, 0, sizeof(struct list_item$1charph*));
memset(&right_value77, 0, sizeof(void*));
            if(_if_conditional131=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional131) {
                __result57__ = __result_obj__ = ((void*)0);
                __freed_obj__ = 0;
                return __result57__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_69=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value76;
            __freed_obj__ = 0;
            it_70=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_70!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                list$1charph_add(((struct list$1charph*)come_null_check(result_69, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value77=string_clone(((struct list_item$1charph*)come_null_check(it_70, "./comelang2.h", 192))->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                it_70=((struct list_item$1charph*)come_null_check(it_70, "./comelang2.h", 194))->next;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result58__ = __result_obj__ = result_69;
            if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
            if(result_69 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional132=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional132) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional133=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional133) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional134=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 3))->v3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional134) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self, struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __dec_obj35;
struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __dec_obj35=((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
        ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(v1);
        if(__dec_obj35) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
        __freed_obj__ = 0;
        __result60__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result60__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional135=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional135) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional136=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional136) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional137=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 3))->v3!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional137) {
                if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional138=self!=((void*)0)&&((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional138) {
                if(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
struct sType* right_type2_71;
struct sType* left_no_solved_generics_type_72;
struct sType* right_no_solved_generics_type_73;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
int i_74;
_Bool _for_condtionalA3;
void* right_value88;
void* right_value89;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value90;
char* method_name_79;
void* right_value92;
_Bool _if_conditional166;
struct sType* obj_type_83;
_Bool _if_conditional182;
struct sType* obj_type2_84;
void* right_value93;
void* right_value94;
char* __dec_obj37;
void* right_value95;
void* right_value96;
struct buffer* buf2_85;
void* right_value97;
void* right_value98;
struct sType* type_86;
void* right_value99;
void* right_value100;
char* __dec_obj38;
void* right_value101;
struct sType* __dec_obj39;
void* right_value102;
struct sType* __dec_obj40;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_type2_71, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_72, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_73, 0, sizeof(struct sType*));
memset(&i_74, 0, sizeof(int));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&method_name_79, 0, sizeof(char*));
memset(&right_value92, 0, sizeof(void*));
memset(&obj_type_83, 0, sizeof(struct sType*));
memset(&obj_type2_84, 0, sizeof(struct sType*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&buf2_85, 0, sizeof(struct buffer*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&type_86, 0, sizeof(struct sType*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
    right_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(right_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    left_no_solved_generics_type_72=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 314))->mNoSolvedGenericsType, "05function4.c", 314))->v1;
    __freed_obj__ = 0;
    right_no_solved_generics_type_73=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 315))->mNoSolvedGenericsType, "05function4.c", 315))->v1;
    __freed_obj__ = 0;
    if(_if_conditional139=left_no_solved_generics_type_72&&right_no_solved_generics_type_73,    __freed_obj__ = 0, 
    _if_conditional139) {
        if(_if_conditional140=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_72, "05function4.c", 332))->mGenericsTypes, "05function4.c", 332)))>0,        __freed_obj__ = 0, 
        _if_conditional140) {
            if(_if_conditional141=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_72, "05function4.c", 326))->mGenericsTypes, "05function4.c", 326)))!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_73, "05function4.c", 326))->mGenericsTypes, "05function4.c", 326))),            __freed_obj__ = 0, 
            _if_conditional141) {
                err_msg(info,"generics type parametor number error");
                __freed_obj__ = 0;
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_72, "05function4.c", 321))->mGenericsTypes, "05function4.c", 321))));
                __freed_obj__ = 0;
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_73, "05function4.c", 322))->mGenericsTypes, "05function4.c", 322))));
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            for(
            i_74=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            i_74<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_72, "05function4.c", 330))->mGenericsTypes, "05function4.c", 330))) ,            __freed_obj__ = 0, 
            _for_condtionalA3;            i_74++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                come_clear_stackframe();
                check_assign_type(msg,optional$2sTypephbool_value((come_push_stackframe("05function4.c", 327),((struct optional$2sTypephbool*)(right_value88=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(left_no_solved_generics_type_72, "05function4.c", 327))->mGenericsTypes,i_74))))),optional$2sTypephbool_value((come_push_stackframe("05function4.c", 327),((struct optional$2sTypephbool*)(right_value89=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_no_solved_generics_type_73, "05function4.c", 327))->mGenericsTypes,i_74))))),come_value,(_Bool)1,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value89;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            check_assign_type(msg,left_no_solved_generics_type_72,right_no_solved_generics_type_73,come_value,(_Bool)0,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional146=check_no_pointer,        __freed_obj__ = 0, 
        _if_conditional146) {
            if(_if_conditional147=((struct sType*)come_null_check(left_type, "05function4.c", 366))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional147) {
                if(_if_conditional148=((struct sType*)come_null_check(right_type2_71, "05function4.c", 353))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional148) {
                    if(_if_conditional149=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"void"),                    __freed_obj__ = 0, 
                    _if_conditional149) {
                    }
                    else {
                        if(_if_conditional150=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional150) {
                        }
                        else {
                            if(_if_conditional151=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 346))->mClass, "05function4.c", 346))->mName),                            __freed_obj__ = 0, 
                            _if_conditional151) {
                                err_msg(info,"type error1");
                                __freed_obj__ = 0;
                                printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 342))->mClass, "05function4.c", 342))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 342))->mPointerNum);
                                __freed_obj__ = 0;
                                printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 343))->mClass, "05function4.c", 343))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 343))->mPointerNum);
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"type error2");
                    __freed_obj__ = 0;
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 349))->mClass, "05function4.c", 349))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 349))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 350))->mClass, "05function4.c", 350))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 350))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional152=((struct sType*)come_null_check(left_type, "05function4.c", 366))->mPointerNum==0&&((struct sType*)come_null_check(right_type2_71, "05function4.c", 366))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional152) {
                    err_msg(info,"type error3");
                    __freed_obj__ = 0;
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 356))->mClass, "05function4.c", 356))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 356))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 357))->mClass, "05function4.c", 357))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 357))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional153=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 366))->mClass, "05function4.c", 366))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 366))->mClass, "05function4.c", 366))->mName),                    __freed_obj__ = 0, 
                    _if_conditional153) {
                        err_msg(info,"type error4");
                        __freed_obj__ = 0;
                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 362))->mClass, "05function4.c", 362))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 362))->mPointerNum);
                        __freed_obj__ = 0;
                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 363))->mClass, "05function4.c", 363))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 363))->mPointerNum);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional154=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 464))->mClass, "05function4.c", 464))->mName,"char")&&((struct sType*)come_null_check(left_type, "05function4.c", 464))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional154) {
                if(_if_conditional155=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"char")&&((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional155) {
                }
                else {
                    if(_if_conditional156=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"__builtin_va_list"),                    __freed_obj__ = 0, 
                    _if_conditional156) {
                    }
                    else {
                        if(_if_conditional157=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional157) {
                        }
                        else {
                            if(_if_conditional158=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"lambda"),                            __freed_obj__ = 0, 
                            _if_conditional158) {
                                err_msg(info,"type error6");
                                __freed_obj__ = 0;
                                printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 384))->mClass, "05function4.c", 384))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 384))->mPointerNum);
                                __freed_obj__ = 0;
                                printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 385))->mClass, "05function4.c", 385))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 385))->mPointerNum);
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional159=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"void")&&((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mPointerNum>0,                                __freed_obj__ = 0, 
                                _if_conditional159) {
                                }
                                else {
                                    if(_if_conditional160=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 427))->mClass, "05function4.c", 427))->mName,"void"),                                    __freed_obj__ = 0, 
                                    _if_conditional160) {
                                        err_msg(info,"type error6");
                                        __freed_obj__ = 0;
                                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 392))->mClass, "05function4.c", 392))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 392))->mPointerNum);
                                        __freed_obj__ = 0;
                                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 393))->mClass, "05function4.c", 393))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 393))->mPointerNum);
                                        __freed_obj__ = 0;
                                        exit(2);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        method_name_79=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(right_type2_71,(_Bool)0,"to_string",info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value90;
                                        __freed_obj__ = 0;
                                        if(_if_conditional166=((struct sFun*)(right_value92=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 411))->funcs, "05function4.c", 411)),method_name_79,((void*)0))))==((void*)0),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92),
                                        (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[1] = right_value92, 
                                        __freed_obj__ = 0, 
                                        _if_conditional166) {
                                            obj_type_83=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 400))->mNoSolvedGenericsType, "05function4.c", 400))->v1;
                                            __freed_obj__ = 0;
                                            if(_if_conditional182=obj_type_83&&list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_83, "05function4.c", 409))->mGenericsTypes, "05function4.c", 409)))>0,                                            __freed_obj__ = 0, 
                                            _if_conditional182) {
                                                obj_type2_84=right_type2_71;
                                                __freed_obj__ = 0;
                                                __dec_obj37=method_name_79;
                                                method_name_79=(char*)come_increment_ref_count(((char*)(right_value94=make_generics_function(obj_type2_84,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("to_string")))),info))));
                                                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value93;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
                                                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value94;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 406))->mClass, "05function4.c", 406))->mName);
                                                __freed_obj__ = 0;
                                                exit(1);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        buf2_85=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value96=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 411))))))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
                                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value95;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value96);
                                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[3] = right_value96;
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(buf2_85, "05function4.c", 413)),method_name_79);
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(buf2_85, "05function4.c", 414)),"(");
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(buf2_85, "05function4.c", 415)),((struct CVALUE*)come_null_check(come_value, "05function4.c", 415))->c_value);
                                        __freed_obj__ = 0;
                                        buffer_append_str(((struct buffer*)come_null_check(buf2_85, "05function4.c", 416)),")");
                                        __freed_obj__ = 0;
                                        type_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value97=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 418)))),"char*",(_Bool)0,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value97);
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[4] = right_value97;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value98);
                                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[5] = right_value98;
                                        __freed_obj__ = 0;
                                        ((struct sType*)come_null_check(type_86, "05function4.c", 419))->mHeap=(_Bool)1;
                                        __freed_obj__ = 0;
                                        __dec_obj38=((struct CVALUE*)come_null_check(come_value, "05function4.c", 421))->c_value;
                                        ((struct CVALUE*)come_null_check(come_value, "05function4.c", 421))->c_value=(char*)come_increment_ref_count(((char*)(right_value100=append_object_to_right_values(((char*)(right_value99=buffer_to_string(((struct buffer*)come_null_check(buf2_85, "05function4.c", 421))))),(struct sType*)come_increment_ref_count(type_86),info))));
                                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value99);
                                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[6] = right_value99;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value100);
                                        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[7] = right_value100;
                                        __freed_obj__ = 0;
                                        __dec_obj39=((struct CVALUE*)come_null_check(come_value, "05function4.c", 422))->type;
                                        ((struct CVALUE*)come_null_check(come_value, "05function4.c", 422))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type_86))));
                                        if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value101);
                                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[8] = right_value101;
                                        __freed_obj__ = 0;
                                        ((struct CVALUE*)come_null_check(come_value, "05function4.c", 423))->var=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj40=right_type2_71;
                                        right_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type_86))));
                                        if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value102);
                                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[9] = right_value102;
                                        __freed_obj__ = 0;
                                        if(method_name_79 && !__freed_obj__) { method_name_79 = come_decrement_ref_count(method_name_79, (void*)0, (void*)0, 0, 0, 0); }
                                        if(buf2_85 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(type_86 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_86, (void*)0, (void*)0, 0, 0, 0, 0); }
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
            else {
                if(_if_conditional183=((struct sType*)come_null_check(left_type, "05function4.c", 464))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mPointerNum>0,                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        if(_if_conditional185=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"void"),                        __freed_obj__ = 0, 
                        _if_conditional185) {
                        }
                        else {
                            if(_if_conditional186=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,"va_list"),                            __freed_obj__ = 0, 
                            _if_conditional186) {
                            }
                            else {
                                if(_if_conditional187=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 450))->mClass, "05function4.c", 450))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 450))->mClass, "05function4.c", 450))->mName),                                __freed_obj__ = 0, 
                                _if_conditional187) {
                                    err_msg(info,"type error5");
                                    __freed_obj__ = 0;
                                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 436))->mClass, "05function4.c", 436))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 436))->mPointerNum);
                                    __freed_obj__ = 0;
                                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 437))->mClass, "05function4.c", 437))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 437))->mPointerNum);
                                    __freed_obj__ = 0;
                                    exit(2);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional188=((struct sType*)come_null_check(left_type, "05function4.c", 450))->mPointerNum!=((struct sType*)come_null_check(right_type2_71, "05function4.c", 450))->mPointerNum,                                    __freed_obj__ = 0, 
                                    _if_conditional188) {
                                        printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 441))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 441))->sline);
                                        __freed_obj__ = 0;
                                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 442))->mClass, "05function4.c", 442))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 442))->mPointerNum);
                                        __freed_obj__ = 0;
                                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 443))->mClass, "05function4.c", 443))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 443))->mPointerNum);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional189=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 450))->mArrayNum, "05function4.c", 450)))>0,                                        __freed_obj__ = 0, 
                                        _if_conditional189) {
                                            printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 446))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 446))->sline);
                                            __freed_obj__ = 0;
                                            printf("left type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 447))->mClass, "05function4.c", 447))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 447))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 447))->mArrayNum, "05function4.c", 447))));
                                            __freed_obj__ = 0;
                                            printf("right type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 448))->mClass, "05function4.c", 448))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 448))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 448))->mArrayNum, "05function4.c", 448))));
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
                    else {
                        if(_if_conditional190=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"void"),                        __freed_obj__ = 0, 
                        _if_conditional190) {
                        }
                        else {
                            if(_if_conditional191=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"va_list"),                            __freed_obj__ = 0, 
                            _if_conditional191) {
                            }
                            else {
                                if(_if_conditional192=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"__builtin_va_list"),                                __freed_obj__ = 0, 
                                _if_conditional192) {
                                }
                                else {
                                    if(_if_conditional193=!(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"lambda")&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 463))->mClass, "05function4.c", 463))->mName,"lambda"))&&((struct sType*)come_null_check(right_type2_71, "05function4.c", 463))->mPointerNum==0,                                    __freed_obj__ = 0, 
                                    _if_conditional193) {
                                        err_msg(info,"type error6");
                                        __freed_obj__ = 0;
                                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 459))->mClass, "05function4.c", 459))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 459))->mPointerNum);
                                        __freed_obj__ = 0;
                                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type2_71, "05function4.c", 460))->mClass, "05function4.c", 460))->mName,((struct sType*)come_null_check(right_type2_71, "05function4.c", 460))->mPointerNum);
                                        __freed_obj__ = 0;
                                        exit(2);
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
    if(right_type2_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result62__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result62__;
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
struct list_item$1sTypeph* it_75;
int i_76;
_Bool _while_condtional24;
_Bool _if_conditional143;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __result64__;
struct sType* default_value_77;
void* right_value86;
void* right_value87;
struct optional$2sTypephbool* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_75, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_76, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&default_value_77, 0, sizeof(struct sType*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
                    if(_if_conditional142=position<0,                    __freed_obj__ = 0, 
                    _if_conditional142) {
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_75=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                    __freed_obj__ = 0;
                    i_76=0;
                    __freed_obj__ = 0;
                    while(_while_condtional24=it_75!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional24) {
                        if(_if_conditional143=position==i_76,                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            __result64__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value85=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value84=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_75, "./comelang2.h", 742))->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_75=((struct list_item$1sTypeph*)come_null_check(it_75, "./comelang2.h", 744))->next;
                        __freed_obj__ = 0;
                        i_76++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_77,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result65__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value87=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value86=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_77),(_Bool)0))));
                    if(default_value_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value86;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
                    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value87;
                    __freed_obj__ = 0;
                    return __result65__;
                    __freed_obj__ = 0;
                    if(default_value_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj36;
struct optional$2sTypephbool* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj36=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result63__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result63__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional144=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional144) {
                                        if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct sType* default_value_78;
struct sType* __result66__;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_78, 0, sizeof(struct sType*));
                    if(_if_conditional145=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional145) {
                        __freed_obj__ = 0;
                        memset(&default_value_78,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result66__ = __result_obj__ = default_value_78;
                        __freed_obj__ = 0;
                        return __result66__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result67__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result67__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_80;
unsigned int it_81;
_Bool _while_condtional25;
_Bool _if_conditional161;
void* right_value91;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional163;
struct sFun* __result70__;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sFun* __result71__;
struct sFun* __result72__;
struct sFun* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_80, 0, sizeof(unsigned int));
memset(&it_81, 0, sizeof(unsigned int));
memset(&right_value91, 0, sizeof(void*));
                                            hash_80=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                            __freed_obj__ = 0;
                                            it_81=hash_80;
                                            __freed_obj__ = 0;
                                            while(_while_condtional25=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional25) {
                                                if(_if_conditional161=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_81],                                                __freed_obj__ = 0, 
                                                _if_conditional161) {
                                                    if(_if_conditional163=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value91=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_81], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91),
                                                    (right_value91 && right_value91 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value91, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional163) {
                                                        __result70__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_81];
                                                        __freed_obj__ = 0;
                                                        return __result70__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    it_81++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional164=it_81>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                    __freed_obj__ = 0, 
                                                    _if_conditional164) {
                                                        it_81=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional165=it_81==hash_80,                                                        __freed_obj__ = 0, 
                                                        _if_conditional165) {
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

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
_Bool default_value_82;
_Bool __result68__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_82, 0, sizeof(_Bool));
                                                        if(_if_conditional162=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional162) {
                                                            __freed_obj__ = 0;
                                                            memset(&default_value_82,0,sizeof(_Bool));
                                                            __freed_obj__ = 0;
                                                            __result68__ = default_value_82;
                                                            __freed_obj__ = 0;
                                                            return __result68__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            __result69__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                                            __freed_obj__ = 0;
                                                            return __result69__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional167=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional167) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional168=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional168) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional169=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional169) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional170=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional170) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional171=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional171) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional172=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional172) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional173=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional173) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional176=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional176) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional177=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional177) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional178=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional178) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional179=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional179) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional180=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional180) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional181=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional181) {
                                                if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional174=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional174) {
                                                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional175=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional175) {
                                                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            __result74__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                            __freed_obj__ = 0;
                                            return __result74__;
                                            __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
struct sType* result_type_87;
_Bool _if_conditional194;
char* var_name_88;
char* p_89;
int sline_90;
_Bool _if_conditional195;
void* right_value104;
char* word_92;
_Bool _if_conditional197;
_Bool between_brace_93;
char* p_94;
int sline_95;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value105;
char* word_96;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _while_condtional26;
char* p_97;
int sline_98;
_Bool _if_conditional203;
void* right_value106;
char* word_99;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value107;
char* __dec_obj41;
static int num_anonymous_var_name_100=0;
void* right_value108;
char* __dec_obj42;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool no_comma_101;
void* right_value109;
struct sNode* node_102;
struct sNode* __dec_obj43;
_Bool _while_condtional27;
char* p_103;
int sline_104;
_Bool _if_conditional209;
void* right_value110;
char* word_105;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value111;
struct sNode* node_106;
void* right_value115;
void* right_value116;
void* right_value119;
struct tuple2$2sTypephcharph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&result_type_87, 0, sizeof(struct sType*));
memset(&var_name_88, 0, sizeof(char*));
memset(&p_89, 0, sizeof(char*));
memset(&sline_90, 0, sizeof(int));
memset(&right_value104, 0, sizeof(void*));
memset(&word_92, 0, sizeof(char*));
memset(&between_brace_93, 0, sizeof(_Bool));
memset(&p_94, 0, sizeof(char*));
memset(&sline_95, 0, sizeof(int));
memset(&right_value105, 0, sizeof(void*));
memset(&word_96, 0, sizeof(char*));
memset(&p_97, 0, sizeof(char*));
memset(&sline_98, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&word_99, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&no_comma_101, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&node_102, 0, sizeof(struct sNode*));
memset(&p_103, 0, sizeof(char*));
memset(&sline_104, 0, sizeof(int));
memset(&right_value110, 0, sizeof(void*));
memset(&word_105, 0, sizeof(char*));
memset(&right_value111, 0, sizeof(void*));
memset(&node_106, 0, sizeof(struct sNode*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
    result_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    if(_if_conditional194=!first,    __freed_obj__ = 0, 
    _if_conditional194) {
        ((struct sType*)come_null_check(result_type_87, "05function4.c", 470))->mPointerNum=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_88=((void*)0);
    __freed_obj__ = 0;
    {
        p_89=((struct sInfo*)come_null_check(info, "05function4.c", 475))->p;
        __freed_obj__ = 0;
        sline_90=((struct sInfo*)come_null_check(info, "05function4.c", 476))->sline;
        __freed_obj__ = 0;
        if(_if_conditional195=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 492))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 492))->p==95,        __freed_obj__ = 0, 
        _if_conditional195) {
            come_clear_stackframe();
            word_92=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 479),((struct optional$2charphbool*)(right_value104=parse_word(info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
            if(_if_conditional197=string_operator_equals(word_92,"const")||string_operator_equals(word_92,"__restrict")||string_operator_equals(word_92,"restrict")||string_operator_equals(word_92,"__user")||string_operator_equals(word_92,"volatile")||string_operator_equals(word_92,"_Nonnull")||string_operator_equals(word_92,"_Nullable")||string_operator_equals(word_92,"_Null_unspecified")||string_operator_equals(word_92,"__user"),            __freed_obj__ = 0, 
            _if_conditional197) {
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 484))->p=p_89;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 485))->sline=sline_90;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_92 && !__freed_obj__) { word_92 = come_decrement_ref_count(word_92, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 489))->p=p_89;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 490))->sline=sline_90;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    between_brace_93=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_94=((struct sInfo*)come_null_check(info, "05function4.c", 496))->p;
        __freed_obj__ = 0;
        sline_95=((struct sInfo*)come_null_check(info, "05function4.c", 497))->sline;
        __freed_obj__ = 0;
        if(_if_conditional198=*((struct sInfo*)come_null_check(info, "05function4.c", 519))->p==40,        __freed_obj__ = 0, 
        _if_conditional198) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 500))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional199=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 517))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 517))->p==95,            __freed_obj__ = 0, 
            _if_conditional199) {
                come_clear_stackframe();
                word_96=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 504),((struct optional$2charphbool*)(right_value105=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                if(_if_conditional200=is_type_name(word_96,info),                __freed_obj__ = 0, 
                _if_conditional200) {
                }
                else {
                    if(_if_conditional201=*((struct sInfo*)come_null_check(info, "05function4.c", 516))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional201) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 509))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional202=*((struct sInfo*)come_null_check(info, "05function4.c", 515))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional202) {
                            between_brace_93=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_96 && !__freed_obj__) { word_96 = come_decrement_ref_count(word_96, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 519))->p=p_94;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 520))->sline=sline_95;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional26=*((struct sInfo*)come_null_check(info, "05function4.c", 550))->p==42,    __freed_obj__ = 0, 
    _while_condtional26) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 525))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        {
            p_97=((struct sInfo*)come_null_check(info, "05function4.c", 529))->p;
            __freed_obj__ = 0;
            sline_98=((struct sInfo*)come_null_check(info, "05function4.c", 530))->sline;
            __freed_obj__ = 0;
            if(_if_conditional203=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 546))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 546))->p==95,            __freed_obj__ = 0, 
            _if_conditional203) {
                come_clear_stackframe();
                word_99=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 533),((struct optional$2charphbool*)(right_value106=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106;
                __freed_obj__ = 0;
                if(_if_conditional204=string_operator_equals(word_99,"const")||string_operator_equals(word_99,"__restrict")||string_operator_equals(word_99,"restrict")||string_operator_equals(word_99,"__user")||string_operator_equals(word_99,"volatile")||string_operator_equals(word_99,"_Nonnull")||string_operator_equals(word_99,"_Nullable")||string_operator_equals(word_99,"_Null_unspecified")||string_operator_equals(word_99,"__user"),                __freed_obj__ = 0, 
                _if_conditional204) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 538))->p=p_97;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 539))->sline=sline_98;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_99 && !__freed_obj__) { word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 543))->p=p_97;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 544))->sline=sline_98;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_87, "05function4.c", 548))->mPointerNum++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional205=between_brace_93&&*((struct sInfo*)come_null_check(info, "05function4.c", 557))->p==40,    __freed_obj__ = 0, 
    _if_conditional205) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 553))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional206=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 566))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 566))->p==95,    __freed_obj__ = 0, 
    _if_conditional206) {
        come_clear_stackframe();
        __dec_obj41=var_name_88;
        var_name_88=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 558),((struct optional$2charphbool*)(right_value107=parse_word(info))))));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107;
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        num_anonymous_var_name_100++;
        __freed_obj__ = 0;
        __dec_obj42=var_name_88;
        var_name_88=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_100))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional207=between_brace_93&&*((struct sInfo*)come_null_check(info, "05function4.c", 571))->p==41,    __freed_obj__ = 0, 
    _if_conditional207) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 567))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional208=*((struct sInfo*)come_null_check(info, "05function4.c", 583))->p==58,    __freed_obj__ = 0, 
    _if_conditional208) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 572))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        no_comma_101=((struct sInfo*)come_null_check(info, "05function4.c", 575))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 576))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_102=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 578))->no_comma=no_comma_101;
        __freed_obj__ = 0;
        __dec_obj43=((struct sType*)come_null_check(result_type_87, "05function4.c", 580))->mSizeNum;
        ((struct sType*)come_null_check(result_type_87, "05function4.c", 580))->mSizeNum=(struct sNode*)come_increment_ref_count(node_102);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
        if(node_102 && !__freed_obj__) { node_102 = come_decrement_ref_count(node_102, ((struct sNode*)node_102)->finalize, ((struct sNode*)node_102)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    while(_while_condtional27=*((struct sInfo*)come_null_check(info, "05function4.c", 624))->p==91,    __freed_obj__ = 0, 
    _while_condtional27) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 584))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        {
            p_103=((struct sInfo*)come_null_check(info, "05function4.c", 589))->p;
            __freed_obj__ = 0;
            sline_104=((struct sInfo*)come_null_check(info, "05function4.c", 590))->sline;
            __freed_obj__ = 0;
            if(_if_conditional209=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 606))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 606))->p==95,            __freed_obj__ = 0, 
            _if_conditional209) {
                come_clear_stackframe();
                word_105=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 593),((struct optional$2charphbool*)(right_value110=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value110;
                __freed_obj__ = 0;
                if(_if_conditional210=string_operator_equals(word_105,"const")||string_operator_equals(word_105,"__restrict")||string_operator_equals(word_105,"restrict")||string_operator_equals(word_105,"__user")||string_operator_equals(word_105,"volatile")||string_operator_equals(word_105,"_Nonnull")||string_operator_equals(word_105,"_Nullable")||string_operator_equals(word_105,"_Null_unspecified")||string_operator_equals(word_105,"__user"),                __freed_obj__ = 0, 
                _if_conditional210) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 598))->p=p_103;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 599))->sline=sline_104;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_105 && !__freed_obj__) { word_105 = come_decrement_ref_count(word_105, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 603))->p=p_103;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 604))->sline=sline_104;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional211=*((struct sInfo*)come_null_check(info, "05function4.c", 615))->p==93,        __freed_obj__ = 0, 
        _if_conditional211) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 609))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_87, "05function4.c", 612))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_106=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_87, "05function4.c", 618))->mArrayNum, "05function4.c", 618)),(struct sNode*)come_increment_ref_count(node_106));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("05function4.c", 621),((struct optional$2intbool*)(right_value115=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value115;
        __freed_obj__ = 0;
        if(node_106 && !__freed_obj__) { node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    __result79__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value119=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value116=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 624)))),(struct sType*)come_increment_ref_count(result_type_87),(char*)come_increment_ref_count(var_name_88))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_88 && !__freed_obj__) { var_name_88 = come_decrement_ref_count(var_name_88, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value116;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_88 && !__freed_obj__) { var_name_88 = come_decrement_ref_count(var_name_88, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
char* default_value_91;
char* __result75__;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_91, 0, sizeof(char*));
                if(_if_conditional196=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional196) {
                    __freed_obj__ = 0;
                    memset(&default_value_91,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result75__ = __result_obj__ = default_value_91;
                    __freed_obj__ = 0;
                    return __result75__;
                    __freed_obj__ = 0;
                }
                else {
                    __result76__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
void* right_value112;
struct list_item$1sNodeph* litem_107;
struct sNode* __dec_obj44;
_Bool _if_conditional213;
void* right_value113;
struct list_item$1sNodeph* litem_108;
struct sNode* __dec_obj45;
void* right_value114;
struct list_item$1sNodeph* litem_109;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_108, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_109, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional212=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional212) {
                litem_107=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value112=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_107, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_107, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj44=((struct list_item$1sNodeph*)come_null_check(litem_107, "./comelang2.h", 276))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_107, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_107;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_107;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional213=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional213) {
                    litem_108=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value113=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_108, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_108, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj45=((struct list_item$1sNodeph*)come_null_check(litem_108, "./comelang2.h", 286))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_108, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_108;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_108;
                    __freed_obj__ = 0;
                }
                else {
                    litem_109=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_109, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_109, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj46=((struct list_item$1sNodeph*)come_null_check(litem_109, "./comelang2.h", 296))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_109, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_109;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_109;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result77__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result77__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
struct sType* __dec_obj47;
void* right_value118;
char* __dec_obj48;
struct tuple2$2sTypephcharph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
        __dec_obj47=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1804))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(v1))));
        if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
        __dec_obj48=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1805))->v2=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(v2))));
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value118;
        __freed_obj__ = 0;
        __result78__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result78__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional214=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_110;
int sline_111;
_Bool _if_conditional216;
void* right_value120;
char* word_112;
_Bool _if_conditional217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_110, 0, sizeof(char*));
memset(&sline_111, 0, sizeof(int));
memset(&right_value120, 0, sizeof(void*));
memset(&word_112, 0, sizeof(char*));
    p_110=((struct sInfo*)come_null_check(info, "05function4.c", 629))->p;
    __freed_obj__ = 0;
    sline_111=((struct sInfo*)come_null_check(info, "05function4.c", 630))->sline;
    __freed_obj__ = 0;
    if(_if_conditional216=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 646))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 646))->p==95,    __freed_obj__ = 0, 
    _if_conditional216) {
        come_clear_stackframe();
        word_112=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 633),((struct optional$2charphbool*)(right_value120=parse_word(info))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        if(_if_conditional217=string_operator_equals(word_112,"const")||string_operator_equals(word_112,"__restrict")||string_operator_equals(word_112,"restrict")||string_operator_equals(word_112,"__user")||string_operator_equals(word_112,"volatile")||string_operator_equals(word_112,"_Nonnull")||string_operator_equals(word_112,"_Nullable")||string_operator_equals(word_112,"_Null_unspecified")||string_operator_equals(word_112,"__user"),        __freed_obj__ = 0, 
        _if_conditional217) {
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 638))->p=p_110;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 639))->sline=sline_111;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(word_112 && !__freed_obj__) { word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        ((struct sInfo*)come_null_check(info, "05function4.c", 643))->p=p_110;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 644))->sline=sline_111;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_113;
int head_sline_114;
void* right_value121;
char* type_name_115;
_Bool _while_condtional28;
void* right_value122;
char* __dec_obj49;
_Bool constant_116;
_Bool static__117;
_Bool exception__118;
_Bool volatile__119;
_Bool register__120;
_Bool unsigned__121;
_Bool long__122;
_Bool long_long_123;
_Bool short__124;
_Bool restrict__125;
_Bool struct__126;
_Bool union__127;
_Bool enum__128;
_Bool no_heap_129;
_Bool extern__130;
_Bool inline__131;
_Bool come_mem_core__132;
struct sNode* alignas__133;
_Bool anonymous_type_134;
_Bool anonymous_name_135;
_Bool _while_condtional29;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* p_136;
int sline_137;
void* right_value123;
_Bool _if_conditional220;
void* right_value124;
char* __dec_obj50;
void* right_value125;
char* __dec_obj51;
void* right_value126;
char* __dec_obj52;
_Bool _if_conditional221;
char* p_138;
int sline_139;
_Bool _while_condtional30;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value127;
void* right_value130;
void* right_value131;
void* right_value132;
struct optional$2tuple3$3sTypephcharphboolphbool* __result82__;
_Bool _if_conditional227;
char* p_140;
int sline_141;
void* right_value133;
_Bool _if_conditional228;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
struct optional$2tuple3$3sTypephcharphboolphbool* __result83__;
_Bool _if_conditional229;
_Bool _if_conditional230;
char* p_142;
int sline_143;
void* right_value138;
_Bool _if_conditional231;
void* right_value139;
char* __dec_obj56;
void* right_value140;
char* __dec_obj57;
void* right_value141;
char* __dec_obj58;
_Bool _if_conditional232;
char* p_144;
int sline_145;
void* right_value142;
_Bool _if_conditional233;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
struct optional$2tuple3$3sTypephcharphboolphbool* __result84__;
_Bool _if_conditional234;
_Bool _if_conditional235;
char* p_146;
int sline_147;
void* right_value147;
_Bool _if_conditional236;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
struct optional$2tuple3$3sTypephcharphboolphbool* __result85__;
void* right_value152;
char* __dec_obj59;
void* right_value153;
char* __dec_obj60;
_Bool _if_conditional237;
char* p_148;
int sline_149;
void* right_value154;
_Bool _if_conditional238;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
struct optional$2tuple3$3sTypephcharphboolphbool* __result86__;
_Bool _if_conditional239;
void* right_value159;
void* right_value160;
struct sNode* exp_150;
struct sNode* __dec_obj61;
void* right_value161;
void* right_value162;
char* __dec_obj62;
_Bool _if_conditional240;
void* right_value163;
char* __dec_obj63;
_Bool _if_conditional241;
void* right_value164;
char* __dec_obj64;
_Bool _if_conditional242;
void* right_value165;
char* __dec_obj65;
_Bool _if_conditional243;
void* right_value166;
char* __dec_obj66;
_Bool _if_conditional244;
void* right_value167;
char* __dec_obj67;
_Bool _if_conditional245;
void* right_value168;
char* __dec_obj68;
_Bool _if_conditional246;
void* right_value169;
char* __dec_obj69;
_Bool _if_conditional247;
void* right_value170;
char* __dec_obj70;
_Bool _if_conditional248;
char* p_151;
int sline_152;
_Bool _if_conditional249;
void* right_value171;
char* __dec_obj71;
void* right_value172;
char* __dec_obj72;
_Bool _if_conditional250;
void* right_value173;
char* __dec_obj73;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value174;
char* __dec_obj74;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value175;
char* __dec_obj75;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value176;
char* __dec_obj76;
_Bool _if_conditional258;
_Bool _if_conditional259;
char* p_153;
int sline_154;
void* right_value177;
char* __dec_obj77;
_Bool _if_conditional260;
_Bool _if_conditional261;
char* p_155;
int sline_156;
void* right_value178;
char* __dec_obj78;
_Bool _if_conditional262;
void* right_value179;
char* __dec_obj79;
void* right_value180;
char* __dec_obj80;
_Bool _if_conditional263;
_Bool _if_conditional264;
char* p_157;
int sline_158;
void* right_value181;
char* __dec_obj81;
_Bool _if_conditional265;
void* right_value182;
char* __dec_obj82;
void* right_value183;
char* __dec_obj83;
_Bool _if_conditional266;
void* right_value184;
char* __dec_obj84;
void* right_value185;
char* __dec_obj85;
_Bool _if_conditional267;
void* right_value186;
char* __dec_obj86;
_Bool _if_conditional268;
void* right_value187;
char* __dec_obj87;
_Bool _if_conditional269;
void* right_value188;
char* __dec_obj88;
_Bool _if_conditional270;
void* right_value189;
char* __dec_obj89;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
char* p_159;
int sline_160;
void* right_value190;
char* __dec_obj90;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value191;
char* __dec_obj91;
int pointer_num_161;
_Bool _while_condtional31;
_Bool lambda_flag_162;
char* pX_163;
int slineX_164;
_Bool _if_conditional277;
void* right_value192;
_Bool _if_conditional278;
struct sType* type_165;
char* var_name_166;
_Bool function_pointer_flag_167;
char* p_168;
int sline_169;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value193;
char* word_170;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool var_name_between_brace_171;
char* p_172;
int sline_173;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value194;
char* word_174;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
static int anonymous_num_175=0;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value195;
char* __dec_obj92;
void* right_value196;
struct sNode* node_176;
_Bool _if_conditional292;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
struct optional$2tuple3$3sTypephcharphboolphbool* __result87__;
int pointer_num_177;
_Bool _while_condtional32;
void* right_value201;
void* right_value202;
struct sType* __dec_obj93;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value203;
char* __dec_obj94;
void* right_value204;
struct sNode* node_178;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
struct optional$2tuple3$3sTypephcharphboolphbool* __result88__;
void* right_value209;
void* right_value210;
struct sType* __dec_obj95;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value211;
char* __dec_obj96;
void* right_value212;
struct sNode* node_179;
_Bool _if_conditional299;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
struct optional$2tuple3$3sTypephcharphboolphbool* __result89__;
int pointer_num_180;
_Bool _while_condtional33;
void* right_value217;
void* right_value218;
struct sType* __dec_obj97;
void* right_value219;
void* right_value220;
void* right_value221;
void* right_value222;
struct optional$2tuple3$3sTypephcharphboolphbool* __result90__;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value223;
char* __dec_obj98;
_Bool _if_conditional303;
static int num_anonymous_var_name_181=0;
void* right_value224;
char* __dec_obj99;
_Bool _if_conditional304;
void* right_value225;
char* __dec_obj100;
static int num_anonymous_var_name_182=0;
void* right_value226;
char* __dec_obj101;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool no_comma_183;
void* right_value227;
struct sNode* node_184;
struct sNode* __dec_obj102;
_Bool _if_conditional307;
struct sType* result_type_185;
void* right_value237;
_Bool _if_conditional313;
void* right_value238;
void* right_value239;
struct sType* __dec_obj103;
_Bool _if_conditional319;
int i_195;
_Bool _for_condtionalA5;
void* right_value244;
_Bool _if_conditional322;
void* right_value245;
void* right_value246;
void* right_value247;
struct sType* __dec_obj104;
void* right_value248;
void* right_value249;
struct sType* __dec_obj105;
struct sNode* __dec_obj106;
void* right_value250;
char* __dec_obj107;
void* right_value251;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_200;
struct list$1charph* param_names_201;
struct list$1charph* param_default_parametors_202;
_Bool var_args_203;
void* right_value252;
void* right_value253;
struct sType* __dec_obj108;
void* right_value254;
void* right_value256;
struct tuple1$1sTypeph* __dec_obj110;
struct list$1sTypeph* __dec_obj111;
struct list$1charph* __dec_obj112;
_Bool _if_conditional324;
_Bool _if_conditional325;
struct sType* result_type_204;
void* right_value257;
struct optional$2sTypepbool* __exception_result_var_b2;
_Bool _if_conditional326;
void* right_value258;
void* right_value259;
struct sType* __dec_obj113;
_Bool _if_conditional327;
int i_205;
_Bool _for_condtionalA6;
void* right_value260;
struct optional$2charphbool* __exception_result_var_b3;
_Bool _if_conditional328;
void* right_value261;
void* right_value262;
void* right_value263;
struct sType* __dec_obj114;
void* right_value264;
void* right_value265;
struct sType* __dec_obj115;
struct sNode* __dec_obj116;
_Bool _if_conditional329;
void* right_value266;
char* __dec_obj117;
_Bool _if_conditional330;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
struct optional$2tuple3$3sTypephcharphboolphbool* __result113__;
static int num_anonymous_var_name_206=0;
void* right_value271;
char* __dec_obj118;
void* right_value272;
void* right_value273;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_207;
struct list$1charph* param_names_208;
struct list$1charph* param_default_parametors_209;
_Bool var_args_210;
void* right_value274;
void* right_value275;
struct sType* __dec_obj119;
void* right_value276;
void* right_value277;
struct tuple1$1sTypeph* __dec_obj120;
struct list$1sTypeph* __dec_obj121;
struct list$1charph* __dec_obj122;
_Bool _if_conditional331;
void* right_value278;
struct sNode* exp_211;
void* right_value279;
_Bool _if_conditional332;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
struct optional$2tuple3$3sTypephcharphboolphbool* __result116__;
void* right_value284;
struct CVALUE* come_value_212;
void* right_value285;
struct sType* __dec_obj124;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value286;
char* __dec_obj125;
_Bool _if_conditional339;
static int num_anonymous_var_name_213=0;
void* right_value287;
char* __dec_obj126;
_Bool _if_conditional340;
void* right_value288;
char* __dec_obj127;
static int num_anonymous_var_name_214=0;
void* right_value289;
char* __dec_obj128;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool no_comma_215;
void* right_value290;
struct sNode* node_216;
struct sNode* __dec_obj129;
void* right_value291;
struct optional$2sTypepbool* __exception_result_var_b4;
_Bool _if_conditional343;
void* right_value292;
void* right_value293;
struct sType* __dec_obj130;
void* right_value294;
char* __dec_obj131;
struct sNode* __dec_obj132;
_Bool _if_conditional344;
int i_217;
_Bool _for_condtionalA7;
void* right_value295;
struct optional$2charphbool* __exception_result_var_b5;
_Bool _if_conditional345;
void* right_value296;
void* right_value297;
void* right_value298;
struct sType* __dec_obj133;
struct sNode* __dec_obj134;
_Bool _if_conditional346;
void* right_value308;
_Bool _if_conditional352;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
struct optional$2tuple3$3sTypephcharphboolphbool* __result124__;
void* right_value313;
void* right_value314;
struct sType* __dec_obj135;
_Bool _while_condtional37;
void* right_value315;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_222;
char* var_name_223;
_Bool err_224;
_Bool _if_conditional353;
void* right_value316;
void* right_value317;
void* right_value318;
void* right_value319;
struct optional$2tuple3$3sTypephcharphboolphbool* __result125__;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value320;
void* right_value321;
void* right_value322;
void* right_value323;
struct optional$2tuple3$3sTypephcharphboolphbool* __result126__;
_Bool _if_conditional356;
void* right_value324;
struct sType* __dec_obj136;
_Bool _if_conditional357;
void* right_value325;
char* new_name_225;
struct sNode* __dec_obj137;
_Bool _if_conditional358;
void* right_value326;
struct sClass* klass_226;
_Bool _if_conditional359;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
struct sType* __dec_obj138;
struct sNode* __dec_obj139;
_Bool _while_condtional47;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _while_condtional48;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value343;
void* right_value344;
struct list$1sTypeph* types_273;
void* right_value345;
_Bool _while_condtional49;
void* right_value346;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_274;
char* name_275;
_Bool err_276;
_Bool _if_conditional422;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
struct optional$2tuple3$3sTypephcharphboolphbool* __result151__;
void* right_value351;
int num_tuples_277;
void* right_value352;
void* right_value353;
void* right_value354;
struct sType* __dec_obj140;
struct list$1sTypeph* o2_saved_278;
struct sType* it_279;
_Bool _for_condtionalA10;
void* right_value355;
_Bool _if_conditional423;
void* right_value356;
struct sType* __dec_obj141;
_Bool _if_conditional424;
void* right_value357;
char* new_name_280;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value358;
char* __dec_obj142;
_Bool _if_conditional428;
static int num_anonymous_var_name_281=0;
void* right_value359;
char* __dec_obj143;
_Bool _if_conditional429;
void* right_value360;
char* __dec_obj144;
static int num_anonymous_var_name_282=0;
void* right_value361;
char* __dec_obj145;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool no_comma_283;
void* right_value362;
struct sNode* node_284;
struct sNode* __dec_obj146;
_Bool _while_condtional50;
_Bool _if_conditional432;
void* right_value363;
struct sNode* node_285;
void* right_value364;
void* right_value365;
char* asm_name_286;
char* __dec_obj147;
_Bool _if_conditional433;
void* right_value366;
void* right_value367;
struct sType* type2_287;
void* right_value368;
void* right_value369;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value370;
void* right_value371;
void* right_value372;
void* right_value373;
struct optional$2tuple3$3sTypephcharphboolphbool* __result152__;
void* right_value374;
void* right_value375;
void* right_value376;
void* right_value377;
struct optional$2tuple3$3sTypephcharphboolphbool* __result153__;
void* right_value378;
void* right_value379;
void* right_value380;
void* right_value381;
struct optional$2tuple3$3sTypephcharphboolphbool* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_113, 0, sizeof(char*));
memset(&head_sline_114, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&type_name_115, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&constant_116, 0, sizeof(_Bool));
memset(&static__117, 0, sizeof(_Bool));
memset(&exception__118, 0, sizeof(_Bool));
memset(&volatile__119, 0, sizeof(_Bool));
memset(&register__120, 0, sizeof(_Bool));
memset(&unsigned__121, 0, sizeof(_Bool));
memset(&long__122, 0, sizeof(_Bool));
memset(&long_long_123, 0, sizeof(_Bool));
memset(&short__124, 0, sizeof(_Bool));
memset(&restrict__125, 0, sizeof(_Bool));
memset(&struct__126, 0, sizeof(_Bool));
memset(&union__127, 0, sizeof(_Bool));
memset(&enum__128, 0, sizeof(_Bool));
memset(&no_heap_129, 0, sizeof(_Bool));
memset(&extern__130, 0, sizeof(_Bool));
memset(&inline__131, 0, sizeof(_Bool));
memset(&come_mem_core__132, 0, sizeof(_Bool));
memset(&alignas__133, 0, sizeof(struct sNode*));
memset(&anonymous_type_134, 0, sizeof(_Bool));
memset(&anonymous_name_135, 0, sizeof(_Bool));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&p_144, 0, sizeof(char*));
memset(&sline_145, 0, sizeof(int));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&p_146, 0, sizeof(char*));
memset(&sline_147, 0, sizeof(int));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&p_148, 0, sizeof(char*));
memset(&sline_149, 0, sizeof(int));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&exp_150, 0, sizeof(struct sNode*));
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
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&p_153, 0, sizeof(char*));
memset(&sline_154, 0, sizeof(int));
memset(&right_value177, 0, sizeof(void*));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&p_157, 0, sizeof(char*));
memset(&sline_158, 0, sizeof(int));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&pointer_num_161, 0, sizeof(int));
memset(&lambda_flag_162, 0, sizeof(_Bool));
memset(&pX_163, 0, sizeof(char*));
memset(&slineX_164, 0, sizeof(int));
memset(&right_value192, 0, sizeof(void*));
memset(&type_165, 0, sizeof(struct sType*));
memset(&var_name_166, 0, sizeof(char*));
memset(&function_pointer_flag_167, 0, sizeof(_Bool));
memset(&p_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
memset(&right_value193, 0, sizeof(void*));
memset(&word_170, 0, sizeof(char*));
memset(&var_name_between_brace_171, 0, sizeof(_Bool));
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
memset(&right_value194, 0, sizeof(void*));
memset(&word_174, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&node_176, 0, sizeof(struct sNode*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&pointer_num_177, 0, sizeof(int));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&node_178, 0, sizeof(struct sNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&node_179, 0, sizeof(struct sNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&pointer_num_180, 0, sizeof(int));
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
memset(&no_comma_183, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&node_184, 0, sizeof(struct sNode*));
memset(&result_type_185, 0, sizeof(struct sType*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&i_195, 0, sizeof(int));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&param_types_200, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_201, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_202, 0, sizeof(struct list$1charph*));
memset(&var_args_203, 0, sizeof(_Bool));
memset(&param_types_200, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_201, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_202, 0, sizeof(struct list$1charph*));
memset(&var_args_203, 0, sizeof(_Bool));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&result_type_204, 0, sizeof(struct sType*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&i_205, 0, sizeof(int));
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
memset(&param_types_207, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_208, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_209, 0, sizeof(struct list$1charph*));
memset(&var_args_210, 0, sizeof(_Bool));
memset(&param_types_207, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_208, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_209, 0, sizeof(struct list$1charph*));
memset(&var_args_210, 0, sizeof(_Bool));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&exp_211, 0, sizeof(struct sNode*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&come_value_212, 0, sizeof(struct CVALUE*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&no_comma_215, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
memset(&node_216, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&i_217, 0, sizeof(int));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&generics_type_222, 0, sizeof(struct sType*));
memset(&var_name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
memset(&generics_type_222, 0, sizeof(struct sType*));
memset(&var_name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&new_name_225, 0, sizeof(char*));
memset(&right_value326, 0, sizeof(void*));
memset(&klass_226, 0, sizeof(struct sClass*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&types_273, 0, sizeof(struct list$1sTypeph*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&type2_274, 0, sizeof(struct sType*));
memset(&name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
memset(&type2_274, 0, sizeof(struct sType*));
memset(&name_275, 0, sizeof(char*));
memset(&err_276, 0, sizeof(_Bool));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&num_tuples_277, 0, sizeof(int));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&o2_saved_278, 0, sizeof(struct list$1sTypeph*));
memset(&it_279, 0, sizeof(struct sType*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&new_name_280, 0, sizeof(char*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&no_comma_283, 0, sizeof(_Bool));
memset(&right_value362, 0, sizeof(void*));
memset(&node_284, 0, sizeof(struct sNode*));
memset(&right_value363, 0, sizeof(void*));
memset(&node_285, 0, sizeof(struct sNode*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&asm_name_286, 0, sizeof(char*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&type2_287, 0, sizeof(struct sType*));
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
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
    head_113=((struct sInfo*)come_null_check(info, "05function4.c", 650))->p;
    __freed_obj__ = 0;
    head_sline_114=((struct sInfo*)come_null_check(info, "05function4.c", 651))->sline;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "05function4.c", 652))->define_struct=(_Bool)0;
    __freed_obj__ = 0;
    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 654),((struct optional$2charphbool*)(right_value121=parse_word(info))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    while(_while_condtional28=string_operator_equals(type_name_115,"__extension__"),    __freed_obj__ = 0, 
    _while_condtional28) {
        __dec_obj49=type_name_115;
        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 656),((struct optional$2charphbool*)(right_value122=parse_word(info))))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value122;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    constant_116=(_Bool)0;
    __freed_obj__ = 0;
    static__117=(_Bool)0;
    __freed_obj__ = 0;
    exception__118=(_Bool)0;
    __freed_obj__ = 0;
    volatile__119=(_Bool)0;
    __freed_obj__ = 0;
    register__120=(_Bool)0;
    __freed_obj__ = 0;
    unsigned__121=(_Bool)0;
    __freed_obj__ = 0;
    long__122=(_Bool)0;
    __freed_obj__ = 0;
    long_long_123=(_Bool)0;
    __freed_obj__ = 0;
    short__124=(_Bool)0;
    __freed_obj__ = 0;
    restrict__125=(_Bool)0;
    __freed_obj__ = 0;
    struct__126=(_Bool)0;
    __freed_obj__ = 0;
    union__127=(_Bool)0;
    __freed_obj__ = 0;
    enum__128=(_Bool)0;
    __freed_obj__ = 0;
    no_heap_129=(_Bool)0;
    __freed_obj__ = 0;
    extern__130=(_Bool)0;
    __freed_obj__ = 0;
    inline__131=(_Bool)0;
    __freed_obj__ = 0;
    come_mem_core__132=(_Bool)0;
    __freed_obj__ = 0;
    alignas__133=((void*)0);
    __freed_obj__ = 0;
    anonymous_type_134=(_Bool)0;
    __freed_obj__ = 0;
    anonymous_name_135=(_Bool)0;
    __freed_obj__ = 0;
    while(_while_condtional29=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional29) {
        if(_if_conditional218=string_operator_equals(type_name_115,"struct"),        __freed_obj__ = 0, 
        _if_conditional218) {
            struct__126=(_Bool)1;
            __freed_obj__ = 0;
            if(_if_conditional219=*((struct sInfo*)come_null_check(info, "05function4.c", 709))->p==123,            __freed_obj__ = 0, 
            _if_conditional219) {
                p_136=((struct sInfo*)come_null_check(info, "05function4.c", 687))->p;
                __freed_obj__ = 0;
                sline_137=((struct sInfo*)come_null_check(info, "05function4.c", 688))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value123=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value123;
                __freed_obj__ = 0;
                if(_if_conditional220=*((struct sInfo*)come_null_check(info, "05function4.c", 707))->p==59,                __freed_obj__ = 0, 
                _if_conditional220) {
                    anonymous_name_135=(_Bool)1;
                    __freed_obj__ = 0;
                    anonymous_type_134=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj50=type_name_115;
                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(""))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value124;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 696))->p=p_136;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 697))->sline=sline_137;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_134=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj51=type_name_115;
                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(""))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 703))->p=p_136;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 704))->sline=sline_137;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj52=type_name_115;
            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 711),((struct optional$2charphbool*)(right_value126=parse_word(info))))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value126;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional221=*((struct sInfo*)come_null_check(info, "05function4.c", 745))->p==60,            __freed_obj__ = 0, 
            _if_conditional221) {
                p_138=((struct sInfo*)come_null_check(info, "05function4.c", 716))->p;
                __freed_obj__ = 0;
                sline_139=((struct sInfo*)come_null_check(info, "05function4.c", 717))->sline;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 719))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                while(_while_condtional30=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional30) {
                    if(_if_conditional222=*((struct sInfo*)come_null_check(info, "05function4.c", 742))->p==62,                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 724))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional223=*((struct sInfo*)come_null_check(info, "05function4.c", 733))->p==123,                        __freed_obj__ = 0, 
                        _if_conditional223) {
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 730))->p=p_138;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 731))->sline=sline_139;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional224=*((struct sInfo*)come_null_check(info, "05function4.c", 742))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional224) {
                            err_msg(info,"invalid struct definition");
                            __freed_obj__ = 0;
                            __result82__ = __result_obj__ = (come_save_stackframe("05function4.c", 737), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value132=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value131=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 737))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value130=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value127=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 737)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value127;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value130;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value131;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value132);
                            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value132;
                            __freed_obj__ = 0;
                            return __result82__;
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 740))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=*((struct sInfo*)come_null_check(info, "05function4.c", 764))->p==123,            __freed_obj__ = 0, 
            _if_conditional227) {
                p_140=((struct sInfo*)come_null_check(info, "05function4.c", 746))->p;
                __freed_obj__ = 0;
                sline_141=((struct sInfo*)come_null_check(info, "05function4.c", 747))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value133=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value133;
                __freed_obj__ = 0;
                if(_if_conditional228=*((struct sInfo*)come_null_check(info, "05function4.c", 763))->p==59,                __freed_obj__ = 0, 
                _if_conditional228) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 752))->p=head_113;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 753))->sline=head_sline_114;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 754))->define_struct=(_Bool)1;
                    __freed_obj__ = 0;
                    __result83__ = __result_obj__ = (come_save_stackframe("05function4.c", 755), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value137=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value136=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 755))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value135=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value134=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 755)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value134;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value135;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value136;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value137;
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_134=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 759))->p=p_140;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 760))->sline=sline_141;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional229=string_operator_equals(type_name_115,"union"),            __freed_obj__ = 0, 
            _if_conditional229) {
                union__127=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional230=*((struct sInfo*)come_null_check(info, "05function4.c", 794))->p==123,                __freed_obj__ = 0, 
                _if_conditional230) {
                    p_142=((struct sInfo*)come_null_check(info, "05function4.c", 769))->p;
                    __freed_obj__ = 0;
                    sline_143=((struct sInfo*)come_null_check(info, "05function4.c", 770))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value138=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value138;
                    __freed_obj__ = 0;
                    if(_if_conditional231=*((struct sInfo*)come_null_check(info, "05function4.c", 792))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional231) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 775))->p=head_113;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 776))->sline=head_sline_114;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 778))->define_struct=(_Bool)0;
                        __freed_obj__ = 0;
                        anonymous_type_134=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj56=type_name_115;
                        type_name_115=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(""))));
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value139;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 781))->p=p_142;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 782))->sline=sline_143;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_134=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj57=type_name_115;
                        type_name_115=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(""))));
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value140;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 788))->p=p_142;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 789))->sline=sline_143;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                __dec_obj58=type_name_115;
                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 796),((struct optional$2charphbool*)(right_value141=parse_word(info))))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional232=*((struct sInfo*)come_null_check(info, "05function4.c", 819))->p==123,                __freed_obj__ = 0, 
                _if_conditional232) {
                    p_144=((struct sInfo*)come_null_check(info, "05function4.c", 801))->p;
                    __freed_obj__ = 0;
                    sline_145=((struct sInfo*)come_null_check(info, "05function4.c", 802))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value142=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value142;
                    __freed_obj__ = 0;
                    if(_if_conditional233=*((struct sInfo*)come_null_check(info, "05function4.c", 818))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional233) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 807))->p=head_113;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 808))->sline=head_sline_114;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 809))->define_struct=(_Bool)1;
                        __freed_obj__ = 0;
                        __result84__ = __result_obj__ = (come_save_stackframe("05function4.c", 810), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value146=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value145=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 810))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value144=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value143=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 810)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value143;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value144;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
                        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value145;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value146);
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value146;
                        __freed_obj__ = 0;
                        return __result84__;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_134=(_Bool)1;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 814))->p=p_144;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 815))->sline=sline_145;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional234=string_operator_equals(type_name_115,"enum"),                __freed_obj__ = 0, 
                _if_conditional234) {
                    enum__128=(_Bool)1;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional235=*((struct sInfo*)come_null_check(info, "05function4.c", 846))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional235) {
                        p_146=((struct sInfo*)come_null_check(info, "05function4.c", 826))->p;
                        __freed_obj__ = 0;
                        sline_147=((struct sInfo*)come_null_check(info, "05function4.c", 827))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value147=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value147;
                        __freed_obj__ = 0;
                        if(_if_conditional236=*((struct sInfo*)come_null_check(info, "05function4.c", 844))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 832))->p=head_113;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 833))->sline=head_sline_114;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 834))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result85__ = __result_obj__ = (come_save_stackframe("05function4.c", 835), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value151=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value150=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 835))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value149=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value148=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 835)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value148;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value149;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value150);
                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value150;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value151);
                            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value151;
                            __freed_obj__ = 0;
                            return __result85__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_134=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj59=type_name_115;
                            type_name_115=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(""))));
                            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value152;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 840))->p=p_146;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 841))->sline=sline_147;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj60=type_name_115;
                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 848),((struct optional$2charphbool*)(right_value153=parse_word(info))))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value153;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional237=*((struct sInfo*)come_null_check(info, "05function4.c", 871))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional237) {
                        p_148=((struct sInfo*)come_null_check(info, "05function4.c", 853))->p;
                        __freed_obj__ = 0;
                        sline_149=((struct sInfo*)come_null_check(info, "05function4.c", 854))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value154=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value154;
                        __freed_obj__ = 0;
                        if(_if_conditional238=*((struct sInfo*)come_null_check(info, "05function4.c", 870))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional238) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 859))->p=head_113;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 860))->sline=head_sline_114;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 861))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result86__ = __result_obj__ = (come_save_stackframe("05function4.c", 862), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value158=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value157=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 862))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value156=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value155=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 862)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value155;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
                            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value156;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
                            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value157;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
                            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value158;
                            __freed_obj__ = 0;
                            return __result86__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_134=(_Bool)1;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 866))->p=p_148;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 867))->sline=sline_149;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional239=string_operator_equals(type_name_115,"_Alignas"),                    __freed_obj__ = 0, 
                    _if_conditional239) {
                        optional$2intbool_value((come_push_stackframe("05function4.c", 873),((struct optional$2intbool*)(right_value159=expected_next_character(40,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value159;
                        __freed_obj__ = 0;
                        exp_150=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value160;
                        __freed_obj__ = 0;
                        __dec_obj61=alignas__133;
                        alignas__133=(struct sNode*)come_increment_ref_count(exp_150);
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        optional$2intbool_value((come_push_stackframe("05function4.c", 879),((struct optional$2intbool*)(right_value161=expected_next_character(41,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value161);
                        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value161;
                        __freed_obj__ = 0;
                        __dec_obj62=type_name_115;
                        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 881),((struct optional$2charphbool*)(right_value162=parse_word(info))))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value162);
                        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value162;
                        __freed_obj__ = 0;
                        if(exp_150 && !__freed_obj__) { exp_150 = come_decrement_ref_count(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional240=string_operator_equals(type_name_115,"const"),                        __freed_obj__ = 0, 
                        _if_conditional240) {
                            constant_116=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj63=type_name_115;
                            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 886),((struct optional$2charphbool*)(right_value163=parse_word(info))))));
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value163;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional241=string_operator_equals(type_name_115,"exception"),                            __freed_obj__ = 0, 
                            _if_conditional241) {
                                exception__118=(_Bool)1;
                                __freed_obj__ = 0;
                                __dec_obj64=type_name_115;
                                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 891),((struct optional$2charphbool*)(right_value164=parse_word(info))))));
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value164;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional242=string_operator_equals(type_name_115,"static"),                                __freed_obj__ = 0, 
                                _if_conditional242) {
                                    static__117=(_Bool)1;
                                    __freed_obj__ = 0;
                                    __dec_obj65=type_name_115;
                                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 896),((struct optional$2charphbool*)(right_value165=parse_word(info))))));
                                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value165;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional243=string_operator_equals(type_name_115,"come_mem_core"),                                    __freed_obj__ = 0, 
                                    _if_conditional243) {
                                        come_mem_core__132=(_Bool)1;
                                        __freed_obj__ = 0;
                                        __dec_obj66=type_name_115;
                                        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 901),((struct optional$2charphbool*)(right_value166=parse_word(info))))));
                                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value166;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional244=string_operator_equals(type_name_115,"extern"),                                        __freed_obj__ = 0, 
                                        _if_conditional244) {
                                            extern__130=(_Bool)1;
                                            __freed_obj__ = 0;
                                            __dec_obj67=type_name_115;
                                            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 906),((struct optional$2charphbool*)(right_value167=parse_word(info))))));
                                            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value167;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional245=string_operator_equals(type_name_115,"_Noreturn"),                                            __freed_obj__ = 0, 
                                            _if_conditional245) {
                                                __dec_obj68=type_name_115;
                                                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 909),((struct optional$2charphbool*)(right_value168=parse_word(info))))));
                                                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                                if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value168;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional246=string_operator_equals(type_name_115,"inline")||string_operator_equals(type_name_115,"__inline")||string_operator_equals(type_name_115,"__inline__")||string_operator_equals(type_name_115,"__always_inline"),                                                __freed_obj__ = 0, 
                                                _if_conditional246) {
                                                    inline__131=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    __dec_obj69=type_name_115;
                                                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 914),((struct optional$2charphbool*)(right_value169=parse_word(info))))));
                                                    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                                    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value169;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional247=string_operator_equals(type_name_115,"volatile"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional247) {
                                                        volatile__119=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                        __dec_obj70=type_name_115;
                                                        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 919),((struct optional$2charphbool*)(right_value170=parse_word(info))))));
                                                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value170;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional248=string_operator_equals(type_name_115,"long"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional248) {
                                                            {
                                                                p_151=((struct sInfo*)come_null_check(info, "05function4.c", 924))->p;
                                                                __freed_obj__ = 0;
                                                                sline_152=((struct sInfo*)come_null_check(info, "05function4.c", 925))->sline;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional249=!xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 987))->p),                                                                __freed_obj__ = 0, 
                                                                _if_conditional249) {
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 928))->p=p_151;
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 929))->sline=sline_152;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj71=type_name_115;
                                                                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("long"))));
                                                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                                                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value171;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    __dec_obj72=type_name_115;
                                                                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 935),((struct optional$2charphbool*)(right_value172=parse_word(info))))));
                                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value172;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional250=string_operator_equals(type_name_115,"unsigned"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional250) {
                                                                        __dec_obj73=type_name_115;
                                                                        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 938),((struct optional$2charphbool*)(right_value173=parse_word(info))))));
                                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                                        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value173;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional251=string_operator_equals(type_name_115,"int"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional251) {
                                                                            long__122=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional252=string_operator_equals(type_name_115,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional252) {
                                                                            p_151=((struct sInfo*)come_null_check(info, "05function4.c", 946))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_152=((struct sInfo*)come_null_check(info, "05function4.c", 947))->sline;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional253=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 957))->p),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional253) {
                                                                                long_long_123=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj74=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 950),((struct optional$2charphbool*)(right_value174=parse_word(info))))));
                                                                                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                                                                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value174;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__122=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional254=string_operator_equals(type_name_115,"int"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional254) {
                                                                                long_long_123=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional255=!is_type_name(type_name_115,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional255) {
                                                                                    __dec_obj75=type_name_115;
                                                                                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string("long"))));
                                                                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                                                                    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value175;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_123=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 964))->p=p_151;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 965))->sline=sline_152;
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional256=is_type_name(type_name_115,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional256) {
                                                                                if(_if_conditional257=long__122,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional257) {
                                                                                    long_long_123=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    long__122=(_Bool)0;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__122=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 980))->p=p_151;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 981))->sline=sline_152;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj76=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("long"))));
                                                                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                                                                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value176;
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
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional258=string_operator_equals(type_name_115,"unsigned"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional258) {
                                                                unsigned__121=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional259=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1057))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1057))->p==95,                                                                __freed_obj__ = 0, 
                                                                _if_conditional259) {
                                                                    p_153=((struct sInfo*)come_null_check(info, "05function4.c", 993))->p;
                                                                    __freed_obj__ = 0;
                                                                    sline_154=((struct sInfo*)come_null_check(info, "05function4.c", 994))->sline;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj77=type_name_115;
                                                                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 996),((struct optional$2charphbool*)(right_value177=parse_word(info))))));
                                                                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                                    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value177;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional260=string_operator_equals(type_name_115,"short"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional260) {
                                                                        if(_if_conditional261=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1021))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1021))->p==95,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional261) {
                                                                            p_155=((struct sInfo*)come_null_check(info, "05function4.c", 1000))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_156=((struct sInfo*)come_null_check(info, "05function4.c", 1001))->sline;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj78=type_name_115;
                                                                            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1003),((struct optional$2charphbool*)(right_value178=parse_word(info))))));
                                                                            if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                                                                            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value178;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional262=is_type_name(type_name_115,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional262) {
                                                                                short__124=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                short__124=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj79=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string("int"))));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                                                                                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value179;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1012))->p=p_155;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1013))->sline=sline_156;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            short__124=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj80=type_name_115;
                                                                            type_name_115=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("int"))));
                                                                            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                                                                            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value180;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional263=string_operator_equals(type_name_115,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional263) {
                                                                            if(_if_conditional264=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1045))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1045))->p==95,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional264) {
                                                                                p_157=((struct sInfo*)come_null_check(info, "05function4.c", 1024))->p;
                                                                                __freed_obj__ = 0;
                                                                                sline_158=((struct sInfo*)come_null_check(info, "05function4.c", 1025))->sline;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj81=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1027),((struct optional$2charphbool*)(right_value181=parse_word(info))))));
                                                                                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                                                                                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value181;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional265=is_type_name(type_name_115,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional265) {
                                                                                    long__122=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__122=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    __dec_obj82=type_name_115;
                                                                                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("int"))));
                                                                                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                                                                                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value182;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1036))->p=p_157;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 1037))->sline=sline_158;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__122=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj83=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string("int"))));
                                                                                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                                                                                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value183;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional266=!is_type_name(type_name_115,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional266) {
                                                                                __dec_obj84=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string("int"))));
                                                                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                                                                                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value184;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1048))->p=p_153;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 1049))->sline=sline_154;
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
                                                                    __dec_obj85=type_name_115;
                                                                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string("int"))));
                                                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                                                                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value185;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional267=string_operator_equals(type_name_115,"signed")||string_operator_equals(type_name_115,"__signed__"),                                                                __freed_obj__ = 0, 
                                                                _if_conditional267) {
                                                                    unsigned__121=(_Bool)0;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj86=type_name_115;
                                                                    type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1061),((struct optional$2charphbool*)(right_value186=parse_word(info))))));
                                                                    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                                                                    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value186;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional268=string_operator_equals(type_name_115,"register"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional268) {
                                                                        register__120=(_Bool)1;
                                                                        __freed_obj__ = 0;
                                                                        __dec_obj87=type_name_115;
                                                                        type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1066),((struct optional$2charphbool*)(right_value187=parse_word(info))))));
                                                                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                                                        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value187;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional269=string_operator_equals(type_name_115,"restrict"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional269) {
                                                                            restrict__125=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj88=type_name_115;
                                                                            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1071),((struct optional$2charphbool*)(right_value188=parse_word(info))))));
                                                                            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                                                                            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value188;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional270=string_operator_equals(type_name_115,"__restrict"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional270) {
                                                                                restrict__125=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj89=type_name_115;
                                                                                type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1076),((struct optional$2charphbool*)(right_value189=parse_word(info))))));
                                                                                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                                                                                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value189;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional271=string_operator_equals(type_name_115,"short"),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional271) {
                                                                                    short__124=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional272=*((struct sInfo*)come_null_check(info, "05function4.c", 1110))->p==58,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional272) {
                                                                                        break;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional273=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1110))->p),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional273) {
                                                                                            p_159=((struct sInfo*)come_null_check(info, "05function4.c", 1085))->p;
                                                                                            __freed_obj__ = 0;
                                                                                            sline_160=((struct sInfo*)come_null_check(info, "05function4.c", 1086))->sline;
                                                                                            __freed_obj__ = 0;
                                                                                            __dec_obj90=type_name_115;
                                                                                            type_name_115=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1087),((struct optional$2charphbool*)(right_value190=parse_word(info))))));
                                                                                            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                                                                                            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value190;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional274=string_operator_equals(type_name_115,"int"),                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional274) {
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional275=string_operator_equals(type_name_115,"short"),                                                                                                __freed_obj__ = 0, 
                                                                                                _if_conditional275) {
                                                                                                    short__124=(_Bool)0;
                                                                                                    __freed_obj__ = 0;
                                                                                                    break;
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional276=is_type_name(type_name_115,info),                                                                                                    __freed_obj__ = 0, 
                                                                                                    _if_conditional276) {
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1097))->p=p_159;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1098))->sline=sline_160;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj91=type_name_115;
                                                                                                        type_name_115=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("short"))));
                                                                                                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                                                                                                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value191;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1102))->p=p_159;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1103))->sline=sline_160;
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
                                                                                            break;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
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
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    skip_pointer_attribute(info);
    __freed_obj__ = 0;
    pointer_num_161=0;
    __freed_obj__ = 0;
    while(_while_condtional31=*((struct sInfo*)come_null_check(info, "05function4.c", 1128))->p==42,    __freed_obj__ = 0, 
    _while_condtional31) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1120))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        pointer_num_161++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    lambda_flag_162=(_Bool)0;
    __freed_obj__ = 0;
    {
        pX_163=((struct sInfo*)come_null_check(info, "05function4.c", 1130))->p;
        __freed_obj__ = 0;
        slineX_164=((struct sInfo*)come_null_check(info, "05function4.c", 1131))->sline;
        __freed_obj__ = 0;
        if(_if_conditional277=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1141))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1141))->p==95,        __freed_obj__ = 0, 
        _if_conditional277) {
            (void)optional$2charphbool_value((come_push_stackframe("05function4.c", 1134),((struct optional$2charphbool*)(right_value192=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value192;
            __freed_obj__ = 0;
            if(_if_conditional278=*((struct sInfo*)come_null_check(info, "05function4.c", 1139))->p==40&&((struct sInfo*)come_null_check(info, "05function4.c", 1139))->in_typedef,            __freed_obj__ = 0, 
            _if_conditional278) {
                lambda_flag_162=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1141))->p=pX_163;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1142))->sline=slineX_164;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    function_pointer_flag_167=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_168=((struct sInfo*)come_null_check(info, "05function4.c", 1150))->p;
        __freed_obj__ = 0;
        sline_169=((struct sInfo*)come_null_check(info, "05function4.c", 1151))->sline;
        __freed_obj__ = 0;
        if(_if_conditional279=*((struct sInfo*)come_null_check(info, "05function4.c", 1176))->p==40,        __freed_obj__ = 0, 
        _if_conditional279) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1154))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional280=*((struct sInfo*)come_null_check(info, "05function4.c", 1174))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1174))->p==94,            __freed_obj__ = 0, 
            _if_conditional280) {
                function_pointer_flag_167=(_Bool)1;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional281=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1174))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1174))->p==95,                __freed_obj__ = 0, 
                _if_conditional281) {
                    word_170=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1163),((struct optional$2charphbool*)(right_value193=parse_word(info))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                    if(_if_conditional282=*((struct sInfo*)come_null_check(info, "05function4.c", 1173))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional282) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1166))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional283=*((struct sInfo*)come_null_check(info, "05function4.c", 1172))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional283) {
                            function_pointer_flag_167=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(word_170 && !__freed_obj__) { word_170 = come_decrement_ref_count(word_170, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1176))->p=p_168;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1177))->sline=sline_169;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_between_brace_171=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_172=((struct sInfo*)come_null_check(info, "05function4.c", 1182))->p;
        __freed_obj__ = 0;
        sline_173=((struct sInfo*)come_null_check(info, "05function4.c", 1183))->sline;
        __freed_obj__ = 0;
        if(_if_conditional284=*((struct sInfo*)come_null_check(info, "05function4.c", 1207))->p==40,        __freed_obj__ = 0, 
        _if_conditional284) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1186))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional285=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1205))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1205))->p==95,            __freed_obj__ = 0, 
            _if_conditional285) {
                word_174=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1192),((struct optional$2charphbool*)(right_value194=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194;
                __freed_obj__ = 0;
                if(_if_conditional286=is_type_name(word_174,info),                __freed_obj__ = 0, 
                _if_conditional286) {
                }
                else {
                    if(_if_conditional287=*((struct sInfo*)come_null_check(info, "05function4.c", 1204))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional287) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1197))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional288=*((struct sInfo*)come_null_check(info, "05function4.c", 1203))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional288) {
                            var_name_between_brace_171=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_174 && !__freed_obj__) { word_174 = come_decrement_ref_count(word_174, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1207))->p=p_172;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1208))->sline=sline_173;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional289=anonymous_type_134&&*((struct sInfo*)come_null_check(info, "05function4.c", 1774))->p==123,    __freed_obj__ = 0, 
    _if_conditional289) {
        __freed_obj__ = 0;
        if(_if_conditional290=struct__126,        __freed_obj__ = 0, 
        _if_conditional290) {
            if(_if_conditional291=string_operator_equals(type_name_115,""),            __freed_obj__ = 0, 
            _if_conditional291) {
                __dec_obj92=type_name_115;
                type_name_115=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("anonymous_typeX%d",++anonymous_num_175))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value195;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=parse_struct((char*)come_increment_ref_count(type_name_115),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value196;
            __freed_obj__ = 0;
            if(_if_conditional292=!((struct sNode*)come_null_check(node_176, "05function4.c", 1225))->compile(((struct sNode*)come_null_check(node_176, "05function4.c", 1225))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional292) {
                err_msg(info,"parse_struct is failed");
                __freed_obj__ = 0;
                __result87__ = __result_obj__ = (come_save_stackframe("05function4.c", 1222), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value200=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value199=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1222))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value198=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value197=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1222)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(node_176 && !__freed_obj__) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
                if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value197;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value198);
                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value198;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value199;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value200);
                if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value200;
                __freed_obj__ = 0;
                return __result87__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            pointer_num_177=0;
            __freed_obj__ = 0;
            while(_while_condtional32=*((struct sInfo*)come_null_check(info, "05function4.c", 1232))->p==42,            __freed_obj__ = 0, 
            _while_condtional32) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1228))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                pointer_num_177++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj93=type_165;
            type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1232)))),type_name_115,(_Bool)0,info))));
            if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value201;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value202;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1234))->mPointerNum=pointer_num_177;
            __freed_obj__ = 0;
            if(node_176 && !__freed_obj__) { node_176 = come_decrement_ref_count(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional293=enum__128,            __freed_obj__ = 0, 
            _if_conditional293) {
                if(_if_conditional294=string_operator_equals(type_name_115,""),                __freed_obj__ = 0, 
                _if_conditional294) {
                    __dec_obj94=type_name_115;
                    type_name_115=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("anonymous_typeY%d",++anonymous_num_175))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value203;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=parse_enum((char*)come_increment_ref_count(type_name_115),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value204;
                __freed_obj__ = 0;
                if(_if_conditional295=!((struct sInfo*)come_null_check(info, "05function4.c", 1250))->no_output_err,                __freed_obj__ = 0, 
                _if_conditional295) {
                    if(_if_conditional296=!((struct sNode*)come_null_check(node_178, "05function4.c", 1248))->compile(((struct sNode*)come_null_check(node_178, "05function4.c", 1248))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1245))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1245))->sline);
                        __freed_obj__ = 0;
                        __result88__ = __result_obj__ = (come_save_stackframe("05function4.c", 1246), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value208=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value207=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1246))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value206=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value205=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1246)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_178 && !__freed_obj__) { node_178 = come_decrement_ref_count(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value205;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value206;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value207);
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value207;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value208);
                        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value208;
                        __freed_obj__ = 0;
                        return __result88__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj95=type_165;
                type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1250)))),type_name_115,(_Bool)0,info))));
                if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value209;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value210;
                __freed_obj__ = 0;
                if(node_178 && !__freed_obj__) { node_178 = come_decrement_ref_count(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional297=union__127,                __freed_obj__ = 0, 
                _if_conditional297) {
                    if(_if_conditional298=string_operator_equals(type_name_115,""),                    __freed_obj__ = 0, 
                    _if_conditional298) {
                        __dec_obj96=type_name_115;
                        type_name_115=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("anonymous_typeZ%d",++anonymous_num_175))));
                        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value211;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    node_179=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=parse_union((char*)come_increment_ref_count(type_name_115),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value212;
                    __freed_obj__ = 0;
                    if(_if_conditional299=!((struct sNode*)come_null_check(node_179, "05function4.c", 1266))->compile(((struct sNode*)come_null_check(node_179, "05function4.c", 1266))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1261))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1261))->sline);
                        __freed_obj__ = 0;
                        __result89__ = __result_obj__ = (come_save_stackframe("05function4.c", 1262), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value216=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value215=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1262))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value214=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value213=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1262)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_179 && !__freed_obj__) { node_179 = come_decrement_ref_count(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value213;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
                        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value214;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value215;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value216;
                        __freed_obj__ = 0;
                        return __result89__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    pointer_num_180=0;
                    __freed_obj__ = 0;
                    while(_while_condtional33=*((struct sInfo*)come_null_check(info, "05function4.c", 1273))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional33) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1269))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        pointer_num_180++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj97=type_165;
                    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1273)))),type_name_115,(_Bool)0,info))));
                    if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value217;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value218;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type_165, "05function4.c", 1275))->mPointerNum=pointer_num_180;
                    __freed_obj__ = 0;
                    if(node_179 && !__freed_obj__) { node_179 = come_decrement_ref_count(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __freed_obj__ = 0;
                    __result90__ = __result_obj__ = (come_save_stackframe("05function4.c", 1279), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value222=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value221=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1279))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value220=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value219=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1279)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                    if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value219;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
                    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value220;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value221);
                    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value221;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value222);
                    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value222;
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional300=parse_variable_name,        __freed_obj__ = 0, 
        _if_conditional300) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional301=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1289))->p==40,            __freed_obj__ = 0, 
            _if_conditional301) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1285))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional302=*((struct sInfo*)come_null_check(info, "05function4.c", 1306))->p==58,            __freed_obj__ = 0, 
            _if_conditional302) {
                __dec_obj98=var_name_166;
                var_name_166=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(""))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value223;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional303=anonymous_name_135,                __freed_obj__ = 0, 
                _if_conditional303) {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_181++;
                    __freed_obj__ = 0;
                    __dec_obj99=var_name_166;
                    var_name_166=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_181))));
                    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value224;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional304=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1306))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1306))->p==95,                    __freed_obj__ = 0, 
                    _if_conditional304) {
                        __dec_obj100=var_name_166;
                        var_name_166=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1298),((struct optional$2charphbool*)(right_value225=parse_word(info))))));
                        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value225;
                        __freed_obj__ = 0;
                    }
                    else {
                        __freed_obj__ = 0;
                        num_anonymous_var_name_182++;
                        __freed_obj__ = 0;
                        __dec_obj101=var_name_166;
                        var_name_166=(char*)come_increment_ref_count(((char*)(right_value226=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_182))));
                        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value226;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional305=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1311))->p==41,            __freed_obj__ = 0, 
            _if_conditional305) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1307))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional306=*((struct sInfo*)come_null_check(info, "05function4.c", 1322))->p==58,            __freed_obj__ = 0, 
            _if_conditional306) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1312))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_183=((struct sInfo*)come_null_check(info, "05function4.c", 1315))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1316))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value227;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1318))->no_comma=no_comma_183;
                __freed_obj__ = 0;
                __dec_obj102=((struct sType*)come_null_check(type_165, "05function4.c", 1320))->mSizeNum;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1320))->mSizeNum=(struct sNode*)come_increment_ref_count(node_184);
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                if(node_184 && !__freed_obj__) { node_184 = come_decrement_ref_count(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional307=lambda_flag_162,        __freed_obj__ = 0, 
        _if_conditional307) {
            __freed_obj__ = 0;
            if(_if_conditional313=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1340),((struct optional$2sTypepbool*)(right_value237=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1340))->types,type_name_115))))),            come_pop_stackframe() ,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237),
            (right_value237 && right_value237 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value237, 
            __freed_obj__ = 0, 
            _if_conditional313) {
                __dec_obj103=result_type_185;
                result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1327),((struct optional$2sTypepbool*)(right_value238=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1327))->types,type_name_115)))))))));
                if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value238;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value239;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional319=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1340))->generics_type_names, "05function4.c", 1340)),(char*)come_increment_ref_count(type_name_115)),                __freed_obj__ = 0, 
                _if_conditional319) {
                    for(
                    i_195=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA5=                    i_195<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1335))->generics_type_names, "05function4.c", 1335))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA5;                    i_195++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional322=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1334),((struct optional$2charphbool*)(right_value244=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1334))->generics_type_names,i_195))))),type_name_115),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244),
                        (right_value244 && right_value244 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value244, 
                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            __dec_obj104=result_type_185;
                            result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1332)))),((char*)(right_value246=xsprintf("generics_type%d",i_195))),(_Bool)0,info))));
                            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value245;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
                            if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value246;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
                            if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value247;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj105=result_type_185;
                    result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1337)))),type_name_115,(_Bool)0,info))));
                    if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value248;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value249);
                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value249;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1340))->mConstant=((struct sType*)come_null_check(result_type_185, "05function4.c", 1340))->mConstant||constant_116;
            __freed_obj__ = 0;
            __dec_obj106=((struct sType*)come_null_check(result_type_185, "05function4.c", 1341))->mAlignas;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1341))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1342))->mComeMemCore=((struct sType*)come_null_check(result_type_185, "05function4.c", 1342))->mComeMemCore||come_mem_core__132;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1343))->mRegister=register__120;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1344))->mUnsigned=((struct sType*)come_null_check(result_type_185, "05function4.c", 1344))->mUnsigned||unsigned__121;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1345))->mVolatile=volatile__119;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1346))->mStatic=((struct sType*)come_null_check(result_type_185, "05function4.c", 1346))->mStatic||static__117;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1347))->mExtern=((struct sType*)come_null_check(result_type_185, "05function4.c", 1347))->mExtern||extern__130;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1348))->mInline=((struct sType*)come_null_check(result_type_185, "05function4.c", 1348))->mInline||inline__131;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1349))->mRestrict=((struct sType*)come_null_check(result_type_185, "05function4.c", 1349))->mRestrict||restrict__125;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1350))->mLongLong=((struct sType*)come_null_check(result_type_185, "05function4.c", 1350))->mLongLong||long_long_123;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1351))->mLong=((struct sType*)come_null_check(result_type_185, "05function4.c", 1351))->mLong||long__122;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1352))->mShort=((struct sType*)come_null_check(result_type_185, "05function4.c", 1352))->mShort||short__124;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_185, "05function4.c", 1353))->mPointerNum=pointer_num_161;
            __freed_obj__ = 0;
            __dec_obj107=var_name_166;
            var_name_166=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1355),((struct optional$2charphbool*)(right_value250=parse_word(info))))));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value250;
            __freed_obj__ = 0;
            multiple_assgin_var2=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1357),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value251=parse_params(info)))));
            param_types_200=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_201=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_202=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_203=multiple_assgin_var2->v4;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value251;
            __freed_obj__ = 0;
            __dec_obj108=type_165;
            type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1359)))),"lambda",(_Bool)0,info))));
            if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value252;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value253;
            __freed_obj__ = 0;
            __dec_obj110=((struct sType*)come_null_check(type_165, "05function4.c", 1361))->mResultType;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1361))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value256=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value254=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1361)))),(struct sType*)come_increment_ref_count(result_type_185)))));
            if(__dec_obj110) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value254);
            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value254;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value256;
            __freed_obj__ = 0;
            __dec_obj111=((struct sType*)come_null_check(type_165, "05function4.c", 1362))->mParamTypes;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1362))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_200);
            if(__dec_obj111) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj112=((struct sType*)come_null_check(type_165, "05function4.c", 1363))->mParamNames;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1363))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_201);
            if(__dec_obj112) { come_call_finalizer(list$1charph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1364))->mVarArgs=var_args_203;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1365))->mExtern=extern__130;
            __freed_obj__ = 0;
            if(result_type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_200 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_200, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_201 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_201, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_202 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional324=function_pointer_flag_167,            __freed_obj__ = 0, 
            _if_conditional324) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1368))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                if(_if_conditional325=*((struct sInfo*)come_null_check(info, "05function4.c", 1378))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1378))->p==94,                __freed_obj__ = 0, 
                _if_conditional325) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1374))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                if(_if_conditional326=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1396),__exception_result_var_b2=((struct optional$2sTypepbool*)(right_value257=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1396))->types,type_name_115))), come_pop_stackframe(), __exception_result_var_b2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257),
                (right_value257 && right_value257 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value257, 
                __freed_obj__ = 0, 
                _if_conditional326) {
                    __dec_obj113=result_type_204;
                    result_type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1382),((struct optional$2sTypepbool*)(right_value258=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1382))->types,type_name_115)))))))));
                    if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value258;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value259;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional327=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1396))->generics_type_names, "05function4.c", 1396)),(char*)come_increment_ref_count(type_name_115)),                    __freed_obj__ = 0, 
                    _if_conditional327) {
                        for(
                        i_205=0 ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA6=                        i_205<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1391))->generics_type_names, "05function4.c", 1391))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA6;                        i_205++ ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional328=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1390),__exception_result_var_b3=((struct optional$2charphbool*)(right_value260=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1390))->generics_type_names,i_205))), come_pop_stackframe(), __exception_result_var_b3)),type_name_115),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260),
                            (right_value260 && right_value260 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value260, 
                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                __dec_obj114=result_type_204;
                                result_type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1388)))),((char*)(right_value262=xsprintf("generics_type%d",i_205))),(_Bool)0,info))));
                                if(__dec_obj114) { come_call_finalizer(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value261;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
                                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value262;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
                                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value263;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj115=result_type_204;
                        result_type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1393)))),type_name_115,(_Bool)0,info))));
                        if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value264;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value265;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1396))->mConstant=((struct sType*)come_null_check(result_type_204, "05function4.c", 1396))->mConstant||constant_116;
                __freed_obj__ = 0;
                __dec_obj116=((struct sType*)come_null_check(result_type_204, "05function4.c", 1397))->mAlignas;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1397))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1398))->mComeMemCore=((struct sType*)come_null_check(result_type_204, "05function4.c", 1398))->mComeMemCore||come_mem_core__132;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1399))->mRegister=register__120;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1400))->mUnsigned=((struct sType*)come_null_check(result_type_204, "05function4.c", 1400))->mUnsigned||unsigned__121;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1401))->mVolatile=volatile__119;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1402))->mStatic=((struct sType*)come_null_check(result_type_204, "05function4.c", 1402))->mStatic||static__117;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1403))->mExtern=((struct sType*)come_null_check(result_type_204, "05function4.c", 1403))->mExtern||extern__130;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1404))->mInline=((struct sType*)come_null_check(result_type_204, "05function4.c", 1404))->mInline||inline__131;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1405))->mRestrict=((struct sType*)come_null_check(result_type_204, "05function4.c", 1405))->mRestrict||restrict__125;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1406))->mLongLong=((struct sType*)come_null_check(result_type_204, "05function4.c", 1406))->mLongLong||long_long_123;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1407))->mLong=((struct sType*)come_null_check(result_type_204, "05function4.c", 1407))->mLong||long__122;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1408))->mShort=((struct sType*)come_null_check(result_type_204, "05function4.c", 1408))->mShort||short__124;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_204, "05function4.c", 1409))->mPointerNum+=pointer_num_161;
                __freed_obj__ = 0;
                if(_if_conditional329=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1422))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1422))->p==95,                __freed_obj__ = 0, 
                _if_conditional329) {
                    __dec_obj117=var_name_166;
                    var_name_166=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1412),((struct optional$2charphbool*)(right_value266=parse_word(info))))));
                    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value266;
                    __freed_obj__ = 0;
                    if(_if_conditional330=*((struct sInfo*)come_null_check(info, "05function4.c", 1416))->p==40,                    __freed_obj__ = 0, 
                    _if_conditional330) {
                        __result113__ = __result_obj__ = (come_save_stackframe("05function4.c", 1414), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value270=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value269=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1414))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value268=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value267=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1414)))),(struct sType*)come_increment_ref_count(result_type_204),(char*)come_increment_ref_count(var_name_166),(_Bool)0)))),(_Bool)0))));
                        if(result_type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value267;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value268;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value269;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value270);
                        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value270;
                        __freed_obj__ = 0;
                        return __result113__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_206++;
                    __freed_obj__ = 0;
                    __dec_obj118=var_name_166;
                    var_name_166=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_206))));
                    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value271;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                optional$2intbool_value((come_push_stackframe("05function4.c", 1422),((struct optional$2intbool*)(right_value272=expected_next_character(41,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value272;
                __freed_obj__ = 0;
                multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1424),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value273=parse_params(info)))));
                param_types_207=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_208=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_209=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_210=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value273);
                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value273;
                __freed_obj__ = 0;
                __dec_obj119=type_165;
                type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value274=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1426)))),"lambda",(_Bool)0,info))));
                if(__dec_obj119) { come_call_finalizer(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value274);
                if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value274;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value275);
                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value275;
                __freed_obj__ = 0;
                __dec_obj120=((struct sType*)come_null_check(type_165, "05function4.c", 1428))->mResultType;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1428))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value277=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value276=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1428)))),(struct sType*)come_increment_ref_count(result_type_204)))));
                if(__dec_obj120) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value276);
                if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value276;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value277);
                if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value277;
                __freed_obj__ = 0;
                __dec_obj121=((struct sType*)come_null_check(type_165, "05function4.c", 1429))->mParamTypes;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1429))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_207);
                if(__dec_obj121) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj122=((struct sType*)come_null_check(type_165, "05function4.c", 1430))->mParamNames;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1430))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_208);
                if(__dec_obj122) { come_call_finalizer(list$1charph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1431))->mVarArgs=var_args_210;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_165, "05function4.c", 1432))->mExtern=extern__130;
                __freed_obj__ = 0;
                if(result_type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_207 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_208 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_208, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_209 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional331=string_operator_equals(type_name_115,"__typeof__")&&*((struct sInfo*)come_null_check(info, "05function4.c", 1774))->p==40,                __freed_obj__ = 0, 
                _if_conditional331) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1435))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    exp_211=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value278;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 1440),((struct optional$2intbool*)(right_value279=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value279;
                    __freed_obj__ = 0;
                    if(_if_conditional332=!((struct sNode*)come_null_check(exp_211, "05function4.c", 1447))->compile(((struct sNode*)come_null_check(exp_211, "05function4.c", 1447))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional332) {
                        err_msg(info,"invalid __typeof__ expression");
                        __freed_obj__ = 0;
                        __result116__ = __result_obj__ = (come_save_stackframe("05function4.c", 1444), ((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value283=optional$2tuple3$3voidpvoidpboolphbool_initialize(((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value282=(struct optional$2tuple3$3voidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3voidpvoidpboolphbool)*(1), "05function4.c", 1444))),(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value281=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value280=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1444)))),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
                        if(exp_211 && !__freed_obj__) { exp_211 = come_decrement_ref_count(exp_211, ((struct sNode*)exp_211)->finalize, ((struct sNode*)exp_211)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value280;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
                        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value281;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
                        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value282;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value283);
                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value283;
                        __freed_obj__ = 0;
                        return __result116__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value284;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    __dec_obj124=type_165;
                    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(((struct CVALUE*)come_null_check(come_value_212, "05function4.c", 1450))->type))));
                    if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value285);
                    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value285;
                    __freed_obj__ = 0;
                    if(_if_conditional336=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional336) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional337=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1461))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional337) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1457))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional338=*((struct sInfo*)come_null_check(info, "05function4.c", 1478))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            __dec_obj125=var_name_166;
                            var_name_166=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(""))));
                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value286;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional339=anonymous_name_135,                            __freed_obj__ = 0, 
                            _if_conditional339) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_213++;
                                __freed_obj__ = 0;
                                __dec_obj126=var_name_166;
                                var_name_166=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_213))));
                                if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value287;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional340=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1478))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1478))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    __dec_obj127=var_name_166;
                                    var_name_166=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1470),((struct optional$2charphbool*)(right_value288=parse_word(info))))));
                                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                                    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value288;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_214++;
                                    __freed_obj__ = 0;
                                    __dec_obj128=var_name_166;
                                    var_name_166=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_214))));
                                    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value289;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional341=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1483))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional341) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1479))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional342=*((struct sInfo*)come_null_check(info, "05function4.c", 1494))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional342) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1484))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_215=((struct sInfo*)come_null_check(info, "05function4.c", 1487))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1488))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value290;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1490))->no_comma=no_comma_215;
                            __freed_obj__ = 0;
                            __dec_obj129=((struct sType*)come_null_check(type_165, "05function4.c", 1492))->mSizeNum;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1492))->mSizeNum=(struct sNode*)come_increment_ref_count(node_216);
                            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_216 && !__freed_obj__) { node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0); } 
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(exp_211 && !__freed_obj__) { exp_211 = come_decrement_ref_count(exp_211, ((struct sNode*)exp_211)->finalize, ((struct sNode*)exp_211)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional343=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1629),__exception_result_var_b4=((struct optional$2sTypepbool*)(right_value291=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1629))->types,type_name_115))), come_pop_stackframe(), __exception_result_var_b4)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291),
                    (right_value291 && right_value291 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value291, 
                    __freed_obj__ = 0, 
                    _if_conditional343) {
                        __dec_obj130=type_165;
                        type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1498),((struct optional$2sTypepbool*)(right_value292=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1498))->types,type_name_115)))))))));
                        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value292;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
                        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value293;
                        __freed_obj__ = 0;
                        __dec_obj131=((struct sType*)come_null_check(type_165, "05function4.c", 1499))->mOriginalTypeName;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1499))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string(type_name_115))));
                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
                        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value294;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1500))->mOriginalTypeNamePointerNum=pointer_num_161;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1502))->mConstant=((struct sType*)come_null_check(type_165, "05function4.c", 1502))->mConstant||constant_116;
                        __freed_obj__ = 0;
                        __dec_obj132=((struct sType*)come_null_check(type_165, "05function4.c", 1503))->mAlignas;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1503))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
                        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1504))->mComeMemCore=((struct sType*)come_null_check(type_165, "05function4.c", 1504))->mComeMemCore||come_mem_core__132;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1505))->mRegister=register__120;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1506))->mUnsigned=((struct sType*)come_null_check(type_165, "05function4.c", 1506))->mUnsigned||unsigned__121;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1507))->mVolatile=volatile__119;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1508))->mStatic=((struct sType*)come_null_check(type_165, "05function4.c", 1508))->mStatic||static__117;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1509))->mExtern=((struct sType*)come_null_check(type_165, "05function4.c", 1509))->mExtern||extern__130;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1510))->mInline=((struct sType*)come_null_check(type_165, "05function4.c", 1510))->mInline||inline__131;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1511))->mRestrict=((struct sType*)come_null_check(type_165, "05function4.c", 1511))->mRestrict||restrict__125;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1512))->mLongLong=((struct sType*)come_null_check(type_165, "05function4.c", 1512))->mLongLong||long_long_123;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1513))->mLong=((struct sType*)come_null_check(type_165, "05function4.c", 1513))->mLong||long__122;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1514))->mShort=((struct sType*)come_null_check(type_165, "05function4.c", 1514))->mShort||short__124;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1515))->mPointerNum+=pointer_num_161;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional344=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1629))->generics_type_names, "05function4.c", 1629)),(char*)come_increment_ref_count(type_name_115)),                        __freed_obj__ = 0, 
                        _if_conditional344) {
                            for(
                            i_217=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA7=                            i_217<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1524))->generics_type_names, "05function4.c", 1524))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA7;                            i_217++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional345=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1522),__exception_result_var_b5=((struct optional$2charphbool*)(right_value295=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1522))->generics_type_names,i_217))), come_pop_stackframe(), __exception_result_var_b5)),type_name_115),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295),
                                (right_value295 && right_value295 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value295, 
                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    __dec_obj133=type_165;
                                    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value296=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1520)))),((char*)(right_value297=xsprintf("generics_type%d",i_217))),(_Bool)0,info))));
                                    if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value296;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value297);
                                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value297;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value298);
                                    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value298;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1524))->mConstant=((struct sType*)come_null_check(type_165, "05function4.c", 1524))->mConstant||constant_116;
                            __freed_obj__ = 0;
                            __dec_obj134=((struct sType*)come_null_check(type_165, "05function4.c", 1525))->mAlignas;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1525))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1526))->mComeMemCore=((struct sType*)come_null_check(type_165, "05function4.c", 1526))->mComeMemCore||come_mem_core__132;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1527))->mRegister=register__120;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1528))->mUnsigned=((struct sType*)come_null_check(type_165, "05function4.c", 1528))->mUnsigned||unsigned__121;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1529))->mVolatile=volatile__119;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1530))->mStatic=((struct sType*)come_null_check(type_165, "05function4.c", 1530))->mStatic||static__117;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1531))->mExtern=((struct sType*)come_null_check(type_165, "05function4.c", 1531))->mExtern||extern__130;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1532))->mInline=((struct sType*)come_null_check(type_165, "05function4.c", 1532))->mInline||inline__131;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1533))->mRestrict=((struct sType*)come_null_check(type_165, "05function4.c", 1533))->mRestrict||restrict__125;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1534))->mLongLong=((struct sType*)come_null_check(type_165, "05function4.c", 1534))->mLongLong||long_long_123;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1535))->mLong=((struct sType*)come_null_check(type_165, "05function4.c", 1535))->mLong||long__122;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1536))->mShort=((struct sType*)come_null_check(type_165, "05function4.c", 1536))->mShort||short__124;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1537))->mPointerNum+=pointer_num_161;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional346=*((struct sInfo*)come_null_check(info, "05function4.c", 1629))->p==60,                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                ((struct sInfo*)come_null_check(info, "05function4.c", 1540))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                if(_if_conditional352=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1548),((struct optional$2sClasspbool*)(right_value308=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1548))->generics_classes,type_name_115)))))==((void*)0),                                come_pop_stackframe() ,                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308),
                                (right_value308 && right_value308 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sClasspboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value308, 
                                __freed_obj__ = 0, 
                                _if_conditional352) {
                                    __result124__ = __result_obj__ = (come_save_stackframe("05function4.c", 1545), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value312=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value311=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1545))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value310=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value309=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1545)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                    if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                                    if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                                    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value309;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value310);
                                    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value310;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value311);
                                    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value311;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value312);
                                    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value312;
                                    __freed_obj__ = 0;
                                    return __result124__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj135=type_165;
                                type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1548)))),type_name_115,(_Bool)0,info))));
                                if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
                                if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value313;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value314);
                                if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value314;
                                __freed_obj__ = 0;
                                while(_while_condtional37=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional37) {
                                    multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1553),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value315=parse_type(info,(_Bool)0,(_Bool)0)))));
                                    generics_type_222=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_223=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_224=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value315;
                                    __freed_obj__ = 0;
                                    if(_if_conditional353=!err_224,                                    __freed_obj__ = 0, 
                                    _if_conditional353) {
                                        __result125__ = __result_obj__ = (come_save_stackframe("05function4.c", 1554), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value319=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value318=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1554))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value317=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value316=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1554)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                        if(generics_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                                        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
                                        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value316;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
                                        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value317;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value318);
                                        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value318;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value319);
                                        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[3] = right_value319;
                                        __freed_obj__ = 0;
                                        return __result125__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1557))->mGenericsTypes, "05function4.c", 1557)),(struct sType*)come_increment_ref_count(generics_type_222));
                                    __freed_obj__ = 0;
                                    if(_if_conditional354=*((struct sInfo*)come_null_check(info, "05function4.c", 1573))->p==44,                                    __freed_obj__ = 0, 
                                    _if_conditional354) {
                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1560))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional355=*((struct sInfo*)come_null_check(info, "05function4.c", 1573))->p==62,                                        __freed_obj__ = 0, 
                                        _if_conditional355) {
                                            ((struct sInfo*)come_null_check(info, "05function4.c", 1564))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            if(generics_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __freed_obj__ = 0;
                                            __result126__ = __result_obj__ = (come_save_stackframe("05function4.c", 1571), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value323=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value322=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1571))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value321=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value320=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1571)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                            if(generics_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                                            if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                                            if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value320;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value321);
                                            if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value321;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value322);
                                            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value322;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value323);
                                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value323;
                                            __freed_obj__ = 0;
                                            return __result126__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(generics_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_223 && !__freed_obj__) { var_name_223 = come_decrement_ref_count(var_name_223, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional356=is_contained_generics_class(type_165,info),                                __freed_obj__ = 0, 
                                _if_conditional356) {
                                    __dec_obj136=type_165;
                                    type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=solve_generics(type_165,((struct sInfo*)come_null_check(info, "05function4.c", 1576))->generics_type,info))));
                                    if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value324;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional357=!output_generics_struct(type_165,type_165,info),                                    __freed_obj__ = 0, 
                                    _if_conditional357) {
                                        new_name_225=(char*)come_increment_ref_count(((char*)(right_value325=create_generics_name(type_165,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                                        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value325;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1582))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1582))->sline,new_name_225);
                                        __freed_obj__ = 0;
                                        exit(7);
                                        __freed_obj__ = 0;
                                        if(new_name_225 && !__freed_obj__) { new_name_225 = come_decrement_ref_count(new_name_225, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1587))->mConstant=((struct sType*)come_null_check(type_165, "05function4.c", 1587))->mConstant||constant_116;
                                __freed_obj__ = 0;
                                __dec_obj137=((struct sType*)come_null_check(type_165, "05function4.c", 1588))->mAlignas;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1588))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
                                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1589))->mComeMemCore=((struct sType*)come_null_check(type_165, "05function4.c", 1589))->mComeMemCore||come_mem_core__132;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1590))->mRegister=register__120;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1591))->mUnsigned=((struct sType*)come_null_check(type_165, "05function4.c", 1591))->mUnsigned||unsigned__121;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1592))->mVolatile=volatile__119;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1593))->mStatic=((struct sType*)come_null_check(type_165, "05function4.c", 1593))->mStatic||static__117;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1594))->mExtern=((struct sType*)come_null_check(type_165, "05function4.c", 1594))->mExtern||extern__130;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1595))->mInline=((struct sType*)come_null_check(type_165, "05function4.c", 1595))->mInline||inline__131;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1596))->mRestrict=((struct sType*)come_null_check(type_165, "05function4.c", 1596))->mRestrict||restrict__125;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1597))->mLongLong=((struct sType*)come_null_check(type_165, "05function4.c", 1597))->mLongLong||long_long_123;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1598))->mLong=((struct sType*)come_null_check(type_165, "05function4.c", 1598))->mLong||long__122;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1599))->mShort=((struct sType*)come_null_check(type_165, "05function4.c", 1599))->mShort||short__124;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1600))->mPointerNum+=pointer_num_161;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional358=struct__126,                                __freed_obj__ = 0, 
                                _if_conditional358) {
                                    klass_226=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1604),((struct optional$2sClasspbool*)(right_value326=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1604))->classes,type_name_115)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
                                    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value326;
                                    __freed_obj__ = 0;
                                    if(_if_conditional359=klass_226==((void*)0)&&*((struct sInfo*)come_null_check(info, "05function4.c", 1609))->p!=60,                                    __freed_obj__ = 0, 
                                    _if_conditional359) {
                                        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1607))->classes, "05function4.c", 1607)),(char*)come_increment_ref_count(type_name_115),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value340=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value339=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1607)))),type_name_115,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value339;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value340);
                                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value340;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj138=type_165;
                                type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value341=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1611)))),type_name_115,(_Bool)0,info))));
                                if(__dec_obj138) { come_call_finalizer(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value341;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value342);
                                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value342;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1613))->mConstant=((struct sType*)come_null_check(type_165, "05function4.c", 1613))->mConstant||constant_116;
                                __freed_obj__ = 0;
                                __dec_obj139=((struct sType*)come_null_check(type_165, "05function4.c", 1614))->mAlignas;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1614))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__133);
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1615))->mComeMemCore=((struct sType*)come_null_check(type_165, "05function4.c", 1615))->mComeMemCore||come_mem_core__132;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1616))->mRegister=register__120;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1617))->mUnsigned=((struct sType*)come_null_check(type_165, "05function4.c", 1617))->mUnsigned||unsigned__121;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1618))->mVolatile=volatile__119;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1619))->mStatic=((struct sType*)come_null_check(type_165, "05function4.c", 1619))->mStatic||static__117;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1620))->mExtern=((struct sType*)come_null_check(type_165, "05function4.c", 1620))->mExtern||extern__130;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1621))->mInline=((struct sType*)come_null_check(type_165, "05function4.c", 1621))->mInline||inline__131;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1622))->mRestrict=((struct sType*)come_null_check(type_165, "05function4.c", 1622))->mRestrict||restrict__125;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1623))->mLongLong=((struct sType*)come_null_check(type_165, "05function4.c", 1623))->mLongLong||long_long_123;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1624))->mLong=((struct sType*)come_null_check(type_165, "05function4.c", 1624))->mLong||long__122;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1625))->mShort=((struct sType*)come_null_check(type_165, "05function4.c", 1625))->mShort||short__124;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_165, "05function4.c", 1626))->mPointerNum+=pointer_num_161;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional47=*((struct sInfo*)come_null_check(info, "05function4.c", 1643))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional47) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1632))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1637))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional413=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1641))->mNoSolvedGenericsType, "05function4.c", 1641))->v1,                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1639))->mNoSolvedGenericsType, "05function4.c", 1639))->v1, "05function4.c", 1639))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional414=*((struct sInfo*)come_null_check(info, "05function4.c", 1653))->p==37,                    __freed_obj__ = 0, 
                    _if_conditional414) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1644))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1647))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional415=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1651))->mNoSolvedGenericsType, "05function4.c", 1651))->v1,                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1649))->mNoSolvedGenericsType, "05function4.c", 1649))->v1, "05function4.c", 1649))->mHeap=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional416=*((struct sInfo*)come_null_check(info, "05function4.c", 1664))->p==38,                    __freed_obj__ = 0, 
                    _if_conditional416) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1654))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1657))->mNoHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional417=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1662))->mNoSolvedGenericsType, "05function4.c", 1662))->v1,                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1660))->mNoSolvedGenericsType, "05function4.c", 1660))->v1, "05function4.c", 1660))->mHeap=(_Bool)0;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional418=*((struct sInfo*)come_null_check(info, "05function4.c", 1668))->p==63,                    __freed_obj__ = 0, 
                    _if_conditional418) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1665))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional419=*((struct sInfo*)come_null_check(info, "05function4.c", 1675))->p==124,                    __freed_obj__ = 0, 
                    _if_conditional419) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1669))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1672))->mNoCallingDestructor=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional48=*((struct sInfo*)come_null_check(info, "05function4.c", 1690))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional48) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1678))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1683))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional420=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1688))->mNoSolvedGenericsType, "05function4.c", 1688))->v1,                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1686))->mNoSolvedGenericsType, "05function4.c", 1686))->v1, "05function4.c", 1686))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional421=parse_multiple_type&&*((struct sInfo*)come_null_check(info, "05function4.c", 1731))->p==44,                    __freed_obj__ = 0, 
                    _if_conditional421) {
                        types_273=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value344=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value343=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1691))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value343;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value344);
                        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value344;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_273, "05function4.c", 1693)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(type_165)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value345);
                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value345;
                        __freed_obj__ = 0;
                        while(_while_condtional49=*((struct sInfo*)come_null_check(info, "05function4.c", 1708))->p==44,                        __freed_obj__ = 0, 
                        _while_condtional49) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1696))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1699),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value346=parse_type(info,(_Bool)0,(_Bool)0)))));
                            type2_274=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_275=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_276=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value346;
                            __freed_obj__ = 0;
                            if(_if_conditional422=!err_276,                            __freed_obj__ = 0, 
                            _if_conditional422) {
                                __result151__ = __result_obj__ = (come_save_stackframe("05function4.c", 1702), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value350=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value349=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1702))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value348=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value347=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1702)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                if(type2_274 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_275 && !__freed_obj__) { name_275 = come_decrement_ref_count(name_275, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_273 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                                if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                                if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value347;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value348);
                                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value348;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value349);
                                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value349;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value350);
                                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value350;
                                __freed_obj__ = 0;
                                return __result151__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_273, "05function4.c", 1705)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(type2_274)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value351);
                            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value351;
                            __freed_obj__ = 0;
                            if(type2_274 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_275 && !__freed_obj__) { name_275 = come_decrement_ref_count(name_275, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        num_tuples_277=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(types_273, "05function4.c", 1708)));
                        __freed_obj__ = 0;
                        __dec_obj140=type_165;
                        type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value354=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1710)))),((char*)(right_value353=xsprintf("tuple%d",num_tuples_277))),(_Bool)0,info))));
                        if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value352);
                        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value352;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value353);
                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value353;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value354);
                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value354;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1711))->mPointerNum++;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_165, "05function4.c", 1712))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        for(
                        o2_saved_278=(struct list$1sTypeph*)come_increment_ref_count((types_273)),it_279=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_278), "05function4.c", 1718))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_278), "05function4.c", 1718))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_279=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_278), "05function4.c", 1718))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1715))->mGenericsTypes, "05function4.c", 1715)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(it_279)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value355;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_278 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional423=is_contained_generics_class(type_165,info),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            __dec_obj141=type_165;
                            type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=solve_generics(type_165,((struct sInfo*)come_null_check(info, "05function4.c", 1719))->generics_type,info))));
                            if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value356;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional424=!output_generics_struct(type_165,type_165,info),                            __freed_obj__ = 0, 
                            _if_conditional424) {
                                new_name_280=(char*)come_increment_ref_count(((char*)(right_value357=create_generics_name(type_165,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value357;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_280);
                                __freed_obj__ = 0;
                                exit(9);
                                __freed_obj__ = 0;
                                if(new_name_280 && !__freed_obj__) { new_name_280 = come_decrement_ref_count(new_name_280, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(types_273 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_273, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional425=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional425) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional426=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1739))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1735))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional427=*((struct sInfo*)come_null_check(info, "05function4.c", 1756))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            __dec_obj142=var_name_166;
                            var_name_166=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string(""))));
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value358;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional428=anonymous_name_135,                            __freed_obj__ = 0, 
                            _if_conditional428) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_281++;
                                __freed_obj__ = 0;
                                __dec_obj143=var_name_166;
                                var_name_166=(char*)come_increment_ref_count(((char*)(right_value359=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_281))));
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value359;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional429=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1756))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1756))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional429) {
                                    __dec_obj144=var_name_166;
                                    var_name_166=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1748),((struct optional$2charphbool*)(right_value360=parse_word(info))))));
                                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value360;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_282++;
                                    __freed_obj__ = 0;
                                    __dec_obj145=var_name_166;
                                    var_name_166=(char*)come_increment_ref_count(((char*)(right_value361=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_282))));
                                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value361;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional430=var_name_between_brace_171&&*((struct sInfo*)come_null_check(info, "05function4.c", 1761))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1757))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional431=*((struct sInfo*)come_null_check(info, "05function4.c", 1772))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional431) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1762))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_283=((struct sInfo*)come_null_check(info, "05function4.c", 1765))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1766))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value362;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1768))->no_comma=no_comma_283;
                            __freed_obj__ = 0;
                            __dec_obj146=((struct sType*)come_null_check(type_165, "05function4.c", 1770))->mSizeNum;
                            ((struct sType*)come_null_check(type_165, "05function4.c", 1770))->mSizeNum=(struct sNode*)come_increment_ref_count(node_284);
                            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
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
    while(_while_condtional50=*((struct sInfo*)come_null_check(info, "05function4.c", 1798))->p==91,    __freed_obj__ = 0, 
    _while_condtional50) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1777))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        if(_if_conditional432=*((struct sInfo*)come_null_check(info, "05function4.c", 1790))->p==93,        __freed_obj__ = 0, 
        _if_conditional432) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1784))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_165, "05function4.c", 1787))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value363;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_165, "05function4.c", 1793))->mArrayNum, "05function4.c", 1793)),(struct sNode*)come_increment_ref_count(node_285));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        optional$2intbool_value((come_push_stackframe("05function4.c", 1796),((struct optional$2intbool*)(right_value364=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value364;
        __freed_obj__ = 0;
        if(node_285 && !__freed_obj__) { node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    asm_name_286=(char*)come_increment_ref_count(((char*)(right_value365=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value365);
    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value365;
    __freed_obj__ = 0;
    __dec_obj147=((struct sType*)come_null_check(type_165, "05function4.c", 1800))->mAsmName;
    ((struct sType*)come_null_check(type_165, "05function4.c", 1800))->mAsmName=(char*)come_increment_ref_count(asm_name_286);
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional433=exception__118,    __freed_obj__ = 0, 
    _if_conditional433) {
        type2_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value366=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1805)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value366;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value367);
        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value367;
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_287, "05function4.c", 1806))->mGenericsTypes, "05function4.c", 1806)),(struct sType*)come_increment_ref_count(type_165));
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_287, "05function4.c", 1807))->mGenericsTypes, "05function4.c", 1807)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value368=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1807)))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value368);
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value368;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value369);
        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value369;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_287, "05function4.c", 1809))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_287, "05function4.c", 1810))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_287, "05function4.c", 1812))->mException=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional434=!is_contained_generics_class(type2_287,info),        __freed_obj__ = 0, 
        _if_conditional434) {
            if(_if_conditional435=!output_generics_struct(type2_287,type2_287,info),            __freed_obj__ = 0, 
            _if_conditional435) {
                err_msg(info,"invalid exception definition");
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = (come_save_stackframe("05function4.c", 1817), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value373=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value372=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1817))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value371=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value370=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1817)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(type2_287 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_287, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
                if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_286 && !__freed_obj__) { asm_name_286 = come_decrement_ref_count(asm_name_286, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value370;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value371);
                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value371;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value372);
                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value372;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value373);
                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value373;
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result153__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value377=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value376=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1821)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value375=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value374=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1821)))),(struct sType*)come_increment_ref_count(type2_287),(char*)come_increment_ref_count(var_name_166),(_Bool)1)))),(_Bool)1)));
        if(type2_287 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_287, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
        if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_286 && !__freed_obj__) { asm_name_286 = come_decrement_ref_count(asm_name_286, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value374);
        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value374;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value375);
        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value375;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value376);
        if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value376;
        __freed_obj__ = 0;
        return __result153__;
        __freed_obj__ = 0;
        if(type2_287 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_287, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result154__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value381=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value380=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1824)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value379=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value378=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1824)))),(struct sType*)come_increment_ref_count(type_165),(char*)come_increment_ref_count(var_name_166),(_Bool)1)))),(_Bool)1)));
    if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
    if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_286 && !__freed_obj__) { asm_name_286 = come_decrement_ref_count(asm_name_286, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value378);
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value378;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value379);
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value379;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value380);
    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value380;
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
    if(type_name_115 && !__freed_obj__) { type_name_115 = come_decrement_ref_count(type_name_115, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__133 && !__freed_obj__) { alignas__133 = come_decrement_ref_count(alignas__133, ((struct sNode*)alignas__133)->finalize, ((struct sNode*)alignas__133)->_protocol_obj, 0, 0, 0); } 
    if(type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_166 && !__freed_obj__) { var_name_166 = come_decrement_ref_count(var_name_166, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_286 && !__freed_obj__) { asm_name_286 = come_decrement_ref_count(asm_name_286, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value128;
struct sType* __dec_obj53;
void* right_value129;
char* __dec_obj54;
struct tuple3$3sTypephcharphbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
                                __dec_obj53=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1841))->v1;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(v1))));
                                if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value128;
                                __freed_obj__ = 0;
                                __dec_obj54=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1842))->v2;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1842))->v2=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(v2))));
                                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
                                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value129;
                                __freed_obj__ = 0;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                                __freed_obj__ = 0;
                                __result80__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result80__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3sTypephcharphbool* __dec_obj55;
struct optional$2tuple3$3sTypephcharphboolphbool* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj55=((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(v1);
                                if(__dec_obj55) { come_call_finalizer(tuple3$3sTypephcharphbool_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result81__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result81__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional225=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional225) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional226=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional226) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_186;
unsigned int hash_187;
unsigned int it_188;
_Bool _while_condtional34;
_Bool _if_conditional308;
void* right_value228;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional309;
void* right_value229;
void* right_value230;
struct optional$2sTypepbool* __result92__;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value231;
void* right_value232;
struct optional$2sTypepbool* __result93__;
void* right_value233;
void* right_value234;
struct optional$2sTypepbool* __result94__;
void* right_value235;
void* right_value236;
struct optional$2sTypepbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_186, 0, sizeof(struct sType*));
memset(&hash_187, 0, sizeof(unsigned int));
memset(&it_188, 0, sizeof(unsigned int));
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
                memset(&default_value_186,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                hash_187=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_188=hash_187;
                __freed_obj__ = 0;
                while(_while_condtional34=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional34) {
                    if(_if_conditional308=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_188],                    __freed_obj__ = 0, 
                    _if_conditional308) {
                        if(_if_conditional309=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value228=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_188], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228),
                        (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value228, 
                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            __result92__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value230=optional$2sTypepbool_initialize((struct optional$2sTypepbool*)come_increment_ref_count(((struct optional$2sTypepbool*)(right_value229=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1592))->items[it_188],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value229;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_188++;
                        __freed_obj__ = 0;
                        if(_if_conditional310=it_188>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional310) {
                            it_188=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional311=it_188==hash_187,                            __freed_obj__ = 0, 
                            _if_conditional311) {
                                __result93__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sTypepbool*)(right_value232=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value231=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1601))),default_value_186,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                                if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value231;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value232;
                                __freed_obj__ = 0;
                                return __result93__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result94__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sTypepbool*)(right_value234=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value233=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1605))),default_value_186,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value233;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
                        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value234;
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result95__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sTypepbool*)(right_value236=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value235=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1609))),default_value_186,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value235;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value236;
                __freed_obj__ = 0;
                return __result95__;
                __freed_obj__ = 0;
}

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result91__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result91__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypepboolp_finalize(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sType* optional$2sTypepbool_value(struct optional$2sTypepbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
struct sType* default_value_189;
struct sType* __result96__;
struct sType* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_189, 0, sizeof(struct sType*));
                if(_if_conditional312=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional312) {
                    __freed_obj__ = 0;
                    memset(&default_value_189,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result96__ = __result_obj__ = default_value_189;
                    __freed_obj__ = 0;
                    return __result96__;
                    __freed_obj__ = 0;
                }
                else {
                    __result97__ = __result_obj__ = ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result97__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_192;
_Bool _for_condtionalA4;
_Bool _if_conditional318;
_Bool __result105__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_192, 0, sizeof(char*));
                    for(
                    it_192=list$1charph_begin(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA4=                    !list$1charph_end(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA4;                    it_192=list$1charph_next(((struct list$1charph*)come_null_check(self, "./comelang2.h", 798))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional318=string_operator_equals(it_192,item),                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            __result105__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result105__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result106__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result106__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional314;
char* result_190;
char* __result98__;
_Bool _if_conditional315;
char* __result99__;
char* result_191;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
                        if(_if_conditional314=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional314) {
                            __freed_obj__ = 0;
                            memset(&result_190,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result98__ = __result_obj__ = result_190;
                            __freed_obj__ = 0;
                            return __result98__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional315=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional315) {
                            __result99__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result99__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_191,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result100__ = __result_obj__ = result_191;
                        __freed_obj__ = 0;
                        return __result100__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result101__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result101__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional316;
char* result_193;
char* __result102__;
_Bool _if_conditional317;
char* __result103__;
char* result_194;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
                        if(_if_conditional316=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional316) {
                            __freed_obj__ = 0;
                            memset(&result_193,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result102__ = __result_obj__ = result_193;
                            __freed_obj__ = 0;
                            return __result102__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional317=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            __result103__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result103__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_194,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result104__ = __result_obj__ = result_194;
                        __freed_obj__ = 0;
                        return __result104__;
                        __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result107__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result107__;
                        __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
struct list_item$1charph* it_196;
int i_197;
_Bool _while_condtional35;
_Bool _if_conditional321;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result108__;
char* default_value_198;
void* right_value242;
void* right_value243;
struct optional$2charphbool* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_196, 0, sizeof(struct list_item$1charph*));
memset(&i_197, 0, sizeof(int));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&default_value_198, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
                            if(_if_conditional320=position<0,                            __freed_obj__ = 0, 
                            _if_conditional320) {
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_196=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                            __freed_obj__ = 0;
                            i_197=0;
                            __freed_obj__ = 0;
                            while(_while_condtional35=it_196!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional35) {
                                if(_if_conditional321=position==i_197,                                __freed_obj__ = 0, 
                                _if_conditional321) {
                                    __result108__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_196, "./comelang2.h", 742))->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                                    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value240;
                                    __freed_obj__ = 0;
                                    return __result108__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_196=((struct list_item$1charph*)come_null_check(it_196, "./comelang2.h", 744))->next;
                                __freed_obj__ = 0;
                                i_197++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_198,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result109__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value243=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value242=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_198),(_Bool)0))));
                            if(default_value_198 && !__freed_obj__) { default_value_198 = come_decrement_ref_count(default_value_198, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value242;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
                            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value243;
                            __freed_obj__ = 0;
                            return __result109__;
                            __freed_obj__ = 0;
                            if(default_value_198 && !__freed_obj__) { default_value_198 = come_decrement_ref_count(default_value_198, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional323;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_199;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result110__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_199, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                if(_if_conditional323=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional323) {
                    __freed_obj__ = 0;
                    memset(&default_value_199,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                    __freed_obj__ = 0;
                    __result110__ = __result_obj__ = default_value_199;
                    __freed_obj__ = 0;
                    return __result110__;
                    __freed_obj__ = 0;
                }
                else {
                    __result111__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result111__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value255;
struct sType* __dec_obj109;
struct tuple1$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value255, 0, sizeof(void*));
                __dec_obj109=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1772))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(v1))));
                if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
                if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value255;
                __freed_obj__ = 0;
                __result112__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result112__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1841))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1842))->v2=v2;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1843))->v3=v3;
                            __freed_obj__ = 0;
                            __result114__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result114__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct optional$2tuple3$3voidpvoidpboolphbool* optional$2tuple3$3voidpvoidpboolphbool_initialize(struct optional$2tuple3$3voidpvoidpboolphbool* self, struct tuple3$3voidpvoidpbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __dec_obj123;
struct optional$2tuple3$3voidpvoidpboolphbool* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj123=((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(v1);
                            if(__dec_obj123) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result115__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result115__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3voidpvoidpbool_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2tuple3$3voidpvoidpboolphboolp_finalize(struct optional$2tuple3$3voidpvoidpboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional333=self!=((void*)0)&&((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional333) {
                                    if(((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional334=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional334) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional335=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional335) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_218;
unsigned int hash_219;
unsigned int it_220;
_Bool _while_condtional36;
_Bool _if_conditional347;
void* right_value299;
struct optional$2boolbool* __exception_result_var_b6;
_Bool _if_conditional348;
void* right_value300;
void* right_value301;
struct optional$2sClasspbool* __result118__;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value302;
void* right_value303;
struct optional$2sClasspbool* __result119__;
void* right_value304;
void* right_value305;
struct optional$2sClasspbool* __result120__;
void* right_value306;
void* right_value307;
struct optional$2sClasspbool* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_218, 0, sizeof(struct sClass*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&it_220, 0, sizeof(unsigned int));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
                                    __freed_obj__ = 0;
                                    memset(&default_value_218,0,sizeof(struct sClass*));
                                    __freed_obj__ = 0;
                                    hash_219=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
                                    __freed_obj__ = 0;
                                    it_220=hash_219;
                                    __freed_obj__ = 0;
                                    while(_while_condtional36=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional36) {
                                        if(_if_conditional347=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_220],                                        __freed_obj__ = 0, 
                                        _if_conditional347) {
                                            if(_if_conditional348=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b6=((struct optional$2boolbool*)(right_value299=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_220], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b6)),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299),
                                            (right_value299 && right_value299 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value299, 
                                            __freed_obj__ = 0, 
                                            _if_conditional348) {
                                                __result118__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value301=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value300=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_220],(_Bool)1)));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                                                if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value300;
                                                __freed_obj__ = 0;
                                                return __result118__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            it_220++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional349=it_220>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional349) {
                                                it_220=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional350=it_220==hash_219,                                                __freed_obj__ = 0, 
                                                _if_conditional350) {
                                                    __result119__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value303=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value302=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_218,(_Bool)0))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                                                    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value302;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
                                                    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value303;
                                                    __freed_obj__ = 0;
                                                    return __result119__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __result120__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value305=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value304=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_218,(_Bool)0))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                                            if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value304;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value305);
                                            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value305;
                                            __freed_obj__ = 0;
                                            return __result120__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result121__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value307=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value306=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_218,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value306;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
                                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value307;
                                    __freed_obj__ = 0;
                                    return __result121__;
                                    __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                                    __freed_obj__ = 0;
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                                    __freed_obj__ = 0;
                                                    __result117__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result117__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
struct sClass* default_value_221;
struct sClass* __result122__;
struct sClass* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_221, 0, sizeof(struct sClass*));
                                    if(_if_conditional351=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional351) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_221,0,sizeof(struct sClass*));
                                        __freed_obj__ = 0;
                                        __result122__ = __result_obj__ = default_value_221;
                                        __freed_obj__ = 0;
                                        return __result122__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result123__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result123__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional360;
unsigned int hash_246;
unsigned int it_247;
_Bool _while_condtional41;
_Bool _if_conditional378;
void* right_value333;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool same_key_exist_264;
char* it2_267;
_Bool _for_condtionalA9;
void* right_value335;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct map$2charphsClassph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_246, 0, sizeof(unsigned int));
memset(&it_247, 0, sizeof(unsigned int));
memset(&right_value333, 0, sizeof(void*));
memset(&same_key_exist_264, 0, sizeof(_Bool));
memset(&it2_267, 0, sizeof(char*));
memset(&right_value335, 0, sizeof(void*));
                                            if(_if_conditional360=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional360) {
                                                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            hash_246=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
                                            __freed_obj__ = 0;
                                            it_247=hash_246;
                                            __freed_obj__ = 0;
                                            while(_while_condtional41=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional41) {
                                                if(_if_conditional378=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_247],                                                __freed_obj__ = 0, 
                                                _if_conditional378) {
                                                    if(_if_conditional379=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a3=((struct optional$2boolbool*)(right_value333=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_247], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a3)),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333),
                                                    (right_value333 && right_value333 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value333, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional379) {
                                                        if(_if_conditional380=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional380) {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_247]);
                                                            __freed_obj__ = 0;
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_247] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_247] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_247], (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_247]=(char*)come_increment_ref_count(key);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_247]);
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_247]=key;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional400=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional400) {
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_247] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_247], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_247]=(struct sClass*)come_increment_ref_count(item);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_247]=item;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        break;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    it_247++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional401=it_247>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                                                    __freed_obj__ = 0, 
                                                    _if_conditional401) {
                                                        it_247=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional402=it_247==hash_246,                                                        __freed_obj__ = 0, 
                                                        _if_conditional402) {
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_247]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional403=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional403) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_247]=(char*)come_increment_ref_count(key);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_247]=key;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional404=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional404) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_247]=(struct sClass*)come_increment_ref_count(item);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_247]=item;
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
                                            same_key_exist_264=(_Bool)0;
                                            __freed_obj__ = 0;
                                            for(
                                            it2_267=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            0;                                            _for_condtionalA9=                                            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            _for_condtionalA9;                                            it2_267=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,                                            __freed_obj__ = 0, 
                                            0                                            ){
                                                if(_if_conditional409=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a5=((struct optional$2boolbool*)(right_value335=string_equals(((char*)come_null_check(it2_267, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a5)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335),
                                                (right_value335 && right_value335 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value335, 
                                                __freed_obj__ = 0, 
                                                _if_conditional409) {
                                                    same_key_exist_264=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional410=!same_key_exist_264,                                            __freed_obj__ = 0, 
                                            _if_conditional410) {
                                                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result150__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result150__;
                                            __freed_obj__ = 0;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_227;
void* right_value327;
char** keys_228;
void* right_value328;
struct sClass** items_229;
void* right_value329;
_Bool* item_existance_232;
int len_233;
char* it_236;
_Bool _for_condtionalA8;
struct sClass* default_value_239;
void* right_value331;
struct sClass* it2_242;
unsigned int hash_243;
int n_244;
_Bool _while_condtional40;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct sClass* default_value_245;
void* right_value332;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_227, 0, sizeof(int));
memset(&right_value327, 0, sizeof(void*));
memset(&keys_228, 0, sizeof(char**));
memset(&right_value328, 0, sizeof(void*));
memset(&items_229, 0, sizeof(struct sClass**));
memset(&right_value329, 0, sizeof(void*));
memset(&item_existance_232, 0, sizeof(_Bool*));
memset(&len_233, 0, sizeof(int));
memset(&it_236, 0, sizeof(char*));
memset(&default_value_239, 0, sizeof(struct sClass*));
memset(&right_value331, 0, sizeof(void*));
memset(&it2_242, 0, sizeof(struct sClass*));
memset(&hash_243, 0, sizeof(unsigned int));
memset(&n_244, 0, sizeof(int));
memset(&default_value_245, 0, sizeof(struct sClass*));
memset(&right_value332, 0, sizeof(void*));
                                                    size_227=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                                    __freed_obj__ = 0;
                                                    keys_228=(char**)come_increment_ref_count(((char**)(right_value327=(char**)come_calloc(1, sizeof(char*)*(1*(size_227)), "./comelang2.h", 1370))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                                                    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value327;
                                                    __freed_obj__ = 0;
                                                    items_229=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value328=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_227)), "./comelang2.h", 1371))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value328);
                                                    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value328;
                                                    __freed_obj__ = 0;
                                                    item_existance_232=(_Bool*)come_increment_ref_count(((_Bool*)(right_value329=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_227)), "./comelang2.h", 1372))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value329);
                                                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value329;
                                                    __freed_obj__ = 0;
                                                    len_233=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    it_236=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA8=                                                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA8;                                                    it_236=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        __freed_obj__ = 0;
                                                        memset(&default_value_239,0,sizeof(struct sClass*));
                                                        __freed_obj__ = 0;
                                                        it2_242=((struct sClass*)(right_value331=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_236,default_value_239)));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                                                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value331;
                                                        __freed_obj__ = 0;
                                                        hash_243=string_get_hash_key(((char*)come_null_check(it_236, "./comelang2.h", 1380)))%size_227;
                                                        __freed_obj__ = 0;
                                                        n_244=hash_243;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional40=(_Bool)1,                                                        __freed_obj__ = 0, 
                                                        _while_condtional40) {
                                                            if(_if_conditional375=item_existance_232[n_244],                                                            __freed_obj__ = 0, 
                                                            _if_conditional375) {
                                                                n_244++;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional376=n_244>=size_227,                                                                __freed_obj__ = 0, 
                                                                _if_conditional376) {
                                                                    n_244=0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional377=n_244==hash_243,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional377) {
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
                                                                item_existance_232[n_244]=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                keys_228[n_244]=it_236;
                                                                __freed_obj__ = 0;
                                                                __freed_obj__ = 0;
                                                                items_229[n_244]=((struct sClass*)(right_value332=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_236,default_value_245)));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                                                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value332;
                                                                __freed_obj__ = 0;
                                                                len_233++;
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_228;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_229;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_232;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_227;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_233;
                                                    __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional361=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional361) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional362=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional362) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional366=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional366) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_230;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_231;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_230, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_231, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_230=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional38=it_230!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional38) {
                                                                    prev_it_231=it_230;
                                                                    __freed_obj__ = 0;
                                                                    it_230=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_230, "./comelang2.h", 172))->next;
                                                                    __freed_obj__ = 0;
                                                                    if(prev_it_231 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_231, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional363=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional363) {
                                                                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional364=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional364) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional365=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional365) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional367;
char* result_234;
char* __result127__;
_Bool _if_conditional368;
char* __result128__;
char* result_235;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_234, 0, sizeof(char*));
memset(&result_235, 0, sizeof(char*));
                                                        if(_if_conditional367=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional367) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_234,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result127__ = __result_obj__ = result_234;
                                                            __freed_obj__ = 0;
                                                            return __result127__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional368=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional368) {
                                                            __result128__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                                            __freed_obj__ = 0;
                                                            return __result128__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_235,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result129__ = __result_obj__ = result_235;
                                                        __freed_obj__ = 0;
                                                        return __result129__;
                                                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result130__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result130__;
                                                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
char* result_237;
char* __result131__;
_Bool _if_conditional370;
char* __result132__;
char* result_238;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_237, 0, sizeof(char*));
memset(&result_238, 0, sizeof(char*));
                                                        if(_if_conditional369=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional369) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_237,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result131__ = __result_obj__ = result_237;
                                                            __freed_obj__ = 0;
                                                            return __result131__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional370=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional370) {
                                                            __result132__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                                            __freed_obj__ = 0;
                                                            return __result132__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_238,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result133__ = __result_obj__ = result_238;
                                                        __freed_obj__ = 0;
                                                        return __result133__;
                                                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_240;
unsigned int it_241;
_Bool _while_condtional39;
_Bool _if_conditional371;
void* right_value330;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional372;
struct sClass* __result134__;
_Bool _if_conditional373;
_Bool _if_conditional374;
struct sClass* __result135__;
struct sClass* __result136__;
struct sClass* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_240, 0, sizeof(unsigned int));
memset(&it_241, 0, sizeof(unsigned int));
memset(&right_value330, 0, sizeof(void*));
                                                            hash_240=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                                            __freed_obj__ = 0;
                                                            it_241=hash_240;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional39=(_Bool)1,                                                            __freed_obj__ = 0, 
                                                            _while_condtional39) {
                                                                if(_if_conditional371=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_241],                                                                __freed_obj__ = 0, 
                                                                _if_conditional371) {
                                                                    if(_if_conditional372=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a2=((struct optional$2boolbool*)(right_value330=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_241], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330),
                                                                    (right_value330 && right_value330 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value330, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional372) {
                                                                        __result134__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_241];
                                                                        __freed_obj__ = 0;
                                                                        return __result134__;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it_241++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional373=it_241>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional373) {
                                                                        it_241=0;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional374=it_241==hash_240,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional374) {
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
void* __right_value_freed_obj[1024];
int it2_248;
struct list_item$1charp* it_249;
_Bool _while_condtional42;
void* right_value334;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional381;
struct list$1charp* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_248, 0, sizeof(int));
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&right_value334, 0, sizeof(void*));
                                                                it2_248=0;
                                                                __freed_obj__ = 0;
                                                                it_249=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional42=it_249!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional42) {
                                                                    if(_if_conditional381=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a4=((struct optional$2boolbool*)(right_value334=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_249, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a4)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334),
                                                                    (right_value334 && right_value334 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value334, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional381) {
                                                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_248,it2_248+1);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it2_248++;
                                                                    __freed_obj__ = 0;
                                                                    it_249=((struct list_item$1charp*)come_null_check(it_249, "./comelang2.h", 500))->next;
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
int tmp_250;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
struct list$1charp* __result138__;
_Bool _if_conditional388;
_Bool _if_conditional389;
struct list_item$1charp* it_253;
int i_254;
_Bool _while_condtional44;
_Bool _if_conditional390;
struct list_item$1charp* prev_it_255;
_Bool _if_conditional391;
_Bool _if_conditional392;
struct list_item$1charp* it_256;
int i_257;
_Bool _while_condtional45;
_Bool _if_conditional393;
_Bool _if_conditional394;
struct list_item$1charp* prev_it_258;
struct list_item$1charp* it_259;
struct list_item$1charp* head_prev_it_260;
struct list_item$1charp* tail_it_261;
int i_262;
_Bool _while_condtional46;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct list_item$1charp* prev_it_263;
_Bool _if_conditional398;
_Bool _if_conditional399;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_250, 0, sizeof(int));
memset(&it_253, 0, sizeof(struct list_item$1charp*));
memset(&i_254, 0, sizeof(int));
memset(&prev_it_255, 0, sizeof(struct list_item$1charp*));
memset(&it_256, 0, sizeof(struct list_item$1charp*));
memset(&i_257, 0, sizeof(int));
memset(&prev_it_258, 0, sizeof(struct list_item$1charp*));
memset(&it_259, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_260, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_261, 0, sizeof(struct list_item$1charp*));
memset(&i_262, 0, sizeof(int));
memset(&prev_it_263, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional382=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional382) {
                                                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional383=tail<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional383) {
                                                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional384=head>tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional384) {
                                                                                tmp_250=tail;
                                                                                __freed_obj__ = 0;
                                                                                tail=head;
                                                                                __freed_obj__ = 0;
                                                                                head=tmp_250;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional385=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional385) {
                                                                                head=0;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional386=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional386) {
                                                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional387=head==tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional387) {
                                                                                __result138__ = __result_obj__ = self;
                                                                                __freed_obj__ = 0;
                                                                                return __result138__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional388=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional388) {
                                                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional389=head==0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional389) {
                                                                                    it_253=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    i_254=0;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional44=it_253!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional44) {
                                                                                        if(_if_conditional390=i_254<tail,                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional390) {
                                                                                            prev_it_255=it_253;
                                                                                            __freed_obj__ = 0;
                                                                                            it_253=((struct list_item$1charp*)come_null_check(it_253, "./comelang2.h", 543))->next;
                                                                                            __freed_obj__ = 0;
                                                                                            i_254++;
                                                                                            __freed_obj__ = 0;
                                                                                            if(prev_it_255 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional391=i_254==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional391) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_253;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_253=((struct list_item$1charp*)come_null_check(it_253, "./comelang2.h", 556))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_254++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional392=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional392) {
                                                                                        it_256=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        i_257=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional45=it_256!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional45) {
                                                                                            if(_if_conditional393=i_257==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional393) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_256, "./comelang2.h", 566))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional394=i_257>=head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional394) {
                                                                                                prev_it_258=it_256;
                                                                                                __freed_obj__ = 0;
                                                                                                it_256=((struct list_item$1charp*)come_null_check(it_256, "./comelang2.h", 573))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_257++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_258 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_256=((struct list_item$1charp*)come_null_check(it_256, "./comelang2.h", 581))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_257++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        it_259=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        head_prev_it_260=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        tail_it_261=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        i_262=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional46=it_259!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional46) {
                                                                                            if(_if_conditional395=i_262==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional395) {
                                                                                                head_prev_it_260=((struct list_item$1charp*)come_null_check(it_259, "./comelang2.h", 596))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional396=i_262==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional396) {
                                                                                                tail_it_261=it_259;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional397=i_262>=head&&i_262<tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional397) {
                                                                                                prev_it_263=it_259;
                                                                                                __freed_obj__ = 0;
                                                                                                it_259=((struct list_item$1charp*)come_null_check(it_259, "./comelang2.h", 606))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_262++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_263 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_263, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_259=((struct list_item$1charp*)come_null_check(it_259, "./comelang2.h", 614))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_262++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional398=head_prev_it_260!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional398) {
                                                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_260, "./comelang2.h", 620))->next=tail_it_261;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional399=tail_it_261!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional399) {
                                                                                            ((struct list_item$1charp*)come_null_check(tail_it_261, "./comelang2.h", 623))->prev=head_prev_it_260;
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
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_251;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_252;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_251, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_252, 0, sizeof(struct list_item$1charp*));
                                                                                    it_251=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional43=it_251!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional43) {
                                                                                        prev_it_252=it_251;
                                                                                        __freed_obj__ = 0;
                                                                                        it_251=((struct list_item$1charp*)come_null_check(it_251, "./comelang2.h", 479))->next;
                                                                                        __freed_obj__ = 0;
                                                                                        if(prev_it_252 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_252, (void*)0, (void*)0, 0, 0, 0, 0); }
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional405;
char* result_265;
char* __result142__;
_Bool _if_conditional406;
char* __result143__;
char* result_266;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_265, 0, sizeof(char*));
memset(&result_266, 0, sizeof(char*));
                                                if(_if_conditional405=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional405) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_265,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result142__ = __result_obj__ = result_265;
                                                    __freed_obj__ = 0;
                                                    return __result142__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                                                __freed_obj__ = 0;
                                                if(_if_conditional406=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional406) {
                                                    __result143__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                                    __freed_obj__ = 0;
                                                    return __result143__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_266,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result144__ = __result_obj__ = result_266;
                                                __freed_obj__ = 0;
                                                return __result144__;
                                                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional407;
char* result_268;
char* __result146__;
_Bool _if_conditional408;
char* __result147__;
char* result_269;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_268, 0, sizeof(char*));
memset(&result_269, 0, sizeof(char*));
                                                if(_if_conditional407=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional407) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_268,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result146__ = __result_obj__ = result_268;
                                                    __freed_obj__ = 0;
                                                    return __result146__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                                __freed_obj__ = 0;
                                                if(_if_conditional408=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional408) {
                                                    __result147__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                                    __freed_obj__ = 0;
                                                    return __result147__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_269,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result148__ = __result_obj__ = result_269;
                                                __freed_obj__ = 0;
                                                return __result148__;
                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional411;
void* right_value336;
struct list_item$1charp* litem_270;
_Bool _if_conditional412;
void* right_value337;
struct list_item$1charp* litem_271;
void* right_value338;
struct list_item$1charp* litem_272;
struct list$1charp* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value336, 0, sizeof(void*));
memset(&litem_270, 0, sizeof(struct list_item$1charp*));
memset(&right_value337, 0, sizeof(void*));
memset(&litem_271, 0, sizeof(struct list_item$1charp*));
memset(&right_value338, 0, sizeof(void*));
memset(&litem_272, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional411=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional411) {
                                                        litem_270=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value336=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                                                        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value336;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_270, "./comelang2.h", 274))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_270, "./comelang2.h", 275))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_270, "./comelang2.h", 276))->item=item;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_270;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_270;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional412=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional412) {
                                                            litem_271=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value337=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                                                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value337;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_271, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_271, "./comelang2.h", 285))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_271, "./comelang2.h", 286))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_271;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_271;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_272=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value338=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                                                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value338;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_272, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_272, "./comelang2.h", 295))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_272, "./comelang2.h", 296))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_272;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_272;
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

