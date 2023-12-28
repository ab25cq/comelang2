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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sUIntNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sLongNode
{
    long value;
    int sline;
    char* sname;
};
struct sULongNode
{
    unsigned long int value;
    int sline;
    char* sname;
};
struct sFloatNode
{
    float value;
    int sline;
    char* sname;
};
struct sDoubleNode
{
    double value;
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

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
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated();

char* sUIntNode_kind();

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info);

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind();

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated();

int sLongNode_sline(struct sLongNode* self, struct sInfo* info);

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind();

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated();

int sULongNode_sline(struct sULongNode* self, struct sInfo* info);

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind();

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated();

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info);

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind();

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated();

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info);

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
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












struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
char* __dec_obj1;
struct sIntNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    ((struct sIntNode*)come_null_check(self, "05function3.c", 12))->value=value;
    __freed_obj__ = 0;
    ((struct sIntNode*)come_null_check(self, "05function3.c", 14))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 14))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sIntNode*)come_null_check(self, "05function3.c", 15))->sname;
    ((struct sIntNode*)come_null_check(self, "05function3.c", 15))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 15))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sIntNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value1;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value1=__builtin_string("sIntNode")));
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
struct CVALUE* come_value_8;
void* right_value3;
char* __dec_obj2;
void* right_value4;
void* right_value5;
struct sType* __dec_obj3;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&come_value_8, 0, sizeof(struct CVALUE*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
    come_value_8=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value2=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 27))));
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 29))->c_value;
    ((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 29))->c_value=(char*)come_increment_ref_count(((char*)(right_value3=xsprintf("%d",((struct sIntNode*)come_null_check(self, "05function3.c", 29))->value))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0,0); }
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj3=((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 30))->type;
    ((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 30))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value4=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 30)))),"int",(_Bool)0,info))));
    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 31))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 33))->stack, "05function3.c", 33)),(struct CVALUE*)come_increment_ref_count(come_value_8));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_8, "05function3.c", 35))->c_value);
    __freed_obj__ = 0;
    __result17__ = (_Bool)1;
    if(come_value_8 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_8, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
    if(come_value_8 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional8) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional10) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional11) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional12) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional14) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional16) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional20) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional9=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional9) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional13) {
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
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional15) {
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
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional18=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional18) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional24;
void* right_value6;
struct list_item$1CVALUEph* litem_15;
struct CVALUE* __dec_obj4;
_Bool _if_conditional26;
void* right_value7;
struct list_item$1CVALUEph* litem_16;
struct CVALUE* __dec_obj5;
void* right_value8;
struct list_item$1CVALUEph* litem_17;
struct CVALUE* __dec_obj6;
struct list$1CVALUEph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value7, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional24=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional24) {
            litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value6=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj4=((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj4) { come_call_finalizer(CVALUE_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_15;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_15;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional26=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional26) {
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value7=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj5=((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj5) { come_call_finalizer(CVALUE_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_16;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_16;
                __freed_obj__ = 0;
            }
            else {
                litem_17=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value8=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj6=((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_17, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj6) { come_call_finalizer(CVALUE_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_17;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_17;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result16__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result16__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional25=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional25) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

_Bool sIntNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result18__;
    __freed_obj__ = 0;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result19__ = ((struct sIntNode*)come_null_check(self, "05function3.c", 47))->sline;
    __freed_obj__ = 0;
    return __result19__;
    __freed_obj__ = 0;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value9;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
    __result20__ = __result_obj__ = ((char*)(right_value9=__builtin_string(((struct sIntNode*)come_null_check(self, "05function3.c", 52))->sname)));
    __freed_obj__ = 0;
    return __result20__;
    __freed_obj__ = 0;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value10;
char* __dec_obj7;
struct sUIntNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    ((struct sUIntNode*)come_null_check(self, "05function3.c", 64))->value=value;
    __freed_obj__ = 0;
    ((struct sUIntNode*)come_null_check(self, "05function3.c", 66))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 66))->sline;
    __freed_obj__ = 0;
    __dec_obj7=((struct sUIntNode*)come_null_check(self, "05function3.c", 67))->sname;
    ((struct sUIntNode*)come_null_check(self, "05function3.c", 67))->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 67))->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result21__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result21__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sUIntNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result22__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result22__;
    __freed_obj__ = 0;
}

char* sUIntNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value11;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sUIntNode")));
    __freed_obj__ = 0;
    return __result23__;
    __freed_obj__ = 0;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value12;
struct CVALUE* come_value_18;
void* right_value13;
char* __dec_obj8;
void* right_value14;
void* right_value15;
struct sType* __dec_obj9;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&come_value_18, 0, sizeof(struct CVALUE*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
    come_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value12=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 84))));
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj8=((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 86))->c_value;
    ((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 86))->c_value=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("%u",((struct sUIntNode*)come_null_check(self, "05function3.c", 86))->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj9=((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 87))->type;
    ((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 87))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 87)))),"int",(_Bool)0,info))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 88))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 90))->stack, "05function3.c", 90)),(struct CVALUE*)come_increment_ref_count(come_value_18));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_18, "05function3.c", 92))->c_value);
    __freed_obj__ = 0;
    __result24__ = (_Bool)1;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result24__;
    __freed_obj__ = 0;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result25__ = ((struct sUIntNode*)come_null_check(self, "05function3.c", 99))->sline;
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value16;
char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
    __result26__ = __result_obj__ = ((char*)(right_value16=__builtin_string(((struct sUIntNode*)come_null_check(self, "05function3.c", 104))->sname)));
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value17;
char* __dec_obj10;
struct sLongNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    ((struct sLongNode*)come_null_check(self, "05function3.c", 116))->value=value;
    __freed_obj__ = 0;
    ((struct sLongNode*)come_null_check(self, "05function3.c", 118))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 118))->sline;
    __freed_obj__ = 0;
    __dec_obj10=((struct sLongNode*)come_null_check(self, "05function3.c", 119))->sname;
    ((struct sLongNode*)come_null_check(self, "05function3.c", 119))->sname=(char*)come_increment_ref_count(((char*)(right_value17=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 119))->sname))));
    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result27__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result27__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sLongNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value18;
char* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
    __result28__ = __result_obj__ = ((char*)(right_value18=__builtin_string("sLongNode")));
    __freed_obj__ = 0;
    return __result28__;
    __freed_obj__ = 0;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value19;
struct CVALUE* come_value_19;
void* right_value20;
char* __dec_obj11;
void* right_value21;
void* right_value22;
struct sType* __dec_obj12;
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&come_value_19, 0, sizeof(struct CVALUE*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
    come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value19=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 131))));
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj11=((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 133))->c_value;
    ((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 133))->c_value=(char*)come_increment_ref_count(((char*)(right_value20=xsprintf("%ld",((struct sLongNode*)come_null_check(self, "05function3.c", 133))->value))));
    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj12=((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 134))->type;
    ((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 134))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value21=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 134)))),"long",(_Bool)0,info))));
    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 135))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 137))->stack, "05function3.c", 137)),(struct CVALUE*)come_increment_ref_count(come_value_19));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_19, "05function3.c", 139))->c_value);
    __freed_obj__ = 0;
    __result29__ = (_Bool)1;
    if(come_value_19 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result29__;
    __freed_obj__ = 0;
    if(come_value_19 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sLongNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = ((struct sLongNode*)come_null_check(self, "05function3.c", 151))->sline;
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value23;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    __result32__ = __result_obj__ = ((char*)(right_value23=__builtin_string(((struct sLongNode*)come_null_check(self, "05function3.c", 156))->sname)));
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value24;
char* __dec_obj13;
struct sULongNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
    ((struct sULongNode*)come_null_check(self, "05function3.c", 168))->value=value;
    __freed_obj__ = 0;
    ((struct sULongNode*)come_null_check(self, "05function3.c", 170))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 170))->sline;
    __freed_obj__ = 0;
    __dec_obj13=((struct sULongNode*)come_null_check(self, "05function3.c", 171))->sname;
    ((struct sULongNode*)come_null_check(self, "05function3.c", 171))->sname=(char*)come_increment_ref_count(((char*)(right_value24=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 171))->sname))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result33__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sULongNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value25;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
    __result34__ = __result_obj__ = ((char*)(right_value25=__builtin_string("sULongNode")));
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value26;
struct CVALUE* come_value_20;
void* right_value27;
char* __dec_obj14;
void* right_value28;
void* right_value29;
struct sType* __dec_obj15;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&come_value_20, 0, sizeof(struct CVALUE*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
    come_value_20=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value26=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 183))));
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj14=((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 185))->c_value;
    ((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 185))->c_value=(char*)come_increment_ref_count(((char*)(right_value27=xsprintf("%lu",((struct sULongNode*)come_null_check(self, "05function3.c", 185))->value))));
    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj15=((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 186))->type;
    ((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 186))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value29=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value28=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 186)))),"long",(_Bool)0,info))));
    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 187))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 189))->stack, "05function3.c", 189)),(struct CVALUE*)come_increment_ref_count(come_value_20));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_20, "05function3.c", 191))->c_value);
    __freed_obj__ = 0;
    __result35__ = (_Bool)1;
    if(come_value_20 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_20, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
    if(come_value_20 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_20, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sULongNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result37__ = ((struct sULongNode*)come_null_check(self, "05function3.c", 203))->sline;
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value30;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
    __result38__ = __result_obj__ = ((char*)(right_value30=__builtin_string(((struct sULongNode*)come_null_check(self, "05function3.c", 208))->sname)));
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value31;
char* __dec_obj16;
struct sFloatNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
    ((struct sFloatNode*)come_null_check(self, "05function3.c", 220))->value=value;
    __freed_obj__ = 0;
    ((struct sFloatNode*)come_null_check(self, "05function3.c", 222))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 222))->sline;
    __freed_obj__ = 0;
    __dec_obj16=((struct sFloatNode*)come_null_check(self, "05function3.c", 223))->sname;
    ((struct sFloatNode*)come_null_check(self, "05function3.c", 223))->sname=(char*)come_increment_ref_count(((char*)(right_value31=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 223))->sname))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result39__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sFloatNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value32;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
    __result40__ = __result_obj__ = ((char*)(right_value32=__builtin_string("sFloatNode")));
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value33;
struct CVALUE* come_value_21;
void* right_value34;
char* __dec_obj17;
void* right_value35;
void* right_value36;
struct sType* __dec_obj18;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
memset(&come_value_21, 0, sizeof(struct CVALUE*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
    come_value_21=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value33=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 235))));
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj17=((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 237))->c_value;
    ((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 237))->c_value=(char*)come_increment_ref_count(((char*)(right_value34=xsprintf("%f",((struct sFloatNode*)come_null_check(self, "05function3.c", 237))->value))));
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj18=((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 238))->type;
    ((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 238))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value35=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 238)))),"float",(_Bool)0,info))));
    if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 239))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 241))->stack, "05function3.c", 241)),(struct CVALUE*)come_increment_ref_count(come_value_21));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_21, "05function3.c", 243))->c_value);
    __freed_obj__ = 0;
    __result41__ = (_Bool)1;
    if(come_value_21 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_21, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
    if(come_value_21 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_21, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sFloatNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result42__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result43__ = ((struct sFloatNode*)come_null_check(self, "05function3.c", 255))->sline;
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value37;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(right_value37=__builtin_string(((struct sFloatNode*)come_null_check(self, "05function3.c", 260))->sname)));
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value38;
char* __dec_obj19;
struct sDoubleNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
    ((struct sDoubleNode*)come_null_check(self, "05function3.c", 272))->value=value;
    __freed_obj__ = 0;
    ((struct sDoubleNode*)come_null_check(self, "05function3.c", 274))->sline=((struct sInfo*)come_null_check(info, "05function3.c", 274))->sline;
    __freed_obj__ = 0;
    __dec_obj19=((struct sDoubleNode*)come_null_check(self, "05function3.c", 275))->sname;
    ((struct sDoubleNode*)come_null_check(self, "05function3.c", 275))->sname=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(((struct sInfo*)come_null_check(info, "05function3.c", 275))->sname))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result45__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sDoubleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value39;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((char*)(right_value39=__builtin_string("sDoubleNode")));
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value40;
struct CVALUE* come_value_22;
void* right_value41;
char* __dec_obj20;
void* right_value42;
void* right_value43;
struct sType* __dec_obj21;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&come_value_22, 0, sizeof(struct CVALUE*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
    come_value_22=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value40=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 287))));
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj20=((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 289))->c_value;
    ((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 289))->c_value=(char*)come_increment_ref_count(((char*)(right_value41=xsprintf("%lf",((struct sDoubleNode*)come_null_check(self, "05function3.c", 289))->value))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj21=((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 290))->type;
    ((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 290))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value42=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 290)))),"double",(_Bool)0,info))));
    if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 291))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "05function3.c", 293))->stack, "05function3.c", 293)),(struct CVALUE*)come_increment_ref_count(come_value_22));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_22, "05function3.c", 295))->c_value);
    __freed_obj__ = 0;
    __result47__ = (_Bool)1;
    if(come_value_22 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(come_value_22 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_22, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sDoubleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result48__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result49__ = ((struct sDoubleNode*)come_null_check(self, "05function3.c", 307))->sline;
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value44;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
    __result50__ = __result_obj__ = ((char*)(right_value44=__builtin_string(((struct sDoubleNode*)come_null_check(self, "05function3.c", 312))->sname)));
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
const int buf_size_23=128;
char* p2_25;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
char c_26;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _while_condtional5;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _while_condtional6;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value45;
void* right_value46;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value49;
struct sNode* __result53__;
_Bool _if_conditional54;
void* right_value50;
void* right_value51;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value54;
struct sNode* __result56__;
void* right_value55;
void* right_value56;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value59;
struct sNode* __result59__;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
unsigned long int lont_30;
int value2_31;
void* right_value60;
void* right_value61;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value64;
struct sNode* __result62__;
unsigned long int lont_33;
int value_34;
void* right_value65;
void* right_value66;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value69;
struct sNode* __result65__;
unsigned int value_36;
void* right_value70;
void* right_value71;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value74;
struct sNode* __result68__;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned long long int value_38;
void* right_value75;
void* right_value76;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value79;
struct sNode* __result71__;
_Bool _if_conditional90;
unsigned long long int value_40;
void* right_value80;
void* right_value81;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value84;
struct sNode* __result74__;
unsigned long long int value_42;
void* right_value85;
void* right_value86;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value89;
struct sNode* __result77__;
unsigned long int lont_44;
int value_45;
void* right_value90;
void* right_value91;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value94;
struct sNode* __result80__;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p2_25, 0, sizeof(char*));
memset(&c_26, 0, sizeof(char));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&lont_30, 0, sizeof(unsigned long int));
memset(&value2_31, 0, sizeof(int));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&lont_33, 0, sizeof(unsigned long int));
memset(&value_34, 0, sizeof(int));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&value_36, 0, sizeof(unsigned int));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&value_38, 0, sizeof(unsigned long long int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&value_40, 0, sizeof(unsigned long long int));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&value_42, 0, sizeof(unsigned long long int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&lont_44, 0, sizeof(unsigned long int));
memset(&value_45, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
    __freed_obj__ = 0;
    char buf_24[128+1];
    memset(&buf_24, 0, sizeof(char)    *(128+1)    );
    __freed_obj__ = 0;
    p2_25=buf_24;
    __freed_obj__ = 0;
    if(_if_conditional32=minus,    __freed_obj__ = 0, 
    _if_conditional32) {
        *p2_25=45;
        __freed_obj__ = 0;
        p2_25++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional33=xisdigit(*((struct sInfo*)come_null_check(info, "05function3.c", 504))->p),    __freed_obj__ = 0, 
    _if_conditional33) {
        while(_while_condtional4=xisdigit(*((struct sInfo*)come_null_check(info, "05function3.c", 340))->p)||*((struct sInfo*)come_null_check(info, "05function3.c", 340))->p==95,        __freed_obj__ = 0, 
        _while_condtional4) {
            if(_if_conditional34=*((struct sInfo*)come_null_check(info, "05function3.c", 336))->p==95,            __freed_obj__ = 0, 
            _if_conditional34) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 329))->p++;
                __freed_obj__ = 0;
            }
            else {
                *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 332))->p;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function3.c", 333))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional35=p2_25-buf_24>=buf_size_23,            __freed_obj__ = 0, 
            _if_conditional35) {
                printf("%s %d: overflow node of number\n",((struct sInfo*)come_null_check(info, "05function3.c", 337))->sname,((struct sInfo*)come_null_check(info, "05function3.c", 337))->sline);
                __freed_obj__ = 0;
                exit(5);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        *p2_25=0;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        c_26=*(((struct sInfo*)come_null_check(info, "05function3.c", 344))->p+1);
        __freed_obj__ = 0;
        if(_if_conditional36=*((struct sInfo*)come_null_check(info, "05function3.c", 498))->p==46&&xisdigit(c_26),        __freed_obj__ = 0, 
        _if_conditional36) {
            *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 347))->p;
            __freed_obj__ = 0;
            if(_if_conditional37=p2_25-buf_24>=buf_size_23,            __freed_obj__ = 0, 
            _if_conditional37) {
                printf("%s %d: overflow node of number",((struct sInfo*)come_null_check(info, "05function3.c", 350))->sname,((struct sInfo*)come_null_check(info, "05function3.c", 350))->sline);
                __freed_obj__ = 0;
                exit(11);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function3.c", 354))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            while(_while_condtional5=xisdigit(*((struct sInfo*)come_null_check(info, "05function3.c", 372))->p)||*((struct sInfo*)come_null_check(info, "05function3.c", 372))->p==95,            __freed_obj__ = 0, 
            _while_condtional5) {
                if(_if_conditional38=*((struct sInfo*)come_null_check(info, "05function3.c", 366))->p==95,                __freed_obj__ = 0, 
                _if_conditional38) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 359))->p++;
                    __freed_obj__ = 0;
                }
                else {
                    *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 362))->p;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function3.c", 363))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional39=p2_25-buf_24>=buf_size_23,                __freed_obj__ = 0, 
                _if_conditional39) {
                    err_msg(info,"overflow node of number");
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional40=*((struct sInfo*)come_null_check(info, "05function3.c", 419))->p==101,            __freed_obj__ = 0, 
            _if_conditional40) {
                *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 373))->p;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function3.c", 374))->p++;
                __freed_obj__ = 0;
                if(_if_conditional41=p2_25-buf_24>=buf_size_23,                __freed_obj__ = 0, 
                _if_conditional41) {
                    err_msg(info,"overflow node of number");
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional42=*((struct sInfo*)come_null_check(info, "05function3.c", 404))->p==43,                __freed_obj__ = 0, 
                _if_conditional42) {
                    *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 382))->p;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function3.c", 383))->p++;
                    __freed_obj__ = 0;
                    if(_if_conditional43=p2_25-buf_24>=buf_size_23,                    __freed_obj__ = 0, 
                    _if_conditional43) {
                        err_msg(info,"overflow node of number");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional44=*((struct sInfo*)come_null_check(info, "05function3.c", 404))->p==45,                    __freed_obj__ = 0, 
                    _if_conditional44) {
                        *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 391))->p;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function3.c", 392))->p++;
                        __freed_obj__ = 0;
                        if(_if_conditional45=p2_25-buf_24>=buf_size_23,                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            err_msg(info,"overflow node of number");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        err_msg(info,"invalid float value");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                while(_while_condtional6=xisdigit(*((struct sInfo*)come_null_check(info, "05function3.c", 417))->p)||*((struct sInfo*)come_null_check(info, "05function3.c", 417))->p==95,                __freed_obj__ = 0, 
                _while_condtional6) {
                    if(_if_conditional46=*((struct sInfo*)come_null_check(info, "05function3.c", 413))->p==95,                    __freed_obj__ = 0, 
                    _if_conditional46) {
                        ((struct sInfo*)come_null_check(info, "05function3.c", 406))->p++;
                        __freed_obj__ = 0;
                    }
                    else {
                        *p2_25++=*((struct sInfo*)come_null_check(info, "05function3.c", 409))->p;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function3.c", 410))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional47=p2_25-buf_24>=buf_size_23,                    __freed_obj__ = 0, 
                    _if_conditional47) {
                        err_msg(info,"overflow node of number");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            *p2_25=0;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional48=*((struct sInfo*)come_null_check(info, "05function3.c", 437))->p==102||*((struct sInfo*)come_null_check(info, "05function3.c", 437))->p==70,            __freed_obj__ = 0, 
            _if_conditional48) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 423))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 426);
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value46=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value45=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05function3.c", 426)))),strtof(buf_24,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sFloatNode_finalize;
                _inf_value1->clone=(void*)sFloatNode_clone;
                _inf_value1->compile=(void*)sFloatNode_compile;
                _inf_value1->sline=(void*)sFloatNode_sline;
                _inf_value1->sname=(void*)sFloatNode_sname;
                _inf_value1->terminated=(void*)sFloatNode_terminated;
                _inf_value1->kind=(void*)sFloatNode_kind;
                __result53__ = __result_obj__ = ((struct sNode*)(right_value49=_inf_value1));
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result53__;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional54=*((struct sInfo*)come_null_check(info, "05function3.c", 437))->p==108||*((struct sInfo*)come_null_check(info, "05function3.c", 437))->p==76,                __freed_obj__ = 0, 
                _if_conditional54) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 429))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 432);
                    _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value51=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value50=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 432)))),strtod(buf_24,((void*)0)),info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sDoubleNode_finalize;
                    _inf_value2->clone=(void*)sDoubleNode_clone;
                    _inf_value2->compile=(void*)sDoubleNode_compile;
                    _inf_value2->sline=(void*)sDoubleNode_sline;
                    _inf_value2->sname=(void*)sDoubleNode_sname;
                    _inf_value2->terminated=(void*)sDoubleNode_terminated;
                    _inf_value2->kind=(void*)sDoubleNode_kind;
                    __result56__ = __result_obj__ = ((struct sNode*)(right_value54=_inf_value2));
                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result56__;
                    __freed_obj__ = 0;
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 435);
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value56=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value55=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 435)))),strtod(buf_24,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sDoubleNode_sline;
                    _inf_value3->sname=(void*)sDoubleNode_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result59__ = __result_obj__ = ((struct sNode*)(right_value59=_inf_value3));
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional65=*((struct sInfo*)come_null_check(info, "05function3.c", 498))->p==117||*((struct sInfo*)come_null_check(info, "05function3.c", 498))->p==85,            __freed_obj__ = 0, 
            _if_conditional65) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 440))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional66=*((struct sInfo*)come_null_check(info, "05function3.c", 466))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 466))->p==108,                __freed_obj__ = 0, 
                _if_conditional66) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 445))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(_if_conditional67=*((struct sInfo*)come_null_check(info, "05function3.c", 461))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 461))->p==108,                    __freed_obj__ = 0, 
                    _if_conditional67) {
                        ((struct sInfo*)come_null_check(info, "05function3.c", 450))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        value2_31=strtoull(buf_24,((void*)0),0);
                        __freed_obj__ = 0;
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 455);
                        _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value61=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value60=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 455)))),value2_31,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sULongNode_finalize;
                        _inf_value4->clone=(void*)sULongNode_clone;
                        _inf_value4->compile=(void*)sULongNode_compile;
                        _inf_value4->sline=(void*)sULongNode_sline;
                        _inf_value4->sname=(void*)sULongNode_sname;
                        _inf_value4->terminated=(void*)sULongNode_terminated;
                        _inf_value4->kind=(void*)sULongNode_kind;
                        __result62__ = __result_obj__ = ((struct sNode*)(right_value64=_inf_value4));
                        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result62__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __freed_obj__ = 0;
                        value_34=strtoull(buf_24,((void*)0),0);
                        __freed_obj__ = 0;
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 459);
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value66=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value65=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 459)))),value_34,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sULongNode_sline;
                        _inf_value5->sname=(void*)sULongNode_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result65__ = __result_obj__ = ((struct sNode*)(right_value69=_inf_value5));
                        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result65__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    value_36=strtoul(buf_24,((void*)0),0);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 464);
                    _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value71=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value70=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 464)))),value_36,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sUIntNode_finalize;
                    _inf_value6->clone=(void*)sUIntNode_clone;
                    _inf_value6->compile=(void*)sUIntNode_compile;
                    _inf_value6->sline=(void*)sUIntNode_sline;
                    _inf_value6->sname=(void*)sUIntNode_sname;
                    _inf_value6->terminated=(void*)sUIntNode_terminated;
                    _inf_value6->kind=(void*)sUIntNode_kind;
                    __result68__ = __result_obj__ = ((struct sNode*)(right_value74=_inf_value6));
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result68__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional83=*((struct sInfo*)come_null_check(info, "05function3.c", 498))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 498))->p==108,                __freed_obj__ = 0, 
                _if_conditional83) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 468))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(_if_conditional84=*((struct sInfo*)come_null_check(info, "05function3.c", 493))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 493))->p==108,                    __freed_obj__ = 0, 
                    _if_conditional84) {
                        ((struct sInfo*)come_null_check(info, "05function3.c", 473))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        value_38=strtoull(buf_24,((void*)0),0);
                        __freed_obj__ = 0;
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 478);
                        _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value76=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value75=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 478)))),value_38,info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLongNode_finalize;
                        _inf_value7->clone=(void*)sLongNode_clone;
                        _inf_value7->compile=(void*)sLongNode_compile;
                        _inf_value7->sline=(void*)sLongNode_sline;
                        _inf_value7->sname=(void*)sLongNode_sname;
                        _inf_value7->terminated=(void*)sLongNode_terminated;
                        _inf_value7->kind=(void*)sLongNode_kind;
                        __result71__ = __result_obj__ = ((struct sNode*)(right_value79=_inf_value7));
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result71__;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional90=*((struct sInfo*)come_null_check(info, "05function3.c", 493))->p==85||*((struct sInfo*)come_null_check(info, "05function3.c", 493))->p==117,                        __freed_obj__ = 0, 
                        _if_conditional90) {
                            ((struct sInfo*)come_null_check(info, "05function3.c", 482))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            value_40=strtoull(buf_24,((void*)0),0);
                            __freed_obj__ = 0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 487);
                            _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value81=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value80=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 487)))),value_40,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sULongNode_finalize;
                            _inf_value8->clone=(void*)sULongNode_clone;
                            _inf_value8->compile=(void*)sULongNode_compile;
                            _inf_value8->sline=(void*)sULongNode_sline;
                            _inf_value8->sname=(void*)sULongNode_sname;
                            _inf_value8->terminated=(void*)sULongNode_terminated;
                            _inf_value8->kind=(void*)sULongNode_kind;
                            __result74__ = __result_obj__ = ((struct sNode*)(right_value84=_inf_value8));
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result74__;
                            __freed_obj__ = 0;
                        }
                        else {
                            value_42=strtoull(buf_24,((void*)0),0);
                            __freed_obj__ = 0;
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 491);
                            _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value86=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value85=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 491)))),value_42,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sLongNode_finalize;
                            _inf_value9->clone=(void*)sLongNode_clone;
                            _inf_value9->compile=(void*)sLongNode_compile;
                            _inf_value9->sline=(void*)sLongNode_sline;
                            _inf_value9->sname=(void*)sLongNode_sname;
                            _inf_value9->terminated=(void*)sLongNode_terminated;
                            _inf_value9->kind=(void*)sLongNode_kind;
                            __result77__ = __result_obj__ = ((struct sNode*)(right_value89=_inf_value9));
                            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result77__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __freed_obj__ = 0;
                    value_45=strtoll(buf_24,((void*)0),0);
                    __freed_obj__ = 0;
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 496);
                    _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value91=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value90=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 496)))),value_45,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sIntNode_finalize;
                    _inf_value10->clone=(void*)sIntNode_clone;
                    _inf_value10->compile=(void*)sIntNode_compile;
                    _inf_value10->sline=(void*)sIntNode_sline;
                    _inf_value10->sname=(void*)sIntNode_sname;
                    _inf_value10->terminated=(void*)sIntNode_terminated;
                    _inf_value10->kind=(void*)sIntNode_kind;
                    __result80__ = __result_obj__ = ((struct sNode*)(right_value94=_inf_value10));
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result80__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        err_msg(info,"require digits after + or -");
        __freed_obj__ = 0;
        exit(2);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional49=self!=((void*)0)&&((struct sFloatNode*)come_null_check(self, "sFloatNode_finalize", 1))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional49) {
                        if(((struct sFloatNode*)come_null_check(self, "sFloatNode_finalize", 0))->sname && !__freed_obj__) { ((struct sFloatNode*)come_null_check(self, "sFloatNode_finalize", 0))->sname = come_decrement_ref_count(((struct sFloatNode*)come_null_check(self, "sFloatNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional50;
struct sFloatNode* __result51__;
void* right_value47;
struct sFloatNode* result_27;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value48;
char* __dec_obj22;
struct sFloatNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct sFloatNode*));
memset(&right_value48, 0, sizeof(void*));
                    if(_if_conditional50=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        __result51__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result51__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_27=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value47=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3))));
                    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional51=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional51) {
                        ((struct sFloatNode*)come_null_check(result_27, "sFloatNode_clone", 4))->value=((struct sFloatNode*)come_null_check(self, "sFloatNode_clone", 4))->value;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional52=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional52) {
                        ((struct sFloatNode*)come_null_check(result_27, "sFloatNode_clone", 5))->sline=((struct sFloatNode*)come_null_check(self, "sFloatNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional53=self!=((void*)0)&&((struct sFloatNode*)come_null_check(self, "sFloatNode_clone", 7))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional53) {
                        __dec_obj22=((struct sFloatNode*)come_null_check(result_27, "sFloatNode_clone", 6))->sname;
                        ((struct sFloatNode*)come_null_check(result_27, "sFloatNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(((struct sFloatNode*)come_null_check(self, "sFloatNode_clone", 6))->sname))));
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result52__ = __result_obj__ = result_27;
                    if(result_27 && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
                    if(result_27 && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional60=self!=((void*)0)&&((struct sDoubleNode*)come_null_check(self, "sDoubleNode_finalize", 1))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional60) {
                            if(((struct sDoubleNode*)come_null_check(self, "sDoubleNode_finalize", 0))->sname && !__freed_obj__) { ((struct sDoubleNode*)come_null_check(self, "sDoubleNode_finalize", 0))->sname = come_decrement_ref_count(((struct sDoubleNode*)come_null_check(self, "sDoubleNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional61;
struct sDoubleNode* __result57__;
void* right_value57;
struct sDoubleNode* result_29;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value58;
char* __dec_obj24;
struct sDoubleNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sDoubleNode*));
memset(&right_value58, 0, sizeof(void*));
                        if(_if_conditional61=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional61) {
                            __result57__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_29=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value57=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3))));
                        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional62=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional62) {
                            ((struct sDoubleNode*)come_null_check(result_29, "sDoubleNode_clone", 4))->value=((struct sDoubleNode*)come_null_check(self, "sDoubleNode_clone", 4))->value;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional63=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional63) {
                            ((struct sDoubleNode*)come_null_check(result_29, "sDoubleNode_clone", 5))->sline=((struct sDoubleNode*)come_null_check(self, "sDoubleNode_clone", 5))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional64=self!=((void*)0)&&((struct sDoubleNode*)come_null_check(self, "sDoubleNode_clone", 7))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional64) {
                            __dec_obj24=((struct sDoubleNode*)come_null_check(result_29, "sDoubleNode_clone", 6))->sname;
                            ((struct sDoubleNode*)come_null_check(result_29, "sDoubleNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(((struct sDoubleNode*)come_null_check(self, "sDoubleNode_clone", 6))->sname))));
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result58__ = __result_obj__ = result_29;
                        if(result_29 && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result58__;
                        __freed_obj__ = 0;
                        if(result_29 && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value95;
void* right_value96;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value99;
struct sNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 509);
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value96=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value95=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 509)))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIntNode_finalize;
    _inf_value11->clone=(void*)sIntNode_clone;
    _inf_value11->compile=(void*)sIntNode_compile;
    _inf_value11->sline=(void*)sIntNode_sline;
    _inf_value11->sname=(void*)sIntNode_sname;
    _inf_value11->terminated=(void*)sIntNode_terminated;
    _inf_value11->kind=(void*)sIntNode_kind;
    __result84__ = __result_obj__ = ((struct sNode*)(right_value99=_inf_value11));
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int buf_size_48;
char* p_50;
_Bool _while_condtional7;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
unsigned long long int value_51;
_Bool _if_conditional116;
void* right_value100;
void* right_value101;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value104;
struct sNode* __result87__;
void* right_value105;
void* right_value106;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value109;
struct sNode* __result90__;
unsigned long long int value_54;
_Bool _if_conditional127;
void* right_value110;
void* right_value111;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value114;
struct sNode* __result93__;
void* right_value115;
void* right_value116;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value119;
struct sNode* __result96__;
unsigned int value_57;
_Bool _if_conditional138;
void* right_value120;
void* right_value121;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value124;
struct sNode* __result99__;
void* right_value125;
void* right_value126;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value129;
struct sNode* __result102__;
_Bool _if_conditional149;
_Bool _if_conditional150;
unsigned long long int value_60;
_Bool _if_conditional151;
void* right_value130;
void* right_value131;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value134;
struct sNode* __result105__;
void* right_value135;
void* right_value136;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value139;
struct sNode* __result108__;
_Bool _if_conditional162;
unsigned long long int value_63;
_Bool _if_conditional163;
void* right_value140;
void* right_value141;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value144;
struct sNode* __result111__;
void* right_value145;
void* right_value146;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value149;
struct sNode* __result114__;
unsigned long long int value_66;
_Bool _if_conditional174;
void* right_value150;
void* right_value151;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value154;
struct sNode* __result117__;
void* right_value155;
void* right_value156;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value159;
struct sNode* __result120__;
unsigned long long int value_69;
_Bool _if_conditional185;
void* right_value160;
void* right_value161;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value164;
struct sNode* __result123__;
void* right_value165;
void* right_value166;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value169;
struct sNode* __result126__;
struct sNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_size_48, 0, sizeof(int));
memset(&p_50, 0, sizeof(char*));
memset(&value_51, 0, sizeof(unsigned long long int));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&value_54, 0, sizeof(unsigned long long int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&value_57, 0, sizeof(unsigned int));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&value_60, 0, sizeof(unsigned long long int));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&value_63, 0, sizeof(unsigned long long int));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&value_66, 0, sizeof(unsigned long long int));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&value_69, 0, sizeof(unsigned long long int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    buf_size_48=128;
    __freed_obj__ = 0;
    char buf_49[128+1];
    memset(&buf_49, 0, sizeof(char)    *(128+1)    );
    __freed_obj__ = 0;
    p_50=buf_49;
    __freed_obj__ = 0;
    *p_50++=48;
    __freed_obj__ = 0;
    *p_50++=120;
    __freed_obj__ = 0;
    while(_while_condtional7=(*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p>=48&&*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p<=57)||(*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p>=97&&*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p<=102)||(*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p>=65&&*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p<=70)||*((struct sInfo*)come_null_check(info, "05function3.c", 535))->p==95,    __freed_obj__ = 0, 
    _while_condtional7) {
        if(_if_conditional111=*((struct sInfo*)come_null_check(info, "05function3.c", 531))->p==95,        __freed_obj__ = 0, 
        _if_conditional111) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 524))->p++;
            __freed_obj__ = 0;
        }
        else {
            *p_50++=*((struct sInfo*)come_null_check(info, "05function3.c", 527))->p;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function3.c", 528))->p++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional112=p_50-buf_49>=buf_size_48-1,        __freed_obj__ = 0, 
        _if_conditional112) {
            err_msg(info,"overflow node of number");
            __freed_obj__ = 0;
            exit(2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    *p_50=0;
    __freed_obj__ = 0;
    skip_spaces_and_lf(info);
    __freed_obj__ = 0;
    if(_if_conditional113=*((struct sInfo*)come_null_check(info, "05function3.c", 635))->p==117||*((struct sInfo*)come_null_check(info, "05function3.c", 635))->p==85,    __freed_obj__ = 0, 
    _if_conditional113) {
        ((struct sInfo*)come_null_check(info, "05function3.c", 541))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional114=*((struct sInfo*)come_null_check(info, "05function3.c", 584))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 584))->p==108,        __freed_obj__ = 0, 
        _if_conditional114) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 546))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional115=*((struct sInfo*)come_null_check(info, "05function3.c", 573))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 573))->p==108,            __freed_obj__ = 0, 
            _if_conditional115) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 551))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                value_51=strtoull(buf_49,((void*)0),0);
                __freed_obj__ = 0;
                if(_if_conditional116=minus,                __freed_obj__ = 0, 
                _if_conditional116) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 557);
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value101=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value100=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 557)))),-value_51,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sULongNode_sline;
                    _inf_value12->sname=(void*)sULongNode_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result87__ = __result_obj__ = ((struct sNode*)(right_value104=_inf_value12));
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result87__;
                    __freed_obj__ = 0;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 560);
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value106=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value105=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 560)))),value_51,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sULongNode_sline;
                    _inf_value13->sname=(void*)sULongNode_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result90__ = __result_obj__ = ((struct sNode*)(right_value109=_inf_value13));
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                value_54=strtoull(buf_49,((void*)0),0);
                __freed_obj__ = 0;
                if(_if_conditional127=minus,                __freed_obj__ = 0, 
                _if_conditional127) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 567);
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value111=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value110=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 567)))),-value_54,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sULongNode_sline;
                    _inf_value14->sname=(void*)sULongNode_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result93__ = __result_obj__ = ((struct sNode*)(right_value114=_inf_value14));
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result93__;
                    __freed_obj__ = 0;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 570);
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value116=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value115=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 570)))),value_54,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sULongNode_sline;
                    _inf_value15->sname=(void*)sULongNode_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result96__ = __result_obj__ = ((struct sNode*)(right_value119=_inf_value15));
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result96__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            value_57=strtoull(buf_49,((void*)0),0);
            __freed_obj__ = 0;
            if(_if_conditional138=minus,            __freed_obj__ = 0, 
            _if_conditional138) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 578);
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value121=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value120=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 578)))),-value_57,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sUIntNode_sline;
                _inf_value16->sname=(void*)sUIntNode_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result99__ = __result_obj__ = ((struct sNode*)(right_value124=_inf_value16));
                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result99__;
                __freed_obj__ = 0;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 581);
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value126=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value125=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 581)))),value_57,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sUIntNode_sline;
                _inf_value17->sname=(void*)sUIntNode_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result102__ = __result_obj__ = ((struct sNode*)(right_value129=_inf_value17));
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional149=*((struct sInfo*)come_null_check(info, "05function3.c", 635))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 635))->p==108,        __freed_obj__ = 0, 
        _if_conditional149) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 586))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional150=*((struct sInfo*)come_null_check(info, "05function3.c", 624))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 624))->p==108,            __freed_obj__ = 0, 
            _if_conditional150) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 591))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                value_60=strtoull(buf_49,((void*)0),0);
                __freed_obj__ = 0;
                if(_if_conditional151=minus,                __freed_obj__ = 0, 
                _if_conditional151) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 596);
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value131=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value130=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 596)))),-value_60,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sLongNode_sline;
                    _inf_value18->sname=(void*)sLongNode_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result105__ = __result_obj__ = ((struct sNode*)(right_value134=_inf_value18));
                    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result105__;
                    __freed_obj__ = 0;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 599);
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value136=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value135=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 599)))),value_60,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sLongNode_sline;
                    _inf_value19->sname=(void*)sLongNode_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result108__ = __result_obj__ = ((struct sNode*)(right_value139=_inf_value19));
                    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result108__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional162=*((struct sInfo*)come_null_check(info, "05function3.c", 624))->p==85||*((struct sInfo*)come_null_check(info, "05function3.c", 624))->p==117,                __freed_obj__ = 0, 
                _if_conditional162) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 604))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    value_63=strtoull(buf_49,((void*)0),0);
                    __freed_obj__ = 0;
                    if(_if_conditional163=minus,                    __freed_obj__ = 0, 
                    _if_conditional163) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 609);
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value141=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value140=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 609)))),-value_63,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sULongNode_sline;
                        _inf_value20->sname=(void*)sULongNode_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result111__ = __result_obj__ = ((struct sNode*)(right_value144=_inf_value20));
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result111__;
                        __freed_obj__ = 0;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 612);
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value146=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value145=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 612)))),value_63,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sULongNode_sline;
                        _inf_value21->sname=(void*)sULongNode_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result114__ = __result_obj__ = ((struct sNode*)(right_value149=_inf_value21));
                        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result114__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    value_66=strtoull(buf_49,((void*)0),0);
                    __freed_obj__ = 0;
                    if(_if_conditional174=minus,                    __freed_obj__ = 0, 
                    _if_conditional174) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 618);
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value151=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value150=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 618)))),-value_66,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sLongNode_sline;
                        _inf_value22->sname=(void*)sLongNode_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result117__ = __result_obj__ = ((struct sNode*)(right_value154=_inf_value22));
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result117__;
                        __freed_obj__ = 0;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 621);
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value156=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value155=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 621)))),value_66,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sLongNode_sline;
                        _inf_value23->sname=(void*)sLongNode_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result120__ = __result_obj__ = ((struct sNode*)(right_value159=_inf_value23));
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result120__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            value_69=strtoll(buf_49,((void*)0),0);
            __freed_obj__ = 0;
            if(_if_conditional185=minus,            __freed_obj__ = 0, 
            _if_conditional185) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 628);
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value161=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value160=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 628)))),-value_69,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sIntNode_sline;
                _inf_value24->sname=(void*)sIntNode_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result123__ = __result_obj__ = ((struct sNode*)(right_value164=_inf_value24));
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 631);
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value166=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value165=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 631)))),value_69,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sIntNode_sline;
                _inf_value25->sname=(void*)sIntNode_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result126__ = __result_obj__ = ((struct sNode*)(right_value169=_inf_value25));
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result126__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result127__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int buf_size_72;
char* p_74;
_Bool _while_condtional8;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
unsigned long long int value_75;
void* right_value170;
void* right_value171;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value174;
struct sNode* __result130__;
unsigned long long int value_77;
void* right_value175;
void* right_value176;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value179;
struct sNode* __result133__;
unsigned int value_79;
void* right_value180;
void* right_value181;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value184;
struct sNode* __result136__;
_Bool _if_conditional216;
_Bool _if_conditional217;
unsigned long long int value_81;
void* right_value185;
void* right_value186;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value189;
struct sNode* __result139__;
_Bool _if_conditional223;
unsigned long long int value_83;
void* right_value190;
void* right_value191;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value194;
struct sNode* __result142__;
unsigned long long int value_85;
void* right_value195;
void* right_value196;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value199;
struct sNode* __result145__;
unsigned long long int value_87;
void* right_value200;
void* right_value201;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value204;
struct sNode* __result148__;
struct sNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_size_72, 0, sizeof(int));
memset(&p_74, 0, sizeof(char*));
memset(&value_75, 0, sizeof(unsigned long long int));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&value_77, 0, sizeof(unsigned long long int));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&value_79, 0, sizeof(unsigned int));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&value_81, 0, sizeof(unsigned long long int));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&value_83, 0, sizeof(unsigned long long int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&value_85, 0, sizeof(unsigned long long int));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&value_87, 0, sizeof(unsigned long long int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    buf_size_72=128;
    __freed_obj__ = 0;
    char buf_73[128+1];
    memset(&buf_73, 0, sizeof(char)    *(128+1)    );
    __freed_obj__ = 0;
    p_74=buf_73;
    __freed_obj__ = 0;
    *p_74++=48;
    __freed_obj__ = 0;
    while(_while_condtional8=(*((struct sInfo*)come_null_check(info, "05function3.c", 660))->p>=48&&*((struct sInfo*)come_null_check(info, "05function3.c", 660))->p<=55)||*((struct sInfo*)come_null_check(info, "05function3.c", 660))->p==95,    __freed_obj__ = 0, 
    _while_condtional8) {
        if(_if_conditional196=*((struct sInfo*)come_null_check(info, "05function3.c", 656))->p==95,        __freed_obj__ = 0, 
        _if_conditional196) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 648))->p++;
            __freed_obj__ = 0;
        }
        else {
            *p_74=*((struct sInfo*)come_null_check(info, "05function3.c", 651))->p;
            __freed_obj__ = 0;
            p_74++;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function3.c", 653))->p++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional197=p_74-buf_73>=buf_size_72-1,        __freed_obj__ = 0, 
        _if_conditional197) {
            err_msg(info,"overflow node of number");
            __freed_obj__ = 0;
            exit(2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    *p_74=0;
    __freed_obj__ = 0;
    skip_spaces_and_lf(info);
    __freed_obj__ = 0;
    if(_if_conditional198=*((struct sInfo*)come_null_check(info, "05function3.c", 724))->p==117||*((struct sInfo*)come_null_check(info, "05function3.c", 724))->p==85,    __freed_obj__ = 0, 
    _if_conditional198) {
        ((struct sInfo*)come_null_check(info, "05function3.c", 667))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional199=*((struct sInfo*)come_null_check(info, "05function3.c", 693))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 693))->p==108,        __freed_obj__ = 0, 
        _if_conditional199) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 672))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional200=*((struct sInfo*)come_null_check(info, "05function3.c", 688))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 688))->p==108,            __freed_obj__ = 0, 
            _if_conditional200) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 677))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                value_75=strtoull(buf_73,((void*)0),0);
                __freed_obj__ = 0;
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 682);
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value171=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value170=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 682)))),value_75,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sULongNode_sline;
                _inf_value26->sname=(void*)sULongNode_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result130__ = __result_obj__ = ((struct sNode*)(right_value174=_inf_value26));
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result130__;
                __freed_obj__ = 0;
            }
            else {
                value_77=strtoull(buf_73,((void*)0),0);
                __freed_obj__ = 0;
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 686);
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value176=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value175=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 686)))),value_77,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sULongNode_sline;
                _inf_value27->sname=(void*)sULongNode_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result133__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value27));
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result133__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            value_79=strtoul(buf_73,((void*)0),0);
            __freed_obj__ = 0;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 691);
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value181=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value180=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 691)))),value_79,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sUIntNode_sline;
            _inf_value28->sname=(void*)sUIntNode_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result136__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value28));
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result136__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional216=*((struct sInfo*)come_null_check(info, "05function3.c", 724))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 724))->p==108,        __freed_obj__ = 0, 
        _if_conditional216) {
            ((struct sInfo*)come_null_check(info, "05function3.c", 695))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional217=*((struct sInfo*)come_null_check(info, "05function3.c", 718))->p==76||*((struct sInfo*)come_null_check(info, "05function3.c", 718))->p==108,            __freed_obj__ = 0, 
            _if_conditional217) {
                ((struct sInfo*)come_null_check(info, "05function3.c", 700))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                value_81=strtoull(buf_73,((void*)0),0);
                __freed_obj__ = 0;
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 704);
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value186=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value185=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 704)))),value_81,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sLongNode_sline;
                _inf_value29->sname=(void*)sLongNode_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result139__ = __result_obj__ = ((struct sNode*)(right_value189=_inf_value29));
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result139__;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional223=*((struct sInfo*)come_null_check(info, "05function3.c", 718))->p==85||*((struct sInfo*)come_null_check(info, "05function3.c", 718))->p==117,                __freed_obj__ = 0, 
                _if_conditional223) {
                    ((struct sInfo*)come_null_check(info, "05function3.c", 708))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    value_83=strtoull(buf_73,((void*)0),0);
                    __freed_obj__ = 0;
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 712);
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value191=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value190=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 712)))),value_83,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sULongNode_sline;
                    _inf_value30->sname=(void*)sULongNode_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result142__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value30));
                    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result142__;
                    __freed_obj__ = 0;
                }
                else {
                    value_85=strtoull(buf_73,((void*)0),0);
                    __freed_obj__ = 0;
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 716);
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value196=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value195=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 716)))),value_85,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sLongNode_sline;
                    _inf_value31->sname=(void*)sLongNode_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result145__ = __result_obj__ = ((struct sNode*)(right_value199=_inf_value31));
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result145__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            value_87=strtoull(buf_73,((void*)0),0);
            __freed_obj__ = 0;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 721);
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value201=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value200=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 721)))),value_87,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sIntNode_sline;
            _inf_value32->sname=(void*)sIntNode_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result148__ = __result_obj__ = ((struct sNode*)(right_value204=_inf_value32));
            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result148__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result149__ = __result_obj__ = (struct sNode*)((void*)0);
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional211=self!=((void*)0)&&((struct sUIntNode*)come_null_check(self, "sUIntNode_finalize", 1))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional211) {
                    if(((struct sUIntNode*)come_null_check(self, "sUIntNode_finalize", 0))->sname && !__freed_obj__) { ((struct sUIntNode*)come_null_check(self, "sUIntNode_finalize", 0))->sname = come_decrement_ref_count(((struct sUIntNode*)come_null_check(self, "sUIntNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional212;
struct sUIntNode* __result134__;
void* right_value182;
struct sUIntNode* result_80;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value183;
char* __dec_obj49;
struct sUIntNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct sUIntNode*));
memset(&right_value183, 0, sizeof(void*));
                if(_if_conditional212=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional212) {
                    __result134__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result134__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_80=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value182=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3))));
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional213=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional213) {
                    ((struct sUIntNode*)come_null_check(result_80, "sUIntNode_clone", 4))->value=((struct sUIntNode*)come_null_check(self, "sUIntNode_clone", 4))->value;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional214=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional214) {
                    ((struct sUIntNode*)come_null_check(result_80, "sUIntNode_clone", 5))->sline=((struct sUIntNode*)come_null_check(self, "sUIntNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional215=self!=((void*)0)&&((struct sUIntNode*)come_null_check(self, "sUIntNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional215) {
                    __dec_obj49=((struct sUIntNode*)come_null_check(result_80, "sUIntNode_clone", 6))->sname;
                    ((struct sUIntNode*)come_null_check(result_80, "sUIntNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(((struct sUIntNode*)come_null_check(self, "sUIntNode_clone", 6))->sname))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result135__ = __result_obj__ = result_80;
                if(result_80 && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result135__;
                __freed_obj__ = 0;
                if(result_80 && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional224=self!=((void*)0)&&((struct sULongNode*)come_null_check(self, "sULongNode_finalize", 1))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional224) {
                            if(((struct sULongNode*)come_null_check(self, "sULongNode_finalize", 0))->sname && !__freed_obj__) { ((struct sULongNode*)come_null_check(self, "sULongNode_finalize", 0))->sname = come_decrement_ref_count(((struct sULongNode*)come_null_check(self, "sULongNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional225;
struct sULongNode* __result140__;
void* right_value192;
struct sULongNode* result_84;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value193;
char* __dec_obj51;
struct sULongNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sULongNode*));
memset(&right_value193, 0, sizeof(void*));
                        if(_if_conditional225=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional225) {
                            __result140__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result140__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_84=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value192=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3))));
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional226=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional226) {
                            ((struct sULongNode*)come_null_check(result_84, "sULongNode_clone", 4))->value=((struct sULongNode*)come_null_check(self, "sULongNode_clone", 4))->value;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional227=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional227) {
                            ((struct sULongNode*)come_null_check(result_84, "sULongNode_clone", 5))->sline=((struct sULongNode*)come_null_check(self, "sULongNode_clone", 5))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional228=self!=((void*)0)&&((struct sULongNode*)come_null_check(self, "sULongNode_clone", 7))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional228) {
                            __dec_obj51=((struct sULongNode*)come_null_check(result_84, "sULongNode_clone", 6))->sname;
                            ((struct sULongNode*)come_null_check(result_84, "sULongNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(((struct sULongNode*)come_null_check(self, "sULongNode_clone", 6))->sname))));
                            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result141__ = __result_obj__ = result_84;
                        if(result_84 && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,result_84, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result141__;
                        __freed_obj__ = 0;
                        if(result_84 && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,result_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional229=self!=((void*)0)&&((struct sLongNode*)come_null_check(self, "sLongNode_finalize", 1))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional229) {
                            if(((struct sLongNode*)come_null_check(self, "sLongNode_finalize", 0))->sname && !__freed_obj__) { ((struct sLongNode*)come_null_check(self, "sLongNode_finalize", 0))->sname = come_decrement_ref_count(((struct sLongNode*)come_null_check(self, "sLongNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional230;
struct sLongNode* __result143__;
void* right_value197;
struct sLongNode* result_86;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value198;
char* __dec_obj52;
struct sLongNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sLongNode*));
memset(&right_value198, 0, sizeof(void*));
                        if(_if_conditional230=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional230) {
                            __result143__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result143__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_86=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value197=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3))));
                        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional231=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional231) {
                            ((struct sLongNode*)come_null_check(result_86, "sLongNode_clone", 4))->value=((struct sLongNode*)come_null_check(self, "sLongNode_clone", 4))->value;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional232=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional232) {
                            ((struct sLongNode*)come_null_check(result_86, "sLongNode_clone", 5))->sline=((struct sLongNode*)come_null_check(self, "sLongNode_clone", 5))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional233=self!=((void*)0)&&((struct sLongNode*)come_null_check(self, "sLongNode_clone", 7))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional233) {
                            __dec_obj52=((struct sLongNode*)come_null_check(result_86, "sLongNode_clone", 6))->sname;
                            ((struct sLongNode*)come_null_check(result_86, "sLongNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value198=string_clone(((struct sLongNode*)come_null_check(self, "sLongNode_clone", 6))->sname))));
                            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result144__ = __result_obj__ = result_86;
                        if(result_86 && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result144__;
                        __freed_obj__ = 0;
                        if(result_86 && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional234=self!=((void*)0)&&((struct sIntNode*)come_null_check(self, "sIntNode_finalize", 1))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional234) {
                    if(((struct sIntNode*)come_null_check(self, "sIntNode_finalize", 0))->sname && !__freed_obj__) { ((struct sIntNode*)come_null_check(self, "sIntNode_finalize", 0))->sname = come_decrement_ref_count(((struct sIntNode*)come_null_check(self, "sIntNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional235;
struct sIntNode* __result146__;
void* right_value202;
struct sIntNode* result_88;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value203;
char* __dec_obj53;
struct sIntNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct sIntNode*));
memset(&right_value203, 0, sizeof(void*));
                if(_if_conditional235=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional235) {
                    __result146__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result146__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_88=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value202=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3))));
                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional236=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional236) {
                    ((struct sIntNode*)come_null_check(result_88, "sIntNode_clone", 4))->value=((struct sIntNode*)come_null_check(self, "sIntNode_clone", 4))->value;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional237=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional237) {
                    ((struct sIntNode*)come_null_check(result_88, "sIntNode_clone", 5))->sline=((struct sIntNode*)come_null_check(self, "sIntNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional238=self!=((void*)0)&&((struct sIntNode*)come_null_check(self, "sIntNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional238) {
                    __dec_obj53=((struct sIntNode*)come_null_check(result_88, "sIntNode_clone", 6))->sname;
                    ((struct sIntNode*)come_null_check(result_88, "sIntNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value203=string_clone(((struct sIntNode*)come_null_check(self, "sIntNode_clone", 6))->sname))));
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result147__ = __result_obj__ = result_88;
                if(result_88 && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result147__;
                __freed_obj__ = 0;
                if(result_88 && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,result_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

